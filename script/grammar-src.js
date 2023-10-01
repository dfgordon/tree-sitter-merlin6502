// `script/gammar-src.js` is for human editing
// `grammar.js` is generated by `opcode_processor.py`

// Downstream tools must resolve the following:
// * matching start and end of macro
// * use of `]0` through `]8` in an invalid context
// * limitations on use of local labels
// * limitations of 6502 and 65C02
// * limitations of Merlin 8
// * identifying implied macro calls that overlap with (pseudo)opcode mnemonics
// * verify that literal addresses or offsets are valid, e.g., lda -1 is accepted by the parser
// * verify that label and column lengths are within limits

// Known differences with legacy Merlin syntax:
// Here semicolons and curly braces are unconditionally forbidden in labels
// Here square brackets are forbidden in labels, except for start the start of variable token
// dstrings must always be terminated

const language_name = 'merlin6502';
const alphachars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';
const prodoschars = '.0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';

// Define constants DO NOT EDIT

// Tree-sitter grammar definition

module.exports = grammar({
	name: language_name,
	extras: $ => [],
	conflicts: $ => [
		[$.label_def,$.macro_def],
		[$.prodos_filename,$.dos33],
	],

	rules: {
		source_file: $ => repeat($._factor),
		_factor: $ => choice(
			$._newline,
			seq($.heading,$._newline), // vscode highlights don't like newline included in the highlight
			seq(optional($._sep),$.comment, $._newline),
			$.program_counter,
			$.macro_call,
			alias($.macro_call_forced,$.macro_call), // downstream must activate this in line by line parsing
			$.operation,
			$.pseudo_operation // excludes implicit macro calls
		),
		program_counter: $ => seq($.label_def,optional(seq($._sep,$.comment)),$._newline), // set label to program counter

		// Macros and labels
		macro_call: $ => seq(optional($.label_def),$._sep,$.macro_ref,optional(seq($._sep,$.arg_macro)),optional(seq($._sep,$.comment)),$._newline),
		macro_call_forced: $ => seq('\u0100',optional($.label_def),$._sep,$.macro_ref,optional(seq($._sep,$.arg_macro)),optional(seq($._sep,$.comment)),$._newline),

		_newline: $ => seq(optional($._sep),/\r?\n/),
		_sep: $ => /[ \t]+/,
		_arg_sep: $ => choice('.',',','/','-','(',' '), // separates macro call from arguments in the long form, e.g., PMC mymacro,myargs

		label_ref: $ => choice($.global_label,$.local_label,$.var_label),
		label_def: $ => choice($.global_label, $.local_label, $.var_label),
		macro_ref: $ => $.global_label,
		macro_def: $ => prec.dynamic(1,$.global_label),
		global_label: $ => token(seq(GLOB_LAB_BEG,repeat(LAB_CHAR))), // max 13 (8bit) or 26 (16bit)
		local_label: $ => token(seq(':',repeat1(LAB_CHAR))), // max 13 (8bit) or 26 (16bit),cannot be first label in program,in macro,MAC,ENT,EXT, or EQU
		var_label: $ => choice($._var,$.var_mac,$.var_cnt),
		_var: $ => token(seq(']', VAR_LAB_BEG, repeat(LAB_CHAR))),
		var_mac: $ => /\][1-8]/,
		var_cnt: $ => ']0',
		// dstrings delimited by quotes are specially treated in macro calls
		dq_str: $ => seq('"',/[\x20-\x21\x23-\x7e]*/,'"'),
		sq_str: $ => seq("'",/[\x20-\x26\x28-\x7e]*/,"'"),

		arg_macro: $ => seq($._arg,repeat(seq(';',$._arg))),
		_arg: $ => choice(
			$.imm,
			$.addr,
			$.addr_x,
			$.addr_y,
			$.iaddr_ix,
			$.iaddr_y,
			$.iaddr,
			$.daddr,
			$.daddr_y,
			$.addr_s,
			$.iaddr_is_y,
			$.xyc,
			alias($.dq_str,$.dstring),
			alias($.sq_str,$.dstring),
			$.arg_literal,
		),
		arg_literal: $ => token(prec.left(-1,repeat1(choice(...ARG)))),

		// Operations DO NOT EDIT

		// Pseudo-operations DO NOT EDIT

		// special arguments

		trailing: $ => /\S+/,
		if_mx: $ => seq('MX', choice($.eop_plus, $.eop_minus, $.eop_times, $.eop_div, $.eop_or, $.eop_and, $.eop_xor), $._aexpr),
		// For IF, any literal can be on the right, but this would only be expected after expansion.
		// In other words, the IF is only useful to the programmer if a macro variable is on the right.
		if_char: $ => seq(ANYCHAR,ANYCHAR,choice($.var_mac,$.arg_literal)),
		data_prefix: $ => choice('#','#<','#>','<','>'),
		ptr_check: $ => seq('(',$.num,')-',$.num),

		// Strings

		_string_operand: $ => seq($.dstring,repeat(seq(',',$.hex_data,',',$.dstring)),optional(seq(',',$.hex_data))),
		_num_str: $ => seq($.num_str_prefix,$._aexpr),
		num_str_prefix: $ => choice('#',"#'",'#"','#>',"#'>",'#">'),

		// dstring DO NOT EDIT

		// 6502 and 65C02 addressing Modes
		// The 65C02 added (ZP) and (ABS,X), but these are indistinguishable from (ABS) and (ZP,X)
		// until the arguments are actually evaluated.
	
		imm: $ => seq($.imm_prefix,$._aexpr),
		addr: $ => $._addr_aexpr,
		addr_x: $ => seq($._addr_aexpr,alias(choice(',X',',x'),$.mode)),
		addr_y: $ => seq($._addr_aexpr,alias(choice(',Y',',y'),$.mode)),
		iaddr_ix: $ => seq(alias('(',$.mode),$._aexpr,alias(choice(',X)',',x)'),$.mode)),
		iaddr_y: $ => seq(alias('(',$.mode),$._aexpr,alias(choice('),Y','),y'),$.mode)),
		iaddr: $ => seq(alias('(',$.mode),$._aexpr,alias(')',$.mode)),

		// 65C816 addressing modes

		daddr: $ => seq(alias('[',$.mode),$._aexpr,alias(']',$.mode)),
		daddr_y: $ => seq(alias('[',$.mode),$._aexpr,alias(choice('],Y','],y'),$.mode)),
		addr_s: $ => seq($._aexpr,alias(choice(',S',',s'),$.mode)),
		iaddr_is_y: $ => seq(alias('(',$.mode),$._aexpr,alias(choice(',S),Y',',s),y',',S),y',',s),Y'),$.mode)),
		xyc: $ => seq($._aexpr,',',$._aexpr),

		// Expressions

		_data_aexpr: $ => seq(optional($.data_prefix),$._aexpr),
		_addr_aexpr: $ => seq(optional($.addr_prefix),$._aexpr),
		_aexpr: $ => choice(
			$.braced_aexpr,
			$.label_ref,
			$.num,
			$.pchar,
			$.nchar,
			$.current_addr,
			$.unary_aexpr,
			$.binary_aexpr
		),
		unary_aexpr: $ => prec(1,choice(seq($.eop_plus,$._aexpr),seq($.eop_minus,$._aexpr))),
		// MERLIN 8/16 has no operator precedence: left to right always prevails
		binary_aexpr: $ => prec.left(seq($._aexpr,choice(
			$.eop_plus,$.eop_minus,$.eop_times,$.eop_div,$.eop_or,$.eop_and,$.eop_xor,
			$.cop_less,$.cop_gtr,$.cop_eq,$.cop_neq
		),$._aexpr)),
		// MERLIN 16+ added precedence within curly braced expressions
		braced_aexpr: $ => prec(1,seq('{',$._aexpr_prec,'}')),
		_aexpr_prec: $ => choice(
			$.braced_aexpr,
			$.label_ref,
			$.num,
			$.pchar,
			$.nchar,
			$.current_addr,
			$.unary_aexpr_prec,
			$.binary_aexpr_prec
		),
		unary_aexpr_prec: $ => prec(5,choice(seq($.eop_plus,$._aexpr_prec),seq($.eop_minus,$._aexpr_prec))),
		binary_aexpr_prec: $ => choice(
			prec.left(4,seq($._aexpr_prec,choice($.eop_or,$.eop_and,$.eop_xor),$._aexpr_prec)),
			prec.left(3,seq($._aexpr_prec,choice($.eop_times,$.eop_div),$._aexpr_prec)),
			prec.left(2,seq($._aexpr_prec,choice($.eop_plus,$.eop_minus),$._aexpr_prec)),
			prec.left(1,seq($._aexpr_prec,choice($.cop_less,$.cop_gtr,$.cop_eq,$.cop_neq),$._aexpr_prec)),
		),


		eop_plus: $ => '+',
		eop_minus: $ => '-',
		eop_times: $ => '*',
		eop_div: $ => '/',
		eop_or: $ => '.',
		eop_and: $ => '&',
		eop_xor: $ => '!',

		// Merlin 16+ added these operators
		cop_less: $ => '<',
		cop_gtr: $ => '>',
		cop_eq: $ => '=',
		cop_neq: $ => '#',

		// Primitive Expressions

		imm_prefix: $ => choice('#','#<','#>','#^'),
		addr_prefix: $ => choice('<','>','^','|'),
		hex_data: $ => /[0-9A-Fa-f][0-9A-Fa-f](,?[0-9A-Fa-f][0-9A-Fa-f])*/,
		filename: $ => choice($.prodos,$.dos33),
		prodos: $ => seq(optional('/'),repeat(seq($.prodos_filename,'/')),$.prodos_filename),
		prodos_filename: $ => prec.dynamic(1,seq(choice(...alphachars),repeat(choice(...prodoschars)))),
		dos33: $ => seq(optional(choice(...DOS33_TFLAG)),choice(...alphachars),repeat(choice(...DOS33_CHARS)),
			optional(/,S[1-7]/),
			optional(/,D[1-2]/)),

		num: $ => choice($.dec,$.hex,$.bin),
		dec: $ => repeat1(choice(...'0123456789')),
		hex: $ => seq('$',repeat1(choice(...'0123456789ABCDEFabcdef'))),
		bin: $ => seq('%',repeat1(choice(...'01_'))),

		pchar: $ => seq("'",ANYCHAR,optional("'")), // ''' is OK
		nchar: $ => seq('"',ANYCHAR,optional('"')), // """ is OK

		current_addr: $ => '*',

		literal: $ => /.*/,

		// Comments

		comment: $ => seq(';',$.txt), // max 64/80 - len(operand)
		heading: $ => seq('*',$.txt), // max 64/80
		txt: $ => /.*/
	}
});

function caseRe (keyword) {
	let result = new RegExp(keyword
	  .split('')
	  .map(c => c.toLowerCase() != c.toUpperCase() ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
	  .join('')
	);
	return result;
}

function caseTS (keyword) {
	let chars = keyword
	  .split('')
	  .map(c => c.toLowerCase() != c.toUpperCase() ? choice(c.toLowerCase(),c.toUpperCase()) : c);
	return seq(...chars);
}
