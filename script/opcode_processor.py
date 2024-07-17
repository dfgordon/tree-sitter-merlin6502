import json
import pathlib
import sys
import re

def Usage():
    print('Usage: python script/opcode_processor.py [--help]')

flags = ['--help']
arg_idx = 1
while (arg_idx<len(sys.argv)):
    if sys.argv[arg_idx] not in flags:
        raise ValueError('unrecognized argument '+sys.argv[arg_idx])
    if sys.argv[arg_idx]=='--help':
        Usage()
        exit(0)
    arg_idx += 1

proj_path = pathlib.Path.cwd().parent
script_path = pathlib.Path.cwd()
query_path = proj_path / 'queries'
test_path = proj_path / 'test' / 'corpus'

# 65C02 modes
addr_modes = ['imm','abs','zp','accum','impl','(zp,x)','(zp),y','zp,x','zp,y','abs,x','abs,y','rel','(abs)','(abs,x)','(zp)']
# 65C816 modes - re-using 65C02 modes with equivalence zp=d
addr_modes += ['rell','s','[d]','[d],y','absl','absl,x','d,s','(d,s),y','xyc']

reduction_map = {
    'imm':'imm',
    'abs':'addr',
    'zp':'addr',
    'accum':'',
    'impl':'',
    '(zp,x)':'iaddr_ix',
    '(zp),y':'iaddr_y',
    'zp,x':'addr_x',
    'zp,y':'addr_y',
    'abs,x':'addr_x',
    'abs,y':'addr_y',
    'rel':'addr',
    '(abs)':'iaddr',
    '(abs,x)':'iaddr_ix',
    '(zp)':'iaddr',
    'rell':'addr',
    's':'',
    '[d]':'daddr',
    '[d],y':'daddr_y',
    'absl':'addr',
    'absl,x':'addr_x',
    'd,s':'addr_s',
    '(d,s),y':'iaddr_is_y',
    'xyc':'xyc'
}

with open(script_path / 'opcodes.json','r') as f:
    obj = json.load(f)
with open(script_path / 'pseudo_opcodes.json','r') as f:
    pobj = json.load(f)

# Build a nice markdown table of opcodes

tableString = 'mnemonic'
for am in addr_modes:
    tableString += '|' + am + '<br />code|<br />cyc'
tableString += '\n' + '---'
for am in addr_modes:
    tableString += '|---|---'
tableString += '\n'

for op in obj:
    tableString += op.upper()
    for am in addr_modes:
        these = [m['addr_mnemonic'] for m in obj[op]['modes']]
        try:
            idx = these.index(am)
            m = obj[op]['modes'][idx]
            tableString += '|{:02X} '.format(m['code']) + '|'+str(m['cycles'])
            if ('6502' not in m['processors']):
                tableString += '*'
        except ValueError:
            tableString += '||'
    tableString += '\n'

with open(script_path / 'opcodes.md','w') as f:
    f.write(tableString)

# Build the reduced syntactic opcode mnemonics for a 65C816.
# These do not distinguish {d, zp, relative, absolute}, or {impl, accum, s}.
# The 65C02 and 6502 opcode mnemonics are a syntactic subset.
reduced = {}
for op in obj:
    reduced[op] = set()
    for am in obj[op]['modes']:
        reduced[op].add(reduction_map[am['addr_mnemonic']])

# How to lex the opcode or pseudo-opcode mnemonics
def opcode_lexeme(op,alt):
    lst = [op] + alt
    lx = "token(prec(1,"
    if len(lst)>1:
        lx += "choice("
    for it in lst:
        lx += "caseTS('"+it+"'),"
    lx = lx[:-1]
    if len(lst)>1:
        lx += ")"
    return lx + "))"
# Special treatment for end loop
def psop_rule(psop):
    if psop=='--^':
        return 'psop_end_lup'
    return 'psop_' + psop
def psop_arg(psop):
    if psop=='--^':
        return 'arg_end_lup' # should be none
    return 'arg_' + psop

# Form pseudo-op argument sequence
def closing_pos(str):
    stack = ['(']
    for i,c in enumerate(str):
        if c=='(':
            stack.append(c)
        if c==')':
            stack.pop()
        if len(stack)==0:
            return i
def is_psop_arg_optional(args):
    return args[:8]=='optional' and closing_pos(args[9:])==len(args[9:])-1
def psop_args_def(raw_args):
    args = raw_args
    while re.search("'[A-Z]+'",args)!=None:
        match = re.search("'[A-Z]+'",args)
        args = args.replace(match[0],'caseRe('+match[0].lower()+')')
    if is_psop_arg_optional(raw_args):
        args = args[9:-1]
    return args
def psop_args_insertion(raw_args,psop_rule):
    if is_psop_arg_optional(raw_args):
        return ", optional(seq($._sep, $." + psop_rule + "))"
    else:
       return ", $._sep, $." + psop_rule

# Rules for just the opcode column
op_str = ''
for op in reduced:
    op_str += "\t\top_" + op + ": $ => seq("
    op_str += opcode_lexeme(op,obj[op]['alt'])
    op_str += ",optional($.trailing)),\n"
op_str += '\n'

# Rules for just the opcode argument column
for op in reduced:
    addr_modes = [am for am in reduced[op]]
    addr_none = '' in addr_modes and len(addr_modes)==1
    addr_optional = '' in addr_modes and len(addr_modes)>1
    addr_choices = len(addr_modes) > 1 + int(addr_optional)
    addr_required = '' not in addr_modes
    if not addr_none:
        op_str += "\t\targ_" + op + ": $ => "
        if addr_choices:
            op_str += "choice("
        for am in sorted(reduced[op]):
            if am!='':
                op_str += "$." + am + ","
        if op_str[-1]==",":
            op_str = op_str[:-1]
        if addr_choices:
            op_str += ")"
        op_str += ",\n"
op_str += '\n'
    
# Rules for the entire operation line
op_str += "\t\toperation: $ => choice(\n"
for op in reduced:
    addr_modes = [am for am in reduced[op]]
    addr_none = '' in addr_modes and len(addr_modes)==1
    addr_optional = '' in addr_modes and len(addr_modes)>1
    addr_choices = len(addr_modes) > 1 + int(addr_optional)
    addr_required = '' not in addr_modes
    op_str += "\t\t\tseq(optional($.label_def), $._sep, $.op_" + op
    if not addr_none:
        if addr_optional:
            op_str += ", optional(seq($._sep, $.arg_" + op
        else:
            op_str += ", $._sep, $.arg_" + op
        if addr_optional:
            op_str += "))"
    op_str += ", optional(seq($._sep,$.comment)), $._newline),\n"
op_str =  op_str[:-2] + "\n\t\t),\n"

# Prepare the psuedo-opcode string for insertion

# Rules just for the pseudo-opcode column
psop_str = ''
for psop in pobj:
    psop_str += "\t\t" + psop_rule(psop) + ": $ => seq("
    psop_str += opcode_lexeme(psop,pobj[psop]['alt'])
    psop_str += ",optional($.trailing)),\n"
psop_str += '\n'

needs_var_option = ['cas','put','use','sav','dsk','cyc','exp','lst','lstdo','ttl','tr']
needs_var_option += ['asc','dci','inv','fls','rev','str','strl']
needs_var_option += ['flo','hex','kbd',]

# Rules just for the pseudo-argument column
for psop in pobj:
    args = pobj[psop]['args']
    if args!=None:
        psop_str += "\t\t" + psop_arg(psop) + ": $ => "
        raw = psop_args_def(args)
        if psop in needs_var_option:
            psop_str += "choice($.var_mac,"+raw+"),\n"
        else:
            psop_str += raw + ",\n"
psop_str += '\n'

# Rules for the entire pseudo-op line
psop_str += "\t\tpseudo_operation: $ => choice(\n"
for psop in pobj:
    if psop=='mac':
        psop_str += "\t\t\tseq($.macro_def, $._sep, $.psop_mac, optional(seq($._sep,$.comment)), $._newline),\n"
    else:
        args = pobj[psop]['args']
        psop_str += "\t\t\tseq(optional($.label_def), $._sep, $." + psop_rule(psop)
        if args!=None:
            psop_str += psop_args_insertion(args,psop_arg(psop))
        psop_str += ", optional(seq($._sep,$.comment)), $._newline),\n"
psop_str =  psop_str[:-2] + "\n\t\t),\n"

# Build character context regex
# We forbid square brackets in labels due to the direct indirect long addressing mode
# of the 65C816.  Semicolons are forbidden due to their use as separators in macro arguments.
# In contrast Merlin has contextual relaxation of these restrictions.

label_forbidden = '}{][;<>=#'
glob_start_forbidden = label_forbidden + '^|'
anychar = [chr(i) for i in range(32,127,1)]
dstr_br_beg = [chr(i) for i in range(32,127,1) if chr(i) not in '012345678']
arg = [c for c in anychar if c!=";" and c!=" "]
glob_lab_beg = [chr(i) for i in range(ord(':')+1,127,1) if chr(i) not in glob_start_forbidden]
lab_char = [chr(i) for i in range(ord('0'),127,1) if chr(i) not in label_forbidden]
var_lab_beg = [chr(i) for i in range(ord('9'),127,1) if chr(i) not in label_forbidden]
dos33_char = [chr(i) for i in range(32,127,1) if chr(i)!=',']
dos33_tflag = [chr(i) for i in range(33,ord('@'),1)]

def build_char_regex(lst):
    first = ord(lst[0])
    last = ord(lst[0])
    ans = '/['
    for c in lst[1:]:
        if ord(c)==last+1:
            last += 1
        else:
            if first==last:
                ans += '\\x' + hex(first)[2:]
            else:
                ans += '\\x' + hex(first)[2:] + '-\\x' + hex(last)[2:]
            first = ord(c)
            last = ord(c)
    if first==last:
        ans += '\\x' + hex(first)[2:]
    else:
        ans += '\\x' + hex(first)[2:] + '-\\x' + hex(last)[2:]
    return ans + ']/;\n'

def build_char_ts(lst):
    ans = '"'
    for c in lst:
        if c=='"' or c=='\\':
            ans += '\\'
        ans += c
    return ans + '";\n'

char_regex = ''
char_regex += 'const ANYCHAR = ' + build_char_regex(anychar)
char_regex += 'const DSTR_BR_BEG = ' + build_char_regex(dstr_br_beg)
char_regex += 'const ARG = ' + build_char_ts(arg)
char_regex += 'const GLOB_LAB_BEG = ' + build_char_regex(glob_lab_beg)
char_regex += 'const VAR_LAB_BEG = ' + build_char_regex(var_lab_beg)
char_regex += 'const LAB_CHAR = ' + build_char_regex(lab_char)
char_regex += 'const DOS33_CHARS = ' + build_char_ts(dos33_char)
char_regex += 'const DOS33_TFLAG = ' + build_char_ts(dos33_tflag)

# Build dstring

dstring_rule = ''
dstring_rule += '\t\tdstring: $ => choice(\n'
for i in range(33,127,1):
    if chr(i).isnumeric() or chr(i)=='/' or chr(i)==',':
        continue
    elif chr(i)=='"':
        dstring_rule += "\t\t\tseq('"+chr(i)+"',repeat(ANYCHAR),'"+chr(i)+"'),\n"
    elif chr(i)=="\\":
        dstring_rule += '\t\t\tseq("\\'+chr(i)+'",repeat(ANYCHAR),"\\'+chr(i)+'"),\n'
    elif chr(i)==']':
        dstring_rule += '\t\t\tseq("]",optional(seq(DSTR_BR_BEG,repeat(ANYCHAR))),"]"),\n'
    else:
        dstring_rule += '\t\t\tseq("'+chr(i)+'",repeat(ANYCHAR),"'+chr(i)+'"),\n'
dstring_rule += '\t\t),\n'

# Save the full grammar

with open(script_path / 'grammar-src.js','r') as f:
    grammar = f.read()

grammar = grammar.replace('Define constants DO NOT EDIT','Define constants\n\n'+char_regex)
grammar = grammar.replace('Operations DO NOT EDIT','Operations\n\n'+op_str)
grammar = grammar.replace('Pseudo-operations DO NOT EDIT','Pseudo-operations\n\n'+psop_str)
grammar = grammar.replace('dstring DO NOT EDIT','dstring\n\n'+dstring_rule)
with open(proj_path / 'grammar.js','w') as f:
    f.write(grammar)

# Save the highlights

highlights = '(macro_def) @function\n'
highlights += '(macro_ref) @function\n'
highlights += '(label_def (global_label)) @type\n'
highlights += '(label_ref (global_label)) @type\n'
highlights += '(current_addr) @type\n'
highlights += '(local_label) @variable.parameter\n'
highlights += '(var_label) @variable.builtin\n'
highlights += '(var_mac) @variable.builtin\n'
highlights += '(var_cnt) @variable.builtin\n'
highlights += '(num) @number\n'
highlights += '(hex_data) @number\n'
highlights += '(dstring) @string\n'
highlights += '(arg_literal) @string\n'
highlights += '(pchar) @string\n'
highlights += '(nchar) @string\n'
highlights += '(literal) @string\n'
highlights += '(filename) @string\n'
highlights += '(trailing) @string\n'
highlights += '(heading) @comment\n'
highlights += '(comment) @comment\n'
highlights += '(eop_plus) @operator\n'
highlights += '(eop_minus) @operator\n'
highlights += '(eop_times) @operator\n'
highlights += '(eop_div) @operator\n'
highlights += '(eop_or) @operator\n'
highlights += '(eop_and) @operator\n'
highlights += '(eop_xor) @operator\n'
highlights += '(mode) @keyword\n'
highlights += '(imm_prefix) @keyword\n'
highlights += '(addr_prefix) @keyword\n'
highlights += '(data_prefix) @keyword\n'
highlights += '(num_str_prefix) @keyword\n'
highlights += '(ERROR) @error\n'
for op in obj:
    highlights += '(op_' + op + ') @keyword\n'
for psop in pobj:
    highlights += '(' + psop_rule(psop) + ') @function.builtin\n'

with open(query_path / 'highlights.scm','w') as f:
    f.write(highlights)
