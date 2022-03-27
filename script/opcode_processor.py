import yaml
import json
import pathlib
import re

addr_modes = ['imm','abs','zp','accum','impl','(zp,x)','(zp),y','zp,x','zp,y','abs,x','abs,y','rel','(abs)','abs(ind,x)','(zp)']

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
    'abs(ind,x)':'iaddr_ix',
    '(zp)':'iaddr'
}

with open('opcodes.yml','r') as f:
    obj = yaml.safe_load(f)
with open('opcodes.json','w') as f:
    f.write(json.dumps(obj,indent=4,sort_keys=True))
with open('pseudo_opcodes.yml','r') as f:
    pobj = yaml.safe_load(f)
with open('pseudo_opcodes.json','w') as f:
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

with open('opcodes.md','w') as f:
    f.write(tableString)

# Build the reduced syntactic opcodes for a 65C02.
# These do not distinguish zero-page, relative, or absolute, and also treat impl and accum the same.
reduced = {}
for op in obj:
    reduced[op] = set()
    for am in obj[op]['modes']:
        reduced[op].add(reduction_map[am['addr_mnemonic']])

# Prepare the opcode string for insertion
op_str = ''
for op in reduced:
    op_str += "\t\top_" + op + ": $ => '"+op.upper()+"',\n"

op_str += "\t\toperation: $ => choice(\n"
for op in reduced:
    addr_modes = [am for am in reduced[op]]
    addr_none = '' in addr_modes and len(addr_modes)==1
    addr_optional = '' in addr_modes and len(addr_modes)>1
    addr_choices = len(addr_modes) > 1 + int(addr_optional)
    addr_required = '' not in addr_modes
    op_str += "\t\t\tseq(optional($._label), $._sep, $.op_" + op
    if 'addr' in addr_modes:
        op_str += ", optional($.force)"
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
    if len(pobj[psop]['alt'])>0:
        psop_str += "choice('" + psop.upper() + "'"
        for alt in pobj[psop]['alt']:
            psop_str += ",'" + alt.upper() + "'"
        psop_str += "),\n"
    else:
        psop_str += "'"+psop.upper()+"',\n"

psop_str += "\t\tpseudo_operation: $ => choice(\n"
for psop in pobj:
    if psop in ['mac','eom','pmc']:
        continue
    psop_str += "\t\t\tseq(optional($._label), $._sep, "
    if pobj[psop]['args']==None:
        psop_str += "$." + psop_rule(psop)
    else:
        psop_str += "$." + psop_rule(psop) + ", $._sep, " + pobj[psop]['args']
    psop_str += ", optional(seq($._sep,$.comment)), $._newline),\n"
psop_str =  psop_str[:-2] + "\n\t\t),\n"

# Build character context regex

escaped = '/-^[]\\'
anychar = [chr(i) for i in range(32,127,1)]
negchar = [c for c in anychar if c!='"']
poschar = [c for c in anychar if c!="'"]
spchar = [c for c in anychar if not c.isalnum() and c!=' ']
arg = [c for c in anychar if c!=";" and c!=" "]
glob_lab_beg = [chr(i) for i in range(ord(':')+1,ord(']'),1)] + [chr(i) for i in range(ord(']')+1,127,1)]
lab_char = [chr(i) for i in range(ord('0'),127,1)]

def build_char_regex(lst):
    ans = '/['
    for c in lst:
        if c in escaped:
            ans += '\\'
        ans += c
    return ans + ']/;\n'

char_regex = ''
char_regex += 'const ANYCHAR = ' + build_char_regex(anychar)
char_regex += 'const NCHAR = ' + build_char_regex(negchar)
char_regex += 'const PCHAR = ' + build_char_regex(poschar)
char_regex += 'const SPCHAR = ' + build_char_regex(spchar)
char_regex += 'const ARG = ' + build_char_regex(arg)
char_regex += 'const GLOB_LAB_BEG = ' + build_char_regex(glob_lab_beg)
char_regex += 'const LAB_CHAR = ' + build_char_regex(lab_char)
 
# Save the full grammar

with open('grammar-src.js','r') as f:
    grammar = f.read()

grammar = grammar.replace('Define constants DO NOT EDIT','Define constants\n\n'+char_regex)
grammar = grammar.replace('Operations DO NOT EDIT','Operations\n\n'+op_str)
grammar = grammar.replace('Pseudo-operations DO NOT EDIT','Pseudo-operations\n\n'+psop_str)
with open(pathlib.Path.cwd().parent / 'grammar.js','w') as f:
    f.write(grammar)

# Save the highlights

highlights = '(global_label) @type\n'
highlights += '(local_label) @variable.parameter\n'
highlights += '(var_label) @variable.builtin\n'
highlights += '(number) @number\n'
highlights += '(main_comment) @comment\n'
highlights += '(comment) @comment\n'
highlights += '(arg) @variable.parameter\n'
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

with open(pathlib.Path.cwd().parent / 'queries' / 'highlights.scm','w') as f:
    f.write(highlights)
