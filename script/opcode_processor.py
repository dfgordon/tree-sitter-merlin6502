import yaml
import json
import pathlib
import sys
import re

def Usage():
    print('Usage: python script/opcode_processor.py --allow-lower-case <bool> [--help]')
    print('<bool> = 0 : build parser to forbid lower case in opcode mnemonics')
    print('<bool> = 1 : build parser to allow lower case in opcode mnemonics')

flags = ['--allow-lower-case','--help']
allow_lower_case = None
arg_idx = 1
while (arg_idx<len(sys.argv)):
    if sys.argv[arg_idx] not in flags:
        raise ValueError('unrecognized argument '+sys.argv[arg_idx])
    if sys.argv[arg_idx]=='--help':
        Usage()
        exit(0)
    if sys.argv[arg_idx]=='--allow-lower-case':
        arg_idx += 1
        allow_lower_case = bool(int(sys.argv[arg_idx]))
    arg_idx += 1

if allow_lower_case==None:
    raise ValueError('--allow-lower-case flag was not set')

proj_path = pathlib.Path.cwd()
script_path = proj_path / 'script'
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

with open(script_path / 'opcodes.yml','r') as f:
    obj = yaml.safe_load(f)
with open(script_path / 'opcodes.json','w') as f:
    f.write(json.dumps(obj,indent=4,sort_keys=True))
with open(script_path / 'pseudo_opcodes.yml','r') as f:
    pobj = yaml.safe_load(f)
with open(script_path / 'pseudo_opcodes.json','w') as f:
    f.write(json.dumps(pobj,indent=4,sort_keys=True))

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

# Build the reduced syntactic opcodes for a 65C816.
# These do not distinguish {d, zp, relative, absolute}, or {impl, accum, s}.
# The 65C02 and 6502 opcodes are a syntactic subset.
reduced = {}
for op in obj:
    reduced[op] = set()
    for am in obj[op]['modes']:
        reduced[op].add(reduction_map[am['addr_mnemonic']])

# How to lex the opcodes
def opcode_lexeme(op,alt):
    lst = [op] + alt
    variants = set()
    for it in lst:
        variants.add(it.upper())
        if allow_lower_case:
            variants.add(it.lower())
    lx = ""
    if len(variants)>1:
        lx += "choice("
    for it in variants:
        lx += "'" + it + "',"
    lx = lx[:-1]
    if len(variants)>1:
        lx += ")"
    return lx

# Rules for just the opcode column
op_str = ''
for op in reduced:
    op_str += "\t\top_" + op + ": $ => "+opcode_lexeme(op,obj[op]['alt'])+",\n"

# Rules for the entire operation line
op_str += "\t\toperation: $ => choice(\n"
for op in reduced:
    addr_modes = [am for am in reduced[op]]
    addr_none = '' in addr_modes and len(addr_modes)==1
    addr_optional = '' in addr_modes and len(addr_modes)>1
    addr_choices = len(addr_modes) > 1 + int(addr_optional)
    addr_required = '' not in addr_modes
    op_str += "\t\t\tseq(optional($._label), $._sep, $.op_" + op
    if not addr_none:
        if addr_optional:
            op_str += ", optional(seq($._sep,"
        else:
            op_str += ", $._sep, "
        if addr_choices:
            op_str += "choice("
        for am in reduced[op]:
            if am!='':
                op_str += "$." + am + ","
        if op_str[-1]==",":
            op_str = op_str[:-1]
        if addr_choices:
            op_str += ")"
        if addr_optional:
            op_str += "))"
    op_str += ", optional(seq($._sep,$.comment)), $._newline),\n"
op_str =  op_str[:-2] + "\n\t\t),\n"

# Prepare the psuedo-opcode string for insertion

def psop_rule(psop):
    if psop=='--^':
        return 'psop_end_lup'
    return 'psop_' + psop

psop_str = ''
for psop in pobj:
    psop_str += "\t\t" + psop_rule(psop) + ": $ => "
    psop_str += opcode_lexeme(psop,pobj[psop]['alt'])
    psop_str += ",\n"

psop_str += "\t\tpseudo_operation: $ => choice(\n"
for psop in pobj:
    args = pobj[psop]['args']
    args16 = pobj[psop]['args16']
    psop_str += "\t\t\tseq(optional($._label), $._sep, "
    if args!=None:
        psop_str += "$." + psop_rule(psop) + ", $._sep, " + args
    elif args16!=None:
        psop_str += "$." + psop_rule(psop) + ", $._sep, " + args16
    else:
        psop_str += "$." + psop_rule(psop)
    psop_str += ", optional(seq($._sep,$.comment)), $._newline),\n"
psop_str =  psop_str[:-2] + "\n\t\t),\n"

# Build character context regex
# We forbid square brackets in labels due to the direct indirect long addressing mode
# of the 65C816.  Semicolons are forbidden due to their use as separators in macro arguments.
# In contrast Merlin has contextual relaxation of these restrictions.

escaped = '/-^[]\\'
anychar = [chr(i) for i in range(32,127,1)]
negchar = [c for c in anychar if c!='"']
poschar = [c for c in anychar if c!="'"]
spchar = [c for c in anychar if not c.isalnum() and c!=' ']
arg = [c for c in anychar if c!=";" and c!=" "]
glob_lab_beg = [chr(i) for i in range(ord(':')+1,127,1) if chr(i)!='[' and chr(i)!=']' and chr(i)!=';']
lab_char = [chr(i) for i in range(ord('0'),127,1) if chr(i)!='[' and chr(i)!=']' and chr(i)!=';']
dos33_char = [chr(i) for i in range(32,127,1) if chr(i)!=',']

def build_char_regex(lst):
    ans = '/['
    for c in lst:
        if c in escaped:
            ans += '\\'
        ans += c
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
char_regex += 'const NCHAR = ' + build_char_regex(negchar)
char_regex += 'const PCHAR = ' + build_char_regex(poschar)
char_regex += 'const SPCHAR = ' + build_char_regex(spchar)
char_regex += 'const ARG = ' + build_char_ts(arg)
char_regex += 'const GLOB_LAB_BEG = ' + build_char_regex(glob_lab_beg)
char_regex += 'const LAB_CHAR = ' + build_char_regex(lab_char)
char_regex += 'const DOS33_CHARS = ' + build_char_regex(dos33_char)[:-3] + '{0,29}/;\n'

# Build dstring

dstring_rule = ''
dstring_rule += '\t\tdstring: $ => choice(\n'
for i in range(33,127,1):
    if chr(i).isnumeric() or chr(i)=='/' or chr(i)==',':
        continue
    elif chr(i)=='"':
        dstring_rule += "\t\t\tseq('"+chr(i)+"',repeat(ANYCHAR),'"+chr(i)+"'),\n"
    elif chr(i)=='\\':
        dstring_rule += "\t\t\tseq('\\"+chr(i)+"',repeat(ANYCHAR),'\\"+chr(i)+"'),\n"
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
grammar = re.sub('allow_lower_case\s*=\s*\w+','allow_lower_case = '+str(allow_lower_case).lower(),grammar)
with open(proj_path / 'grammar.js','w') as f:
    f.write(grammar)

# Save the highlights

highlights = '(global_label) @type\n'
highlights += '(current_addr) @type\n'
highlights += '(local_label) @variable.parameter\n'
highlights += '(var_label) @variable.builtin\n'
highlights += '(number) @number\n'
highlights += '(dstring) @string\n'
highlights += '(literal_arg) @string\n'
highlights += '(pchar) @string\n'
highlights += '(nchar) @string\n'
highlights += '(literal) @string\n'
highlights += '(main_comment) @comment\n'
highlights += '(comment) @comment\n'
highlights += '(eop_plus) @operator\n'
highlights += '(eop_minus) @operator\n'
highlights += '(eop_times) @operator\n'
highlights += '(eop_div) @operator\n'
highlights += '(eop_or) @operator\n'
highlights += '(eop_and) @operator\n'
highlights += '(eop_xor) @operator\n'
highlights += '(mode_x) @keyword\n'
highlights += '(mode_y) @keyword\n'
highlights += '(mode_iopen) @keyword\n'
highlights += '(mode_iclose) @keyword\n'
highlights += '(mode_iix) @keyword\n'
highlights += '(mode_iy) @keyword\n'
highlights += '(ERROR) @error\n'
for op in obj:
    highlights += '(op_' + op + ') @keyword\n'
for psop in pobj:
    highlights += '(' + psop_rule(psop) + ') @function.builtin\n'

with open(query_path / 'highlights.scm','w') as f:
    f.write(highlights)
