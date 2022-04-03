#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 832
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 664
#define ALIAS_COUNT 0
#define TOKEN_COUNT 441
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__newline_token1 = 1,
  sym__sep = 2,
  anon_sym_DOT = 3,
  anon_sym_COMMA = 4,
  anon_sym_SLASH = 5,
  anon_sym_DASH = 6,
  anon_sym_LPAREN = 7,
  anon_sym_ = 8,
  sym_global_label = 9,
  sym_local_label = 10,
  sym_var_label = 11,
  anon_sym_SEMI = 12,
  anon_sym_BANG = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_POUND = 15,
  anon_sym_DOLLAR = 16,
  anon_sym_PERCENT = 17,
  anon_sym_AMP = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_RPAREN = 20,
  anon_sym_STAR = 21,
  anon_sym_PLUS = 22,
  anon_sym_0 = 23,
  anon_sym_1 = 24,
  anon_sym_2 = 25,
  anon_sym_3 = 26,
  anon_sym_4 = 27,
  anon_sym_5 = 28,
  anon_sym_6 = 29,
  anon_sym_7 = 30,
  anon_sym_8 = 31,
  anon_sym_9 = 32,
  anon_sym_COLON = 33,
  anon_sym_LT = 34,
  anon_sym_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_QMARK = 37,
  anon_sym_AT = 38,
  anon_sym_A = 39,
  anon_sym_B = 40,
  anon_sym_C = 41,
  anon_sym_D = 42,
  anon_sym_E = 43,
  anon_sym_F = 44,
  anon_sym_G = 45,
  anon_sym_H = 46,
  anon_sym_I = 47,
  anon_sym_J = 48,
  anon_sym_K = 49,
  anon_sym_L = 50,
  anon_sym_M = 51,
  anon_sym_N = 52,
  anon_sym_O = 53,
  anon_sym_P = 54,
  anon_sym_Q = 55,
  anon_sym_R = 56,
  anon_sym_S = 57,
  anon_sym_T = 58,
  anon_sym_U = 59,
  anon_sym_V = 60,
  anon_sym_W = 61,
  anon_sym_X = 62,
  anon_sym_Y = 63,
  anon_sym_Z = 64,
  anon_sym_LBRACK = 65,
  anon_sym_BSLASH = 66,
  anon_sym_RBRACK = 67,
  anon_sym_CARET = 68,
  anon_sym__ = 69,
  anon_sym_BQUOTE = 70,
  anon_sym_a = 71,
  anon_sym_b = 72,
  anon_sym_c = 73,
  anon_sym_d = 74,
  anon_sym_e = 75,
  anon_sym_f = 76,
  anon_sym_g = 77,
  anon_sym_h = 78,
  anon_sym_i = 79,
  anon_sym_j = 80,
  anon_sym_k = 81,
  anon_sym_l = 82,
  anon_sym_m = 83,
  anon_sym_n = 84,
  anon_sym_o = 85,
  anon_sym_p = 86,
  anon_sym_q = 87,
  anon_sym_r = 88,
  anon_sym_s = 89,
  anon_sym_t = 90,
  anon_sym_u = 91,
  anon_sym_v = 92,
  anon_sym_w = 93,
  anon_sym_x = 94,
  anon_sym_y = 95,
  anon_sym_z = 96,
  anon_sym_LBRACE = 97,
  anon_sym_PIPE = 98,
  anon_sym_RBRACE = 99,
  anon_sym_TILDE = 100,
  anon_sym_adc = 101,
  anon_sym_ADC = 102,
  anon_sym_and = 103,
  anon_sym_AND = 104,
  anon_sym_asl = 105,
  anon_sym_ASL = 106,
  anon_sym_BLT = 107,
  anon_sym_blt = 108,
  anon_sym_bcc = 109,
  anon_sym_BCC = 110,
  anon_sym_bcs = 111,
  anon_sym_BCS = 112,
  anon_sym_BGE = 113,
  anon_sym_bge = 114,
  anon_sym_beq = 115,
  anon_sym_BEQ = 116,
  anon_sym_BIT = 117,
  anon_sym_bit = 118,
  anon_sym_BMI = 119,
  anon_sym_bmi = 120,
  anon_sym_bne = 121,
  anon_sym_BNE = 122,
  anon_sym_bpl = 123,
  anon_sym_BPL = 124,
  anon_sym_BRA = 125,
  anon_sym_bra = 126,
  anon_sym_BRK = 127,
  anon_sym_brk = 128,
  anon_sym_bvc = 129,
  anon_sym_BVC = 130,
  anon_sym_bvs = 131,
  anon_sym_BVS = 132,
  anon_sym_CLC = 133,
  anon_sym_clc = 134,
  anon_sym_cld = 135,
  anon_sym_CLD = 136,
  anon_sym_cli = 137,
  anon_sym_CLI = 138,
  anon_sym_CLV = 139,
  anon_sym_clv = 140,
  anon_sym_CMP = 141,
  anon_sym_cmp = 142,
  anon_sym_cpx = 143,
  anon_sym_CPX = 144,
  anon_sym_CPY = 145,
  anon_sym_cpy = 146,
  anon_sym_dec = 147,
  anon_sym_DEC = 148,
  anon_sym_dex = 149,
  anon_sym_DEX = 150,
  anon_sym_DEY = 151,
  anon_sym_dey = 152,
  anon_sym_eor = 153,
  anon_sym_EOR = 154,
  anon_sym_inc = 155,
  anon_sym_INC = 156,
  anon_sym_inx = 157,
  anon_sym_INX = 158,
  anon_sym_iny = 159,
  anon_sym_INY = 160,
  anon_sym_JMP = 161,
  anon_sym_jmp = 162,
  anon_sym_JSR = 163,
  anon_sym_jsr = 164,
  anon_sym_LDA = 165,
  anon_sym_lda = 166,
  anon_sym_LDX = 167,
  anon_sym_ldx = 168,
  anon_sym_LDY = 169,
  anon_sym_ldy = 170,
  anon_sym_LSR = 171,
  anon_sym_lsr = 172,
  anon_sym_NOP = 173,
  anon_sym_nop = 174,
  anon_sym_ORA = 175,
  anon_sym_ora = 176,
  anon_sym_pha = 177,
  anon_sym_PHA = 178,
  anon_sym_PHP = 179,
  anon_sym_php = 180,
  anon_sym_phx = 181,
  anon_sym_PHX = 182,
  anon_sym_phy = 183,
  anon_sym_PHY = 184,
  anon_sym_PLA = 185,
  anon_sym_pla = 186,
  anon_sym_plp = 187,
  anon_sym_PLP = 188,
  anon_sym_PLX = 189,
  anon_sym_plx = 190,
  anon_sym_ply = 191,
  anon_sym_PLY = 192,
  anon_sym_ROL = 193,
  anon_sym_rol = 194,
  anon_sym_ROR = 195,
  anon_sym_ror = 196,
  anon_sym_rti = 197,
  anon_sym_RTI = 198,
  anon_sym_rts = 199,
  anon_sym_RTS = 200,
  anon_sym_sbc = 201,
  anon_sym_SBC = 202,
  anon_sym_sec = 203,
  anon_sym_SEC = 204,
  anon_sym_sed = 205,
  anon_sym_SED = 206,
  anon_sym_SEI = 207,
  anon_sym_sei = 208,
  anon_sym_STA = 209,
  anon_sym_sta = 210,
  anon_sym_STX = 211,
  anon_sym_stx = 212,
  anon_sym_STY = 213,
  anon_sym_sty = 214,
  anon_sym_STZ = 215,
  anon_sym_stz = 216,
  anon_sym_TAX = 217,
  anon_sym_tax = 218,
  anon_sym_tay = 219,
  anon_sym_TAY = 220,
  anon_sym_trb = 221,
  anon_sym_TRB = 222,
  anon_sym_TSB = 223,
  anon_sym_tsb = 224,
  anon_sym_tsx = 225,
  anon_sym_TSX = 226,
  anon_sym_txa = 227,
  anon_sym_TXA = 228,
  anon_sym_txs = 229,
  anon_sym_TXS = 230,
  anon_sym_tya = 231,
  anon_sym_TYA = 232,
  anon_sym_BRL = 233,
  anon_sym_brl = 234,
  anon_sym_COP = 235,
  anon_sym_cop = 236,
  anon_sym_jml = 237,
  anon_sym_JML = 238,
  anon_sym_JSL = 239,
  anon_sym_jsl = 240,
  anon_sym_MVN = 241,
  anon_sym_mvn = 242,
  anon_sym_MVP = 243,
  anon_sym_mvp = 244,
  anon_sym_PEA = 245,
  anon_sym_pea = 246,
  anon_sym_PEI = 247,
  anon_sym_pei = 248,
  anon_sym_PER = 249,
  anon_sym_per = 250,
  anon_sym_PHB = 251,
  anon_sym_phb = 252,
  anon_sym_PHD = 253,
  anon_sym_phd = 254,
  anon_sym_phk = 255,
  anon_sym_PHK = 256,
  anon_sym_plb = 257,
  anon_sym_PLB = 258,
  anon_sym_PLD = 259,
  anon_sym_pld = 260,
  anon_sym_REP = 261,
  anon_sym_rep = 262,
  anon_sym_RTL = 263,
  anon_sym_rtl = 264,
  anon_sym_SEP = 265,
  anon_sym_sep = 266,
  anon_sym_TCD = 267,
  anon_sym_tad = 268,
  anon_sym_TAD = 269,
  anon_sym_tcd = 270,
  anon_sym_TAS = 271,
  anon_sym_TCS = 272,
  anon_sym_tas = 273,
  anon_sym_tcs = 274,
  anon_sym_tdc = 275,
  anon_sym_tda = 276,
  anon_sym_TDC = 277,
  anon_sym_TDA = 278,
  anon_sym_tsc = 279,
  anon_sym_TSC = 280,
  anon_sym_TSA = 281,
  anon_sym_tsa = 282,
  anon_sym_TXY = 283,
  anon_sym_txy = 284,
  anon_sym_tyx = 285,
  anon_sym_TYX = 286,
  anon_sym_WAI = 287,
  anon_sym_wai = 288,
  anon_sym_WDM = 289,
  anon_sym_wdm = 290,
  anon_sym_SWA = 291,
  anon_sym_xba = 292,
  anon_sym_XBA = 293,
  anon_sym_swa = 294,
  anon_sym_XCE = 295,
  anon_sym_xce = 296,
  anon_sym_equ = 297,
  anon_sym_EQU = 298,
  anon_sym_EXT = 299,
  anon_sym_ext = 300,
  anon_sym_ent = 301,
  anon_sym_ENT = 302,
  anon_sym_ORG = 303,
  anon_sym_org = 304,
  anon_sym_REL = 305,
  anon_sym_rel = 306,
  anon_sym_OBJ = 307,
  anon_sym_obj = 308,
  anon_sym_put = 309,
  anon_sym_PUT = 310,
  anon_sym_USE = 311,
  anon_sym_use = 312,
  anon_sym_var = 313,
  anon_sym_VAR = 314,
  anon_sym_sav = 315,
  anon_sym_SAV = 316,
  anon_sym_TYP = 317,
  anon_sym_typ = 318,
  anon_sym_DSK = 319,
  anon_sym_dsk = 320,
  anon_sym_END = 321,
  anon_sym_end = 322,
  anon_sym_dum = 323,
  anon_sym_DUM = 324,
  anon_sym_dend = 325,
  anon_sym_DEND = 326,
  anon_sym_AST = 327,
  anon_sym_ast = 328,
  anon_sym_cyc = 329,
  anon_sym_CYC = 330,
  anon_sym_DAT = 331,
  anon_sym_dat = 332,
  anon_sym_EXP = 333,
  anon_sym_exp = 334,
  anon_sym_lst = 335,
  anon_sym_LST = 336,
  anon_sym_lstdo = 337,
  anon_sym_LSTDO = 338,
  anon_sym_PAG = 339,
  anon_sym_pag = 340,
  anon_sym_TTL = 341,
  anon_sym_ttl = 342,
  anon_sym_skp = 343,
  anon_sym_SKP = 344,
  anon_sym_tr = 345,
  anon_sym_TR = 346,
  anon_sym_ASC = 347,
  anon_sym_asc = 348,
  anon_sym_DCI = 349,
  anon_sym_dci = 350,
  anon_sym_inv = 351,
  anon_sym_INV = 352,
  anon_sym_fls = 353,
  anon_sym_FLS = 354,
  anon_sym_REV = 355,
  anon_sym_rev = 356,
  anon_sym_str = 357,
  anon_sym_STR = 358,
  anon_sym_da = 359,
  anon_sym_DA = 360,
  anon_sym_dw = 361,
  anon_sym_DW = 362,
  anon_sym_DDB = 363,
  anon_sym_ddb = 364,
  anon_sym_DFB = 365,
  anon_sym_db = 366,
  anon_sym_DB = 367,
  anon_sym_dfb = 368,
  anon_sym_ADR = 369,
  anon_sym_adr = 370,
  anon_sym_adrl = 371,
  anon_sym_ADRL = 372,
  anon_sym_HEX = 373,
  anon_sym_hex = 374,
  anon_sym_DS = 375,
  anon_sym_ds = 376,
  anon_sym_do = 377,
  anon_sym_DO = 378,
  anon_sym_else = 379,
  anon_sym_ELSE = 380,
  anon_sym_if = 381,
  anon_sym_IF = 382,
  anon_sym_FIN = 383,
  anon_sym_fin = 384,
  anon_sym_CHK = 385,
  anon_sym_chk = 386,
  anon_sym_ERR = 387,
  anon_sym_err = 388,
  anon_sym_KBD = 389,
  anon_sym_kbd = 390,
  anon_sym_LUP = 391,
  anon_sym_lup = 392,
  sym_psop_end_lup = 393,
  anon_sym_MX = 394,
  anon_sym_mx = 395,
  anon_sym_pau = 396,
  anon_sym_PAU = 397,
  anon_sym_sw = 398,
  anon_sym_SW = 399,
  anon_sym_USR = 400,
  anon_sym_usr = 401,
  anon_sym_XC = 402,
  anon_sym_xc = 403,
  anon_sym_mac = 404,
  anon_sym_MAC = 405,
  anon_sym_LT_LT_LT = 406,
  anon_sym_EOM = 407,
  anon_sym_eom = 408,
  anon_sym_GT_GT_GT = 409,
  anon_sym_pmc = 410,
  anon_sym_PMC = 411,
  anon_sym_OFF = 412,
  anon_sym_AVE = 413,
  anon_sym_ON = 414,
  anon_sym_ONLY = 415,
  aux_sym_pseudo_operation_token1 = 416,
  anon_sym_COMMAX = 417,
  anon_sym_COMMAx = 418,
  anon_sym_COMMAY = 419,
  anon_sym_COMMAy = 420,
  anon_sym_COMMAX_RPAREN = 421,
  anon_sym_COMMAx_RPAREN = 422,
  anon_sym_RPAREN_COMMAY = 423,
  anon_sym_RPAREN_COMMAy = 424,
  anon_sym_RBRACK_COMMAY = 425,
  anon_sym_RBRACK_COMMAy = 426,
  anon_sym_COMMAS = 427,
  anon_sym_COMMAs = 428,
  anon_sym_COMMAS_RPAREN_COMMAY = 429,
  anon_sym_COMMAs_RPAREN_COMMAy = 430,
  anon_sym_POUND_LT = 431,
  anon_sym_POUND_GT = 432,
  anon_sym_POUND_CARET = 433,
  sym_hex_byte = 434,
  aux_sym_prodos_token1 = 435,
  aux_sym_dos33_token1 = 436,
  aux_sym_pchar_token1 = 437,
  aux_sym_nchar_token1 = 438,
  aux_sym_literal_token1 = 439,
  aux_sym_main_comment_token1 = 440,
  sym_source_file = 441,
  sym__factor = 442,
  sym_program_counter = 443,
  sym_macro_calli = 444,
  sym__newline = 445,
  sym__arg_sep = 446,
  sym__label = 447,
  sym_macro_args = 448,
  sym__arg = 449,
  sym_literal_arg = 450,
  sym_op_adc = 451,
  sym_op_and = 452,
  sym_op_asl = 453,
  sym_op_bcc = 454,
  sym_op_bcs = 455,
  sym_op_beq = 456,
  sym_op_bit = 457,
  sym_op_bmi = 458,
  sym_op_bne = 459,
  sym_op_bpl = 460,
  sym_op_bra = 461,
  sym_op_brk = 462,
  sym_op_bvc = 463,
  sym_op_bvs = 464,
  sym_op_clc = 465,
  sym_op_cld = 466,
  sym_op_cli = 467,
  sym_op_clv = 468,
  sym_op_cmp = 469,
  sym_op_cpx = 470,
  sym_op_cpy = 471,
  sym_op_dec = 472,
  sym_op_dex = 473,
  sym_op_dey = 474,
  sym_op_eor = 475,
  sym_op_inc = 476,
  sym_op_inx = 477,
  sym_op_iny = 478,
  sym_op_jmp = 479,
  sym_op_jsr = 480,
  sym_op_lda = 481,
  sym_op_ldx = 482,
  sym_op_ldy = 483,
  sym_op_lsr = 484,
  sym_op_nop = 485,
  sym_op_ora = 486,
  sym_op_pha = 487,
  sym_op_php = 488,
  sym_op_phx = 489,
  sym_op_phy = 490,
  sym_op_pla = 491,
  sym_op_plp = 492,
  sym_op_plx = 493,
  sym_op_ply = 494,
  sym_op_rol = 495,
  sym_op_ror = 496,
  sym_op_rti = 497,
  sym_op_rts = 498,
  sym_op_sbc = 499,
  sym_op_sec = 500,
  sym_op_sed = 501,
  sym_op_sei = 502,
  sym_op_sta = 503,
  sym_op_stx = 504,
  sym_op_sty = 505,
  sym_op_stz = 506,
  sym_op_tax = 507,
  sym_op_tay = 508,
  sym_op_trb = 509,
  sym_op_tsb = 510,
  sym_op_tsx = 511,
  sym_op_txa = 512,
  sym_op_txs = 513,
  sym_op_tya = 514,
  sym_op_brl = 515,
  sym_op_cop = 516,
  sym_op_jml = 517,
  sym_op_jsl = 518,
  sym_op_mvn = 519,
  sym_op_mvp = 520,
  sym_op_pea = 521,
  sym_op_pei = 522,
  sym_op_per = 523,
  sym_op_phb = 524,
  sym_op_phd = 525,
  sym_op_phk = 526,
  sym_op_plb = 527,
  sym_op_pld = 528,
  sym_op_rep = 529,
  sym_op_rtl = 530,
  sym_op_sep = 531,
  sym_op_tcd = 532,
  sym_op_tcs = 533,
  sym_op_tdc = 534,
  sym_op_tsc = 535,
  sym_op_txy = 536,
  sym_op_tyx = 537,
  sym_op_wai = 538,
  sym_op_wdm = 539,
  sym_op_xba = 540,
  sym_op_xce = 541,
  sym_operation = 542,
  sym_psop_equ = 543,
  sym_psop_ext = 544,
  sym_psop_ent = 545,
  sym_psop_org = 546,
  sym_psop_rel = 547,
  sym_psop_obj = 548,
  sym_psop_put = 549,
  sym_psop_use = 550,
  sym_psop_var = 551,
  sym_psop_sav = 552,
  sym_psop_typ = 553,
  sym_psop_dsk = 554,
  sym_psop_end = 555,
  sym_psop_dum = 556,
  sym_psop_dend = 557,
  sym_psop_ast = 558,
  sym_psop_cyc = 559,
  sym_psop_dat = 560,
  sym_psop_exp = 561,
  sym_psop_lst = 562,
  sym_psop_lstdo = 563,
  sym_psop_pag = 564,
  sym_psop_ttl = 565,
  sym_psop_skp = 566,
  sym_psop_tr = 567,
  sym_psop_asc = 568,
  sym_psop_dci = 569,
  sym_psop_inv = 570,
  sym_psop_fls = 571,
  sym_psop_rev = 572,
  sym_psop_str = 573,
  sym_psop_da = 574,
  sym_psop_ddb = 575,
  sym_psop_dfb = 576,
  sym_psop_adr = 577,
  sym_psop_adrl = 578,
  sym_psop_hex = 579,
  sym_psop_ds = 580,
  sym_psop_do = 581,
  sym_psop_else = 582,
  sym_psop_if = 583,
  sym_psop_fin = 584,
  sym_psop_chk = 585,
  sym_psop_err = 586,
  sym_psop_kbd = 587,
  sym_psop_lup = 588,
  sym_psop_mx = 589,
  sym_psop_pau = 590,
  sym_psop_sw = 591,
  sym_psop_usr = 592,
  sym_psop_xc = 593,
  sym_psop_mac = 594,
  sym_psop_eom = 595,
  sym_psop_pmc = 596,
  sym_pseudo_operation = 597,
  sym__string_operand = 598,
  sym_dstring = 599,
  sym__addr_6502 = 600,
  sym_imm = 601,
  sym_addr = 602,
  sym_addr_x = 603,
  sym_addr_y = 604,
  sym_iaddr_ix = 605,
  sym_iaddr_y = 606,
  sym_iaddr = 607,
  sym_mode_x = 608,
  sym_mode_y = 609,
  sym_mode_iopen = 610,
  sym_mode_iclose = 611,
  sym_mode_iix = 612,
  sym_mode_iy = 613,
  sym__addr_65816 = 614,
  sym_daddr = 615,
  sym_daddr_y = 616,
  sym_addr_s = 617,
  sym_iaddr_is_y = 618,
  sym_xyc = 619,
  sym_mode_dopen = 620,
  sym_mode_dclose = 621,
  sym_mode_dy = 622,
  sym_mode_s = 623,
  sym_mode_is_y = 624,
  sym__eaexpr = 625,
  sym__aexpr = 626,
  sym_unary_aexpr = 627,
  sym_binary_aexpr = 628,
  sym_eop_plus = 629,
  sym_eop_minus = 630,
  sym_eop_times = 631,
  sym_eop_div = 632,
  sym_eop_or = 633,
  sym_eop_and = 634,
  sym_eop_xor = 635,
  sym_imm_prefix = 636,
  sym_hex_data = 637,
  sym_filename = 638,
  sym_prodos = 639,
  sym_dos33 = 640,
  sym_number = 641,
  sym_decimal = 642,
  sym_hexadecimal = 643,
  sym_binary = 644,
  sym_pchar = 645,
  sym_nchar = 646,
  sym_current_addr = 647,
  sym_literal = 648,
  sym_comment = 649,
  sym_comment_text = 650,
  sym_main_comment = 651,
  aux_sym_source_file_repeat1 = 652,
  aux_sym_macro_args_repeat1 = 653,
  aux_sym_literal_arg_repeat1 = 654,
  aux_sym_pseudo_operation_repeat1 = 655,
  aux_sym_pseudo_operation_repeat2 = 656,
  aux_sym_pseudo_operation_repeat3 = 657,
  aux_sym_pseudo_operation_repeat4 = 658,
  aux_sym_dstring_repeat1 = 659,
  aux_sym_hex_data_repeat1 = 660,
  aux_sym_decimal_repeat1 = 661,
  aux_sym_hexadecimal_repeat1 = 662,
  aux_sym_binary_repeat1 = 663,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__sep] = "_sep",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_] = " ",
  [sym_global_label] = "global_label",
  [sym_local_label] = "local_label",
  [sym_var_label] = "var_label",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_8] = "8",
  [anon_sym_9] = "9",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_A] = "A",
  [anon_sym_B] = "B",
  [anon_sym_C] = "C",
  [anon_sym_D] = "D",
  [anon_sym_E] = "E",
  [anon_sym_F] = "F",
  [anon_sym_G] = "G",
  [anon_sym_H] = "H",
  [anon_sym_I] = "I",
  [anon_sym_J] = "J",
  [anon_sym_K] = "K",
  [anon_sym_L] = "L",
  [anon_sym_M] = "M",
  [anon_sym_N] = "N",
  [anon_sym_O] = "O",
  [anon_sym_P] = "P",
  [anon_sym_Q] = "Q",
  [anon_sym_R] = "R",
  [anon_sym_S] = "S",
  [anon_sym_T] = "T",
  [anon_sym_U] = "U",
  [anon_sym_V] = "V",
  [anon_sym_W] = "W",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_Z] = "Z",
  [anon_sym_LBRACK] = "[",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RBRACK] = "]",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_a] = "a",
  [anon_sym_b] = "b",
  [anon_sym_c] = "c",
  [anon_sym_d] = "d",
  [anon_sym_e] = "e",
  [anon_sym_f] = "f",
  [anon_sym_g] = "g",
  [anon_sym_h] = "h",
  [anon_sym_i] = "i",
  [anon_sym_j] = "j",
  [anon_sym_k] = "k",
  [anon_sym_l] = "l",
  [anon_sym_m] = "m",
  [anon_sym_n] = "n",
  [anon_sym_o] = "o",
  [anon_sym_p] = "p",
  [anon_sym_q] = "q",
  [anon_sym_r] = "r",
  [anon_sym_s] = "s",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [anon_sym_v] = "v",
  [anon_sym_w] = "w",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_z] = "z",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [anon_sym_adc] = "adc",
  [anon_sym_ADC] = "ADC",
  [anon_sym_and] = "and",
  [anon_sym_AND] = "AND",
  [anon_sym_asl] = "asl",
  [anon_sym_ASL] = "ASL",
  [anon_sym_BLT] = "BLT",
  [anon_sym_blt] = "blt",
  [anon_sym_bcc] = "bcc",
  [anon_sym_BCC] = "BCC",
  [anon_sym_bcs] = "bcs",
  [anon_sym_BCS] = "BCS",
  [anon_sym_BGE] = "BGE",
  [anon_sym_bge] = "bge",
  [anon_sym_beq] = "beq",
  [anon_sym_BEQ] = "BEQ",
  [anon_sym_BIT] = "BIT",
  [anon_sym_bit] = "bit",
  [anon_sym_BMI] = "BMI",
  [anon_sym_bmi] = "bmi",
  [anon_sym_bne] = "bne",
  [anon_sym_BNE] = "BNE",
  [anon_sym_bpl] = "bpl",
  [anon_sym_BPL] = "BPL",
  [anon_sym_BRA] = "BRA",
  [anon_sym_bra] = "bra",
  [anon_sym_BRK] = "BRK",
  [anon_sym_brk] = "brk",
  [anon_sym_bvc] = "bvc",
  [anon_sym_BVC] = "BVC",
  [anon_sym_bvs] = "bvs",
  [anon_sym_BVS] = "BVS",
  [anon_sym_CLC] = "CLC",
  [anon_sym_clc] = "clc",
  [anon_sym_cld] = "cld",
  [anon_sym_CLD] = "CLD",
  [anon_sym_cli] = "cli",
  [anon_sym_CLI] = "CLI",
  [anon_sym_CLV] = "CLV",
  [anon_sym_clv] = "clv",
  [anon_sym_CMP] = "CMP",
  [anon_sym_cmp] = "cmp",
  [anon_sym_cpx] = "cpx",
  [anon_sym_CPX] = "CPX",
  [anon_sym_CPY] = "CPY",
  [anon_sym_cpy] = "cpy",
  [anon_sym_dec] = "dec",
  [anon_sym_DEC] = "DEC",
  [anon_sym_dex] = "dex",
  [anon_sym_DEX] = "DEX",
  [anon_sym_DEY] = "DEY",
  [anon_sym_dey] = "dey",
  [anon_sym_eor] = "eor",
  [anon_sym_EOR] = "EOR",
  [anon_sym_inc] = "inc",
  [anon_sym_INC] = "INC",
  [anon_sym_inx] = "inx",
  [anon_sym_INX] = "INX",
  [anon_sym_iny] = "iny",
  [anon_sym_INY] = "INY",
  [anon_sym_JMP] = "JMP",
  [anon_sym_jmp] = "jmp",
  [anon_sym_JSR] = "JSR",
  [anon_sym_jsr] = "jsr",
  [anon_sym_LDA] = "LDA",
  [anon_sym_lda] = "lda",
  [anon_sym_LDX] = "LDX",
  [anon_sym_ldx] = "ldx",
  [anon_sym_LDY] = "LDY",
  [anon_sym_ldy] = "ldy",
  [anon_sym_LSR] = "LSR",
  [anon_sym_lsr] = "lsr",
  [anon_sym_NOP] = "NOP",
  [anon_sym_nop] = "nop",
  [anon_sym_ORA] = "ORA",
  [anon_sym_ora] = "ora",
  [anon_sym_pha] = "pha",
  [anon_sym_PHA] = "PHA",
  [anon_sym_PHP] = "PHP",
  [anon_sym_php] = "php",
  [anon_sym_phx] = "phx",
  [anon_sym_PHX] = "PHX",
  [anon_sym_phy] = "phy",
  [anon_sym_PHY] = "PHY",
  [anon_sym_PLA] = "PLA",
  [anon_sym_pla] = "pla",
  [anon_sym_plp] = "plp",
  [anon_sym_PLP] = "PLP",
  [anon_sym_PLX] = "PLX",
  [anon_sym_plx] = "plx",
  [anon_sym_ply] = "ply",
  [anon_sym_PLY] = "PLY",
  [anon_sym_ROL] = "ROL",
  [anon_sym_rol] = "rol",
  [anon_sym_ROR] = "ROR",
  [anon_sym_ror] = "ror",
  [anon_sym_rti] = "rti",
  [anon_sym_RTI] = "RTI",
  [anon_sym_rts] = "rts",
  [anon_sym_RTS] = "RTS",
  [anon_sym_sbc] = "sbc",
  [anon_sym_SBC] = "SBC",
  [anon_sym_sec] = "sec",
  [anon_sym_SEC] = "SEC",
  [anon_sym_sed] = "sed",
  [anon_sym_SED] = "SED",
  [anon_sym_SEI] = "SEI",
  [anon_sym_sei] = "sei",
  [anon_sym_STA] = "STA",
  [anon_sym_sta] = "sta",
  [anon_sym_STX] = "STX",
  [anon_sym_stx] = "stx",
  [anon_sym_STY] = "STY",
  [anon_sym_sty] = "sty",
  [anon_sym_STZ] = "STZ",
  [anon_sym_stz] = "stz",
  [anon_sym_TAX] = "TAX",
  [anon_sym_tax] = "tax",
  [anon_sym_tay] = "tay",
  [anon_sym_TAY] = "TAY",
  [anon_sym_trb] = "trb",
  [anon_sym_TRB] = "TRB",
  [anon_sym_TSB] = "TSB",
  [anon_sym_tsb] = "tsb",
  [anon_sym_tsx] = "tsx",
  [anon_sym_TSX] = "TSX",
  [anon_sym_txa] = "txa",
  [anon_sym_TXA] = "TXA",
  [anon_sym_txs] = "txs",
  [anon_sym_TXS] = "TXS",
  [anon_sym_tya] = "tya",
  [anon_sym_TYA] = "TYA",
  [anon_sym_BRL] = "BRL",
  [anon_sym_brl] = "brl",
  [anon_sym_COP] = "COP",
  [anon_sym_cop] = "cop",
  [anon_sym_jml] = "jml",
  [anon_sym_JML] = "JML",
  [anon_sym_JSL] = "JSL",
  [anon_sym_jsl] = "jsl",
  [anon_sym_MVN] = "MVN",
  [anon_sym_mvn] = "mvn",
  [anon_sym_MVP] = "MVP",
  [anon_sym_mvp] = "mvp",
  [anon_sym_PEA] = "PEA",
  [anon_sym_pea] = "pea",
  [anon_sym_PEI] = "PEI",
  [anon_sym_pei] = "pei",
  [anon_sym_PER] = "PER",
  [anon_sym_per] = "per",
  [anon_sym_PHB] = "PHB",
  [anon_sym_phb] = "phb",
  [anon_sym_PHD] = "PHD",
  [anon_sym_phd] = "phd",
  [anon_sym_phk] = "phk",
  [anon_sym_PHK] = "PHK",
  [anon_sym_plb] = "plb",
  [anon_sym_PLB] = "PLB",
  [anon_sym_PLD] = "PLD",
  [anon_sym_pld] = "pld",
  [anon_sym_REP] = "REP",
  [anon_sym_rep] = "rep",
  [anon_sym_RTL] = "RTL",
  [anon_sym_rtl] = "rtl",
  [anon_sym_SEP] = "SEP",
  [anon_sym_sep] = "sep",
  [anon_sym_TCD] = "TCD",
  [anon_sym_tad] = "tad",
  [anon_sym_TAD] = "TAD",
  [anon_sym_tcd] = "tcd",
  [anon_sym_TAS] = "TAS",
  [anon_sym_TCS] = "TCS",
  [anon_sym_tas] = "tas",
  [anon_sym_tcs] = "tcs",
  [anon_sym_tdc] = "tdc",
  [anon_sym_tda] = "tda",
  [anon_sym_TDC] = "TDC",
  [anon_sym_TDA] = "TDA",
  [anon_sym_tsc] = "tsc",
  [anon_sym_TSC] = "TSC",
  [anon_sym_TSA] = "TSA",
  [anon_sym_tsa] = "tsa",
  [anon_sym_TXY] = "TXY",
  [anon_sym_txy] = "txy",
  [anon_sym_tyx] = "tyx",
  [anon_sym_TYX] = "TYX",
  [anon_sym_WAI] = "WAI",
  [anon_sym_wai] = "wai",
  [anon_sym_WDM] = "WDM",
  [anon_sym_wdm] = "wdm",
  [anon_sym_SWA] = "SWA",
  [anon_sym_xba] = "xba",
  [anon_sym_XBA] = "XBA",
  [anon_sym_swa] = "swa",
  [anon_sym_XCE] = "XCE",
  [anon_sym_xce] = "xce",
  [anon_sym_equ] = "equ",
  [anon_sym_EQU] = "EQU",
  [anon_sym_EXT] = "EXT",
  [anon_sym_ext] = "ext",
  [anon_sym_ent] = "ent",
  [anon_sym_ENT] = "ENT",
  [anon_sym_ORG] = "ORG",
  [anon_sym_org] = "org",
  [anon_sym_REL] = "REL",
  [anon_sym_rel] = "rel",
  [anon_sym_OBJ] = "OBJ",
  [anon_sym_obj] = "obj",
  [anon_sym_put] = "put",
  [anon_sym_PUT] = "PUT",
  [anon_sym_USE] = "USE",
  [anon_sym_use] = "use",
  [anon_sym_var] = "var",
  [anon_sym_VAR] = "VAR",
  [anon_sym_sav] = "sav",
  [anon_sym_SAV] = "SAV",
  [anon_sym_TYP] = "TYP",
  [anon_sym_typ] = "typ",
  [anon_sym_DSK] = "DSK",
  [anon_sym_dsk] = "dsk",
  [anon_sym_END] = "END",
  [anon_sym_end] = "end",
  [anon_sym_dum] = "dum",
  [anon_sym_DUM] = "DUM",
  [anon_sym_dend] = "dend",
  [anon_sym_DEND] = "DEND",
  [anon_sym_AST] = "AST",
  [anon_sym_ast] = "ast",
  [anon_sym_cyc] = "cyc",
  [anon_sym_CYC] = "CYC",
  [anon_sym_DAT] = "DAT",
  [anon_sym_dat] = "dat",
  [anon_sym_EXP] = "EXP",
  [anon_sym_exp] = "exp",
  [anon_sym_lst] = "lst",
  [anon_sym_LST] = "LST",
  [anon_sym_lstdo] = "lstdo",
  [anon_sym_LSTDO] = "LSTDO",
  [anon_sym_PAG] = "PAG",
  [anon_sym_pag] = "pag",
  [anon_sym_TTL] = "TTL",
  [anon_sym_ttl] = "ttl",
  [anon_sym_skp] = "skp",
  [anon_sym_SKP] = "SKP",
  [anon_sym_tr] = "tr",
  [anon_sym_TR] = "TR",
  [anon_sym_ASC] = "ASC",
  [anon_sym_asc] = "asc",
  [anon_sym_DCI] = "DCI",
  [anon_sym_dci] = "dci",
  [anon_sym_inv] = "inv",
  [anon_sym_INV] = "INV",
  [anon_sym_fls] = "fls",
  [anon_sym_FLS] = "FLS",
  [anon_sym_REV] = "REV",
  [anon_sym_rev] = "rev",
  [anon_sym_str] = "str",
  [anon_sym_STR] = "STR",
  [anon_sym_da] = "da",
  [anon_sym_DA] = "DA",
  [anon_sym_dw] = "dw",
  [anon_sym_DW] = "DW",
  [anon_sym_DDB] = "DDB",
  [anon_sym_ddb] = "ddb",
  [anon_sym_DFB] = "DFB",
  [anon_sym_db] = "db",
  [anon_sym_DB] = "DB",
  [anon_sym_dfb] = "dfb",
  [anon_sym_ADR] = "ADR",
  [anon_sym_adr] = "adr",
  [anon_sym_adrl] = "adrl",
  [anon_sym_ADRL] = "ADRL",
  [anon_sym_HEX] = "HEX",
  [anon_sym_hex] = "hex",
  [anon_sym_DS] = "DS",
  [anon_sym_ds] = "ds",
  [anon_sym_do] = "do",
  [anon_sym_DO] = "DO",
  [anon_sym_else] = "else",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_if] = "if",
  [anon_sym_IF] = "IF",
  [anon_sym_FIN] = "FIN",
  [anon_sym_fin] = "fin",
  [anon_sym_CHK] = "CHK",
  [anon_sym_chk] = "chk",
  [anon_sym_ERR] = "ERR",
  [anon_sym_err] = "err",
  [anon_sym_KBD] = "KBD",
  [anon_sym_kbd] = "kbd",
  [anon_sym_LUP] = "LUP",
  [anon_sym_lup] = "lup",
  [sym_psop_end_lup] = "psop_end_lup",
  [anon_sym_MX] = "MX",
  [anon_sym_mx] = "mx",
  [anon_sym_pau] = "pau",
  [anon_sym_PAU] = "PAU",
  [anon_sym_sw] = "sw",
  [anon_sym_SW] = "SW",
  [anon_sym_USR] = "USR",
  [anon_sym_usr] = "usr",
  [anon_sym_XC] = "XC",
  [anon_sym_xc] = "xc",
  [anon_sym_mac] = "mac",
  [anon_sym_MAC] = "MAC",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_EOM] = "EOM",
  [anon_sym_eom] = "eom",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_pmc] = "pmc",
  [anon_sym_PMC] = "PMC",
  [anon_sym_OFF] = "OFF",
  [anon_sym_AVE] = "AVE",
  [anon_sym_ON] = "ON",
  [anon_sym_ONLY] = "ONLY",
  [aux_sym_pseudo_operation_token1] = "pseudo_operation_token1",
  [anon_sym_COMMAX] = ",X",
  [anon_sym_COMMAx] = ",x",
  [anon_sym_COMMAY] = ",Y",
  [anon_sym_COMMAy] = ",y",
  [anon_sym_COMMAX_RPAREN] = ",X)",
  [anon_sym_COMMAx_RPAREN] = ",x)",
  [anon_sym_RPAREN_COMMAY] = "),Y",
  [anon_sym_RPAREN_COMMAy] = "),y",
  [anon_sym_RBRACK_COMMAY] = "],Y",
  [anon_sym_RBRACK_COMMAy] = "],y",
  [anon_sym_COMMAS] = ",S",
  [anon_sym_COMMAs] = ",s",
  [anon_sym_COMMAS_RPAREN_COMMAY] = ",S),Y",
  [anon_sym_COMMAs_RPAREN_COMMAy] = ",s),y",
  [anon_sym_POUND_LT] = "#<",
  [anon_sym_POUND_GT] = "#>",
  [anon_sym_POUND_CARET] = "#^",
  [sym_hex_byte] = "hex_byte",
  [aux_sym_prodos_token1] = "prodos_token1",
  [aux_sym_dos33_token1] = "dos33_token1",
  [aux_sym_pchar_token1] = "pchar_token1",
  [aux_sym_nchar_token1] = "nchar_token1",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_main_comment_token1] = "main_comment_token1",
  [sym_source_file] = "source_file",
  [sym__factor] = "_factor",
  [sym_program_counter] = "program_counter",
  [sym_macro_calli] = "macro_calli",
  [sym__newline] = "_newline",
  [sym__arg_sep] = "_arg_sep",
  [sym__label] = "_label",
  [sym_macro_args] = "macro_args",
  [sym__arg] = "_arg",
  [sym_literal_arg] = "literal_arg",
  [sym_op_adc] = "op_adc",
  [sym_op_and] = "op_and",
  [sym_op_asl] = "op_asl",
  [sym_op_bcc] = "op_bcc",
  [sym_op_bcs] = "op_bcs",
  [sym_op_beq] = "op_beq",
  [sym_op_bit] = "op_bit",
  [sym_op_bmi] = "op_bmi",
  [sym_op_bne] = "op_bne",
  [sym_op_bpl] = "op_bpl",
  [sym_op_bra] = "op_bra",
  [sym_op_brk] = "op_brk",
  [sym_op_bvc] = "op_bvc",
  [sym_op_bvs] = "op_bvs",
  [sym_op_clc] = "op_clc",
  [sym_op_cld] = "op_cld",
  [sym_op_cli] = "op_cli",
  [sym_op_clv] = "op_clv",
  [sym_op_cmp] = "op_cmp",
  [sym_op_cpx] = "op_cpx",
  [sym_op_cpy] = "op_cpy",
  [sym_op_dec] = "op_dec",
  [sym_op_dex] = "op_dex",
  [sym_op_dey] = "op_dey",
  [sym_op_eor] = "op_eor",
  [sym_op_inc] = "op_inc",
  [sym_op_inx] = "op_inx",
  [sym_op_iny] = "op_iny",
  [sym_op_jmp] = "op_jmp",
  [sym_op_jsr] = "op_jsr",
  [sym_op_lda] = "op_lda",
  [sym_op_ldx] = "op_ldx",
  [sym_op_ldy] = "op_ldy",
  [sym_op_lsr] = "op_lsr",
  [sym_op_nop] = "op_nop",
  [sym_op_ora] = "op_ora",
  [sym_op_pha] = "op_pha",
  [sym_op_php] = "op_php",
  [sym_op_phx] = "op_phx",
  [sym_op_phy] = "op_phy",
  [sym_op_pla] = "op_pla",
  [sym_op_plp] = "op_plp",
  [sym_op_plx] = "op_plx",
  [sym_op_ply] = "op_ply",
  [sym_op_rol] = "op_rol",
  [sym_op_ror] = "op_ror",
  [sym_op_rti] = "op_rti",
  [sym_op_rts] = "op_rts",
  [sym_op_sbc] = "op_sbc",
  [sym_op_sec] = "op_sec",
  [sym_op_sed] = "op_sed",
  [sym_op_sei] = "op_sei",
  [sym_op_sta] = "op_sta",
  [sym_op_stx] = "op_stx",
  [sym_op_sty] = "op_sty",
  [sym_op_stz] = "op_stz",
  [sym_op_tax] = "op_tax",
  [sym_op_tay] = "op_tay",
  [sym_op_trb] = "op_trb",
  [sym_op_tsb] = "op_tsb",
  [sym_op_tsx] = "op_tsx",
  [sym_op_txa] = "op_txa",
  [sym_op_txs] = "op_txs",
  [sym_op_tya] = "op_tya",
  [sym_op_brl] = "op_brl",
  [sym_op_cop] = "op_cop",
  [sym_op_jml] = "op_jml",
  [sym_op_jsl] = "op_jsl",
  [sym_op_mvn] = "op_mvn",
  [sym_op_mvp] = "op_mvp",
  [sym_op_pea] = "op_pea",
  [sym_op_pei] = "op_pei",
  [sym_op_per] = "op_per",
  [sym_op_phb] = "op_phb",
  [sym_op_phd] = "op_phd",
  [sym_op_phk] = "op_phk",
  [sym_op_plb] = "op_plb",
  [sym_op_pld] = "op_pld",
  [sym_op_rep] = "op_rep",
  [sym_op_rtl] = "op_rtl",
  [sym_op_sep] = "op_sep",
  [sym_op_tcd] = "op_tcd",
  [sym_op_tcs] = "op_tcs",
  [sym_op_tdc] = "op_tdc",
  [sym_op_tsc] = "op_tsc",
  [sym_op_txy] = "op_txy",
  [sym_op_tyx] = "op_tyx",
  [sym_op_wai] = "op_wai",
  [sym_op_wdm] = "op_wdm",
  [sym_op_xba] = "op_xba",
  [sym_op_xce] = "op_xce",
  [sym_operation] = "operation",
  [sym_psop_equ] = "psop_equ",
  [sym_psop_ext] = "psop_ext",
  [sym_psop_ent] = "psop_ent",
  [sym_psop_org] = "psop_org",
  [sym_psop_rel] = "psop_rel",
  [sym_psop_obj] = "psop_obj",
  [sym_psop_put] = "psop_put",
  [sym_psop_use] = "psop_use",
  [sym_psop_var] = "psop_var",
  [sym_psop_sav] = "psop_sav",
  [sym_psop_typ] = "psop_typ",
  [sym_psop_dsk] = "psop_dsk",
  [sym_psop_end] = "psop_end",
  [sym_psop_dum] = "psop_dum",
  [sym_psop_dend] = "psop_dend",
  [sym_psop_ast] = "psop_ast",
  [sym_psop_cyc] = "psop_cyc",
  [sym_psop_dat] = "psop_dat",
  [sym_psop_exp] = "psop_exp",
  [sym_psop_lst] = "psop_lst",
  [sym_psop_lstdo] = "psop_lstdo",
  [sym_psop_pag] = "psop_pag",
  [sym_psop_ttl] = "psop_ttl",
  [sym_psop_skp] = "psop_skp",
  [sym_psop_tr] = "psop_tr",
  [sym_psop_asc] = "psop_asc",
  [sym_psop_dci] = "psop_dci",
  [sym_psop_inv] = "psop_inv",
  [sym_psop_fls] = "psop_fls",
  [sym_psop_rev] = "psop_rev",
  [sym_psop_str] = "psop_str",
  [sym_psop_da] = "psop_da",
  [sym_psop_ddb] = "psop_ddb",
  [sym_psop_dfb] = "psop_dfb",
  [sym_psop_adr] = "psop_adr",
  [sym_psop_adrl] = "psop_adrl",
  [sym_psop_hex] = "psop_hex",
  [sym_psop_ds] = "psop_ds",
  [sym_psop_do] = "psop_do",
  [sym_psop_else] = "psop_else",
  [sym_psop_if] = "psop_if",
  [sym_psop_fin] = "psop_fin",
  [sym_psop_chk] = "psop_chk",
  [sym_psop_err] = "psop_err",
  [sym_psop_kbd] = "psop_kbd",
  [sym_psop_lup] = "psop_lup",
  [sym_psop_mx] = "psop_mx",
  [sym_psop_pau] = "psop_pau",
  [sym_psop_sw] = "psop_sw",
  [sym_psop_usr] = "psop_usr",
  [sym_psop_xc] = "psop_xc",
  [sym_psop_mac] = "psop_mac",
  [sym_psop_eom] = "psop_eom",
  [sym_psop_pmc] = "psop_pmc",
  [sym_pseudo_operation] = "pseudo_operation",
  [sym__string_operand] = "_string_operand",
  [sym_dstring] = "dstring",
  [sym__addr_6502] = "_addr_6502",
  [sym_imm] = "imm",
  [sym_addr] = "addr",
  [sym_addr_x] = "addr_x",
  [sym_addr_y] = "addr_y",
  [sym_iaddr_ix] = "iaddr_ix",
  [sym_iaddr_y] = "iaddr_y",
  [sym_iaddr] = "iaddr",
  [sym_mode_x] = "mode_x",
  [sym_mode_y] = "mode_y",
  [sym_mode_iopen] = "mode_iopen",
  [sym_mode_iclose] = "mode_iclose",
  [sym_mode_iix] = "mode_iix",
  [sym_mode_iy] = "mode_iy",
  [sym__addr_65816] = "_addr_65816",
  [sym_daddr] = "daddr",
  [sym_daddr_y] = "daddr_y",
  [sym_addr_s] = "addr_s",
  [sym_iaddr_is_y] = "iaddr_is_y",
  [sym_xyc] = "xyc",
  [sym_mode_dopen] = "mode_dopen",
  [sym_mode_dclose] = "mode_dclose",
  [sym_mode_dy] = "mode_dy",
  [sym_mode_s] = "mode_s",
  [sym_mode_is_y] = "mode_is_y",
  [sym__eaexpr] = "_eaexpr",
  [sym__aexpr] = "_aexpr",
  [sym_unary_aexpr] = "unary_aexpr",
  [sym_binary_aexpr] = "binary_aexpr",
  [sym_eop_plus] = "eop_plus",
  [sym_eop_minus] = "eop_minus",
  [sym_eop_times] = "eop_times",
  [sym_eop_div] = "eop_div",
  [sym_eop_or] = "eop_or",
  [sym_eop_and] = "eop_and",
  [sym_eop_xor] = "eop_xor",
  [sym_imm_prefix] = "imm_prefix",
  [sym_hex_data] = "hex_data",
  [sym_filename] = "filename",
  [sym_prodos] = "prodos",
  [sym_dos33] = "dos33",
  [sym_number] = "number",
  [sym_decimal] = "decimal",
  [sym_hexadecimal] = "hexadecimal",
  [sym_binary] = "binary",
  [sym_pchar] = "pchar",
  [sym_nchar] = "nchar",
  [sym_current_addr] = "current_addr",
  [sym_literal] = "literal",
  [sym_comment] = "comment",
  [sym_comment_text] = "comment_text",
  [sym_main_comment] = "main_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_macro_args_repeat1] = "macro_args_repeat1",
  [aux_sym_literal_arg_repeat1] = "literal_arg_repeat1",
  [aux_sym_pseudo_operation_repeat1] = "pseudo_operation_repeat1",
  [aux_sym_pseudo_operation_repeat2] = "pseudo_operation_repeat2",
  [aux_sym_pseudo_operation_repeat3] = "pseudo_operation_repeat3",
  [aux_sym_pseudo_operation_repeat4] = "pseudo_operation_repeat4",
  [aux_sym_dstring_repeat1] = "dstring_repeat1",
  [aux_sym_hex_data_repeat1] = "hex_data_repeat1",
  [aux_sym_decimal_repeat1] = "decimal_repeat1",
  [aux_sym_hexadecimal_repeat1] = "hexadecimal_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__sep] = sym__sep,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_] = anon_sym_,
  [sym_global_label] = sym_global_label,
  [sym_local_label] = sym_local_label,
  [sym_var_label] = sym_var_label,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_J] = anon_sym_J,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_Q] = anon_sym_Q,
  [anon_sym_R] = anon_sym_R,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_W] = anon_sym_W,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_q] = anon_sym_q,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_adc] = anon_sym_adc,
  [anon_sym_ADC] = anon_sym_ADC,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_asl] = anon_sym_asl,
  [anon_sym_ASL] = anon_sym_ASL,
  [anon_sym_BLT] = anon_sym_BLT,
  [anon_sym_blt] = anon_sym_blt,
  [anon_sym_bcc] = anon_sym_bcc,
  [anon_sym_BCC] = anon_sym_BCC,
  [anon_sym_bcs] = anon_sym_bcs,
  [anon_sym_BCS] = anon_sym_BCS,
  [anon_sym_BGE] = anon_sym_BGE,
  [anon_sym_bge] = anon_sym_bge,
  [anon_sym_beq] = anon_sym_beq,
  [anon_sym_BEQ] = anon_sym_BEQ,
  [anon_sym_BIT] = anon_sym_BIT,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_BMI] = anon_sym_BMI,
  [anon_sym_bmi] = anon_sym_bmi,
  [anon_sym_bne] = anon_sym_bne,
  [anon_sym_BNE] = anon_sym_BNE,
  [anon_sym_bpl] = anon_sym_bpl,
  [anon_sym_BPL] = anon_sym_BPL,
  [anon_sym_BRA] = anon_sym_BRA,
  [anon_sym_bra] = anon_sym_bra,
  [anon_sym_BRK] = anon_sym_BRK,
  [anon_sym_brk] = anon_sym_brk,
  [anon_sym_bvc] = anon_sym_bvc,
  [anon_sym_BVC] = anon_sym_BVC,
  [anon_sym_bvs] = anon_sym_bvs,
  [anon_sym_BVS] = anon_sym_BVS,
  [anon_sym_CLC] = anon_sym_CLC,
  [anon_sym_clc] = anon_sym_clc,
  [anon_sym_cld] = anon_sym_cld,
  [anon_sym_CLD] = anon_sym_CLD,
  [anon_sym_cli] = anon_sym_cli,
  [anon_sym_CLI] = anon_sym_CLI,
  [anon_sym_CLV] = anon_sym_CLV,
  [anon_sym_clv] = anon_sym_clv,
  [anon_sym_CMP] = anon_sym_CMP,
  [anon_sym_cmp] = anon_sym_cmp,
  [anon_sym_cpx] = anon_sym_cpx,
  [anon_sym_CPX] = anon_sym_CPX,
  [anon_sym_CPY] = anon_sym_CPY,
  [anon_sym_cpy] = anon_sym_cpy,
  [anon_sym_dec] = anon_sym_dec,
  [anon_sym_DEC] = anon_sym_DEC,
  [anon_sym_dex] = anon_sym_dex,
  [anon_sym_DEX] = anon_sym_DEX,
  [anon_sym_DEY] = anon_sym_DEY,
  [anon_sym_dey] = anon_sym_dey,
  [anon_sym_eor] = anon_sym_eor,
  [anon_sym_EOR] = anon_sym_EOR,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_INC] = anon_sym_INC,
  [anon_sym_inx] = anon_sym_inx,
  [anon_sym_INX] = anon_sym_INX,
  [anon_sym_iny] = anon_sym_iny,
  [anon_sym_INY] = anon_sym_INY,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_JSR] = anon_sym_JSR,
  [anon_sym_jsr] = anon_sym_jsr,
  [anon_sym_LDA] = anon_sym_LDA,
  [anon_sym_lda] = anon_sym_lda,
  [anon_sym_LDX] = anon_sym_LDX,
  [anon_sym_ldx] = anon_sym_ldx,
  [anon_sym_LDY] = anon_sym_LDY,
  [anon_sym_ldy] = anon_sym_ldy,
  [anon_sym_LSR] = anon_sym_LSR,
  [anon_sym_lsr] = anon_sym_lsr,
  [anon_sym_NOP] = anon_sym_NOP,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_ORA] = anon_sym_ORA,
  [anon_sym_ora] = anon_sym_ora,
  [anon_sym_pha] = anon_sym_pha,
  [anon_sym_PHA] = anon_sym_PHA,
  [anon_sym_PHP] = anon_sym_PHP,
  [anon_sym_php] = anon_sym_php,
  [anon_sym_phx] = anon_sym_phx,
  [anon_sym_PHX] = anon_sym_PHX,
  [anon_sym_phy] = anon_sym_phy,
  [anon_sym_PHY] = anon_sym_PHY,
  [anon_sym_PLA] = anon_sym_PLA,
  [anon_sym_pla] = anon_sym_pla,
  [anon_sym_plp] = anon_sym_plp,
  [anon_sym_PLP] = anon_sym_PLP,
  [anon_sym_PLX] = anon_sym_PLX,
  [anon_sym_plx] = anon_sym_plx,
  [anon_sym_ply] = anon_sym_ply,
  [anon_sym_PLY] = anon_sym_PLY,
  [anon_sym_ROL] = anon_sym_ROL,
  [anon_sym_rol] = anon_sym_rol,
  [anon_sym_ROR] = anon_sym_ROR,
  [anon_sym_ror] = anon_sym_ror,
  [anon_sym_rti] = anon_sym_rti,
  [anon_sym_RTI] = anon_sym_RTI,
  [anon_sym_rts] = anon_sym_rts,
  [anon_sym_RTS] = anon_sym_RTS,
  [anon_sym_sbc] = anon_sym_sbc,
  [anon_sym_SBC] = anon_sym_SBC,
  [anon_sym_sec] = anon_sym_sec,
  [anon_sym_SEC] = anon_sym_SEC,
  [anon_sym_sed] = anon_sym_sed,
  [anon_sym_SED] = anon_sym_SED,
  [anon_sym_SEI] = anon_sym_SEI,
  [anon_sym_sei] = anon_sym_sei,
  [anon_sym_STA] = anon_sym_STA,
  [anon_sym_sta] = anon_sym_sta,
  [anon_sym_STX] = anon_sym_STX,
  [anon_sym_stx] = anon_sym_stx,
  [anon_sym_STY] = anon_sym_STY,
  [anon_sym_sty] = anon_sym_sty,
  [anon_sym_STZ] = anon_sym_STZ,
  [anon_sym_stz] = anon_sym_stz,
  [anon_sym_TAX] = anon_sym_TAX,
  [anon_sym_tax] = anon_sym_tax,
  [anon_sym_tay] = anon_sym_tay,
  [anon_sym_TAY] = anon_sym_TAY,
  [anon_sym_trb] = anon_sym_trb,
  [anon_sym_TRB] = anon_sym_TRB,
  [anon_sym_TSB] = anon_sym_TSB,
  [anon_sym_tsb] = anon_sym_tsb,
  [anon_sym_tsx] = anon_sym_tsx,
  [anon_sym_TSX] = anon_sym_TSX,
  [anon_sym_txa] = anon_sym_txa,
  [anon_sym_TXA] = anon_sym_TXA,
  [anon_sym_txs] = anon_sym_txs,
  [anon_sym_TXS] = anon_sym_TXS,
  [anon_sym_tya] = anon_sym_tya,
  [anon_sym_TYA] = anon_sym_TYA,
  [anon_sym_BRL] = anon_sym_BRL,
  [anon_sym_brl] = anon_sym_brl,
  [anon_sym_COP] = anon_sym_COP,
  [anon_sym_cop] = anon_sym_cop,
  [anon_sym_jml] = anon_sym_jml,
  [anon_sym_JML] = anon_sym_JML,
  [anon_sym_JSL] = anon_sym_JSL,
  [anon_sym_jsl] = anon_sym_jsl,
  [anon_sym_MVN] = anon_sym_MVN,
  [anon_sym_mvn] = anon_sym_mvn,
  [anon_sym_MVP] = anon_sym_MVP,
  [anon_sym_mvp] = anon_sym_mvp,
  [anon_sym_PEA] = anon_sym_PEA,
  [anon_sym_pea] = anon_sym_pea,
  [anon_sym_PEI] = anon_sym_PEI,
  [anon_sym_pei] = anon_sym_pei,
  [anon_sym_PER] = anon_sym_PER,
  [anon_sym_per] = anon_sym_per,
  [anon_sym_PHB] = anon_sym_PHB,
  [anon_sym_phb] = anon_sym_phb,
  [anon_sym_PHD] = anon_sym_PHD,
  [anon_sym_phd] = anon_sym_phd,
  [anon_sym_phk] = anon_sym_phk,
  [anon_sym_PHK] = anon_sym_PHK,
  [anon_sym_plb] = anon_sym_plb,
  [anon_sym_PLB] = anon_sym_PLB,
  [anon_sym_PLD] = anon_sym_PLD,
  [anon_sym_pld] = anon_sym_pld,
  [anon_sym_REP] = anon_sym_REP,
  [anon_sym_rep] = anon_sym_rep,
  [anon_sym_RTL] = anon_sym_RTL,
  [anon_sym_rtl] = anon_sym_rtl,
  [anon_sym_SEP] = anon_sym_SEP,
  [anon_sym_sep] = anon_sym_sep,
  [anon_sym_TCD] = anon_sym_TCD,
  [anon_sym_tad] = anon_sym_tad,
  [anon_sym_TAD] = anon_sym_TAD,
  [anon_sym_tcd] = anon_sym_tcd,
  [anon_sym_TAS] = anon_sym_TAS,
  [anon_sym_TCS] = anon_sym_TCS,
  [anon_sym_tas] = anon_sym_tas,
  [anon_sym_tcs] = anon_sym_tcs,
  [anon_sym_tdc] = anon_sym_tdc,
  [anon_sym_tda] = anon_sym_tda,
  [anon_sym_TDC] = anon_sym_TDC,
  [anon_sym_TDA] = anon_sym_TDA,
  [anon_sym_tsc] = anon_sym_tsc,
  [anon_sym_TSC] = anon_sym_TSC,
  [anon_sym_TSA] = anon_sym_TSA,
  [anon_sym_tsa] = anon_sym_tsa,
  [anon_sym_TXY] = anon_sym_TXY,
  [anon_sym_txy] = anon_sym_txy,
  [anon_sym_tyx] = anon_sym_tyx,
  [anon_sym_TYX] = anon_sym_TYX,
  [anon_sym_WAI] = anon_sym_WAI,
  [anon_sym_wai] = anon_sym_wai,
  [anon_sym_WDM] = anon_sym_WDM,
  [anon_sym_wdm] = anon_sym_wdm,
  [anon_sym_SWA] = anon_sym_SWA,
  [anon_sym_xba] = anon_sym_xba,
  [anon_sym_XBA] = anon_sym_XBA,
  [anon_sym_swa] = anon_sym_swa,
  [anon_sym_XCE] = anon_sym_XCE,
  [anon_sym_xce] = anon_sym_xce,
  [anon_sym_equ] = anon_sym_equ,
  [anon_sym_EQU] = anon_sym_EQU,
  [anon_sym_EXT] = anon_sym_EXT,
  [anon_sym_ext] = anon_sym_ext,
  [anon_sym_ent] = anon_sym_ent,
  [anon_sym_ENT] = anon_sym_ENT,
  [anon_sym_ORG] = anon_sym_ORG,
  [anon_sym_org] = anon_sym_org,
  [anon_sym_REL] = anon_sym_REL,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_OBJ] = anon_sym_OBJ,
  [anon_sym_obj] = anon_sym_obj,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_USE] = anon_sym_USE,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_VAR] = anon_sym_VAR,
  [anon_sym_sav] = anon_sym_sav,
  [anon_sym_SAV] = anon_sym_SAV,
  [anon_sym_TYP] = anon_sym_TYP,
  [anon_sym_typ] = anon_sym_typ,
  [anon_sym_DSK] = anon_sym_DSK,
  [anon_sym_dsk] = anon_sym_dsk,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_dum] = anon_sym_dum,
  [anon_sym_DUM] = anon_sym_DUM,
  [anon_sym_dend] = anon_sym_dend,
  [anon_sym_DEND] = anon_sym_DEND,
  [anon_sym_AST] = anon_sym_AST,
  [anon_sym_ast] = anon_sym_ast,
  [anon_sym_cyc] = anon_sym_cyc,
  [anon_sym_CYC] = anon_sym_CYC,
  [anon_sym_DAT] = anon_sym_DAT,
  [anon_sym_dat] = anon_sym_dat,
  [anon_sym_EXP] = anon_sym_EXP,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_lst] = anon_sym_lst,
  [anon_sym_LST] = anon_sym_LST,
  [anon_sym_lstdo] = anon_sym_lstdo,
  [anon_sym_LSTDO] = anon_sym_LSTDO,
  [anon_sym_PAG] = anon_sym_PAG,
  [anon_sym_pag] = anon_sym_pag,
  [anon_sym_TTL] = anon_sym_TTL,
  [anon_sym_ttl] = anon_sym_ttl,
  [anon_sym_skp] = anon_sym_skp,
  [anon_sym_SKP] = anon_sym_SKP,
  [anon_sym_tr] = anon_sym_tr,
  [anon_sym_TR] = anon_sym_TR,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_DCI] = anon_sym_DCI,
  [anon_sym_dci] = anon_sym_dci,
  [anon_sym_inv] = anon_sym_inv,
  [anon_sym_INV] = anon_sym_INV,
  [anon_sym_fls] = anon_sym_fls,
  [anon_sym_FLS] = anon_sym_FLS,
  [anon_sym_REV] = anon_sym_REV,
  [anon_sym_rev] = anon_sym_rev,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_STR] = anon_sym_STR,
  [anon_sym_da] = anon_sym_da,
  [anon_sym_DA] = anon_sym_DA,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_DW] = anon_sym_DW,
  [anon_sym_DDB] = anon_sym_DDB,
  [anon_sym_ddb] = anon_sym_ddb,
  [anon_sym_DFB] = anon_sym_DFB,
  [anon_sym_db] = anon_sym_db,
  [anon_sym_DB] = anon_sym_DB,
  [anon_sym_dfb] = anon_sym_dfb,
  [anon_sym_ADR] = anon_sym_ADR,
  [anon_sym_adr] = anon_sym_adr,
  [anon_sym_adrl] = anon_sym_adrl,
  [anon_sym_ADRL] = anon_sym_ADRL,
  [anon_sym_HEX] = anon_sym_HEX,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_DS] = anon_sym_DS,
  [anon_sym_ds] = anon_sym_ds,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_FIN] = anon_sym_FIN,
  [anon_sym_fin] = anon_sym_fin,
  [anon_sym_CHK] = anon_sym_CHK,
  [anon_sym_chk] = anon_sym_chk,
  [anon_sym_ERR] = anon_sym_ERR,
  [anon_sym_err] = anon_sym_err,
  [anon_sym_KBD] = anon_sym_KBD,
  [anon_sym_kbd] = anon_sym_kbd,
  [anon_sym_LUP] = anon_sym_LUP,
  [anon_sym_lup] = anon_sym_lup,
  [sym_psop_end_lup] = sym_psop_end_lup,
  [anon_sym_MX] = anon_sym_MX,
  [anon_sym_mx] = anon_sym_mx,
  [anon_sym_pau] = anon_sym_pau,
  [anon_sym_PAU] = anon_sym_PAU,
  [anon_sym_sw] = anon_sym_sw,
  [anon_sym_SW] = anon_sym_SW,
  [anon_sym_USR] = anon_sym_USR,
  [anon_sym_usr] = anon_sym_usr,
  [anon_sym_XC] = anon_sym_XC,
  [anon_sym_xc] = anon_sym_xc,
  [anon_sym_mac] = anon_sym_mac,
  [anon_sym_MAC] = anon_sym_MAC,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_EOM] = anon_sym_EOM,
  [anon_sym_eom] = anon_sym_eom,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_pmc] = anon_sym_pmc,
  [anon_sym_PMC] = anon_sym_PMC,
  [anon_sym_OFF] = anon_sym_OFF,
  [anon_sym_AVE] = anon_sym_AVE,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_ONLY] = anon_sym_ONLY,
  [aux_sym_pseudo_operation_token1] = aux_sym_pseudo_operation_token1,
  [anon_sym_COMMAX] = anon_sym_COMMAX,
  [anon_sym_COMMAx] = anon_sym_COMMAx,
  [anon_sym_COMMAY] = anon_sym_COMMAY,
  [anon_sym_COMMAy] = anon_sym_COMMAy,
  [anon_sym_COMMAX_RPAREN] = anon_sym_COMMAX_RPAREN,
  [anon_sym_COMMAx_RPAREN] = anon_sym_COMMAx_RPAREN,
  [anon_sym_RPAREN_COMMAY] = anon_sym_RPAREN_COMMAY,
  [anon_sym_RPAREN_COMMAy] = anon_sym_RPAREN_COMMAy,
  [anon_sym_RBRACK_COMMAY] = anon_sym_RBRACK_COMMAY,
  [anon_sym_RBRACK_COMMAy] = anon_sym_RBRACK_COMMAy,
  [anon_sym_COMMAS] = anon_sym_COMMAS,
  [anon_sym_COMMAs] = anon_sym_COMMAs,
  [anon_sym_COMMAS_RPAREN_COMMAY] = anon_sym_COMMAS_RPAREN_COMMAY,
  [anon_sym_COMMAs_RPAREN_COMMAy] = anon_sym_COMMAs_RPAREN_COMMAy,
  [anon_sym_POUND_LT] = anon_sym_POUND_LT,
  [anon_sym_POUND_GT] = anon_sym_POUND_GT,
  [anon_sym_POUND_CARET] = anon_sym_POUND_CARET,
  [sym_hex_byte] = sym_hex_byte,
  [aux_sym_prodos_token1] = aux_sym_prodos_token1,
  [aux_sym_dos33_token1] = aux_sym_dos33_token1,
  [aux_sym_pchar_token1] = aux_sym_pchar_token1,
  [aux_sym_nchar_token1] = aux_sym_nchar_token1,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_main_comment_token1] = aux_sym_main_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__factor] = sym__factor,
  [sym_program_counter] = sym_program_counter,
  [sym_macro_calli] = sym_macro_calli,
  [sym__newline] = sym__newline,
  [sym__arg_sep] = sym__arg_sep,
  [sym__label] = sym__label,
  [sym_macro_args] = sym_macro_args,
  [sym__arg] = sym__arg,
  [sym_literal_arg] = sym_literal_arg,
  [sym_op_adc] = sym_op_adc,
  [sym_op_and] = sym_op_and,
  [sym_op_asl] = sym_op_asl,
  [sym_op_bcc] = sym_op_bcc,
  [sym_op_bcs] = sym_op_bcs,
  [sym_op_beq] = sym_op_beq,
  [sym_op_bit] = sym_op_bit,
  [sym_op_bmi] = sym_op_bmi,
  [sym_op_bne] = sym_op_bne,
  [sym_op_bpl] = sym_op_bpl,
  [sym_op_bra] = sym_op_bra,
  [sym_op_brk] = sym_op_brk,
  [sym_op_bvc] = sym_op_bvc,
  [sym_op_bvs] = sym_op_bvs,
  [sym_op_clc] = sym_op_clc,
  [sym_op_cld] = sym_op_cld,
  [sym_op_cli] = sym_op_cli,
  [sym_op_clv] = sym_op_clv,
  [sym_op_cmp] = sym_op_cmp,
  [sym_op_cpx] = sym_op_cpx,
  [sym_op_cpy] = sym_op_cpy,
  [sym_op_dec] = sym_op_dec,
  [sym_op_dex] = sym_op_dex,
  [sym_op_dey] = sym_op_dey,
  [sym_op_eor] = sym_op_eor,
  [sym_op_inc] = sym_op_inc,
  [sym_op_inx] = sym_op_inx,
  [sym_op_iny] = sym_op_iny,
  [sym_op_jmp] = sym_op_jmp,
  [sym_op_jsr] = sym_op_jsr,
  [sym_op_lda] = sym_op_lda,
  [sym_op_ldx] = sym_op_ldx,
  [sym_op_ldy] = sym_op_ldy,
  [sym_op_lsr] = sym_op_lsr,
  [sym_op_nop] = sym_op_nop,
  [sym_op_ora] = sym_op_ora,
  [sym_op_pha] = sym_op_pha,
  [sym_op_php] = sym_op_php,
  [sym_op_phx] = sym_op_phx,
  [sym_op_phy] = sym_op_phy,
  [sym_op_pla] = sym_op_pla,
  [sym_op_plp] = sym_op_plp,
  [sym_op_plx] = sym_op_plx,
  [sym_op_ply] = sym_op_ply,
  [sym_op_rol] = sym_op_rol,
  [sym_op_ror] = sym_op_ror,
  [sym_op_rti] = sym_op_rti,
  [sym_op_rts] = sym_op_rts,
  [sym_op_sbc] = sym_op_sbc,
  [sym_op_sec] = sym_op_sec,
  [sym_op_sed] = sym_op_sed,
  [sym_op_sei] = sym_op_sei,
  [sym_op_sta] = sym_op_sta,
  [sym_op_stx] = sym_op_stx,
  [sym_op_sty] = sym_op_sty,
  [sym_op_stz] = sym_op_stz,
  [sym_op_tax] = sym_op_tax,
  [sym_op_tay] = sym_op_tay,
  [sym_op_trb] = sym_op_trb,
  [sym_op_tsb] = sym_op_tsb,
  [sym_op_tsx] = sym_op_tsx,
  [sym_op_txa] = sym_op_txa,
  [sym_op_txs] = sym_op_txs,
  [sym_op_tya] = sym_op_tya,
  [sym_op_brl] = sym_op_brl,
  [sym_op_cop] = sym_op_cop,
  [sym_op_jml] = sym_op_jml,
  [sym_op_jsl] = sym_op_jsl,
  [sym_op_mvn] = sym_op_mvn,
  [sym_op_mvp] = sym_op_mvp,
  [sym_op_pea] = sym_op_pea,
  [sym_op_pei] = sym_op_pei,
  [sym_op_per] = sym_op_per,
  [sym_op_phb] = sym_op_phb,
  [sym_op_phd] = sym_op_phd,
  [sym_op_phk] = sym_op_phk,
  [sym_op_plb] = sym_op_plb,
  [sym_op_pld] = sym_op_pld,
  [sym_op_rep] = sym_op_rep,
  [sym_op_rtl] = sym_op_rtl,
  [sym_op_sep] = sym_op_sep,
  [sym_op_tcd] = sym_op_tcd,
  [sym_op_tcs] = sym_op_tcs,
  [sym_op_tdc] = sym_op_tdc,
  [sym_op_tsc] = sym_op_tsc,
  [sym_op_txy] = sym_op_txy,
  [sym_op_tyx] = sym_op_tyx,
  [sym_op_wai] = sym_op_wai,
  [sym_op_wdm] = sym_op_wdm,
  [sym_op_xba] = sym_op_xba,
  [sym_op_xce] = sym_op_xce,
  [sym_operation] = sym_operation,
  [sym_psop_equ] = sym_psop_equ,
  [sym_psop_ext] = sym_psop_ext,
  [sym_psop_ent] = sym_psop_ent,
  [sym_psop_org] = sym_psop_org,
  [sym_psop_rel] = sym_psop_rel,
  [sym_psop_obj] = sym_psop_obj,
  [sym_psop_put] = sym_psop_put,
  [sym_psop_use] = sym_psop_use,
  [sym_psop_var] = sym_psop_var,
  [sym_psop_sav] = sym_psop_sav,
  [sym_psop_typ] = sym_psop_typ,
  [sym_psop_dsk] = sym_psop_dsk,
  [sym_psop_end] = sym_psop_end,
  [sym_psop_dum] = sym_psop_dum,
  [sym_psop_dend] = sym_psop_dend,
  [sym_psop_ast] = sym_psop_ast,
  [sym_psop_cyc] = sym_psop_cyc,
  [sym_psop_dat] = sym_psop_dat,
  [sym_psop_exp] = sym_psop_exp,
  [sym_psop_lst] = sym_psop_lst,
  [sym_psop_lstdo] = sym_psop_lstdo,
  [sym_psop_pag] = sym_psop_pag,
  [sym_psop_ttl] = sym_psop_ttl,
  [sym_psop_skp] = sym_psop_skp,
  [sym_psop_tr] = sym_psop_tr,
  [sym_psop_asc] = sym_psop_asc,
  [sym_psop_dci] = sym_psop_dci,
  [sym_psop_inv] = sym_psop_inv,
  [sym_psop_fls] = sym_psop_fls,
  [sym_psop_rev] = sym_psop_rev,
  [sym_psop_str] = sym_psop_str,
  [sym_psop_da] = sym_psop_da,
  [sym_psop_ddb] = sym_psop_ddb,
  [sym_psop_dfb] = sym_psop_dfb,
  [sym_psop_adr] = sym_psop_adr,
  [sym_psop_adrl] = sym_psop_adrl,
  [sym_psop_hex] = sym_psop_hex,
  [sym_psop_ds] = sym_psop_ds,
  [sym_psop_do] = sym_psop_do,
  [sym_psop_else] = sym_psop_else,
  [sym_psop_if] = sym_psop_if,
  [sym_psop_fin] = sym_psop_fin,
  [sym_psop_chk] = sym_psop_chk,
  [sym_psop_err] = sym_psop_err,
  [sym_psop_kbd] = sym_psop_kbd,
  [sym_psop_lup] = sym_psop_lup,
  [sym_psop_mx] = sym_psop_mx,
  [sym_psop_pau] = sym_psop_pau,
  [sym_psop_sw] = sym_psop_sw,
  [sym_psop_usr] = sym_psop_usr,
  [sym_psop_xc] = sym_psop_xc,
  [sym_psop_mac] = sym_psop_mac,
  [sym_psop_eom] = sym_psop_eom,
  [sym_psop_pmc] = sym_psop_pmc,
  [sym_pseudo_operation] = sym_pseudo_operation,
  [sym__string_operand] = sym__string_operand,
  [sym_dstring] = sym_dstring,
  [sym__addr_6502] = sym__addr_6502,
  [sym_imm] = sym_imm,
  [sym_addr] = sym_addr,
  [sym_addr_x] = sym_addr_x,
  [sym_addr_y] = sym_addr_y,
  [sym_iaddr_ix] = sym_iaddr_ix,
  [sym_iaddr_y] = sym_iaddr_y,
  [sym_iaddr] = sym_iaddr,
  [sym_mode_x] = sym_mode_x,
  [sym_mode_y] = sym_mode_y,
  [sym_mode_iopen] = sym_mode_iopen,
  [sym_mode_iclose] = sym_mode_iclose,
  [sym_mode_iix] = sym_mode_iix,
  [sym_mode_iy] = sym_mode_iy,
  [sym__addr_65816] = sym__addr_65816,
  [sym_daddr] = sym_daddr,
  [sym_daddr_y] = sym_daddr_y,
  [sym_addr_s] = sym_addr_s,
  [sym_iaddr_is_y] = sym_iaddr_is_y,
  [sym_xyc] = sym_xyc,
  [sym_mode_dopen] = sym_mode_dopen,
  [sym_mode_dclose] = sym_mode_dclose,
  [sym_mode_dy] = sym_mode_dy,
  [sym_mode_s] = sym_mode_s,
  [sym_mode_is_y] = sym_mode_is_y,
  [sym__eaexpr] = sym__eaexpr,
  [sym__aexpr] = sym__aexpr,
  [sym_unary_aexpr] = sym_unary_aexpr,
  [sym_binary_aexpr] = sym_binary_aexpr,
  [sym_eop_plus] = sym_eop_plus,
  [sym_eop_minus] = sym_eop_minus,
  [sym_eop_times] = sym_eop_times,
  [sym_eop_div] = sym_eop_div,
  [sym_eop_or] = sym_eop_or,
  [sym_eop_and] = sym_eop_and,
  [sym_eop_xor] = sym_eop_xor,
  [sym_imm_prefix] = sym_imm_prefix,
  [sym_hex_data] = sym_hex_data,
  [sym_filename] = sym_filename,
  [sym_prodos] = sym_prodos,
  [sym_dos33] = sym_dos33,
  [sym_number] = sym_number,
  [sym_decimal] = sym_decimal,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_binary] = sym_binary,
  [sym_pchar] = sym_pchar,
  [sym_nchar] = sym_nchar,
  [sym_current_addr] = sym_current_addr,
  [sym_literal] = sym_literal,
  [sym_comment] = sym_comment,
  [sym_comment_text] = sym_comment_text,
  [sym_main_comment] = sym_main_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_macro_args_repeat1] = aux_sym_macro_args_repeat1,
  [aux_sym_literal_arg_repeat1] = aux_sym_literal_arg_repeat1,
  [aux_sym_pseudo_operation_repeat1] = aux_sym_pseudo_operation_repeat1,
  [aux_sym_pseudo_operation_repeat2] = aux_sym_pseudo_operation_repeat2,
  [aux_sym_pseudo_operation_repeat3] = aux_sym_pseudo_operation_repeat3,
  [aux_sym_pseudo_operation_repeat4] = aux_sym_pseudo_operation_repeat4,
  [aux_sym_dstring_repeat1] = aux_sym_dstring_repeat1,
  [aux_sym_hex_data_repeat1] = aux_sym_hex_data_repeat1,
  [aux_sym_decimal_repeat1] = aux_sym_decimal_repeat1,
  [aux_sym_hexadecimal_repeat1] = aux_sym_hexadecimal_repeat1,
  [aux_sym_binary_repeat1] = aux_sym_binary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_global_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_label] = {
    .visible = true,
    .named = true,
  },
  [sym_var_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_J] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_W] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BCC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BCS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bmi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BPL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BVC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BVS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CPX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LSR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ora] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pha] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_php] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SBC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TXA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TXS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tya] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MVN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mvn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MVP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mvp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PEA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PEI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_per] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PHK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rtl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tdc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TDC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TDA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TXY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tyx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wai] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WDM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wdm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XBA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_org] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OBJ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sav] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DSK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dsk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cyc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CYC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lstdo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LSTDO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ttl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SKP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DCI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dci] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_da] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DDB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ddb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DFB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_db] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dfb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_err] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KBD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kbd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lup] = {
    .visible = true,
    .named = false,
  },
  [sym_psop_end_lup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PMC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONLY] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pseudo_operation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAX_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAx_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_COMMAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_COMMAy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_COMMAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_COMMAy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAS_RPAREN_COMMAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAs_RPAREN_COMMAy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_byte] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prodos_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dos33_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pchar_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nchar_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_main_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__factor] = {
    .visible = false,
    .named = true,
  },
  [sym_program_counter] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_calli] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_sep] = {
    .visible = false,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_args] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_op_adc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_and] = {
    .visible = true,
    .named = true,
  },
  [sym_op_asl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bcc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bcs] = {
    .visible = true,
    .named = true,
  },
  [sym_op_beq] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bit] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bmi] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bne] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bpl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bra] = {
    .visible = true,
    .named = true,
  },
  [sym_op_brk] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bvc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bvs] = {
    .visible = true,
    .named = true,
  },
  [sym_op_clc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_cld] = {
    .visible = true,
    .named = true,
  },
  [sym_op_cli] = {
    .visible = true,
    .named = true,
  },
  [sym_op_clv] = {
    .visible = true,
    .named = true,
  },
  [sym_op_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_op_cpx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_cpy] = {
    .visible = true,
    .named = true,
  },
  [sym_op_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_op_dex] = {
    .visible = true,
    .named = true,
  },
  [sym_op_dey] = {
    .visible = true,
    .named = true,
  },
  [sym_op_eor] = {
    .visible = true,
    .named = true,
  },
  [sym_op_inc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_inx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_iny] = {
    .visible = true,
    .named = true,
  },
  [sym_op_jmp] = {
    .visible = true,
    .named = true,
  },
  [sym_op_jsr] = {
    .visible = true,
    .named = true,
  },
  [sym_op_lda] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ldx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ldy] = {
    .visible = true,
    .named = true,
  },
  [sym_op_lsr] = {
    .visible = true,
    .named = true,
  },
  [sym_op_nop] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ora] = {
    .visible = true,
    .named = true,
  },
  [sym_op_pha] = {
    .visible = true,
    .named = true,
  },
  [sym_op_php] = {
    .visible = true,
    .named = true,
  },
  [sym_op_phx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_phy] = {
    .visible = true,
    .named = true,
  },
  [sym_op_pla] = {
    .visible = true,
    .named = true,
  },
  [sym_op_plp] = {
    .visible = true,
    .named = true,
  },
  [sym_op_plx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ply] = {
    .visible = true,
    .named = true,
  },
  [sym_op_rol] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ror] = {
    .visible = true,
    .named = true,
  },
  [sym_op_rti] = {
    .visible = true,
    .named = true,
  },
  [sym_op_rts] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sbc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sec] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sed] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sei] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sta] = {
    .visible = true,
    .named = true,
  },
  [sym_op_stx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sty] = {
    .visible = true,
    .named = true,
  },
  [sym_op_stz] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tax] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tay] = {
    .visible = true,
    .named = true,
  },
  [sym_op_trb] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tsb] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tsx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_txa] = {
    .visible = true,
    .named = true,
  },
  [sym_op_txs] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tya] = {
    .visible = true,
    .named = true,
  },
  [sym_op_brl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_cop] = {
    .visible = true,
    .named = true,
  },
  [sym_op_jml] = {
    .visible = true,
    .named = true,
  },
  [sym_op_jsl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_mvn] = {
    .visible = true,
    .named = true,
  },
  [sym_op_mvp] = {
    .visible = true,
    .named = true,
  },
  [sym_op_pea] = {
    .visible = true,
    .named = true,
  },
  [sym_op_pei] = {
    .visible = true,
    .named = true,
  },
  [sym_op_per] = {
    .visible = true,
    .named = true,
  },
  [sym_op_phb] = {
    .visible = true,
    .named = true,
  },
  [sym_op_phd] = {
    .visible = true,
    .named = true,
  },
  [sym_op_phk] = {
    .visible = true,
    .named = true,
  },
  [sym_op_plb] = {
    .visible = true,
    .named = true,
  },
  [sym_op_pld] = {
    .visible = true,
    .named = true,
  },
  [sym_op_rep] = {
    .visible = true,
    .named = true,
  },
  [sym_op_rtl] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tcd] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tcs] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tdc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tsc] = {
    .visible = true,
    .named = true,
  },
  [sym_op_txy] = {
    .visible = true,
    .named = true,
  },
  [sym_op_tyx] = {
    .visible = true,
    .named = true,
  },
  [sym_op_wai] = {
    .visible = true,
    .named = true,
  },
  [sym_op_wdm] = {
    .visible = true,
    .named = true,
  },
  [sym_op_xba] = {
    .visible = true,
    .named = true,
  },
  [sym_op_xce] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_equ] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_ext] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_ent] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_org] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_rel] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_obj] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_put] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_use] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_var] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_sav] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_typ] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_dsk] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_end] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_dum] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_dend] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_ast] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_cyc] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_dat] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_lst] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_lstdo] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_pag] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_ttl] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_skp] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_tr] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_asc] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_dci] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_inv] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_fls] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_rev] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_str] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_da] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_ddb] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_dfb] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_adr] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_adrl] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_ds] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_do] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_else] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_if] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_fin] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_chk] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_err] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_kbd] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_lup] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_mx] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_pau] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_sw] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_usr] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_xc] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_mac] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_eom] = {
    .visible = true,
    .named = true,
  },
  [sym_psop_pmc] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__string_operand] = {
    .visible = false,
    .named = true,
  },
  [sym_dstring] = {
    .visible = true,
    .named = true,
  },
  [sym__addr_6502] = {
    .visible = false,
    .named = true,
  },
  [sym_imm] = {
    .visible = true,
    .named = true,
  },
  [sym_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_x] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_y] = {
    .visible = true,
    .named = true,
  },
  [sym_iaddr_ix] = {
    .visible = true,
    .named = true,
  },
  [sym_iaddr_y] = {
    .visible = true,
    .named = true,
  },
  [sym_iaddr] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_x] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_y] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_iopen] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_iclose] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_iix] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_iy] = {
    .visible = true,
    .named = true,
  },
  [sym__addr_65816] = {
    .visible = false,
    .named = true,
  },
  [sym_daddr] = {
    .visible = true,
    .named = true,
  },
  [sym_daddr_y] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_s] = {
    .visible = true,
    .named = true,
  },
  [sym_iaddr_is_y] = {
    .visible = true,
    .named = true,
  },
  [sym_xyc] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_dopen] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_dclose] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_dy] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_s] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_is_y] = {
    .visible = true,
    .named = true,
  },
  [sym__eaexpr] = {
    .visible = false,
    .named = true,
  },
  [sym__aexpr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_aexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_aexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_times] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_div] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_or] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_and] = {
    .visible = true,
    .named = true,
  },
  [sym_eop_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_data] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_prodos] = {
    .visible = true,
    .named = true,
  },
  [sym_dos33] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_pchar] = {
    .visible = true,
    .named = true,
  },
  [sym_nchar] = {
    .visible = true,
    .named = true,
  },
  [sym_current_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_main_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_operation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_operation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_operation_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_operation_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dstring_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '\t') ADVANCE(131);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(364);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '>') ADVANCE(368);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'B') ADVANCE(376);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'F') ADVANCE(384);
      if (lookahead == 'G') ADVANCE(386);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(390);
      if (lookahead == 'J') ADVANCE(392);
      if (lookahead == 'K') ADVANCE(394);
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'M') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(400);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == 'P') ADVANCE(404);
      if (lookahead == 'Q') ADVANCE(406);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'U') ADVANCE(414);
      if (lookahead == 'V') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(418);
      if (lookahead == 'X') ADVANCE(420);
      if (lookahead == 'Y') ADVANCE(422);
      if (lookahead == 'Z') ADVANCE(424);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '_') ADVANCE(435);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(449);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'j') ADVANCE(457);
      if (lookahead == 'k') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 'q') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(481);
      if (lookahead == 'w') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(485);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == 'z') ADVANCE(489);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == '|') ADVANCE(493);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '~') ADVANCE(497);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(131);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(361);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(363);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '>') ADVANCE(367);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(379);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'G') ADVANCE(385);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'I') ADVANCE(389);
      if (lookahead == 'J') ADVANCE(391);
      if (lookahead == 'K') ADVANCE(393);
      if (lookahead == 'L') ADVANCE(395);
      if (lookahead == 'M') ADVANCE(397);
      if (lookahead == 'N') ADVANCE(399);
      if (lookahead == 'O') ADVANCE(401);
      if (lookahead == 'P') ADVANCE(403);
      if (lookahead == 'Q') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(407);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(411);
      if (lookahead == 'U') ADVANCE(413);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'W') ADVANCE(417);
      if (lookahead == 'X') ADVANCE(419);
      if (lookahead == 'Y') ADVANCE(421);
      if (lookahead == 'Z') ADVANCE(423);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(426);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == '^') ADVANCE(432);
      if (lookahead == '_') ADVANCE(434);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == 'g') ADVANCE(450);
      if (lookahead == 'h') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == 'j') ADVANCE(456);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == 'q') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == 'w') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(484);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead == 'z') ADVANCE(488);
      if (lookahead == '{') ADVANCE(490);
      if (lookahead == '|') ADVANCE(492);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '~') ADVANCE(496);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(131);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (('<' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(364);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '>') ADVANCE(368);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'B') ADVANCE(376);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'F') ADVANCE(384);
      if (lookahead == 'G') ADVANCE(386);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(390);
      if (lookahead == 'J') ADVANCE(392);
      if (lookahead == 'K') ADVANCE(394);
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'M') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(400);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == 'P') ADVANCE(404);
      if (lookahead == 'Q') ADVANCE(406);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'U') ADVANCE(414);
      if (lookahead == 'V') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(418);
      if (lookahead == 'X') ADVANCE(420);
      if (lookahead == 'Y') ADVANCE(422);
      if (lookahead == 'Z') ADVANCE(424);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead == ']') ADVANCE(431);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '_') ADVANCE(435);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(449);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'j') ADVANCE(457);
      if (lookahead == 'k') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 'q') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(481);
      if (lookahead == 'w') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(485);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == 'z') ADVANCE(489);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == '|') ADVANCE(493);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '~') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(361);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(363);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '>') ADVANCE(367);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(379);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'G') ADVANCE(385);
      if (lookahead == 'H') ADVANCE(387);
      if (lookahead == 'I') ADVANCE(389);
      if (lookahead == 'J') ADVANCE(391);
      if (lookahead == 'K') ADVANCE(393);
      if (lookahead == 'L') ADVANCE(395);
      if (lookahead == 'M') ADVANCE(397);
      if (lookahead == 'N') ADVANCE(399);
      if (lookahead == 'O') ADVANCE(401);
      if (lookahead == 'P') ADVANCE(403);
      if (lookahead == 'Q') ADVANCE(405);
      if (lookahead == 'R') ADVANCE(407);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(411);
      if (lookahead == 'U') ADVANCE(413);
      if (lookahead == 'V') ADVANCE(415);
      if (lookahead == 'W') ADVANCE(417);
      if (lookahead == 'X') ADVANCE(419);
      if (lookahead == 'Y') ADVANCE(421);
      if (lookahead == 'Z') ADVANCE(423);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(426);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead == '^') ADVANCE(432);
      if (lookahead == '_') ADVANCE(434);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == 'g') ADVANCE(450);
      if (lookahead == 'h') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == 'j') ADVANCE(456);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == 'q') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == 'v') ADVANCE(480);
      if (lookahead == 'w') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(484);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead == 'z') ADVANCE(488);
      if (lookahead == '{') ADVANCE(490);
      if (lookahead == '|') ADVANCE(492);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '~') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(364);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '>') ADVANCE(368);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'B') ADVANCE(376);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'F') ADVANCE(384);
      if (lookahead == 'G') ADVANCE(386);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(390);
      if (lookahead == 'J') ADVANCE(392);
      if (lookahead == 'K') ADVANCE(394);
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'M') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(400);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == 'P') ADVANCE(404);
      if (lookahead == 'Q') ADVANCE(406);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'S') ADVANCE(410);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'U') ADVANCE(414);
      if (lookahead == 'V') ADVANCE(416);
      if (lookahead == 'W') ADVANCE(418);
      if (lookahead == 'X') ADVANCE(420);
      if (lookahead == 'Y') ADVANCE(422);
      if (lookahead == 'Z') ADVANCE(424);
      if (lookahead == '[') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead == ']') ADVANCE(431);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '_') ADVANCE(435);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(449);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'j') ADVANCE(457);
      if (lookahead == 'k') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 'q') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(481);
      if (lookahead == 'w') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(485);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == 'z') ADVANCE(489);
      if (lookahead == '{') ADVANCE(491);
      if (lookahead == '|') ADVANCE(493);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '~') ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(379);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == ']') ADVANCE(429);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == ']') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(366);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'B') ADVANCE(167);
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(210);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'H') ADVANCE(188);
      if (lookahead == 'I') ADVANCE(194);
      if (lookahead == 'J') ADVANCE(211);
      if (lookahead == 'K') ADVANCE(166);
      if (lookahead == 'L') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(189);
      if (lookahead == 'S') ADVANCE(145);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(229);
      if (lookahead == 'V') ADVANCE(160);
      if (lookahead == 'W') ADVANCE(161);
      if (lookahead == 'X') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'j') ADVANCE(307);
      if (lookahead == 'k') ADVANCE(262);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(255);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == 'u') ADVANCE(325);
      if (lookahead == 'v') ADVANCE(256);
      if (lookahead == 'w') ADVANCE(257);
      if (lookahead == 'x') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '*') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(427);
      if (lookahead == ']') ADVANCE(122);
      if (('<' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(379);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(339);
      if (lookahead == '&') ADVANCE(345);
      if (lookahead == ')') ADVANCE(347);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == '2') ADVANCE(353);
      if (lookahead == '3') ADVANCE(354);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '7') ADVANCE(358);
      if (lookahead == '8') ADVANCE(359);
      if (lookahead == '9') ADVANCE(360);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'D') ADVANCE(379);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(339);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(340);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(341);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(343);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(344);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 21:
      if (lookahead == '&') ADVANCE(345);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(346);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(137);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(347);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(820);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(821);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(349);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '+') ADVANCE(350);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 32:
      if (lookahead == ',') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == ',') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(136);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(132);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(361);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 38:
      if (lookahead == ';') ADVANCE(338);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 39:
      if (lookahead == '<') ADVANCE(363);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(365);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(367);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 42:
      if (lookahead == '?') ADVANCE(369);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 43:
      if (lookahead == '@') ADVANCE(371);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(373);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(375);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(377);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(379);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(381);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(810);
      END_STATE();
    case 50:
      if (lookahead == 'F') ADVANCE(383);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(811);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(809);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(385);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 55:
      if (lookahead == 'H') ADVANCE(387);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(389);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 57:
      if (lookahead == 'J') ADVANCE(391);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 58:
      if (lookahead == 'K') ADVANCE(393);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(395);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(397);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(399);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(401);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 63:
      if (lookahead == 'P') ADVANCE(403);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 64:
      if (lookahead == 'Q') ADVANCE(405);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(407);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(409);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(827);
      if (lookahead == 'X') ADVANCE(815);
      if (lookahead == 'Y') ADVANCE(818);
      if (lookahead == 's') ADVANCE(829);
      if (lookahead == 'x') ADVANCE(817);
      if (lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(411);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 70:
      if (lookahead == 'U') ADVANCE(413);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 71:
      if (lookahead == 'V') ADVANCE(415);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 72:
      if (lookahead == 'V') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'W') ADVANCE(417);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 74:
      if (lookahead == 'X') ADVANCE(419);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 75:
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 'Y') ADVANCE(822);
      if (lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 77:
      if (lookahead == 'Y') ADVANCE(824);
      if (lookahead == 'y') ADVANCE(825);
      END_STATE();
    case 78:
      if (lookahead == 'Y') ADVANCE(421);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 79:
      if (lookahead == 'Y') ADVANCE(830);
      END_STATE();
    case 80:
      if (lookahead == 'Y') ADVANCE(812);
      END_STATE();
    case 81:
      if (lookahead == 'Z') ADVANCE(423);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 82:
      if (lookahead == '[') ADVANCE(425);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 83:
      if (lookahead == '\\') ADVANCE(426);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(428);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 85:
      if (lookahead == '^') ADVANCE(790);
      END_STATE();
    case 86:
      if (lookahead == '^') ADVANCE(432);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(434);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 88:
      if (lookahead == '`') ADVANCE(436);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(438);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(440);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(442);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(444);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(446);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(448);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(450);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(452);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(454);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 98:
      if (lookahead == 'j') ADVANCE(456);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(458);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(460);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(462);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(464);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(466);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(468);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 105:
      if (lookahead == 'q') ADVANCE(470);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(472);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(474);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(476);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(478);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 110:
      if (lookahead == 'v') ADVANCE(480);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(482);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 112:
      if (lookahead == 'x') ADVANCE(484);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(486);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(831);
      END_STATE();
    case 115:
      if (lookahead == 'z') ADVANCE(488);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(490);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 117:
      if (lookahead == '|') ADVANCE(492);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 118:
      if (lookahead == '}') ADVANCE(494);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 119:
      if (lookahead == '~') ADVANCE(496);
      if ((' ' <= lookahead && lookahead <= '}')) ADVANCE(813);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(336);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(337);
      END_STATE();
    case 123:
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(881);
      END_STATE();
    case 124:
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(880);
      END_STATE();
    case 125:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(813);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '*') ADVANCE(883);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '1') ADVANCE(352);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      if (('<' <= lookahead && lookahead <= 'Z') ||
          ('\\' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      if (lookahead == '*') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '*') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__sep);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'S') ADVANCE(826);
      if (lookahead == 'X') ADVANCE(814);
      if (lookahead == 'Y') ADVANCE(818);
      if (lookahead == 's') ADVANCE(828);
      if (lookahead == 'x') ADVANCE(816);
      if (lookahead == 'y') ADVANCE(819);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == '<') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('=' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == '<') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('=' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == '>') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == '>') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(757);
      if (lookahead == 'B') ADVANCE(764);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'D') ADVANCE(163);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(775);
      if (lookahead == 'S') ADVANCE(772);
      if (lookahead == 'U') ADVANCE(212);
      if (lookahead == 'W') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(177);
      if (lookahead == 'U') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == 'B') ADVANCE(178);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'K') ADVANCE(224);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == 'W') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(743);
      if (lookahead == 'S') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(209);
      if (lookahead == 'X') ADVANCE(156);
      if (lookahead == 'Y') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(522);
      if (lookahead == 'K') ADVANCE(524);
      if (lookahead == 'L') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'X') ADVANCE(564);
      if (lookahead == 'Y') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(572);
      if (lookahead == 'G') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(642);
      if (lookahead == 'I') ADVANCE(644);
      if (lookahead == 'R') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(575);
      if (lookahead == 'B') ADVANCE(648);
      if (lookahead == 'D') ADVANCE(650);
      if (lookahead == 'K') ADVANCE(653);
      if (lookahead == 'P') ADVANCE(576);
      if (lookahead == 'X') ADVANCE(579);
      if (lookahead == 'Y') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(582);
      if (lookahead == 'B') ADVANCE(655);
      if (lookahead == 'D') ADVANCE(656);
      if (lookahead == 'P') ADVANCE(585);
      if (lookahead == 'X') ADVANCE(586);
      if (lookahead == 'Y') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(606);
      if (lookahead == 'R') ADVANCE(755);
      if (lookahead == 'X') ADVANCE(608);
      if (lookahead == 'Y') ADVANCE(610);
      if (lookahead == 'Z') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'W') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(675);
      if (lookahead == 'C') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(678);
      if (lookahead == 'B') ADVANCE(620);
      if (lookahead == 'C') ADVANCE(677);
      if (lookahead == 'X') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(625);
      if (lookahead == 'S') ADVANCE(627);
      if (lookahead == 'Y') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'P') ADVANCE(714);
      if (lookahead == 'X') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'V') ADVANCE(216);
      if (lookahead == 'X') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead == 'D') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B') ADVANCE(158);
      if (lookahead == 'C') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'B') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == 'G') ADVANCE(190);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(198);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'P') ADVANCE(204);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == 'V') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(499);
      if (lookahead == 'R') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(744);
      if (lookahead == 'L') ADVANCE(503);
      if (lookahead == 'T') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(507);
      if (lookahead == 'S') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(527);
      if (lookahead == 'S') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(530);
      if (lookahead == 'D') ADVANCE(533);
      if (lookahead == 'I') ADVANCE(535);
      if (lookahead == 'V') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(545);
      if (lookahead == 'N') ADVANCE(187);
      if (lookahead == 'X') ADVANCE(547);
      if (lookahead == 'Y') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(553);
      if (lookahead == 'V') ADVANCE(749);
      if (lookahead == 'X') ADVANCE(555);
      if (lookahead == 'Y') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'C') ADVANCE(601);
      if (lookahead == 'D') ADVANCE(603);
      if (lookahead == 'I') ADVANCE(604);
      if (lookahead == 'P') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == 'S') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(148);
      if (lookahead == 'S') ADVANCE(227);
      if (lookahead == 'U') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(718);
      if (lookahead == 'T') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'S') ADVANCE(668);
      if (lookahead == 'X') ADVANCE(614);
      if (lookahead == 'Y') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'D') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == 'O') ADVANCE(208);
      if (lookahead == 'T') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E') ADVANCE(708);
      if (lookahead == 'R') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'E') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'F') ADVANCE(779);
      if (lookahead == 'N') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'G') ADVANCE(736);
      if (lookahead == 'U') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'H') ADVANCE(203);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead == 'O') ADVANCE(220);
      if (lookahead == 'P') ADVANCE(237);
      if (lookahead == 'Y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'L') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I') ADVANCE(595);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'S') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'I') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'J') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'K') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(635);
      if (lookahead == 'P') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(636);
      if (lookahead == 'R') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(702);
      if (lookahead == 'P') ADVANCE(658);
      if (lookahead == 'V') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(590);
      if (lookahead == 'R') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'L') ADVANCE(231);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'O') ADVANCE(213);
      if (lookahead == 'Q') ADVANCE(235);
      if (lookahead == 'R') ADVANCE(226);
      if (lookahead == 'X') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'M') ADVANCE(205);
      if (lookahead == 'S') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'M') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'M') ADVANCE(804);
      if (lookahead == 'R') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'M') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'N') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'N') ADVANCE(638);
      if (lookahead == 'P') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'O') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'O') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P') ADVANCE(730);
      if (lookahead == 'T') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'P') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'Q') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R') ADVANCE(568);
      if (lookahead == 'T') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'R') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'S') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'S') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'S') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'T') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'U') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'V') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X') ADVANCE(541);
      if (lookahead == 'Y') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'X') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == 'b') ADVANCE(763);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == 's') ADVANCE(773);
      if (lookahead == 'u') ADVANCE(308);
      if (lookahead == 'w') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'w') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(742);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'k') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'x') ADVANCE(565);
      if (lookahead == 'y') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'g') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'r') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'b') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == 'k') ADVANCE(652);
      if (lookahead == 'p') ADVANCE(577);
      if (lookahead == 'x') ADVANCE(578);
      if (lookahead == 'y') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead == 'd') ADVANCE(657);
      if (lookahead == 'p') ADVANCE(584);
      if (lookahead == 'x') ADVANCE(587);
      if (lookahead == 'y') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == 'x') ADVANCE(609);
      if (lookahead == 'y') ADVANCE(611);
      if (lookahead == 'z') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'c') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'b') ADVANCE(621);
      if (lookahead == 'c') ADVANCE(676);
      if (lookahead == 'x') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead == 'y') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'p') ADVANCE(715);
      if (lookahead == 'x') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'v') ADVANCE(312);
      if (lookahead == 'x') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'b') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'b') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'b') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 't') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(506);
      if (lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 's') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'v') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == 'x') ADVANCE(546);
      if (lookahead == 'y') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(552);
      if (lookahead == 'v') ADVANCE(748);
      if (lookahead == 'x') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'c') ADVANCE(600);
      if (lookahead == 'd') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(244);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead == 't') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(665);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead == 'x') ADVANCE(615);
      if (lookahead == 'y') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead == 's') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'd') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'g') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 'y') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 's') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'i') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'j') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'k') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(659);
      if (lookahead == 'v') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead == 'r') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 'q') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead == 's') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'm') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'm') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'm') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead == 'p') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'p') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'p') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'p') ADVANCE(731);
      if (lookahead == 't') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'p') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'p') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'p') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'q') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == 't') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'r') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 's') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 't') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'u') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'v') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'x') ADVANCE(540);
      if (lookahead == 'y') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_global_label);
      if (lookahead == 'x') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_global_label);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_local_label);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_var_label);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '<') ADVANCE(832);
      if (lookahead == '>') ADVANCE(833);
      if (lookahead == '^') ADVANCE(834);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ',') ADVANCE(76);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(336);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_A);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_B);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_D);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_E);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_F);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_G);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_H);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_I);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_J);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_K);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_K);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_L);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_M);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_N);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_O);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_P);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_Q);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_Q);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_R);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_S);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_T);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_U);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_V);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_W);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_W);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_X);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Y);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_Z);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ',') ADVANCE(77);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ',') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(337);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(337);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_a);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_b);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_c);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_d);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_e);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_f);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_g);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_h);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_i);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_j);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_j);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_k);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_l);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_m);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_m);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_n);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_p);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_q);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_q);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_s);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_t);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_u);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_w);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_z);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_adc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ADC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_AND);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_asl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ASL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_BLT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_blt);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_bcc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_BCC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_bcs);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_BCS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_BGE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_bge);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_beq);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BEQ);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BIT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_BMI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_bmi);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_bne);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BNE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_bpl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_BPL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_BRA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_bra);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_BRK);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_brk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_bvc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BVC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_bvs);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_BVS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_CLC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_clc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_cld);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_CLD);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_cli);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_CLI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_CLV);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_clv);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_CMP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_cpx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_CPX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_CPY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_cpy);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_dec);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DEC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_dex);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DEX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DEY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_dey);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_eor);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_EOR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_INC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_inx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_INX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_iny);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_INY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_JSR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_jsr);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LDA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_lda);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LDX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_ldx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LDY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ldy);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LSR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_ORA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_ora);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_pha);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_PHA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PHP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_php);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_phx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_PHX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_phy);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_PHY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_PLA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_pla);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_plp);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_PLP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_PLX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_plx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_ply);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_PLY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_ROL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_rol);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_ROR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_ror);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_rti);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_RTI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_rts);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_RTS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sbc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SBC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_sec);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SEC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_sed);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_SED);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_SEI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_sei);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_STA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_sta);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_STX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_stx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_STY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_sty);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_STZ);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_stz);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_TAX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_tax);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_tay);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_TAY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_trb);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_TRB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_TSB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_tsb);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_tsx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_TSX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_txa);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_TXA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_txs);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_TXS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_tya);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_TYA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_BRL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_brl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_COP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_cop);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_jml);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_JML);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_JSL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_jsl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_MVN);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_mvn);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_MVP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_mvp);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_PEA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_pea);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_PEI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_pei);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_PER);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_per);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_PHB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_phb);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_PHD);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_phd);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_phk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_PHK);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_plb);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_PLB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_PLD);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_pld);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_REP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_rep);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_RTL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_rtl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_SEP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_sep);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_TCD);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_tad);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_TAD);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_tcd);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_TAS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_TCS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_tas);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_tcs);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_tdc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_tda);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_TDC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_TDA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_tsc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_TSC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_TSA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_tsa);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_TXY);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_txy);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_tyx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_TYX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_WAI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_wai);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_WDM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_wdm);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_SWA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_xba);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_XBA);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_swa);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_XCE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_xce);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_equ);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_EQU);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_EXT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_ext);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_ent);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_ENT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_ORG);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_org);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_REL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_rel);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_OBJ);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_obj);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_USE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_sav);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_SAV);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_TYP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_typ);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DSK);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_dsk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_END);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_dum);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DUM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_dend);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DEND);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_AST);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_ast);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_cyc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_CYC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DAT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_dat);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_EXP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_lst);
      if (lookahead == 'd') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LST);
      if (lookahead == 'D') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_lstdo);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_LSTDO);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_PAG);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_pag);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_TTL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ttl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_skp);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_SKP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_tr);
      if (lookahead == 'b') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_TR);
      if (lookahead == 'B') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ASC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_asc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_DCI);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_dci);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_inv);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_INV);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_fls);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_FLS);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_REV);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_rev);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_STR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_da);
      if (lookahead == 't') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_DA);
      if (lookahead == 'T') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_dw);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_DW);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_DDB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_ddb);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_DFB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_db);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_DB);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_dfb);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_ADR);
      if (lookahead == 'L') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_adr);
      if (lookahead == 'l') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_adrl);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_ADRL);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_HEX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_hex);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_DS);
      if (lookahead == 'K') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_ds);
      if (lookahead == 'k') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_DO);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_FIN);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_fin);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_CHK);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_chk);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_ERR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_err);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_KBD);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_kbd);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LUP);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_lup);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_psop_end_lup);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_MX);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_mx);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_pau);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_PAU);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_sw);
      if (lookahead == 'a') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_SW);
      if (lookahead == 'A') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_USR);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_usr);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_XC);
      if (lookahead == 'E') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_xc);
      if (lookahead == 'e') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_mac);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_MAC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_EOM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_eom);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_pmc);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_PMC);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(335);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_OFF);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_AVE);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_ONLY);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_pseudo_operation_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_COMMAX);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_COMMAX);
      if (lookahead == ')') ADVANCE(820);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_COMMAx);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_COMMAx);
      if (lookahead == ')') ADVANCE(821);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_COMMAY);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_COMMAy);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_COMMAX_RPAREN);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_COMMAx_RPAREN);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_RPAREN_COMMAY);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_RPAREN_COMMAy);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_RBRACK_COMMAY);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_RBRACK_COMMAy);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_COMMAS);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_COMMAS);
      if (lookahead == ')') ADVANCE(32);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_COMMAs);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_COMMAs);
      if (lookahead == ')') ADVANCE(33);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_COMMAS_RPAREN_COMMAY);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_COMMAs_RPAREN_COMMAy);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_POUND_LT);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_POUND_GT);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_POUND_CARET);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_hex_byte);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(879);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(866);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(867);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(868);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(869);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(839);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(870);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(840);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(871);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(872);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(873);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(874);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(875);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(876);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(877);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(878);
      if (('.' <= lookahead && lookahead <= 'z')) ADVANCE(848);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_prodos_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(865);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(852);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(855);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(856);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(857);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(859);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(860);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(861);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(862);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(863);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(865);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(866);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(867);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(868);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(870);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(871);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(872);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(873);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(874);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(875);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(876);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(877);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_dos33_token1);
      if ((' ' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '~')) ADVANCE(878);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_pchar_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_nchar_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(882);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_main_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(883);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 126},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 126},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 126},
  [207] = {.lex_state = 126},
  [208] = {.lex_state = 126},
  [209] = {.lex_state = 126},
  [210] = {.lex_state = 126},
  [211] = {.lex_state = 126},
  [212] = {.lex_state = 126},
  [213] = {.lex_state = 126},
  [214] = {.lex_state = 126},
  [215] = {.lex_state = 126},
  [216] = {.lex_state = 126},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 126},
  [219] = {.lex_state = 126},
  [220] = {.lex_state = 126},
  [221] = {.lex_state = 126},
  [222] = {.lex_state = 126},
  [223] = {.lex_state = 126},
  [224] = {.lex_state = 126},
  [225] = {.lex_state = 126},
  [226] = {.lex_state = 126},
  [227] = {.lex_state = 126},
  [228] = {.lex_state = 126},
  [229] = {.lex_state = 126},
  [230] = {.lex_state = 126},
  [231] = {.lex_state = 126},
  [232] = {.lex_state = 126},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 126},
  [262] = {.lex_state = 126},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 126},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 86},
  [269] = {.lex_state = 126},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 126},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 126},
  [275] = {.lex_state = 119},
  [276] = {.lex_state = 118},
  [277] = {.lex_state = 117},
  [278] = {.lex_state = 116},
  [279] = {.lex_state = 115},
  [280] = {.lex_state = 113},
  [281] = {.lex_state = 112},
  [282] = {.lex_state = 111},
  [283] = {.lex_state = 110},
  [284] = {.lex_state = 109},
  [285] = {.lex_state = 108},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 107},
  [288] = {.lex_state = 106},
  [289] = {.lex_state = 105},
  [290] = {.lex_state = 104},
  [291] = {.lex_state = 103},
  [292] = {.lex_state = 102},
  [293] = {.lex_state = 101},
  [294] = {.lex_state = 10},
  [295] = {.lex_state = 100},
  [296] = {.lex_state = 99},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 98},
  [299] = {.lex_state = 97},
  [300] = {.lex_state = 96},
  [301] = {.lex_state = 95},
  [302] = {.lex_state = 126},
  [303] = {.lex_state = 94},
  [304] = {.lex_state = 93},
  [305] = {.lex_state = 92},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 91},
  [309] = {.lex_state = 90},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 10},
  [312] = {.lex_state = 89},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 88},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 87},
  [317] = {.lex_state = 86},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 84},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 83},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 82},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 36},
  [326] = {.lex_state = 34},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 38},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 19},
  [333] = {.lex_state = 20},
  [334] = {.lex_state = 21},
  [335] = {.lex_state = 22},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 29},
  [338] = {.lex_state = 31},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 39},
  [341] = {.lex_state = 40},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 42},
  [344] = {.lex_state = 43},
  [345] = {.lex_state = 44},
  [346] = {.lex_state = 45},
  [347] = {.lex_state = 46},
  [348] = {.lex_state = 47},
  [349] = {.lex_state = 48},
  [350] = {.lex_state = 50},
  [351] = {.lex_state = 54},
  [352] = {.lex_state = 55},
  [353] = {.lex_state = 56},
  [354] = {.lex_state = 57},
  [355] = {.lex_state = 58},
  [356] = {.lex_state = 59},
  [357] = {.lex_state = 60},
  [358] = {.lex_state = 61},
  [359] = {.lex_state = 62},
  [360] = {.lex_state = 63},
  [361] = {.lex_state = 64},
  [362] = {.lex_state = 65},
  [363] = {.lex_state = 66},
  [364] = {.lex_state = 69},
  [365] = {.lex_state = 70},
  [366] = {.lex_state = 71},
  [367] = {.lex_state = 73},
  [368] = {.lex_state = 74},
  [369] = {.lex_state = 78},
  [370] = {.lex_state = 81},
  [371] = {.lex_state = 82},
  [372] = {.lex_state = 83},
  [373] = {.lex_state = 84},
  [374] = {.lex_state = 86},
  [375] = {.lex_state = 87},
  [376] = {.lex_state = 88},
  [377] = {.lex_state = 89},
  [378] = {.lex_state = 90},
  [379] = {.lex_state = 91},
  [380] = {.lex_state = 92},
  [381] = {.lex_state = 93},
  [382] = {.lex_state = 94},
  [383] = {.lex_state = 95},
  [384] = {.lex_state = 96},
  [385] = {.lex_state = 97},
  [386] = {.lex_state = 98},
  [387] = {.lex_state = 99},
  [388] = {.lex_state = 100},
  [389] = {.lex_state = 101},
  [390] = {.lex_state = 102},
  [391] = {.lex_state = 103},
  [392] = {.lex_state = 104},
  [393] = {.lex_state = 105},
  [394] = {.lex_state = 106},
  [395] = {.lex_state = 107},
  [396] = {.lex_state = 108},
  [397] = {.lex_state = 109},
  [398] = {.lex_state = 110},
  [399] = {.lex_state = 111},
  [400] = {.lex_state = 112},
  [401] = {.lex_state = 113},
  [402] = {.lex_state = 115},
  [403] = {.lex_state = 116},
  [404] = {.lex_state = 117},
  [405] = {.lex_state = 118},
  [406] = {.lex_state = 119},
  [407] = {.lex_state = 10},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 81},
  [411] = {.lex_state = 78},
  [412] = {.lex_state = 74},
  [413] = {.lex_state = 73},
  [414] = {.lex_state = 71},
  [415] = {.lex_state = 70},
  [416] = {.lex_state = 69},
  [417] = {.lex_state = 66},
  [418] = {.lex_state = 65},
  [419] = {.lex_state = 64},
  [420] = {.lex_state = 63},
  [421] = {.lex_state = 62},
  [422] = {.lex_state = 61},
  [423] = {.lex_state = 60},
  [424] = {.lex_state = 59},
  [425] = {.lex_state = 58},
  [426] = {.lex_state = 57},
  [427] = {.lex_state = 56},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 55},
  [430] = {.lex_state = 54},
  [431] = {.lex_state = 50},
  [432] = {.lex_state = 48},
  [433] = {.lex_state = 47},
  [434] = {.lex_state = 46},
  [435] = {.lex_state = 45},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 44},
  [438] = {.lex_state = 43},
  [439] = {.lex_state = 42},
  [440] = {.lex_state = 41},
  [441] = {.lex_state = 40},
  [442] = {.lex_state = 39},
  [443] = {.lex_state = 37},
  [444] = {.lex_state = 8},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 29},
  [447] = {.lex_state = 24},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 22},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 10},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 18},
  [455] = {.lex_state = 17},
  [456] = {.lex_state = 16},
  [457] = {.lex_state = 38},
  [458] = {.lex_state = 23},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 34},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 10},
  [466] = {.lex_state = 10},
  [467] = {.lex_state = 10},
  [468] = {.lex_state = 10},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 10},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 10},
  [474] = {.lex_state = 10},
  [475] = {.lex_state = 10},
  [476] = {.lex_state = 10},
  [477] = {.lex_state = 10},
  [478] = {.lex_state = 10},
  [479] = {.lex_state = 10},
  [480] = {.lex_state = 10},
  [481] = {.lex_state = 36},
  [482] = {.lex_state = 10},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 10},
  [486] = {.lex_state = 10},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 10},
  [489] = {.lex_state = 10},
  [490] = {.lex_state = 10},
  [491] = {.lex_state = 10},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 10},
  [494] = {.lex_state = 10},
  [495] = {.lex_state = 10},
  [496] = {.lex_state = 10},
  [497] = {.lex_state = 10},
  [498] = {.lex_state = 10},
  [499] = {.lex_state = 10},
  [500] = {.lex_state = 10},
  [501] = {.lex_state = 36},
  [502] = {.lex_state = 34},
  [503] = {.lex_state = 23},
  [504] = {.lex_state = 38},
  [505] = {.lex_state = 16},
  [506] = {.lex_state = 17},
  [507] = {.lex_state = 18},
  [508] = {.lex_state = 19},
  [509] = {.lex_state = 20},
  [510] = {.lex_state = 21},
  [511] = {.lex_state = 22},
  [512] = {.lex_state = 24},
  [513] = {.lex_state = 29},
  [514] = {.lex_state = 31},
  [515] = {.lex_state = 37},
  [516] = {.lex_state = 39},
  [517] = {.lex_state = 40},
  [518] = {.lex_state = 41},
  [519] = {.lex_state = 42},
  [520] = {.lex_state = 43},
  [521] = {.lex_state = 44},
  [522] = {.lex_state = 45},
  [523] = {.lex_state = 46},
  [524] = {.lex_state = 47},
  [525] = {.lex_state = 48},
  [526] = {.lex_state = 50},
  [527] = {.lex_state = 54},
  [528] = {.lex_state = 55},
  [529] = {.lex_state = 56},
  [530] = {.lex_state = 57},
  [531] = {.lex_state = 58},
  [532] = {.lex_state = 59},
  [533] = {.lex_state = 60},
  [534] = {.lex_state = 61},
  [535] = {.lex_state = 62},
  [536] = {.lex_state = 63},
  [537] = {.lex_state = 64},
  [538] = {.lex_state = 65},
  [539] = {.lex_state = 66},
  [540] = {.lex_state = 69},
  [541] = {.lex_state = 70},
  [542] = {.lex_state = 71},
  [543] = {.lex_state = 73},
  [544] = {.lex_state = 74},
  [545] = {.lex_state = 78},
  [546] = {.lex_state = 81},
  [547] = {.lex_state = 82},
  [548] = {.lex_state = 83},
  [549] = {.lex_state = 84},
  [550] = {.lex_state = 10},
  [551] = {.lex_state = 87},
  [552] = {.lex_state = 88},
  [553] = {.lex_state = 89},
  [554] = {.lex_state = 90},
  [555] = {.lex_state = 91},
  [556] = {.lex_state = 92},
  [557] = {.lex_state = 93},
  [558] = {.lex_state = 94},
  [559] = {.lex_state = 95},
  [560] = {.lex_state = 96},
  [561] = {.lex_state = 97},
  [562] = {.lex_state = 98},
  [563] = {.lex_state = 99},
  [564] = {.lex_state = 100},
  [565] = {.lex_state = 101},
  [566] = {.lex_state = 102},
  [567] = {.lex_state = 103},
  [568] = {.lex_state = 104},
  [569] = {.lex_state = 105},
  [570] = {.lex_state = 106},
  [571] = {.lex_state = 107},
  [572] = {.lex_state = 108},
  [573] = {.lex_state = 109},
  [574] = {.lex_state = 110},
  [575] = {.lex_state = 111},
  [576] = {.lex_state = 112},
  [577] = {.lex_state = 113},
  [578] = {.lex_state = 115},
  [579] = {.lex_state = 116},
  [580] = {.lex_state = 117},
  [581] = {.lex_state = 118},
  [582] = {.lex_state = 119},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 2},
  [593] = {.lex_state = 882},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 882},
  [596] = {.lex_state = 836},
  [597] = {.lex_state = 10},
  [598] = {.lex_state = 10},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 10},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 2},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 882},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 10},
  [613] = {.lex_state = 2},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 10},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 10},
  [626] = {.lex_state = 10},
  [627] = {.lex_state = 10},
  [628] = {.lex_state = 10},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 10},
  [632] = {.lex_state = 10},
  [633] = {.lex_state = 10},
  [634] = {.lex_state = 10},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 10},
  [657] = {.lex_state = 10},
  [658] = {.lex_state = 10},
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 10},
  [664] = {.lex_state = 10},
  [665] = {.lex_state = 10},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 10},
  [671] = {.lex_state = 10},
  [672] = {.lex_state = 10},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 10},
  [675] = {.lex_state = 10},
  [676] = {.lex_state = 10},
  [677] = {.lex_state = 10},
  [678] = {.lex_state = 10},
  [679] = {.lex_state = 10},
  [680] = {.lex_state = 10},
  [681] = {.lex_state = 10},
  [682] = {.lex_state = 10},
  [683] = {.lex_state = 10},
  [684] = {.lex_state = 10},
  [685] = {.lex_state = 10},
  [686] = {.lex_state = 126},
  [687] = {.lex_state = 10},
  [688] = {.lex_state = 10},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 10},
  [691] = {.lex_state = 10},
  [692] = {.lex_state = 10},
  [693] = {.lex_state = 10},
  [694] = {.lex_state = 10},
  [695] = {.lex_state = 10},
  [696] = {.lex_state = 10},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 10},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 10},
  [702] = {.lex_state = 10},
  [703] = {.lex_state = 10},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 10},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 10},
  [708] = {.lex_state = 10},
  [709] = {.lex_state = 10},
  [710] = {.lex_state = 10},
  [711] = {.lex_state = 10},
  [712] = {.lex_state = 10},
  [713] = {.lex_state = 10},
  [714] = {.lex_state = 10},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 10},
  [717] = {.lex_state = 10},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 10},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 10},
  [723] = {.lex_state = 10},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 10},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 125},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 125},
  [734] = {.lex_state = 10},
  [735] = {.lex_state = 10},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 10},
  [738] = {.lex_state = 10},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 10},
  [744] = {.lex_state = 10},
  [745] = {.lex_state = 10},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 10},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 10},
  [766] = {.lex_state = 125},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 10},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 10},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 125},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 2},
  [778] = {.lex_state = 10},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 10},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 10},
  [783] = {.lex_state = 124},
  [784] = {.lex_state = 10},
  [785] = {.lex_state = 123},
  [786] = {.lex_state = 10},
  [787] = {.lex_state = 10},
  [788] = {.lex_state = 10},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 10},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 10},
  [793] = {.lex_state = 10},
  [794] = {.lex_state = 10},
  [795] = {.lex_state = 10},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 10},
  [799] = {.lex_state = 10},
  [800] = {.lex_state = 10},
  [801] = {.lex_state = 10},
  [802] = {.lex_state = 10},
  [803] = {.lex_state = 10},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 10},
  [807] = {.lex_state = 10},
  [808] = {.lex_state = 10},
  [809] = {.lex_state = 10},
  [810] = {.lex_state = 123},
  [811] = {.lex_state = 10},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 124},
  [814] = {.lex_state = 10},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 10},
  [817] = {.lex_state = 10},
  [818] = {.lex_state = 10},
  [819] = {.lex_state = 126},
  [820] = {.lex_state = 10},
  [821] = {.lex_state = 10},
  [822] = {.lex_state = 123},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 10},
  [825] = {.lex_state = 124},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 10},
  [828] = {.lex_state = 123},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 124},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym__sep] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_global_label] = ACTIONS(1),
    [sym_local_label] = ACTIONS(1),
    [sym_var_label] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_J] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_Q] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_W] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_q] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_pseudo_operation_token1] = ACTIONS(1),
    [anon_sym_COMMAX] = ACTIONS(1),
    [anon_sym_COMMAx] = ACTIONS(1),
    [anon_sym_COMMAY] = ACTIONS(1),
    [anon_sym_COMMAy] = ACTIONS(1),
    [anon_sym_RPAREN_COMMAY] = ACTIONS(1),
    [anon_sym_RPAREN_COMMAy] = ACTIONS(1),
    [anon_sym_RBRACK_COMMAY] = ACTIONS(1),
    [anon_sym_RBRACK_COMMAy] = ACTIONS(1),
    [anon_sym_COMMAS] = ACTIONS(1),
    [anon_sym_COMMAs] = ACTIONS(1),
    [anon_sym_POUND_LT] = ACTIONS(1),
    [anon_sym_POUND_GT] = ACTIONS(1),
    [anon_sym_POUND_CARET] = ACTIONS(1),
    [aux_sym_pchar_token1] = ACTIONS(1),
    [aux_sym_nchar_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(829),
    [sym__factor] = STATE(175),
    [sym_program_counter] = STATE(175),
    [sym_macro_calli] = STATE(175),
    [sym__newline] = STATE(175),
    [sym__label] = STATE(270),
    [sym_operation] = STATE(175),
    [sym_pseudo_operation] = STATE(175),
    [sym_main_comment] = STATE(175),
    [aux_sym_source_file_repeat1] = STATE(175),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__newline_token1] = ACTIONS(5),
    [sym__sep] = ACTIONS(7),
    [sym_global_label] = ACTIONS(9),
    [sym_local_label] = ACTIONS(9),
    [sym_var_label] = ACTIONS(9),
    [aux_sym_main_comment_token1] = ACTIONS(11),
  },
  [2] = {
    [sym_op_adc] = STATE(778),
    [sym_op_and] = STATE(778),
    [sym_op_asl] = STATE(311),
    [sym_op_bcc] = STATE(779),
    [sym_op_bcs] = STATE(779),
    [sym_op_beq] = STATE(779),
    [sym_op_bit] = STATE(780),
    [sym_op_bmi] = STATE(779),
    [sym_op_bne] = STATE(779),
    [sym_op_bpl] = STATE(779),
    [sym_op_bra] = STATE(779),
    [sym_op_brk] = STATE(306),
    [sym_op_bvc] = STATE(779),
    [sym_op_bvs] = STATE(779),
    [sym_op_clc] = STATE(306),
    [sym_op_cld] = STATE(306),
    [sym_op_cli] = STATE(306),
    [sym_op_clv] = STATE(306),
    [sym_op_cmp] = STATE(778),
    [sym_op_cpx] = STATE(781),
    [sym_op_cpy] = STATE(781),
    [sym_op_dec] = STATE(311),
    [sym_op_dex] = STATE(306),
    [sym_op_dey] = STATE(306),
    [sym_op_eor] = STATE(778),
    [sym_op_inc] = STATE(311),
    [sym_op_inx] = STATE(306),
    [sym_op_iny] = STATE(306),
    [sym_op_jmp] = STATE(782),
    [sym_op_jsr] = STATE(784),
    [sym_op_lda] = STATE(778),
    [sym_op_ldx] = STATE(786),
    [sym_op_ldy] = STATE(780),
    [sym_op_lsr] = STATE(311),
    [sym_op_nop] = STATE(306),
    [sym_op_ora] = STATE(778),
    [sym_op_pha] = STATE(306),
    [sym_op_php] = STATE(306),
    [sym_op_phx] = STATE(306),
    [sym_op_phy] = STATE(306),
    [sym_op_pla] = STATE(306),
    [sym_op_plp] = STATE(306),
    [sym_op_plx] = STATE(306),
    [sym_op_ply] = STATE(306),
    [sym_op_rol] = STATE(311),
    [sym_op_ror] = STATE(311),
    [sym_op_rti] = STATE(306),
    [sym_op_rts] = STATE(306),
    [sym_op_sbc] = STATE(778),
    [sym_op_sec] = STATE(306),
    [sym_op_sed] = STATE(306),
    [sym_op_sei] = STATE(306),
    [sym_op_sta] = STATE(787),
    [sym_op_stx] = STATE(788),
    [sym_op_sty] = STATE(789),
    [sym_op_stz] = STATE(789),
    [sym_op_tax] = STATE(306),
    [sym_op_tay] = STATE(306),
    [sym_op_trb] = STATE(779),
    [sym_op_tsb] = STATE(779),
    [sym_op_tsx] = STATE(306),
    [sym_op_txa] = STATE(306),
    [sym_op_txs] = STATE(306),
    [sym_op_tya] = STATE(306),
    [sym_op_brl] = STATE(779),
    [sym_op_cop] = STATE(306),
    [sym_op_jml] = STATE(790),
    [sym_op_jsl] = STATE(779),
    [sym_op_mvn] = STATE(791),
    [sym_op_mvp] = STATE(791),
    [sym_op_pea] = STATE(306),
    [sym_op_pei] = STATE(306),
    [sym_op_per] = STATE(306),
    [sym_op_phb] = STATE(306),
    [sym_op_phd] = STATE(306),
    [sym_op_phk] = STATE(306),
    [sym_op_plb] = STATE(306),
    [sym_op_pld] = STATE(306),
    [sym_op_rep] = STATE(792),
    [sym_op_rtl] = STATE(306),
    [sym_op_sep] = STATE(792),
    [sym_op_tcd] = STATE(306),
    [sym_op_tcs] = STATE(306),
    [sym_op_tdc] = STATE(306),
    [sym_op_tsc] = STATE(306),
    [sym_op_txy] = STATE(306),
    [sym_op_tyx] = STATE(306),
    [sym_op_wai] = STATE(306),
    [sym_op_wdm] = STATE(306),
    [sym_op_xba] = STATE(306),
    [sym_op_xce] = STATE(306),
    [sym_psop_equ] = STATE(793),
    [sym_psop_ext] = STATE(794),
    [sym_psop_ent] = STATE(794),
    [sym_psop_org] = STATE(795),
    [sym_psop_rel] = STATE(313),
    [sym_psop_obj] = STATE(793),
    [sym_psop_put] = STATE(796),
    [sym_psop_use] = STATE(796),
    [sym_psop_var] = STATE(797),
    [sym_psop_sav] = STATE(796),
    [sym_psop_typ] = STATE(793),
    [sym_psop_dsk] = STATE(796),
    [sym_psop_end] = STATE(313),
    [sym_psop_dum] = STATE(793),
    [sym_psop_dend] = STATE(313),
    [sym_psop_ast] = STATE(793),
    [sym_psop_cyc] = STATE(798),
    [sym_psop_dat] = STATE(313),
    [sym_psop_exp] = STATE(812),
    [sym_psop_lst] = STATE(807),
    [sym_psop_lstdo] = STATE(806),
    [sym_psop_pag] = STATE(313),
    [sym_psop_ttl] = STATE(805),
    [sym_psop_skp] = STATE(793),
    [sym_psop_tr] = STATE(807),
    [sym_psop_asc] = STATE(804),
    [sym_psop_dci] = STATE(804),
    [sym_psop_inv] = STATE(804),
    [sym_psop_fls] = STATE(804),
    [sym_psop_rev] = STATE(805),
    [sym_psop_str] = STATE(804),
    [sym_psop_da] = STATE(803),
    [sym_psop_ddb] = STATE(803),
    [sym_psop_dfb] = STATE(802),
    [sym_psop_adr] = STATE(803),
    [sym_psop_adrl] = STATE(803),
    [sym_psop_hex] = STATE(801),
    [sym_psop_ds] = STATE(800),
    [sym_psop_do] = STATE(793),
    [sym_psop_else] = STATE(313),
    [sym_psop_if] = STATE(718),
    [sym_psop_fin] = STATE(313),
    [sym_psop_chk] = STATE(313),
    [sym_psop_err] = STATE(830),
    [sym_psop_kbd] = STATE(827),
    [sym_psop_lup] = STATE(793),
    [sym_psop_mx] = STATE(793),
    [sym_psop_pau] = STATE(313),
    [sym_psop_sw] = STATE(313),
    [sym_psop_usr] = STATE(826),
    [sym_psop_xc] = STATE(313),
    [sym_psop_mac] = STATE(313),
    [sym_psop_eom] = STATE(313),
    [sym_psop_pmc] = STATE(824),
    [sym_comment] = STATE(273),
    [aux_sym__newline_token1] = ACTIONS(13),
    [sym_global_label] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_adc] = ACTIONS(21),
    [anon_sym_ADC] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_AND] = ACTIONS(23),
    [anon_sym_asl] = ACTIONS(25),
    [anon_sym_ASL] = ACTIONS(25),
    [anon_sym_BLT] = ACTIONS(27),
    [anon_sym_blt] = ACTIONS(27),
    [anon_sym_bcc] = ACTIONS(27),
    [anon_sym_BCC] = ACTIONS(27),
    [anon_sym_bcs] = ACTIONS(29),
    [anon_sym_BCS] = ACTIONS(29),
    [anon_sym_BGE] = ACTIONS(29),
    [anon_sym_bge] = ACTIONS(29),
    [anon_sym_beq] = ACTIONS(31),
    [anon_sym_BEQ] = ACTIONS(31),
    [anon_sym_BIT] = ACTIONS(33),
    [anon_sym_bit] = ACTIONS(33),
    [anon_sym_BMI] = ACTIONS(35),
    [anon_sym_bmi] = ACTIONS(35),
    [anon_sym_bne] = ACTIONS(37),
    [anon_sym_BNE] = ACTIONS(37),
    [anon_sym_bpl] = ACTIONS(39),
    [anon_sym_BPL] = ACTIONS(39),
    [anon_sym_BRA] = ACTIONS(41),
    [anon_sym_bra] = ACTIONS(41),
    [anon_sym_BRK] = ACTIONS(43),
    [anon_sym_brk] = ACTIONS(43),
    [anon_sym_bvc] = ACTIONS(45),
    [anon_sym_BVC] = ACTIONS(45),
    [anon_sym_bvs] = ACTIONS(47),
    [anon_sym_BVS] = ACTIONS(47),
    [anon_sym_CLC] = ACTIONS(49),
    [anon_sym_clc] = ACTIONS(49),
    [anon_sym_cld] = ACTIONS(51),
    [anon_sym_CLD] = ACTIONS(51),
    [anon_sym_cli] = ACTIONS(53),
    [anon_sym_CLI] = ACTIONS(53),
    [anon_sym_CLV] = ACTIONS(55),
    [anon_sym_clv] = ACTIONS(55),
    [anon_sym_CMP] = ACTIONS(57),
    [anon_sym_cmp] = ACTIONS(57),
    [anon_sym_cpx] = ACTIONS(59),
    [anon_sym_CPX] = ACTIONS(59),
    [anon_sym_CPY] = ACTIONS(61),
    [anon_sym_cpy] = ACTIONS(61),
    [anon_sym_dec] = ACTIONS(63),
    [anon_sym_DEC] = ACTIONS(63),
    [anon_sym_dex] = ACTIONS(65),
    [anon_sym_DEX] = ACTIONS(65),
    [anon_sym_DEY] = ACTIONS(67),
    [anon_sym_dey] = ACTIONS(67),
    [anon_sym_eor] = ACTIONS(69),
    [anon_sym_EOR] = ACTIONS(69),
    [anon_sym_inc] = ACTIONS(71),
    [anon_sym_INC] = ACTIONS(71),
    [anon_sym_inx] = ACTIONS(73),
    [anon_sym_INX] = ACTIONS(73),
    [anon_sym_iny] = ACTIONS(75),
    [anon_sym_INY] = ACTIONS(75),
    [anon_sym_JMP] = ACTIONS(77),
    [anon_sym_jmp] = ACTIONS(77),
    [anon_sym_JSR] = ACTIONS(79),
    [anon_sym_jsr] = ACTIONS(79),
    [anon_sym_LDA] = ACTIONS(81),
    [anon_sym_lda] = ACTIONS(81),
    [anon_sym_LDX] = ACTIONS(83),
    [anon_sym_ldx] = ACTIONS(83),
    [anon_sym_LDY] = ACTIONS(85),
    [anon_sym_ldy] = ACTIONS(85),
    [anon_sym_LSR] = ACTIONS(87),
    [anon_sym_lsr] = ACTIONS(87),
    [anon_sym_NOP] = ACTIONS(89),
    [anon_sym_nop] = ACTIONS(89),
    [anon_sym_ORA] = ACTIONS(91),
    [anon_sym_ora] = ACTIONS(91),
    [anon_sym_pha] = ACTIONS(93),
    [anon_sym_PHA] = ACTIONS(93),
    [anon_sym_PHP] = ACTIONS(95),
    [anon_sym_php] = ACTIONS(95),
    [anon_sym_phx] = ACTIONS(97),
    [anon_sym_PHX] = ACTIONS(97),
    [anon_sym_phy] = ACTIONS(99),
    [anon_sym_PHY] = ACTIONS(99),
    [anon_sym_PLA] = ACTIONS(101),
    [anon_sym_pla] = ACTIONS(101),
    [anon_sym_plp] = ACTIONS(103),
    [anon_sym_PLP] = ACTIONS(103),
    [anon_sym_PLX] = ACTIONS(105),
    [anon_sym_plx] = ACTIONS(105),
    [anon_sym_ply] = ACTIONS(107),
    [anon_sym_PLY] = ACTIONS(107),
    [anon_sym_ROL] = ACTIONS(109),
    [anon_sym_rol] = ACTIONS(109),
    [anon_sym_ROR] = ACTIONS(111),
    [anon_sym_ror] = ACTIONS(111),
    [anon_sym_rti] = ACTIONS(113),
    [anon_sym_RTI] = ACTIONS(113),
    [anon_sym_rts] = ACTIONS(115),
    [anon_sym_RTS] = ACTIONS(115),
    [anon_sym_sbc] = ACTIONS(117),
    [anon_sym_SBC] = ACTIONS(117),
    [anon_sym_sec] = ACTIONS(119),
    [anon_sym_SEC] = ACTIONS(119),
    [anon_sym_sed] = ACTIONS(121),
    [anon_sym_SED] = ACTIONS(121),
    [anon_sym_SEI] = ACTIONS(123),
    [anon_sym_sei] = ACTIONS(123),
    [anon_sym_STA] = ACTIONS(125),
    [anon_sym_sta] = ACTIONS(125),
    [anon_sym_STX] = ACTIONS(127),
    [anon_sym_stx] = ACTIONS(127),
    [anon_sym_STY] = ACTIONS(129),
    [anon_sym_sty] = ACTIONS(129),
    [anon_sym_STZ] = ACTIONS(131),
    [anon_sym_stz] = ACTIONS(131),
    [anon_sym_TAX] = ACTIONS(133),
    [anon_sym_tax] = ACTIONS(133),
    [anon_sym_tay] = ACTIONS(135),
    [anon_sym_TAY] = ACTIONS(135),
    [anon_sym_trb] = ACTIONS(137),
    [anon_sym_TRB] = ACTIONS(137),
    [anon_sym_TSB] = ACTIONS(139),
    [anon_sym_tsb] = ACTIONS(139),
    [anon_sym_tsx] = ACTIONS(141),
    [anon_sym_TSX] = ACTIONS(141),
    [anon_sym_txa] = ACTIONS(143),
    [anon_sym_TXA] = ACTIONS(143),
    [anon_sym_txs] = ACTIONS(145),
    [anon_sym_TXS] = ACTIONS(145),
    [anon_sym_tya] = ACTIONS(147),
    [anon_sym_TYA] = ACTIONS(147),
    [anon_sym_BRL] = ACTIONS(149),
    [anon_sym_brl] = ACTIONS(149),
    [anon_sym_COP] = ACTIONS(151),
    [anon_sym_cop] = ACTIONS(151),
    [anon_sym_jml] = ACTIONS(153),
    [anon_sym_JML] = ACTIONS(153),
    [anon_sym_JSL] = ACTIONS(155),
    [anon_sym_jsl] = ACTIONS(155),
    [anon_sym_MVN] = ACTIONS(157),
    [anon_sym_mvn] = ACTIONS(157),
    [anon_sym_MVP] = ACTIONS(159),
    [anon_sym_mvp] = ACTIONS(159),
    [anon_sym_PEA] = ACTIONS(161),
    [anon_sym_pea] = ACTIONS(161),
    [anon_sym_PEI] = ACTIONS(163),
    [anon_sym_pei] = ACTIONS(163),
    [anon_sym_PER] = ACTIONS(165),
    [anon_sym_per] = ACTIONS(165),
    [anon_sym_PHB] = ACTIONS(167),
    [anon_sym_phb] = ACTIONS(167),
    [anon_sym_PHD] = ACTIONS(169),
    [anon_sym_phd] = ACTIONS(169),
    [anon_sym_phk] = ACTIONS(171),
    [anon_sym_PHK] = ACTIONS(171),
    [anon_sym_plb] = ACTIONS(173),
    [anon_sym_PLB] = ACTIONS(173),
    [anon_sym_PLD] = ACTIONS(175),
    [anon_sym_pld] = ACTIONS(175),
    [anon_sym_REP] = ACTIONS(177),
    [anon_sym_rep] = ACTIONS(177),
    [anon_sym_RTL] = ACTIONS(179),
    [anon_sym_rtl] = ACTIONS(179),
    [anon_sym_SEP] = ACTIONS(181),
    [anon_sym_sep] = ACTIONS(181),
    [anon_sym_TCD] = ACTIONS(183),
    [anon_sym_tad] = ACTIONS(183),
    [anon_sym_TAD] = ACTIONS(183),
    [anon_sym_tcd] = ACTIONS(183),
    [anon_sym_TAS] = ACTIONS(185),
    [anon_sym_TCS] = ACTIONS(185),
    [anon_sym_tas] = ACTIONS(185),
    [anon_sym_tcs] = ACTIONS(185),
    [anon_sym_tdc] = ACTIONS(187),
    [anon_sym_tda] = ACTIONS(187),
    [anon_sym_TDC] = ACTIONS(187),
    [anon_sym_TDA] = ACTIONS(187),
    [anon_sym_tsc] = ACTIONS(189),
    [anon_sym_TSC] = ACTIONS(189),
    [anon_sym_TSA] = ACTIONS(189),
    [anon_sym_tsa] = ACTIONS(189),
    [anon_sym_TXY] = ACTIONS(191),
    [anon_sym_txy] = ACTIONS(191),
    [anon_sym_tyx] = ACTIONS(193),
    [anon_sym_TYX] = ACTIONS(193),
    [anon_sym_WAI] = ACTIONS(195),
    [anon_sym_wai] = ACTIONS(195),
    [anon_sym_WDM] = ACTIONS(197),
    [anon_sym_wdm] = ACTIONS(197),
    [anon_sym_SWA] = ACTIONS(199),
    [anon_sym_xba] = ACTIONS(199),
    [anon_sym_XBA] = ACTIONS(199),
    [anon_sym_swa] = ACTIONS(199),
    [anon_sym_XCE] = ACTIONS(201),
    [anon_sym_xce] = ACTIONS(201),
    [anon_sym_equ] = ACTIONS(19),
    [anon_sym_EQU] = ACTIONS(19),
    [anon_sym_EXT] = ACTIONS(203),
    [anon_sym_ext] = ACTIONS(203),
    [anon_sym_ent] = ACTIONS(205),
    [anon_sym_ENT] = ACTIONS(205),
    [anon_sym_ORG] = ACTIONS(207),
    [anon_sym_org] = ACTIONS(207),
    [anon_sym_REL] = ACTIONS(209),
    [anon_sym_rel] = ACTIONS(209),
    [anon_sym_OBJ] = ACTIONS(211),
    [anon_sym_obj] = ACTIONS(211),
    [anon_sym_put] = ACTIONS(213),
    [anon_sym_PUT] = ACTIONS(213),
    [anon_sym_USE] = ACTIONS(215),
    [anon_sym_use] = ACTIONS(215),
    [anon_sym_var] = ACTIONS(217),
    [anon_sym_VAR] = ACTIONS(217),
    [anon_sym_sav] = ACTIONS(219),
    [anon_sym_SAV] = ACTIONS(219),
    [anon_sym_TYP] = ACTIONS(221),
    [anon_sym_typ] = ACTIONS(221),
    [anon_sym_DSK] = ACTIONS(223),
    [anon_sym_dsk] = ACTIONS(223),
    [anon_sym_END] = ACTIONS(225),
    [anon_sym_end] = ACTIONS(225),
    [anon_sym_dum] = ACTIONS(227),
    [anon_sym_DUM] = ACTIONS(227),
    [anon_sym_dend] = ACTIONS(229),
    [anon_sym_DEND] = ACTIONS(229),
    [anon_sym_AST] = ACTIONS(231),
    [anon_sym_ast] = ACTIONS(231),
    [anon_sym_cyc] = ACTIONS(233),
    [anon_sym_CYC] = ACTIONS(233),
    [anon_sym_DAT] = ACTIONS(235),
    [anon_sym_dat] = ACTIONS(235),
    [anon_sym_EXP] = ACTIONS(237),
    [anon_sym_exp] = ACTIONS(237),
    [anon_sym_lst] = ACTIONS(239),
    [anon_sym_LST] = ACTIONS(239),
    [anon_sym_lstdo] = ACTIONS(241),
    [anon_sym_LSTDO] = ACTIONS(241),
    [anon_sym_PAG] = ACTIONS(243),
    [anon_sym_pag] = ACTIONS(243),
    [anon_sym_TTL] = ACTIONS(245),
    [anon_sym_ttl] = ACTIONS(245),
    [anon_sym_skp] = ACTIONS(247),
    [anon_sym_SKP] = ACTIONS(247),
    [anon_sym_tr] = ACTIONS(249),
    [anon_sym_TR] = ACTIONS(249),
    [anon_sym_ASC] = ACTIONS(251),
    [anon_sym_asc] = ACTIONS(251),
    [anon_sym_DCI] = ACTIONS(253),
    [anon_sym_dci] = ACTIONS(253),
    [anon_sym_inv] = ACTIONS(255),
    [anon_sym_INV] = ACTIONS(255),
    [anon_sym_fls] = ACTIONS(257),
    [anon_sym_FLS] = ACTIONS(257),
    [anon_sym_REV] = ACTIONS(259),
    [anon_sym_rev] = ACTIONS(259),
    [anon_sym_str] = ACTIONS(261),
    [anon_sym_STR] = ACTIONS(261),
    [anon_sym_da] = ACTIONS(263),
    [anon_sym_DA] = ACTIONS(263),
    [anon_sym_dw] = ACTIONS(263),
    [anon_sym_DW] = ACTIONS(263),
    [anon_sym_DDB] = ACTIONS(265),
    [anon_sym_ddb] = ACTIONS(265),
    [anon_sym_DFB] = ACTIONS(267),
    [anon_sym_db] = ACTIONS(267),
    [anon_sym_DB] = ACTIONS(267),
    [anon_sym_dfb] = ACTIONS(267),
    [anon_sym_ADR] = ACTIONS(269),
    [anon_sym_adr] = ACTIONS(269),
    [anon_sym_adrl] = ACTIONS(271),
    [anon_sym_ADRL] = ACTIONS(271),
    [anon_sym_HEX] = ACTIONS(273),
    [anon_sym_hex] = ACTIONS(273),
    [anon_sym_DS] = ACTIONS(275),
    [anon_sym_ds] = ACTIONS(275),
    [anon_sym_do] = ACTIONS(277),
    [anon_sym_DO] = ACTIONS(277),
    [anon_sym_else] = ACTIONS(279),
    [anon_sym_ELSE] = ACTIONS(279),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_IF] = ACTIONS(281),
    [anon_sym_FIN] = ACTIONS(283),
    [anon_sym_fin] = ACTIONS(283),
    [anon_sym_CHK] = ACTIONS(285),
    [anon_sym_chk] = ACTIONS(285),
    [anon_sym_ERR] = ACTIONS(287),
    [anon_sym_err] = ACTIONS(287),
    [anon_sym_KBD] = ACTIONS(289),
    [anon_sym_kbd] = ACTIONS(289),
    [anon_sym_LUP] = ACTIONS(291),
    [anon_sym_lup] = ACTIONS(291),
    [sym_psop_end_lup] = ACTIONS(293),
    [anon_sym_MX] = ACTIONS(295),
    [anon_sym_mx] = ACTIONS(295),
    [anon_sym_pau] = ACTIONS(297),
    [anon_sym_PAU] = ACTIONS(297),
    [anon_sym_sw] = ACTIONS(299),
    [anon_sym_SW] = ACTIONS(299),
    [anon_sym_USR] = ACTIONS(301),
    [anon_sym_usr] = ACTIONS(301),
    [anon_sym_XC] = ACTIONS(303),
    [anon_sym_xc] = ACTIONS(303),
    [anon_sym_mac] = ACTIONS(305),
    [anon_sym_MAC] = ACTIONS(305),
    [anon_sym_LT_LT_LT] = ACTIONS(307),
    [anon_sym_EOM] = ACTIONS(307),
    [anon_sym_eom] = ACTIONS(307),
    [anon_sym_GT_GT_GT] = ACTIONS(309),
    [anon_sym_pmc] = ACTIONS(309),
    [anon_sym_PMC] = ACTIONS(309),
  },
  [3] = {
    [sym_op_adc] = STATE(732),
    [sym_op_and] = STATE(732),
    [sym_op_asl] = STATE(452),
    [sym_op_bcc] = STATE(735),
    [sym_op_bcs] = STATE(735),
    [sym_op_beq] = STATE(735),
    [sym_op_bit] = STATE(736),
    [sym_op_bmi] = STATE(735),
    [sym_op_bne] = STATE(735),
    [sym_op_bpl] = STATE(735),
    [sym_op_bra] = STATE(735),
    [sym_op_brk] = STATE(448),
    [sym_op_bvc] = STATE(735),
    [sym_op_bvs] = STATE(735),
    [sym_op_clc] = STATE(448),
    [sym_op_cld] = STATE(448),
    [sym_op_cli] = STATE(448),
    [sym_op_clv] = STATE(448),
    [sym_op_cmp] = STATE(732),
    [sym_op_cpx] = STATE(737),
    [sym_op_cpy] = STATE(737),
    [sym_op_dec] = STATE(452),
    [sym_op_dex] = STATE(448),
    [sym_op_dey] = STATE(448),
    [sym_op_eor] = STATE(732),
    [sym_op_inc] = STATE(452),
    [sym_op_inx] = STATE(448),
    [sym_op_iny] = STATE(448),
    [sym_op_jmp] = STATE(774),
    [sym_op_jsr] = STATE(739),
    [sym_op_lda] = STATE(732),
    [sym_op_ldx] = STATE(740),
    [sym_op_ldy] = STATE(736),
    [sym_op_lsr] = STATE(452),
    [sym_op_nop] = STATE(448),
    [sym_op_ora] = STATE(732),
    [sym_op_pha] = STATE(448),
    [sym_op_php] = STATE(448),
    [sym_op_phx] = STATE(448),
    [sym_op_phy] = STATE(448),
    [sym_op_pla] = STATE(448),
    [sym_op_plp] = STATE(448),
    [sym_op_plx] = STATE(448),
    [sym_op_ply] = STATE(448),
    [sym_op_rol] = STATE(452),
    [sym_op_ror] = STATE(452),
    [sym_op_rti] = STATE(448),
    [sym_op_rts] = STATE(448),
    [sym_op_sbc] = STATE(732),
    [sym_op_sec] = STATE(448),
    [sym_op_sed] = STATE(448),
    [sym_op_sei] = STATE(448),
    [sym_op_sta] = STATE(741),
    [sym_op_stx] = STATE(742),
    [sym_op_sty] = STATE(743),
    [sym_op_stz] = STATE(743),
    [sym_op_tax] = STATE(448),
    [sym_op_tay] = STATE(448),
    [sym_op_trb] = STATE(735),
    [sym_op_tsb] = STATE(735),
    [sym_op_tsx] = STATE(448),
    [sym_op_txa] = STATE(448),
    [sym_op_txs] = STATE(448),
    [sym_op_tya] = STATE(448),
    [sym_op_brl] = STATE(735),
    [sym_op_cop] = STATE(448),
    [sym_op_jml] = STATE(744),
    [sym_op_jsl] = STATE(735),
    [sym_op_mvn] = STATE(745),
    [sym_op_mvp] = STATE(745),
    [sym_op_pea] = STATE(448),
    [sym_op_pei] = STATE(448),
    [sym_op_per] = STATE(448),
    [sym_op_phb] = STATE(448),
    [sym_op_phd] = STATE(448),
    [sym_op_phk] = STATE(448),
    [sym_op_plb] = STATE(448),
    [sym_op_pld] = STATE(448),
    [sym_op_rep] = STATE(746),
    [sym_op_rtl] = STATE(448),
    [sym_op_sep] = STATE(746),
    [sym_op_tcd] = STATE(448),
    [sym_op_tcs] = STATE(448),
    [sym_op_tdc] = STATE(448),
    [sym_op_tsc] = STATE(448),
    [sym_op_txy] = STATE(448),
    [sym_op_tyx] = STATE(448),
    [sym_op_wai] = STATE(448),
    [sym_op_wdm] = STATE(448),
    [sym_op_xba] = STATE(448),
    [sym_op_xce] = STATE(448),
    [sym_psop_equ] = STATE(747),
    [sym_psop_ext] = STATE(748),
    [sym_psop_ent] = STATE(748),
    [sym_psop_org] = STATE(749),
    [sym_psop_rel] = STATE(465),
    [sym_psop_obj] = STATE(747),
    [sym_psop_put] = STATE(750),
    [sym_psop_use] = STATE(750),
    [sym_psop_var] = STATE(673),
    [sym_psop_sav] = STATE(750),
    [sym_psop_typ] = STATE(747),
    [sym_psop_dsk] = STATE(750),
    [sym_psop_end] = STATE(465),
    [sym_psop_dum] = STATE(747),
    [sym_psop_dend] = STATE(465),
    [sym_psop_ast] = STATE(747),
    [sym_psop_cyc] = STATE(752),
    [sym_psop_dat] = STATE(465),
    [sym_psop_exp] = STATE(753),
    [sym_psop_lst] = STATE(754),
    [sym_psop_lstdo] = STATE(755),
    [sym_psop_pag] = STATE(465),
    [sym_psop_ttl] = STATE(756),
    [sym_psop_skp] = STATE(747),
    [sym_psop_tr] = STATE(754),
    [sym_psop_asc] = STATE(757),
    [sym_psop_dci] = STATE(757),
    [sym_psop_inv] = STATE(757),
    [sym_psop_fls] = STATE(757),
    [sym_psop_rev] = STATE(756),
    [sym_psop_str] = STATE(757),
    [sym_psop_da] = STATE(758),
    [sym_psop_ddb] = STATE(758),
    [sym_psop_dfb] = STATE(761),
    [sym_psop_adr] = STATE(758),
    [sym_psop_adrl] = STATE(758),
    [sym_psop_hex] = STATE(762),
    [sym_psop_ds] = STATE(763),
    [sym_psop_do] = STATE(747),
    [sym_psop_else] = STATE(465),
    [sym_psop_if] = STATE(765),
    [sym_psop_fin] = STATE(465),
    [sym_psop_chk] = STATE(465),
    [sym_psop_err] = STATE(767),
    [sym_psop_kbd] = STATE(768),
    [sym_psop_lup] = STATE(747),
    [sym_psop_mx] = STATE(747),
    [sym_psop_pau] = STATE(465),
    [sym_psop_sw] = STATE(465),
    [sym_psop_usr] = STATE(769),
    [sym_psop_xc] = STATE(465),
    [sym_psop_mac] = STATE(465),
    [sym_psop_eom] = STATE(465),
    [sym_psop_pmc] = STATE(770),
    [aux_sym__newline_token1] = ACTIONS(13),
    [sym_global_label] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_adc] = ACTIONS(21),
    [anon_sym_ADC] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_AND] = ACTIONS(23),
    [anon_sym_asl] = ACTIONS(25),
    [anon_sym_ASL] = ACTIONS(25),
    [anon_sym_BLT] = ACTIONS(27),
    [anon_sym_blt] = ACTIONS(27),
    [anon_sym_bcc] = ACTIONS(27),
    [anon_sym_BCC] = ACTIONS(27),
    [anon_sym_bcs] = ACTIONS(29),
    [anon_sym_BCS] = ACTIONS(29),
    [anon_sym_BGE] = ACTIONS(29),
    [anon_sym_bge] = ACTIONS(29),
    [anon_sym_beq] = ACTIONS(31),
    [anon_sym_BEQ] = ACTIONS(31),
    [anon_sym_BIT] = ACTIONS(33),
    [anon_sym_bit] = ACTIONS(33),
    [anon_sym_BMI] = ACTIONS(35),
    [anon_sym_bmi] = ACTIONS(35),
    [anon_sym_bne] = ACTIONS(37),
    [anon_sym_BNE] = ACTIONS(37),
    [anon_sym_bpl] = ACTIONS(39),
    [anon_sym_BPL] = ACTIONS(39),
    [anon_sym_BRA] = ACTIONS(41),
    [anon_sym_bra] = ACTIONS(41),
    [anon_sym_BRK] = ACTIONS(43),
    [anon_sym_brk] = ACTIONS(43),
    [anon_sym_bvc] = ACTIONS(45),
    [anon_sym_BVC] = ACTIONS(45),
    [anon_sym_bvs] = ACTIONS(47),
    [anon_sym_BVS] = ACTIONS(47),
    [anon_sym_CLC] = ACTIONS(49),
    [anon_sym_clc] = ACTIONS(49),
    [anon_sym_cld] = ACTIONS(51),
    [anon_sym_CLD] = ACTIONS(51),
    [anon_sym_cli] = ACTIONS(53),
    [anon_sym_CLI] = ACTIONS(53),
    [anon_sym_CLV] = ACTIONS(55),
    [anon_sym_clv] = ACTIONS(55),
    [anon_sym_CMP] = ACTIONS(57),
    [anon_sym_cmp] = ACTIONS(57),
    [anon_sym_cpx] = ACTIONS(59),
    [anon_sym_CPX] = ACTIONS(59),
    [anon_sym_CPY] = ACTIONS(61),
    [anon_sym_cpy] = ACTIONS(61),
    [anon_sym_dec] = ACTIONS(63),
    [anon_sym_DEC] = ACTIONS(63),
    [anon_sym_dex] = ACTIONS(65),
    [anon_sym_DEX] = ACTIONS(65),
    [anon_sym_DEY] = ACTIONS(67),
    [anon_sym_dey] = ACTIONS(67),
    [anon_sym_eor] = ACTIONS(69),
    [anon_sym_EOR] = ACTIONS(69),
    [anon_sym_inc] = ACTIONS(71),
    [anon_sym_INC] = ACTIONS(71),
    [anon_sym_inx] = ACTIONS(73),
    [anon_sym_INX] = ACTIONS(73),
    [anon_sym_iny] = ACTIONS(75),
    [anon_sym_INY] = ACTIONS(75),
    [anon_sym_JMP] = ACTIONS(77),
    [anon_sym_jmp] = ACTIONS(77),
    [anon_sym_JSR] = ACTIONS(79),
    [anon_sym_jsr] = ACTIONS(79),
    [anon_sym_LDA] = ACTIONS(81),
    [anon_sym_lda] = ACTIONS(81),
    [anon_sym_LDX] = ACTIONS(83),
    [anon_sym_ldx] = ACTIONS(83),
    [anon_sym_LDY] = ACTIONS(85),
    [anon_sym_ldy] = ACTIONS(85),
    [anon_sym_LSR] = ACTIONS(87),
    [anon_sym_lsr] = ACTIONS(87),
    [anon_sym_NOP] = ACTIONS(89),
    [anon_sym_nop] = ACTIONS(89),
    [anon_sym_ORA] = ACTIONS(91),
    [anon_sym_ora] = ACTIONS(91),
    [anon_sym_pha] = ACTIONS(93),
    [anon_sym_PHA] = ACTIONS(93),
    [anon_sym_PHP] = ACTIONS(95),
    [anon_sym_php] = ACTIONS(95),
    [anon_sym_phx] = ACTIONS(97),
    [anon_sym_PHX] = ACTIONS(97),
    [anon_sym_phy] = ACTIONS(99),
    [anon_sym_PHY] = ACTIONS(99),
    [anon_sym_PLA] = ACTIONS(101),
    [anon_sym_pla] = ACTIONS(101),
    [anon_sym_plp] = ACTIONS(103),
    [anon_sym_PLP] = ACTIONS(103),
    [anon_sym_PLX] = ACTIONS(105),
    [anon_sym_plx] = ACTIONS(105),
    [anon_sym_ply] = ACTIONS(107),
    [anon_sym_PLY] = ACTIONS(107),
    [anon_sym_ROL] = ACTIONS(109),
    [anon_sym_rol] = ACTIONS(109),
    [anon_sym_ROR] = ACTIONS(111),
    [anon_sym_ror] = ACTIONS(111),
    [anon_sym_rti] = ACTIONS(113),
    [anon_sym_RTI] = ACTIONS(113),
    [anon_sym_rts] = ACTIONS(115),
    [anon_sym_RTS] = ACTIONS(115),
    [anon_sym_sbc] = ACTIONS(117),
    [anon_sym_SBC] = ACTIONS(117),
    [anon_sym_sec] = ACTIONS(119),
    [anon_sym_SEC] = ACTIONS(119),
    [anon_sym_sed] = ACTIONS(121),
    [anon_sym_SED] = ACTIONS(121),
    [anon_sym_SEI] = ACTIONS(123),
    [anon_sym_sei] = ACTIONS(123),
    [anon_sym_STA] = ACTIONS(125),
    [anon_sym_sta] = ACTIONS(125),
    [anon_sym_STX] = ACTIONS(127),
    [anon_sym_stx] = ACTIONS(127),
    [anon_sym_STY] = ACTIONS(129),
    [anon_sym_sty] = ACTIONS(129),
    [anon_sym_STZ] = ACTIONS(131),
    [anon_sym_stz] = ACTIONS(131),
    [anon_sym_TAX] = ACTIONS(133),
    [anon_sym_tax] = ACTIONS(133),
    [anon_sym_tay] = ACTIONS(135),
    [anon_sym_TAY] = ACTIONS(135),
    [anon_sym_trb] = ACTIONS(137),
    [anon_sym_TRB] = ACTIONS(137),
    [anon_sym_TSB] = ACTIONS(139),
    [anon_sym_tsb] = ACTIONS(139),
    [anon_sym_tsx] = ACTIONS(141),
    [anon_sym_TSX] = ACTIONS(141),
    [anon_sym_txa] = ACTIONS(143),
    [anon_sym_TXA] = ACTIONS(143),
    [anon_sym_txs] = ACTIONS(145),
    [anon_sym_TXS] = ACTIONS(145),
    [anon_sym_tya] = ACTIONS(147),
    [anon_sym_TYA] = ACTIONS(147),
    [anon_sym_BRL] = ACTIONS(149),
    [anon_sym_brl] = ACTIONS(149),
    [anon_sym_COP] = ACTIONS(151),
    [anon_sym_cop] = ACTIONS(151),
    [anon_sym_jml] = ACTIONS(153),
    [anon_sym_JML] = ACTIONS(153),
    [anon_sym_JSL] = ACTIONS(155),
    [anon_sym_jsl] = ACTIONS(155),
    [anon_sym_MVN] = ACTIONS(157),
    [anon_sym_mvn] = ACTIONS(157),
    [anon_sym_MVP] = ACTIONS(159),
    [anon_sym_mvp] = ACTIONS(159),
    [anon_sym_PEA] = ACTIONS(161),
    [anon_sym_pea] = ACTIONS(161),
    [anon_sym_PEI] = ACTIONS(163),
    [anon_sym_pei] = ACTIONS(163),
    [anon_sym_PER] = ACTIONS(165),
    [anon_sym_per] = ACTIONS(165),
    [anon_sym_PHB] = ACTIONS(167),
    [anon_sym_phb] = ACTIONS(167),
    [anon_sym_PHD] = ACTIONS(169),
    [anon_sym_phd] = ACTIONS(169),
    [anon_sym_phk] = ACTIONS(171),
    [anon_sym_PHK] = ACTIONS(171),
    [anon_sym_plb] = ACTIONS(173),
    [anon_sym_PLB] = ACTIONS(173),
    [anon_sym_PLD] = ACTIONS(175),
    [anon_sym_pld] = ACTIONS(175),
    [anon_sym_REP] = ACTIONS(177),
    [anon_sym_rep] = ACTIONS(177),
    [anon_sym_RTL] = ACTIONS(179),
    [anon_sym_rtl] = ACTIONS(179),
    [anon_sym_SEP] = ACTIONS(181),
    [anon_sym_sep] = ACTIONS(181),
    [anon_sym_TCD] = ACTIONS(183),
    [anon_sym_tad] = ACTIONS(183),
    [anon_sym_TAD] = ACTIONS(183),
    [anon_sym_tcd] = ACTIONS(183),
    [anon_sym_TAS] = ACTIONS(185),
    [anon_sym_TCS] = ACTIONS(185),
    [anon_sym_tas] = ACTIONS(185),
    [anon_sym_tcs] = ACTIONS(185),
    [anon_sym_tdc] = ACTIONS(187),
    [anon_sym_tda] = ACTIONS(187),
    [anon_sym_TDC] = ACTIONS(187),
    [anon_sym_TDA] = ACTIONS(187),
    [anon_sym_tsc] = ACTIONS(189),
    [anon_sym_TSC] = ACTIONS(189),
    [anon_sym_TSA] = ACTIONS(189),
    [anon_sym_tsa] = ACTIONS(189),
    [anon_sym_TXY] = ACTIONS(191),
    [anon_sym_txy] = ACTIONS(191),
    [anon_sym_tyx] = ACTIONS(193),
    [anon_sym_TYX] = ACTIONS(193),
    [anon_sym_WAI] = ACTIONS(195),
    [anon_sym_wai] = ACTIONS(195),
    [anon_sym_WDM] = ACTIONS(197),
    [anon_sym_wdm] = ACTIONS(197),
    [anon_sym_SWA] = ACTIONS(199),
    [anon_sym_xba] = ACTIONS(199),
    [anon_sym_XBA] = ACTIONS(199),
    [anon_sym_swa] = ACTIONS(199),
    [anon_sym_XCE] = ACTIONS(201),
    [anon_sym_xce] = ACTIONS(201),
    [anon_sym_equ] = ACTIONS(19),
    [anon_sym_EQU] = ACTIONS(19),
    [anon_sym_EXT] = ACTIONS(203),
    [anon_sym_ext] = ACTIONS(203),
    [anon_sym_ent] = ACTIONS(205),
    [anon_sym_ENT] = ACTIONS(205),
    [anon_sym_ORG] = ACTIONS(207),
    [anon_sym_org] = ACTIONS(207),
    [anon_sym_REL] = ACTIONS(209),
    [anon_sym_rel] = ACTIONS(209),
    [anon_sym_OBJ] = ACTIONS(211),
    [anon_sym_obj] = ACTIONS(211),
    [anon_sym_put] = ACTIONS(213),
    [anon_sym_PUT] = ACTIONS(213),
    [anon_sym_USE] = ACTIONS(215),
    [anon_sym_use] = ACTIONS(215),
    [anon_sym_var] = ACTIONS(217),
    [anon_sym_VAR] = ACTIONS(217),
    [anon_sym_sav] = ACTIONS(219),
    [anon_sym_SAV] = ACTIONS(219),
    [anon_sym_TYP] = ACTIONS(221),
    [anon_sym_typ] = ACTIONS(221),
    [anon_sym_DSK] = ACTIONS(223),
    [anon_sym_dsk] = ACTIONS(223),
    [anon_sym_END] = ACTIONS(225),
    [anon_sym_end] = ACTIONS(225),
    [anon_sym_dum] = ACTIONS(227),
    [anon_sym_DUM] = ACTIONS(227),
    [anon_sym_dend] = ACTIONS(229),
    [anon_sym_DEND] = ACTIONS(229),
    [anon_sym_AST] = ACTIONS(231),
    [anon_sym_ast] = ACTIONS(231),
    [anon_sym_cyc] = ACTIONS(233),
    [anon_sym_CYC] = ACTIONS(233),
    [anon_sym_DAT] = ACTIONS(235),
    [anon_sym_dat] = ACTIONS(235),
    [anon_sym_EXP] = ACTIONS(237),
    [anon_sym_exp] = ACTIONS(237),
    [anon_sym_lst] = ACTIONS(239),
    [anon_sym_LST] = ACTIONS(239),
    [anon_sym_lstdo] = ACTIONS(241),
    [anon_sym_LSTDO] = ACTIONS(241),
    [anon_sym_PAG] = ACTIONS(243),
    [anon_sym_pag] = ACTIONS(243),
    [anon_sym_TTL] = ACTIONS(245),
    [anon_sym_ttl] = ACTIONS(245),
    [anon_sym_skp] = ACTIONS(247),
    [anon_sym_SKP] = ACTIONS(247),
    [anon_sym_tr] = ACTIONS(249),
    [anon_sym_TR] = ACTIONS(249),
    [anon_sym_ASC] = ACTIONS(251),
    [anon_sym_asc] = ACTIONS(251),
    [anon_sym_DCI] = ACTIONS(253),
    [anon_sym_dci] = ACTIONS(253),
    [anon_sym_inv] = ACTIONS(255),
    [anon_sym_INV] = ACTIONS(255),
    [anon_sym_fls] = ACTIONS(257),
    [anon_sym_FLS] = ACTIONS(257),
    [anon_sym_REV] = ACTIONS(259),
    [anon_sym_rev] = ACTIONS(259),
    [anon_sym_str] = ACTIONS(261),
    [anon_sym_STR] = ACTIONS(261),
    [anon_sym_da] = ACTIONS(263),
    [anon_sym_DA] = ACTIONS(263),
    [anon_sym_dw] = ACTIONS(263),
    [anon_sym_DW] = ACTIONS(263),
    [anon_sym_DDB] = ACTIONS(265),
    [anon_sym_ddb] = ACTIONS(265),
    [anon_sym_DFB] = ACTIONS(267),
    [anon_sym_db] = ACTIONS(267),
    [anon_sym_DB] = ACTIONS(267),
    [anon_sym_dfb] = ACTIONS(267),
    [anon_sym_ADR] = ACTIONS(269),
    [anon_sym_adr] = ACTIONS(269),
    [anon_sym_adrl] = ACTIONS(271),
    [anon_sym_ADRL] = ACTIONS(271),
    [anon_sym_HEX] = ACTIONS(273),
    [anon_sym_hex] = ACTIONS(273),
    [anon_sym_DS] = ACTIONS(275),
    [anon_sym_ds] = ACTIONS(275),
    [anon_sym_do] = ACTIONS(277),
    [anon_sym_DO] = ACTIONS(277),
    [anon_sym_else] = ACTIONS(279),
    [anon_sym_ELSE] = ACTIONS(279),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_IF] = ACTIONS(281),
    [anon_sym_FIN] = ACTIONS(283),
    [anon_sym_fin] = ACTIONS(283),
    [anon_sym_CHK] = ACTIONS(285),
    [anon_sym_chk] = ACTIONS(285),
    [anon_sym_ERR] = ACTIONS(287),
    [anon_sym_err] = ACTIONS(287),
    [anon_sym_KBD] = ACTIONS(289),
    [anon_sym_kbd] = ACTIONS(289),
    [anon_sym_LUP] = ACTIONS(291),
    [anon_sym_lup] = ACTIONS(291),
    [sym_psop_end_lup] = ACTIONS(313),
    [anon_sym_MX] = ACTIONS(295),
    [anon_sym_mx] = ACTIONS(295),
    [anon_sym_pau] = ACTIONS(297),
    [anon_sym_PAU] = ACTIONS(297),
    [anon_sym_sw] = ACTIONS(299),
    [anon_sym_SW] = ACTIONS(299),
    [anon_sym_USR] = ACTIONS(301),
    [anon_sym_usr] = ACTIONS(301),
    [anon_sym_XC] = ACTIONS(303),
    [anon_sym_xc] = ACTIONS(303),
    [anon_sym_mac] = ACTIONS(305),
    [anon_sym_MAC] = ACTIONS(305),
    [anon_sym_LT_LT_LT] = ACTIONS(307),
    [anon_sym_EOM] = ACTIONS(307),
    [anon_sym_eom] = ACTIONS(307),
    [anon_sym_GT_GT_GT] = ACTIONS(309),
    [anon_sym_pmc] = ACTIONS(309),
    [anon_sym_PMC] = ACTIONS(309),
  },
  [4] = {
    [sym__label] = STATE(107),
    [sym_macro_args] = STATE(589),
    [sym__arg] = STATE(255),
    [sym_literal_arg] = STATE(255),
    [sym__addr_6502] = STATE(255),
    [sym_imm] = STATE(255),
    [sym_addr] = STATE(255),
    [sym_addr_x] = STATE(255),
    [sym_addr_y] = STATE(255),
    [sym_iaddr_ix] = STATE(255),
    [sym_iaddr_y] = STATE(255),
    [sym_iaddr] = STATE(255),
    [sym_mode_iopen] = STATE(95),
    [sym__addr_65816] = STATE(255),
    [sym_daddr] = STATE(255),
    [sym_daddr_y] = STATE(255),
    [sym_addr_s] = STATE(255),
    [sym_iaddr_is_y] = STATE(255),
    [sym_xyc] = STATE(255),
    [sym_mode_dopen] = STATE(96),
    [sym__aexpr] = STATE(107),
    [sym_unary_aexpr] = STATE(107),
    [sym_binary_aexpr] = STATE(107),
    [sym_eop_plus] = STATE(99),
    [sym_eop_minus] = STATE(99),
    [sym_imm_prefix] = STATE(69),
    [sym_number] = STATE(107),
    [sym_decimal] = STATE(125),
    [sym_hexadecimal] = STATE(125),
    [sym_binary] = STATE(125),
    [sym_pchar] = STATE(107),
    [sym_nchar] = STATE(107),
    [sym_current_addr] = STATE(107),
    [sym_comment] = STATE(588),
    [aux_sym_literal_arg_repeat1] = STATE(21),
    [aux_sym_decimal_repeat1] = STATE(105),
    [aux_sym__newline_token1] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [sym_global_label] = ACTIONS(321),
    [sym_local_label] = ACTIONS(323),
    [sym_var_label] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_0] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_A] = ACTIONS(341),
    [anon_sym_B] = ACTIONS(341),
    [anon_sym_C] = ACTIONS(341),
    [anon_sym_D] = ACTIONS(341),
    [anon_sym_E] = ACTIONS(341),
    [anon_sym_F] = ACTIONS(341),
    [anon_sym_G] = ACTIONS(341),
    [anon_sym_H] = ACTIONS(341),
    [anon_sym_I] = ACTIONS(341),
    [anon_sym_J] = ACTIONS(341),
    [anon_sym_K] = ACTIONS(341),
    [anon_sym_L] = ACTIONS(341),
    [anon_sym_M] = ACTIONS(341),
    [anon_sym_N] = ACTIONS(341),
    [anon_sym_O] = ACTIONS(341),
    [anon_sym_P] = ACTIONS(341),
    [anon_sym_Q] = ACTIONS(341),
    [anon_sym_R] = ACTIONS(341),
    [anon_sym_S] = ACTIONS(341),
    [anon_sym_T] = ACTIONS(341),
    [anon_sym_U] = ACTIONS(341),
    [anon_sym_V] = ACTIONS(341),
    [anon_sym_W] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(341),
    [anon_sym_Y] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_a] = ACTIONS(341),
    [anon_sym_b] = ACTIONS(341),
    [anon_sym_c] = ACTIONS(341),
    [anon_sym_d] = ACTIONS(341),
    [anon_sym_e] = ACTIONS(341),
    [anon_sym_f] = ACTIONS(341),
    [anon_sym_g] = ACTIONS(341),
    [anon_sym_h] = ACTIONS(341),
    [anon_sym_i] = ACTIONS(341),
    [anon_sym_j] = ACTIONS(341),
    [anon_sym_k] = ACTIONS(341),
    [anon_sym_l] = ACTIONS(341),
    [anon_sym_m] = ACTIONS(341),
    [anon_sym_n] = ACTIONS(341),
    [anon_sym_o] = ACTIONS(341),
    [anon_sym_p] = ACTIONS(341),
    [anon_sym_q] = ACTIONS(341),
    [anon_sym_r] = ACTIONS(341),
    [anon_sym_s] = ACTIONS(341),
    [anon_sym_t] = ACTIONS(341),
    [anon_sym_u] = ACTIONS(341),
    [anon_sym_v] = ACTIONS(341),
    [anon_sym_w] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_y] = ACTIONS(341),
    [anon_sym_z] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_POUND_LT] = ACTIONS(345),
    [anon_sym_POUND_GT] = ACTIONS(345),
    [anon_sym_POUND_CARET] = ACTIONS(345),
  },
  [5] = {
    [sym__label] = STATE(107),
    [sym_macro_args] = STATE(286),
    [sym__arg] = STATE(255),
    [sym_literal_arg] = STATE(255),
    [sym__addr_6502] = STATE(255),
    [sym_imm] = STATE(255),
    [sym_addr] = STATE(255),
    [sym_addr_x] = STATE(255),
    [sym_addr_y] = STATE(255),
    [sym_iaddr_ix] = STATE(255),
    [sym_iaddr_y] = STATE(255),
    [sym_iaddr] = STATE(255),
    [sym_mode_iopen] = STATE(95),
    [sym__addr_65816] = STATE(255),
    [sym_daddr] = STATE(255),
    [sym_daddr_y] = STATE(255),
    [sym_addr_s] = STATE(255),
    [sym_iaddr_is_y] = STATE(255),
    [sym_xyc] = STATE(255),
    [sym_mode_dopen] = STATE(96),
    [sym__aexpr] = STATE(107),
    [sym_unary_aexpr] = STATE(107),
    [sym_binary_aexpr] = STATE(107),
    [sym_eop_plus] = STATE(99),
    [sym_eop_minus] = STATE(99),
    [sym_imm_prefix] = STATE(69),
    [sym_number] = STATE(107),
    [sym_decimal] = STATE(125),
    [sym_hexadecimal] = STATE(125),
    [sym_binary] = STATE(125),
    [sym_pchar] = STATE(107),
    [sym_nchar] = STATE(107),
    [sym_current_addr] = STATE(107),
    [sym_comment] = STATE(294),
    [aux_sym_literal_arg_repeat1] = STATE(21),
    [aux_sym_decimal_repeat1] = STATE(105),
    [aux_sym__newline_token1] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [sym_global_label] = ACTIONS(321),
    [sym_local_label] = ACTIONS(323),
    [sym_var_label] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_0] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_A] = ACTIONS(341),
    [anon_sym_B] = ACTIONS(341),
    [anon_sym_C] = ACTIONS(341),
    [anon_sym_D] = ACTIONS(341),
    [anon_sym_E] = ACTIONS(341),
    [anon_sym_F] = ACTIONS(341),
    [anon_sym_G] = ACTIONS(341),
    [anon_sym_H] = ACTIONS(341),
    [anon_sym_I] = ACTIONS(341),
    [anon_sym_J] = ACTIONS(341),
    [anon_sym_K] = ACTIONS(341),
    [anon_sym_L] = ACTIONS(341),
    [anon_sym_M] = ACTIONS(341),
    [anon_sym_N] = ACTIONS(341),
    [anon_sym_O] = ACTIONS(341),
    [anon_sym_P] = ACTIONS(341),
    [anon_sym_Q] = ACTIONS(341),
    [anon_sym_R] = ACTIONS(341),
    [anon_sym_S] = ACTIONS(341),
    [anon_sym_T] = ACTIONS(341),
    [anon_sym_U] = ACTIONS(341),
    [anon_sym_V] = ACTIONS(341),
    [anon_sym_W] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(341),
    [anon_sym_Y] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_a] = ACTIONS(341),
    [anon_sym_b] = ACTIONS(341),
    [anon_sym_c] = ACTIONS(341),
    [anon_sym_d] = ACTIONS(341),
    [anon_sym_e] = ACTIONS(341),
    [anon_sym_f] = ACTIONS(341),
    [anon_sym_g] = ACTIONS(341),
    [anon_sym_h] = ACTIONS(341),
    [anon_sym_i] = ACTIONS(341),
    [anon_sym_j] = ACTIONS(341),
    [anon_sym_k] = ACTIONS(341),
    [anon_sym_l] = ACTIONS(341),
    [anon_sym_m] = ACTIONS(341),
    [anon_sym_n] = ACTIONS(341),
    [anon_sym_o] = ACTIONS(341),
    [anon_sym_p] = ACTIONS(341),
    [anon_sym_q] = ACTIONS(341),
    [anon_sym_r] = ACTIONS(341),
    [anon_sym_s] = ACTIONS(341),
    [anon_sym_t] = ACTIONS(341),
    [anon_sym_u] = ACTIONS(341),
    [anon_sym_v] = ACTIONS(341),
    [anon_sym_w] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_y] = ACTIONS(341),
    [anon_sym_z] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_POUND_LT] = ACTIONS(345),
    [anon_sym_POUND_GT] = ACTIONS(345),
    [anon_sym_POUND_CARET] = ACTIONS(345),
  },
  [6] = {
    [sym__label] = STATE(107),
    [sym_macro_args] = STATE(466),
    [sym__arg] = STATE(255),
    [sym_literal_arg] = STATE(255),
    [sym__addr_6502] = STATE(255),
    [sym_imm] = STATE(255),
    [sym_addr] = STATE(255),
    [sym_addr_x] = STATE(255),
    [sym_addr_y] = STATE(255),
    [sym_iaddr_ix] = STATE(255),
    [sym_iaddr_y] = STATE(255),
    [sym_iaddr] = STATE(255),
    [sym_mode_iopen] = STATE(95),
    [sym__addr_65816] = STATE(255),
    [sym_daddr] = STATE(255),
    [sym_daddr_y] = STATE(255),
    [sym_addr_s] = STATE(255),
    [sym_iaddr_is_y] = STATE(255),
    [sym_xyc] = STATE(255),
    [sym_mode_dopen] = STATE(96),
    [sym__aexpr] = STATE(107),
    [sym_unary_aexpr] = STATE(107),
    [sym_binary_aexpr] = STATE(107),
    [sym_eop_plus] = STATE(99),
    [sym_eop_minus] = STATE(99),
    [sym_imm_prefix] = STATE(69),
    [sym_number] = STATE(107),
    [sym_decimal] = STATE(125),
    [sym_hexadecimal] = STATE(125),
    [sym_binary] = STATE(125),
    [sym_pchar] = STATE(107),
    [sym_nchar] = STATE(107),
    [sym_current_addr] = STATE(107),
    [aux_sym_literal_arg_repeat1] = STATE(21),
    [aux_sym_decimal_repeat1] = STATE(105),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [sym_global_label] = ACTIONS(321),
    [sym_local_label] = ACTIONS(323),
    [sym_var_label] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_0] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_A] = ACTIONS(341),
    [anon_sym_B] = ACTIONS(341),
    [anon_sym_C] = ACTIONS(341),
    [anon_sym_D] = ACTIONS(341),
    [anon_sym_E] = ACTIONS(341),
    [anon_sym_F] = ACTIONS(341),
    [anon_sym_G] = ACTIONS(341),
    [anon_sym_H] = ACTIONS(341),
    [anon_sym_I] = ACTIONS(341),
    [anon_sym_J] = ACTIONS(341),
    [anon_sym_K] = ACTIONS(341),
    [anon_sym_L] = ACTIONS(341),
    [anon_sym_M] = ACTIONS(341),
    [anon_sym_N] = ACTIONS(341),
    [anon_sym_O] = ACTIONS(341),
    [anon_sym_P] = ACTIONS(341),
    [anon_sym_Q] = ACTIONS(341),
    [anon_sym_R] = ACTIONS(341),
    [anon_sym_S] = ACTIONS(341),
    [anon_sym_T] = ACTIONS(341),
    [anon_sym_U] = ACTIONS(341),
    [anon_sym_V] = ACTIONS(341),
    [anon_sym_W] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(341),
    [anon_sym_Y] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_a] = ACTIONS(341),
    [anon_sym_b] = ACTIONS(341),
    [anon_sym_c] = ACTIONS(341),
    [anon_sym_d] = ACTIONS(341),
    [anon_sym_e] = ACTIONS(341),
    [anon_sym_f] = ACTIONS(341),
    [anon_sym_g] = ACTIONS(341),
    [anon_sym_h] = ACTIONS(341),
    [anon_sym_i] = ACTIONS(341),
    [anon_sym_j] = ACTIONS(341),
    [anon_sym_k] = ACTIONS(341),
    [anon_sym_l] = ACTIONS(341),
    [anon_sym_m] = ACTIONS(341),
    [anon_sym_n] = ACTIONS(341),
    [anon_sym_o] = ACTIONS(341),
    [anon_sym_p] = ACTIONS(341),
    [anon_sym_q] = ACTIONS(341),
    [anon_sym_r] = ACTIONS(341),
    [anon_sym_s] = ACTIONS(341),
    [anon_sym_t] = ACTIONS(341),
    [anon_sym_u] = ACTIONS(341),
    [anon_sym_v] = ACTIONS(341),
    [anon_sym_w] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_y] = ACTIONS(341),
    [anon_sym_z] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_POUND_LT] = ACTIONS(345),
    [anon_sym_POUND_GT] = ACTIONS(345),
    [anon_sym_POUND_CARET] = ACTIONS(345),
  },
  [7] = {
    [sym__label] = STATE(107),
    [sym_macro_args] = STATE(473),
    [sym__arg] = STATE(255),
    [sym_literal_arg] = STATE(255),
    [sym__addr_6502] = STATE(255),
    [sym_imm] = STATE(255),
    [sym_addr] = STATE(255),
    [sym_addr_x] = STATE(255),
    [sym_addr_y] = STATE(255),
    [sym_iaddr_ix] = STATE(255),
    [sym_iaddr_y] = STATE(255),
    [sym_iaddr] = STATE(255),
    [sym_mode_iopen] = STATE(95),
    [sym__addr_65816] = STATE(255),
    [sym_daddr] = STATE(255),
    [sym_daddr_y] = STATE(255),
    [sym_addr_s] = STATE(255),
    [sym_iaddr_is_y] = STATE(255),
    [sym_xyc] = STATE(255),
    [sym_mode_dopen] = STATE(96),
    [sym__aexpr] = STATE(107),
    [sym_unary_aexpr] = STATE(107),
    [sym_binary_aexpr] = STATE(107),
    [sym_eop_plus] = STATE(99),
    [sym_eop_minus] = STATE(99),
    [sym_imm_prefix] = STATE(69),
    [sym_number] = STATE(107),
    [sym_decimal] = STATE(125),
    [sym_hexadecimal] = STATE(125),
    [sym_binary] = STATE(125),
    [sym_pchar] = STATE(107),
    [sym_nchar] = STATE(107),
    [sym_current_addr] = STATE(107),
    [aux_sym_literal_arg_repeat1] = STATE(21),
    [aux_sym_decimal_repeat1] = STATE(105),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [sym_global_label] = ACTIONS(321),
    [sym_local_label] = ACTIONS(323),
    [sym_var_label] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_0] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_A] = ACTIONS(341),
    [anon_sym_B] = ACTIONS(341),
    [anon_sym_C] = ACTIONS(341),
    [anon_sym_D] = ACTIONS(341),
    [anon_sym_E] = ACTIONS(341),
    [anon_sym_F] = ACTIONS(341),
    [anon_sym_G] = ACTIONS(341),
    [anon_sym_H] = ACTIONS(341),
    [anon_sym_I] = ACTIONS(341),
    [anon_sym_J] = ACTIONS(341),
    [anon_sym_K] = ACTIONS(341),
    [anon_sym_L] = ACTIONS(341),
    [anon_sym_M] = ACTIONS(341),
    [anon_sym_N] = ACTIONS(341),
    [anon_sym_O] = ACTIONS(341),
    [anon_sym_P] = ACTIONS(341),
    [anon_sym_Q] = ACTIONS(341),
    [anon_sym_R] = ACTIONS(341),
    [anon_sym_S] = ACTIONS(341),
    [anon_sym_T] = ACTIONS(341),
    [anon_sym_U] = ACTIONS(341),
    [anon_sym_V] = ACTIONS(341),
    [anon_sym_W] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(341),
    [anon_sym_Y] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_a] = ACTIONS(341),
    [anon_sym_b] = ACTIONS(341),
    [anon_sym_c] = ACTIONS(341),
    [anon_sym_d] = ACTIONS(341),
    [anon_sym_e] = ACTIONS(341),
    [anon_sym_f] = ACTIONS(341),
    [anon_sym_g] = ACTIONS(341),
    [anon_sym_h] = ACTIONS(341),
    [anon_sym_i] = ACTIONS(341),
    [anon_sym_j] = ACTIONS(341),
    [anon_sym_k] = ACTIONS(341),
    [anon_sym_l] = ACTIONS(341),
    [anon_sym_m] = ACTIONS(341),
    [anon_sym_n] = ACTIONS(341),
    [anon_sym_o] = ACTIONS(341),
    [anon_sym_p] = ACTIONS(341),
    [anon_sym_q] = ACTIONS(341),
    [anon_sym_r] = ACTIONS(341),
    [anon_sym_s] = ACTIONS(341),
    [anon_sym_t] = ACTIONS(341),
    [anon_sym_u] = ACTIONS(341),
    [anon_sym_v] = ACTIONS(341),
    [anon_sym_w] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_y] = ACTIONS(341),
    [anon_sym_z] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_POUND_LT] = ACTIONS(345),
    [anon_sym_POUND_GT] = ACTIONS(345),
    [anon_sym_POUND_CARET] = ACTIONS(345),
  },
  [8] = {
    [sym__label] = STATE(107),
    [sym__arg] = STATE(583),
    [sym_literal_arg] = STATE(583),
    [sym__addr_6502] = STATE(583),
    [sym_imm] = STATE(583),
    [sym_addr] = STATE(583),
    [sym_addr_x] = STATE(583),
    [sym_addr_y] = STATE(583),
    [sym_iaddr_ix] = STATE(583),
    [sym_iaddr_y] = STATE(583),
    [sym_iaddr] = STATE(583),
    [sym_mode_iopen] = STATE(95),
    [sym__addr_65816] = STATE(583),
    [sym_daddr] = STATE(583),
    [sym_daddr_y] = STATE(583),
    [sym_addr_s] = STATE(583),
    [sym_iaddr_is_y] = STATE(583),
    [sym_xyc] = STATE(583),
    [sym_mode_dopen] = STATE(96),
    [sym__aexpr] = STATE(107),
    [sym_unary_aexpr] = STATE(107),
    [sym_binary_aexpr] = STATE(107),
    [sym_eop_plus] = STATE(99),
    [sym_eop_minus] = STATE(99),
    [sym_imm_prefix] = STATE(69),
    [sym_number] = STATE(107),
    [sym_decimal] = STATE(125),
    [sym_hexadecimal] = STATE(125),
    [sym_binary] = STATE(125),
    [sym_pchar] = STATE(107),
    [sym_nchar] = STATE(107),
    [sym_current_addr] = STATE(107),
    [aux_sym_literal_arg_repeat1] = STATE(21),
    [aux_sym_decimal_repeat1] = STATE(105),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [sym_global_label] = ACTIONS(321),
    [sym_local_label] = ACTIONS(323),
    [sym_var_label] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_0] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(339),
    [anon_sym_8] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_A] = ACTIONS(341),
    [anon_sym_B] = ACTIONS(341),
    [anon_sym_C] = ACTIONS(341),
    [anon_sym_D] = ACTIONS(341),
    [anon_sym_E] = ACTIONS(341),
    [anon_sym_F] = ACTIONS(341),
    [anon_sym_G] = ACTIONS(341),
    [anon_sym_H] = ACTIONS(341),
    [anon_sym_I] = ACTIONS(341),
    [anon_sym_J] = ACTIONS(341),
    [anon_sym_K] = ACTIONS(341),
    [anon_sym_L] = ACTIONS(341),
    [anon_sym_M] = ACTIONS(341),
    [anon_sym_N] = ACTIONS(341),
    [anon_sym_O] = ACTIONS(341),
    [anon_sym_P] = ACTIONS(341),
    [anon_sym_Q] = ACTIONS(341),
    [anon_sym_R] = ACTIONS(341),
    [anon_sym_S] = ACTIONS(341),
    [anon_sym_T] = ACTIONS(341),
    [anon_sym_U] = ACTIONS(341),
    [anon_sym_V] = ACTIONS(341),
    [anon_sym_W] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(341),
    [anon_sym_Y] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_a] = ACTIONS(341),
    [anon_sym_b] = ACTIONS(341),
    [anon_sym_c] = ACTIONS(341),
    [anon_sym_d] = ACTIONS(341),
    [anon_sym_e] = ACTIONS(341),
    [anon_sym_f] = ACTIONS(341),
    [anon_sym_g] = ACTIONS(341),
    [anon_sym_h] = ACTIONS(341),
    [anon_sym_i] = ACTIONS(341),
    [anon_sym_j] = ACTIONS(341),
    [anon_sym_k] = ACTIONS(341),
    [anon_sym_l] = ACTIONS(341),
    [anon_sym_m] = ACTIONS(341),
    [anon_sym_n] = ACTIONS(341),
    [anon_sym_o] = ACTIONS(341),
    [anon_sym_p] = ACTIONS(341),
    [anon_sym_q] = ACTIONS(341),
    [anon_sym_r] = ACTIONS(341),
    [anon_sym_s] = ACTIONS(341),
    [anon_sym_t] = ACTIONS(341),
    [anon_sym_u] = ACTIONS(341),
    [anon_sym_v] = ACTIONS(341),
    [anon_sym_w] = ACTIONS(341),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_y] = ACTIONS(341),
    [anon_sym_z] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_POUND_LT] = ACTIONS(345),
    [anon_sym_POUND_GT] = ACTIONS(345),
    [anon_sym_POUND_CARET] = ACTIONS(345),
  },
  [9] = {
    [aux_sym__newline_token1] = ACTIONS(347),
    [sym__sep] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(347),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_BANG] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_0] = ACTIONS(353),
    [anon_sym_1] = ACTIONS(353),
    [anon_sym_2] = ACTIONS(353),
    [anon_sym_3] = ACTIONS(353),
    [anon_sym_4] = ACTIONS(353),
    [anon_sym_5] = ACTIONS(353),
    [anon_sym_6] = ACTIONS(353),
    [anon_sym_7] = ACTIONS(353),
    [anon_sym_8] = ACTIONS(353),
    [anon_sym_9] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_A] = ACTIONS(353),
    [anon_sym_B] = ACTIONS(353),
    [anon_sym_C] = ACTIONS(353),
    [anon_sym_D] = ACTIONS(353),
    [anon_sym_E] = ACTIONS(353),
    [anon_sym_F] = ACTIONS(353),
    [anon_sym_G] = ACTIONS(353),
    [anon_sym_H] = ACTIONS(353),
    [anon_sym_I] = ACTIONS(353),
    [anon_sym_J] = ACTIONS(353),
    [anon_sym_K] = ACTIONS(353),
    [anon_sym_L] = ACTIONS(353),
    [anon_sym_M] = ACTIONS(353),
    [anon_sym_N] = ACTIONS(353),
    [anon_sym_O] = ACTIONS(353),
    [anon_sym_P] = ACTIONS(353),
    [anon_sym_Q] = ACTIONS(353),
    [anon_sym_R] = ACTIONS(353),
    [anon_sym_S] = ACTIONS(353),
    [anon_sym_T] = ACTIONS(353),
    [anon_sym_U] = ACTIONS(353),
    [anon_sym_V] = ACTIONS(353),
    [anon_sym_W] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(353),
    [anon_sym_Y] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_a] = ACTIONS(353),
    [anon_sym_b] = ACTIONS(353),
    [anon_sym_c] = ACTIONS(353),
    [anon_sym_d] = ACTIONS(353),
    [anon_sym_e] = ACTIONS(353),
    [anon_sym_f] = ACTIONS(353),
    [anon_sym_g] = ACTIONS(353),
    [anon_sym_h] = ACTIONS(353),
    [anon_sym_i] = ACTIONS(353),
    [anon_sym_j] = ACTIONS(353),
    [anon_sym_k] = ACTIONS(353),
    [anon_sym_l] = ACTIONS(353),
    [anon_sym_m] = ACTIONS(353),
    [anon_sym_n] = ACTIONS(353),
    [anon_sym_o] = ACTIONS(353),
    [anon_sym_p] = ACTIONS(353),
    [anon_sym_q] = ACTIONS(353),
    [anon_sym_r] = ACTIONS(353),
    [anon_sym_s] = ACTIONS(353),
    [anon_sym_t] = ACTIONS(353),
    [anon_sym_u] = ACTIONS(353),
    [anon_sym_v] = ACTIONS(353),
    [anon_sym_w] = ACTIONS(353),
    [anon_sym_x] = ACTIONS(353),
    [anon_sym_y] = ACTIONS(353),
    [anon_sym_z] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_COMMAX] = ACTIONS(355),
    [anon_sym_COMMAx] = ACTIONS(355),
    [anon_sym_COMMAY] = ACTIONS(355),
    [anon_sym_COMMAy] = ACTIONS(355),
    [anon_sym_COMMAS] = ACTIONS(355),
    [anon_sym_COMMAs] = ACTIONS(355),
  },
  [10] = {
    [aux_sym__newline_token1] = ACTIONS(357),
    [sym__sep] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_0] = ACTIONS(357),
    [anon_sym_1] = ACTIONS(357),
    [anon_sym_2] = ACTIONS(357),
    [anon_sym_3] = ACTIONS(357),
    [anon_sym_4] = ACTIONS(357),
    [anon_sym_5] = ACTIONS(357),
    [anon_sym_6] = ACTIONS(357),
    [anon_sym_7] = ACTIONS(357),
    [anon_sym_8] = ACTIONS(357),
    [anon_sym_9] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_A] = ACTIONS(353),
    [anon_sym_B] = ACTIONS(353),
    [anon_sym_C] = ACTIONS(353),
    [anon_sym_D] = ACTIONS(353),
    [anon_sym_E] = ACTIONS(353),
    [anon_sym_F] = ACTIONS(353),
    [anon_sym_G] = ACTIONS(353),
    [anon_sym_H] = ACTIONS(353),
    [anon_sym_I] = ACTIONS(353),
    [anon_sym_J] = ACTIONS(353),
    [anon_sym_K] = ACTIONS(353),
    [anon_sym_L] = ACTIONS(353),
    [anon_sym_M] = ACTIONS(353),
    [anon_sym_N] = ACTIONS(353),
    [anon_sym_O] = ACTIONS(353),
    [anon_sym_P] = ACTIONS(353),
    [anon_sym_Q] = ACTIONS(353),
    [anon_sym_R] = ACTIONS(353),
    [anon_sym_S] = ACTIONS(353),
    [anon_sym_T] = ACTIONS(353),
    [anon_sym_U] = ACTIONS(353),
    [anon_sym_V] = ACTIONS(353),
    [anon_sym_W] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(353),
    [anon_sym_Y] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_a] = ACTIONS(353),
    [anon_sym_b] = ACTIONS(353),
    [anon_sym_c] = ACTIONS(353),
    [anon_sym_d] = ACTIONS(353),
    [anon_sym_e] = ACTIONS(353),
    [anon_sym_f] = ACTIONS(353),
    [anon_sym_g] = ACTIONS(353),
    [anon_sym_h] = ACTIONS(353),
    [anon_sym_i] = ACTIONS(353),
    [anon_sym_j] = ACTIONS(353),
    [anon_sym_k] = ACTIONS(353),
    [anon_sym_l] = ACTIONS(353),
    [anon_sym_m] = ACTIONS(353),
    [anon_sym_n] = ACTIONS(353),
    [anon_sym_o] = ACTIONS(353),
    [anon_sym_p] = ACTIONS(353),
    [anon_sym_q] = ACTIONS(353),
    [anon_sym_r] = ACTIONS(353),
    [anon_sym_s] = ACTIONS(353),
    [anon_sym_t] = ACTIONS(353),
    [anon_sym_u] = ACTIONS(353),
    [anon_sym_v] = ACTIONS(353),
    [anon_sym_w] = ACTIONS(353),
    [anon_sym_x] = ACTIONS(353),
    [anon_sym_y] = ACTIONS(353),
    [anon_sym_z] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_COMMAX] = ACTIONS(363),
    [anon_sym_COMMAx] = ACTIONS(363),
    [anon_sym_COMMAY] = ACTIONS(363),
    [anon_sym_COMMAy] = ACTIONS(363),
    [anon_sym_COMMAS] = ACTIONS(363),
    [anon_sym_COMMAs] = ACTIONS(363),
  },
  [11] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(353),
    [sym_global_label] = ACTIONS(368),
    [sym_local_label] = ACTIONS(370),
    [sym_var_label] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_0] = ACTIONS(365),
    [anon_sym_1] = ACTIONS(365),
    [anon_sym_2] = ACTIONS(365),
    [anon_sym_3] = ACTIONS(365),
    [anon_sym_4] = ACTIONS(365),
    [anon_sym_5] = ACTIONS(365),
    [anon_sym_6] = ACTIONS(365),
    [anon_sym_7] = ACTIONS(365),
    [anon_sym_8] = ACTIONS(365),
    [anon_sym_9] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_A] = ACTIONS(372),
    [anon_sym_B] = ACTIONS(372),
    [anon_sym_C] = ACTIONS(372),
    [anon_sym_D] = ACTIONS(372),
    [anon_sym_E] = ACTIONS(372),
    [anon_sym_F] = ACTIONS(372),
    [anon_sym_G] = ACTIONS(372),
    [anon_sym_H] = ACTIONS(372),
    [anon_sym_I] = ACTIONS(372),
    [anon_sym_J] = ACTIONS(372),
    [anon_sym_K] = ACTIONS(372),
    [anon_sym_L] = ACTIONS(372),
    [anon_sym_M] = ACTIONS(372),
    [anon_sym_N] = ACTIONS(372),
    [anon_sym_O] = ACTIONS(372),
    [anon_sym_P] = ACTIONS(372),
    [anon_sym_Q] = ACTIONS(372),
    [anon_sym_R] = ACTIONS(372),
    [anon_sym_S] = ACTIONS(372),
    [anon_sym_T] = ACTIONS(372),
    [anon_sym_U] = ACTIONS(372),
    [anon_sym_V] = ACTIONS(372),
    [anon_sym_W] = ACTIONS(372),
    [anon_sym_X] = ACTIONS(372),
    [anon_sym_Y] = ACTIONS(372),
    [anon_sym_Z] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_b] = ACTIONS(372),
    [anon_sym_c] = ACTIONS(372),
    [anon_sym_d] = ACTIONS(372),
    [anon_sym_e] = ACTIONS(372),
    [anon_sym_f] = ACTIONS(372),
    [anon_sym_g] = ACTIONS(372),
    [anon_sym_h] = ACTIONS(372),
    [anon_sym_i] = ACTIONS(372),
    [anon_sym_j] = ACTIONS(372),
    [anon_sym_k] = ACTIONS(372),
    [anon_sym_l] = ACTIONS(372),
    [anon_sym_m] = ACTIONS(372),
    [anon_sym_n] = ACTIONS(372),
    [anon_sym_o] = ACTIONS(372),
    [anon_sym_p] = ACTIONS(372),
    [anon_sym_q] = ACTIONS(372),
    [anon_sym_r] = ACTIONS(372),
    [anon_sym_s] = ACTIONS(372),
    [anon_sym_t] = ACTIONS(372),
    [anon_sym_u] = ACTIONS(372),
    [anon_sym_v] = ACTIONS(372),
    [anon_sym_w] = ACTIONS(372),
    [anon_sym_x] = ACTIONS(372),
    [anon_sym_y] = ACTIONS(372),
    [anon_sym_z] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
  },
  [12] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(353),
    [sym_global_label] = ACTIONS(377),
    [sym_local_label] = ACTIONS(379),
    [sym_var_label] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(374),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_0] = ACTIONS(374),
    [anon_sym_1] = ACTIONS(374),
    [anon_sym_2] = ACTIONS(374),
    [anon_sym_3] = ACTIONS(374),
    [anon_sym_4] = ACTIONS(374),
    [anon_sym_5] = ACTIONS(374),
    [anon_sym_6] = ACTIONS(374),
    [anon_sym_7] = ACTIONS(374),
    [anon_sym_8] = ACTIONS(374),
    [anon_sym_9] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_A] = ACTIONS(372),
    [anon_sym_B] = ACTIONS(372),
    [anon_sym_C] = ACTIONS(372),
    [anon_sym_D] = ACTIONS(372),
    [anon_sym_E] = ACTIONS(372),
    [anon_sym_F] = ACTIONS(372),
    [anon_sym_G] = ACTIONS(372),
    [anon_sym_H] = ACTIONS(372),
    [anon_sym_I] = ACTIONS(372),
    [anon_sym_J] = ACTIONS(372),
    [anon_sym_K] = ACTIONS(372),
    [anon_sym_L] = ACTIONS(372),
    [anon_sym_M] = ACTIONS(372),
    [anon_sym_N] = ACTIONS(372),
    [anon_sym_O] = ACTIONS(372),
    [anon_sym_P] = ACTIONS(372),
    [anon_sym_Q] = ACTIONS(372),
    [anon_sym_R] = ACTIONS(372),
    [anon_sym_S] = ACTIONS(372),
    [anon_sym_T] = ACTIONS(372),
    [anon_sym_U] = ACTIONS(372),
    [anon_sym_V] = ACTIONS(372),
    [anon_sym_W] = ACTIONS(372),
    [anon_sym_X] = ACTIONS(372),
    [anon_sym_Y] = ACTIONS(372),
    [anon_sym_Z] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_b] = ACTIONS(372),
    [anon_sym_c] = ACTIONS(372),
    [anon_sym_d] = ACTIONS(372),
    [anon_sym_e] = ACTIONS(372),
    [anon_sym_f] = ACTIONS(372),
    [anon_sym_g] = ACTIONS(372),
    [anon_sym_h] = ACTIONS(372),
    [anon_sym_i] = ACTIONS(372),
    [anon_sym_j] = ACTIONS(372),
    [anon_sym_k] = ACTIONS(372),
    [anon_sym_l] = ACTIONS(372),
    [anon_sym_m] = ACTIONS(372),
    [anon_sym_n] = ACTIONS(372),
    [anon_sym_o] = ACTIONS(372),
    [anon_sym_p] = ACTIONS(372),
    [anon_sym_q] = ACTIONS(372),
    [anon_sym_r] = ACTIONS(372),
    [anon_sym_s] = ACTIONS(372),
    [anon_sym_t] = ACTIONS(372),
    [anon_sym_u] = ACTIONS(372),
    [anon_sym_v] = ACTIONS(372),
    [anon_sym_w] = ACTIONS(372),
    [anon_sym_x] = ACTIONS(372),
    [anon_sym_y] = ACTIONS(372),
    [anon_sym_z] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
  },
  [13] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(353),
    [sym_global_label] = ACTIONS(384),
    [sym_local_label] = ACTIONS(386),
    [sym_var_label] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_0] = ACTIONS(381),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_2] = ACTIONS(381),
    [anon_sym_3] = ACTIONS(381),
    [anon_sym_4] = ACTIONS(381),
    [anon_sym_5] = ACTIONS(381),
    [anon_sym_6] = ACTIONS(381),
    [anon_sym_7] = ACTIONS(381),
    [anon_sym_8] = ACTIONS(381),
    [anon_sym_9] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_A] = ACTIONS(372),
    [anon_sym_B] = ACTIONS(372),
    [anon_sym_C] = ACTIONS(372),
    [anon_sym_D] = ACTIONS(372),
    [anon_sym_E] = ACTIONS(372),
    [anon_sym_F] = ACTIONS(372),
    [anon_sym_G] = ACTIONS(372),
    [anon_sym_H] = ACTIONS(372),
    [anon_sym_I] = ACTIONS(372),
    [anon_sym_J] = ACTIONS(372),
    [anon_sym_K] = ACTIONS(372),
    [anon_sym_L] = ACTIONS(372),
    [anon_sym_M] = ACTIONS(372),
    [anon_sym_N] = ACTIONS(372),
    [anon_sym_O] = ACTIONS(372),
    [anon_sym_P] = ACTIONS(372),
    [anon_sym_Q] = ACTIONS(372),
    [anon_sym_R] = ACTIONS(372),
    [anon_sym_S] = ACTIONS(372),
    [anon_sym_T] = ACTIONS(372),
    [anon_sym_U] = ACTIONS(372),
    [anon_sym_V] = ACTIONS(372),
    [anon_sym_W] = ACTIONS(372),
    [anon_sym_X] = ACTIONS(372),
    [anon_sym_Y] = ACTIONS(372),
    [anon_sym_Z] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_b] = ACTIONS(372),
    [anon_sym_c] = ACTIONS(372),
    [anon_sym_d] = ACTIONS(372),
    [anon_sym_e] = ACTIONS(372),
    [anon_sym_f] = ACTIONS(372),
    [anon_sym_g] = ACTIONS(372),
    [anon_sym_h] = ACTIONS(372),
    [anon_sym_i] = ACTIONS(372),
    [anon_sym_j] = ACTIONS(372),
    [anon_sym_k] = ACTIONS(372),
    [anon_sym_l] = ACTIONS(372),
    [anon_sym_m] = ACTIONS(372),
    [anon_sym_n] = ACTIONS(372),
    [anon_sym_o] = ACTIONS(372),
    [anon_sym_p] = ACTIONS(372),
    [anon_sym_q] = ACTIONS(372),
    [anon_sym_r] = ACTIONS(372),
    [anon_sym_s] = ACTIONS(372),
    [anon_sym_t] = ACTIONS(372),
    [anon_sym_u] = ACTIONS(372),
    [anon_sym_v] = ACTIONS(372),
    [anon_sym_w] = ACTIONS(372),
    [anon_sym_x] = ACTIONS(372),
    [anon_sym_y] = ACTIONS(372),
    [anon_sym_z] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
  },
  [14] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(353),
    [sym_global_label] = ACTIONS(391),
    [sym_local_label] = ACTIONS(393),
    [sym_var_label] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_0] = ACTIONS(388),
    [anon_sym_1] = ACTIONS(388),
    [anon_sym_2] = ACTIONS(388),
    [anon_sym_3] = ACTIONS(388),
    [anon_sym_4] = ACTIONS(388),
    [anon_sym_5] = ACTIONS(388),
    [anon_sym_6] = ACTIONS(388),
    [anon_sym_7] = ACTIONS(388),
    [anon_sym_8] = ACTIONS(388),
    [anon_sym_9] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_A] = ACTIONS(372),
    [anon_sym_B] = ACTIONS(372),
    [anon_sym_C] = ACTIONS(372),
    [anon_sym_D] = ACTIONS(372),
    [anon_sym_E] = ACTIONS(372),
    [anon_sym_F] = ACTIONS(372),
    [anon_sym_G] = ACTIONS(372),
    [anon_sym_H] = ACTIONS(372),
    [anon_sym_I] = ACTIONS(372),
    [anon_sym_J] = ACTIONS(372),
    [anon_sym_K] = ACTIONS(372),
    [anon_sym_L] = ACTIONS(372),
    [anon_sym_M] = ACTIONS(372),
    [anon_sym_N] = ACTIONS(372),
    [anon_sym_O] = ACTIONS(372),
    [anon_sym_P] = ACTIONS(372),
    [anon_sym_Q] = ACTIONS(372),
    [anon_sym_R] = ACTIONS(372),
    [anon_sym_S] = ACTIONS(372),
    [anon_sym_T] = ACTIONS(372),
    [anon_sym_U] = ACTIONS(372),
    [anon_sym_V] = ACTIONS(372),
    [anon_sym_W] = ACTIONS(372),
    [anon_sym_X] = ACTIONS(372),
    [anon_sym_Y] = ACTIONS(372),
    [anon_sym_Z] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_b] = ACTIONS(372),
    [anon_sym_c] = ACTIONS(372),
    [anon_sym_d] = ACTIONS(372),
    [anon_sym_e] = ACTIONS(372),
    [anon_sym_f] = ACTIONS(372),
    [anon_sym_g] = ACTIONS(372),
    [anon_sym_h] = ACTIONS(372),
    [anon_sym_i] = ACTIONS(372),
    [anon_sym_j] = ACTIONS(372),
    [anon_sym_k] = ACTIONS(372),
    [anon_sym_l] = ACTIONS(372),
    [anon_sym_m] = ACTIONS(372),
    [anon_sym_n] = ACTIONS(372),
    [anon_sym_o] = ACTIONS(372),
    [anon_sym_p] = ACTIONS(372),
    [anon_sym_q] = ACTIONS(372),
    [anon_sym_r] = ACTIONS(372),
    [anon_sym_s] = ACTIONS(372),
    [anon_sym_t] = ACTIONS(372),
    [anon_sym_u] = ACTIONS(372),
    [anon_sym_v] = ACTIONS(372),
    [anon_sym_w] = ACTIONS(372),
    [anon_sym_x] = ACTIONS(372),
    [anon_sym_y] = ACTIONS(372),
    [anon_sym_z] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
  },
  [15] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(353),
    [sym_global_label] = ACTIONS(398),
    [sym_local_label] = ACTIONS(400),
    [sym_var_label] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_0] = ACTIONS(395),
    [anon_sym_1] = ACTIONS(395),
    [anon_sym_2] = ACTIONS(395),
    [anon_sym_3] = ACTIONS(395),
    [anon_sym_4] = ACTIONS(395),
    [anon_sym_5] = ACTIONS(395),
    [anon_sym_6] = ACTIONS(395),
    [anon_sym_7] = ACTIONS(395),
    [anon_sym_8] = ACTIONS(395),
    [anon_sym_9] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_A] = ACTIONS(372),
    [anon_sym_B] = ACTIONS(372),
    [anon_sym_C] = ACTIONS(372),
    [anon_sym_D] = ACTIONS(372),
    [anon_sym_E] = ACTIONS(372),
    [anon_sym_F] = ACTIONS(372),
    [anon_sym_G] = ACTIONS(372),
    [anon_sym_H] = ACTIONS(372),
    [anon_sym_I] = ACTIONS(372),
    [anon_sym_J] = ACTIONS(372),
    [anon_sym_K] = ACTIONS(372),
    [anon_sym_L] = ACTIONS(372),
    [anon_sym_M] = ACTIONS(372),
    [anon_sym_N] = ACTIONS(372),
    [anon_sym_O] = ACTIONS(372),
    [anon_sym_P] = ACTIONS(372),
    [anon_sym_Q] = ACTIONS(372),
    [anon_sym_R] = ACTIONS(372),
    [anon_sym_S] = ACTIONS(372),
    [anon_sym_T] = ACTIONS(372),
    [anon_sym_U] = ACTIONS(372),
    [anon_sym_V] = ACTIONS(372),
    [anon_sym_W] = ACTIONS(372),
    [anon_sym_X] = ACTIONS(372),
    [anon_sym_Y] = ACTIONS(372),
    [anon_sym_Z] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_b] = ACTIONS(372),
    [anon_sym_c] = ACTIONS(372),
    [anon_sym_d] = ACTIONS(372),
    [anon_sym_e] = ACTIONS(372),
    [anon_sym_f] = ACTIONS(372),
    [anon_sym_g] = ACTIONS(372),
    [anon_sym_h] = ACTIONS(372),
    [anon_sym_i] = ACTIONS(372),
    [anon_sym_j] = ACTIONS(372),
    [anon_sym_k] = ACTIONS(372),
    [anon_sym_l] = ACTIONS(372),
    [anon_sym_m] = ACTIONS(372),
    [anon_sym_n] = ACTIONS(372),
    [anon_sym_o] = ACTIONS(372),
    [anon_sym_p] = ACTIONS(372),
    [anon_sym_q] = ACTIONS(372),
    [anon_sym_r] = ACTIONS(372),
    [anon_sym_s] = ACTIONS(372),
    [anon_sym_t] = ACTIONS(372),
    [anon_sym_u] = ACTIONS(372),
    [anon_sym_v] = ACTIONS(372),
    [anon_sym_w] = ACTIONS(372),
    [anon_sym_x] = ACTIONS(372),
    [anon_sym_y] = ACTIONS(372),
    [anon_sym_z] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
  },
  [16] = {
    [aux_sym_hexadecimal_repeat1] = STATE(35),
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_0] = ACTIONS(402),
    [anon_sym_1] = ACTIONS(402),
    [anon_sym_2] = ACTIONS(402),
    [anon_sym_3] = ACTIONS(402),
    [anon_sym_4] = ACTIONS(402),
    [anon_sym_5] = ACTIONS(402),
    [anon_sym_6] = ACTIONS(402),
    [anon_sym_7] = ACTIONS(402),
    [anon_sym_8] = ACTIONS(402),
    [anon_sym_9] = ACTIONS(402),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_A] = ACTIONS(402),
    [anon_sym_B] = ACTIONS(402),
    [anon_sym_C] = ACTIONS(402),
    [anon_sym_D] = ACTIONS(402),
    [anon_sym_E] = ACTIONS(402),
    [anon_sym_F] = ACTIONS(402),
    [anon_sym_G] = ACTIONS(353),
    [anon_sym_H] = ACTIONS(353),
    [anon_sym_I] = ACTIONS(353),
    [anon_sym_J] = ACTIONS(353),
    [anon_sym_K] = ACTIONS(353),
    [anon_sym_L] = ACTIONS(353),
    [anon_sym_M] = ACTIONS(353),
    [anon_sym_N] = ACTIONS(353),
    [anon_sym_O] = ACTIONS(353),
    [anon_sym_P] = ACTIONS(353),
    [anon_sym_Q] = ACTIONS(353),
    [anon_sym_R] = ACTIONS(353),
    [anon_sym_S] = ACTIONS(353),
    [anon_sym_T] = ACTIONS(353),
    [anon_sym_U] = ACTIONS(353),
    [anon_sym_V] = ACTIONS(353),
    [anon_sym_W] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(353),
    [anon_sym_Y] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_a] = ACTIONS(402),
    [anon_sym_b] = ACTIONS(402),
    [anon_sym_c] = ACTIONS(402),
    [anon_sym_d] = ACTIONS(402),
    [anon_sym_e] = ACTIONS(402),
    [anon_sym_f] = ACTIONS(402),
    [anon_sym_g] = ACTIONS(353),
    [anon_sym_h] = ACTIONS(353),
    [anon_sym_i] = ACTIONS(353),
    [anon_sym_j] = ACTIONS(353),
    [anon_sym_k] = ACTIONS(353),
    [anon_sym_l] = ACTIONS(353),
    [anon_sym_m] = ACTIONS(353),
    [anon_sym_n] = ACTIONS(353),
    [anon_sym_o] = ACTIONS(353),
    [anon_sym_p] = ACTIONS(353),
    [anon_sym_q] = ACTIONS(353),
    [anon_sym_r] = ACTIONS(353),
    [anon_sym_s] = ACTIONS(353),
    [anon_sym_t] = ACTIONS(353),
    [anon_sym_u] = ACTIONS(353),
    [anon_sym_v] = ACTIONS(353),
    [anon_sym_w] = ACTIONS(353),
    [anon_sym_x] = ACTIONS(353),
    [anon_sym_y] = ACTIONS(353),
    [anon_sym_z] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
  },
  [17] = {
    [aux_sym_literal_arg_repeat1] = STATE(17),
    [aux_sym__newline_token1] = ACTIONS(405),
    [sym__sep] = ACTIONS(405),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_BANG] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(407),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_0] = ACTIONS(407),
    [anon_sym_1] = ACTIONS(407),
    [anon_sym_2] = ACTIONS(407),
    [anon_sym_3] = ACTIONS(407),
    [anon_sym_4] = ACTIONS(407),
    [anon_sym_5] = ACTIONS(407),
    [anon_sym_6] = ACTIONS(407),
    [anon_sym_7] = ACTIONS(407),
    [anon_sym_8] = ACTIONS(407),
    [anon_sym_9] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(407),
    [anon_sym_GT] = ACTIONS(407),
    [anon_sym_QMARK] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_A] = ACTIONS(407),
    [anon_sym_B] = ACTIONS(407),
    [anon_sym_C] = ACTIONS(407),
    [anon_sym_D] = ACTIONS(407),
    [anon_sym_E] = ACTIONS(407),
    [anon_sym_F] = ACTIONS(407),
    [anon_sym_G] = ACTIONS(407),
    [anon_sym_H] = ACTIONS(407),
    [anon_sym_I] = ACTIONS(407),
    [anon_sym_J] = ACTIONS(407),
    [anon_sym_K] = ACTIONS(407),
    [anon_sym_L] = ACTIONS(407),
    [anon_sym_M] = ACTIONS(407),
    [anon_sym_N] = ACTIONS(407),
    [anon_sym_O] = ACTIONS(407),
    [anon_sym_P] = ACTIONS(407),
    [anon_sym_Q] = ACTIONS(407),
    [anon_sym_R] = ACTIONS(407),
    [anon_sym_S] = ACTIONS(407),
    [anon_sym_T] = ACTIONS(407),
    [anon_sym_U] = ACTIONS(407),
    [anon_sym_V] = ACTIONS(407),
    [anon_sym_W] = ACTIONS(407),
    [anon_sym_X] = ACTIONS(407),
    [anon_sym_Y] = ACTIONS(407),
    [anon_sym_Z] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_CARET] = ACTIONS(407),
    [anon_sym__] = ACTIONS(407),
    [anon_sym_BQUOTE] = ACTIONS(407),
    [anon_sym_a] = ACTIONS(407),
    [anon_sym_b] = ACTIONS(407),
    [anon_sym_c] = ACTIONS(407),
    [anon_sym_d] = ACTIONS(407),
    [anon_sym_e] = ACTIONS(407),
    [anon_sym_f] = ACTIONS(407),
    [anon_sym_g] = ACTIONS(407),
    [anon_sym_h] = ACTIONS(407),
    [anon_sym_i] = ACTIONS(407),
    [anon_sym_j] = ACTIONS(407),
    [anon_sym_k] = ACTIONS(407),
    [anon_sym_l] = ACTIONS(407),
    [anon_sym_m] = ACTIONS(407),
    [anon_sym_n] = ACTIONS(407),
    [anon_sym_o] = ACTIONS(407),
    [anon_sym_p] = ACTIONS(407),
    [anon_sym_q] = ACTIONS(407),
    [anon_sym_r] = ACTIONS(407),
    [anon_sym_s] = ACTIONS(407),
    [anon_sym_t] = ACTIONS(407),
    [anon_sym_u] = ACTIONS(407),
    [anon_sym_v] = ACTIONS(407),
    [anon_sym_w] = ACTIONS(407),
    [anon_sym_x] = ACTIONS(407),
    [anon_sym_y] = ACTIONS(407),
    [anon_sym_z] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(407),
  },
  [18] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_0] = ACTIONS(353),
    [anon_sym_1] = ACTIONS(353),
    [anon_sym_2] = ACTIONS(353),
    [anon_sym_3] = ACTIONS(353),
    [anon_sym_4] = ACTIONS(353),
    [anon_sym_5] = ACTIONS(353),
    [anon_sym_6] = ACTIONS(353),
    [anon_sym_7] = ACTIONS(353),
    [anon_sym_8] = ACTIONS(353),
    [anon_sym_9] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_A] = ACTIONS(353),
    [anon_sym_B] = ACTIONS(353),
    [anon_sym_C] = ACTIONS(353),
    [anon_sym_D] = ACTIONS(353),
    [anon_sym_E] = ACTIONS(353),
    [anon_sym_F] = ACTIONS(353),
    [anon_sym_G] = ACTIONS(353),
    [anon_sym_H] = ACTIONS(353),
    [anon_sym_I] = ACTIONS(353),
    [anon_sym_J] = ACTIONS(353),
    [anon_sym_K] = ACTIONS(353),
    [anon_sym_L] = ACTIONS(353),
    [anon_sym_M] = ACTIONS(353),
    [anon_sym_N] = ACTIONS(353),
    [anon_sym_O] = ACTIONS(353),
    [anon_sym_P] = ACTIONS(353),
    [anon_sym_Q] = ACTIONS(353),
    [anon_sym_R] = ACTIONS(353),
    [anon_sym_S] = ACTIONS(353),
    [anon_sym_T] = ACTIONS(353),
    [anon_sym_U] = ACTIONS(353),
    [anon_sym_V] = ACTIONS(353),
    [anon_sym_W] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(353),
    [anon_sym_Y] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_a] = ACTIONS(353),
    [anon_sym_b] = ACTIONS(353),
    [anon_sym_c] = ACTIONS(353),
    [anon_sym_d] = ACTIONS(353),
    [anon_sym_e] = ACTIONS(353),
    [anon_sym_f] = ACTIONS(353),
    [anon_sym_g] = ACTIONS(353),
    [anon_sym_h] = ACTIONS(353),
    [anon_sym_i] = ACTIONS(353),
    [anon_sym_j] = ACTIONS(353),
    [anon_sym_k] = ACTIONS(353),
    [anon_sym_l] = ACTIONS(353),
    [anon_sym_m] = ACTIONS(353),
    [anon_sym_n] = ACTIONS(353),
    [anon_sym_o] = ACTIONS(353),
    [anon_sym_p] = ACTIONS(353),
    [anon_sym_q] = ACTIONS(353),
    [anon_sym_r] = ACTIONS(353),
    [anon_sym_s] = ACTIONS(353),
    [anon_sym_t] = ACTIONS(353),
    [anon_sym_u] = ACTIONS(353),
    [anon_sym_v] = ACTIONS(353),
    [anon_sym_w] = ACTIONS(353),
    [anon_sym_x] = ACTIONS(353),
    [anon_sym_y] = ACTIONS(353),
    [anon_sym_z] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [aux_sym_nchar_token1] = ACTIONS(410),
  },
  [19] = {
    [aux_sym_binary_repeat1] = STATE(117),
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_0] = ACTIONS(412),
    [anon_sym_1] = ACTIONS(412),
    [anon_sym_2] = ACTIONS(353),
    [anon_sym_3] = ACTIONS(353),
    [anon_sym_4] = ACTIONS(353),
    [anon_sym_5] = ACTIONS(353),
    [anon_sym_6] = ACTIONS(353),
    [anon_sym_7] = ACTIONS(353),
    [anon_sym_8] = ACTIONS(353),
    [anon_sym_9] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_A] = ACTIONS(353),
    [anon_sym_B] = ACTIONS(353),
    [anon_sym_C] = ACTIONS(353),
    [anon_sym_D] = ACTIONS(353),
    [anon_sym_E] = ACTIONS(353),
    [anon_sym_F] = ACTIONS(353),
    [anon_sym_G] = ACTIONS(353),
    [anon_sym_H] = ACTIONS(353),
    [anon_sym_I] = ACTIONS(353),
    [anon_sym_J] = ACTIONS(353),
    [anon_sym_K] = ACTIONS(353),
    [anon_sym_L] = ACTIONS(353),
    [anon_sym_M] = ACTIONS(353),
    [anon_sym_N] = ACTIONS(353),
    [anon_sym_O] = ACTIONS(353),
    [anon_sym_P] = ACTIONS(353),
    [anon_sym_Q] = ACTIONS(353),
    [anon_sym_R] = ACTIONS(353),
    [anon_sym_S] = ACTIONS(353),
    [anon_sym_T] = ACTIONS(353),
    [anon_sym_U] = ACTIONS(353),
    [anon_sym_V] = ACTIONS(353),
    [anon_sym_W] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(353),
    [anon_sym_Y] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_a] = ACTIONS(353),
    [anon_sym_b] = ACTIONS(353),
    [anon_sym_c] = ACTIONS(353),
    [anon_sym_d] = ACTIONS(353),
    [anon_sym_e] = ACTIONS(353),
    [anon_sym_f] = ACTIONS(353),
    [anon_sym_g] = ACTIONS(353),
    [anon_sym_h] = ACTIONS(353),
    [anon_sym_i] = ACTIONS(353),
    [anon_sym_j] = ACTIONS(353),
    [anon_sym_k] = ACTIONS(353),
    [anon_sym_l] = ACTIONS(353),
    [anon_sym_m] = ACTIONS(353),
    [anon_sym_n] = ACTIONS(353),
    [anon_sym_o] = ACTIONS(353),
    [anon_sym_p] = ACTIONS(353),
    [anon_sym_q] = ACTIONS(353),
    [anon_sym_r] = ACTIONS(353),
    [anon_sym_s] = ACTIONS(353),
    [anon_sym_t] = ACTIONS(353),
    [anon_sym_u] = ACTIONS(353),
    [anon_sym_v] = ACTIONS(353),
    [anon_sym_w] = ACTIONS(353),
    [anon_sym_x] = ACTIONS(353),
    [anon_sym_y] = ACTIONS(353),
    [anon_sym_z] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
  },
  [20] = {
    [aux_sym__newline_token1] = ACTIONS(353),
    [sym__sep] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_0] = ACTIONS(353),
    [anon_sym_1] = ACTIONS(353),
    [anon_sym_2] = ACTIONS(353),
    [anon_sym_3] = ACTIONS(353),
    [anon_sym_4] = ACTIONS(353),
    [anon_sym_5] = ACTIONS(353),
    [anon_sym_6] = ACTIONS(353),
    [anon_sym_7] = ACTIONS(353),
    [anon_sym_8] = ACTIONS(353),
    [anon_sym_9] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_A] = ACTIONS(353),
    [anon_sym_B] = ACTIONS(353),
    [anon_sym_C] = ACTIONS(353),
    [anon_sym_D] = ACTIONS(353),
    [anon_sym_E] = ACTIONS(353),
    [anon_sym_F] = ACTIONS(353),
    [anon_sym_G] = ACTIONS(353),
    [anon_sym_H] = ACTIONS(353),
    [anon_sym_I] = ACTIONS(353),
    [anon_sym_J] = ACTIONS(353),
    [anon_sym_K] = ACTIONS(353),
    [anon_sym_L] = ACTIONS(353),
    [anon_sym_M] = ACTIONS(353),
    [anon_sym_N] = ACTIONS(353),
    [anon_sym_O] = ACTIONS(353),
    [anon_sym_P] = ACTIONS(353),
    [anon_sym_Q] = ACTIONS(353),
    [anon_sym_R] = ACTIONS(353),
    [anon_sym_S] = ACTIONS(353),
    [anon_sym_T] = ACTIONS(353),
    [anon_sym_U] = ACTIONS(353),
    [anon_sym_V] = ACTIONS(353),
    [anon_sym_W] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(353),
    [anon_sym_Y] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_a] = ACTIONS(353),
    [anon_sym_b] = ACTIONS(353),
    [anon_sym_c] = ACTIONS(353),
    [anon_sym_d] = ACTIONS(353),
    [anon_sym_e] = ACTIONS(353),
    [anon_sym_f] = ACTIONS(353),
    [anon_sym_g] = ACTIONS(353),
    [anon_sym_h] = ACTIONS(353),
    [anon_sym_i] = ACTIONS(353),
    [anon_sym_j] = ACTIONS(353),
    [anon_sym_k] = ACTIONS(353),
    [anon_sym_l] = ACTIONS(353),
    [anon_sym_m] = ACTIONS(353),
    [anon_sym_n] = ACTIONS(353),
    [anon_sym_o] = ACTIONS(353),
    [anon_sym_p] = ACTIONS(353),
    [anon_sym_q] = ACTIONS(353),
    [anon_sym_r] = ACTIONS(353),
    [anon_sym_s] = ACTIONS(353),
    [anon_sym_t] = ACTIONS(353),
    [anon_sym_u] = ACTIONS(353),
    [anon_sym_v] = ACTIONS(353),
    [anon_sym_w] = ACTIONS(353),
    [anon_sym_x] = ACTIONS(353),
    [anon_sym_y] = ACTIONS(353),
    [anon_sym_z] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [aux_sym_pchar_token1] = ACTIONS(415),
  },
  [21] = {
    [aux_sym_literal_arg_repeat1] = STATE(17),
    [aux_sym__newline_token1] = ACTIONS(417),
    [sym__sep] = ACTIONS(417),
    [anon_sym_DOT] = ACTIONS(419),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_SLASH] = ACTIONS(419),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_BANG] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(419),
    [anon_sym_0] = ACTIONS(419),
    [anon_sym_1] = ACTIONS(419),
    [anon_sym_2] = ACTIONS(419),
    [anon_sym_3] = ACTIONS(419),
    [anon_sym_4] = ACTIONS(419),
    [anon_sym_5] = ACTIONS(419),
    [anon_sym_6] = ACTIONS(419),
    [anon_sym_7] = ACTIONS(419),
    [anon_sym_8] = ACTIONS(419),
    [anon_sym_9] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_QMARK] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_A] = ACTIONS(419),
    [anon_sym_B] = ACTIONS(419),
    [anon_sym_C] = ACTIONS(419),
    [anon_sym_D] = ACTIONS(419),
    [anon_sym_E] = ACTIONS(419),
    [anon_sym_F] = ACTIONS(419),
    [anon_sym_G] = ACTIONS(419),
    [anon_sym_H] = ACTIONS(419),
    [anon_sym_I] = ACTIONS(419),
    [anon_sym_J] = ACTIONS(419),
    [anon_sym_K] = ACTIONS(419),
    [anon_sym_L] = ACTIONS(419),
    [anon_sym_M] = ACTIONS(419),
    [anon_sym_N] = ACTIONS(419),
    [anon_sym_O] = ACTIONS(419),
    [anon_sym_P] = ACTIONS(419),
    [anon_sym_Q] = ACTIONS(419),
    [anon_sym_R] = ACTIONS(419),
    [anon_sym_S] = ACTIONS(419),
    [anon_sym_T] = ACTIONS(419),
    [anon_sym_U] = ACTIONS(419),
    [anon_sym_V] = ACTIONS(419),
    [anon_sym_W] = ACTIONS(419),
    [anon_sym_X] = ACTIONS(419),
    [anon_sym_Y] = ACTIONS(419),
    [anon_sym_Z] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_BSLASH] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_CARET] = ACTIONS(419),
    [anon_sym__] = ACTIONS(419),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [anon_sym_a] = ACTIONS(419),
    [anon_sym_b] = ACTIONS(419),
    [anon_sym_c] = ACTIONS(419),
    [anon_sym_d] = ACTIONS(419),
    [anon_sym_e] = ACTIONS(419),
    [anon_sym_f] = ACTIONS(419),
    [anon_sym_g] = ACTIONS(419),
    [anon_sym_h] = ACTIONS(419),
    [anon_sym_i] = ACTIONS(419),
    [anon_sym_j] = ACTIONS(419),
    [anon_sym_k] = ACTIONS(419),
    [anon_sym_l] = ACTIONS(419),
    [anon_sym_m] = ACTIONS(419),
    [anon_sym_n] = ACTIONS(419),
    [anon_sym_o] = ACTIONS(419),
    [anon_sym_p] = ACTIONS(419),
    [anon_sym_q] = ACTIONS(419),
    [anon_sym_r] = ACTIONS(419),
    [anon_sym_s] = ACTIONS(419),
    [anon_sym_t] = ACTIONS(419),
    [anon_sym_u] = ACTIONS(419),
    [anon_sym_v] = ACTIONS(419),
    [anon_sym_w] = ACTIONS(419),
    [anon_sym_x] = ACTIONS(419),
    [anon_sym_y] = ACTIONS(419),
    [anon_sym_z] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(419),
  },
  [22] = {
    [sym__newline] = STATE(222),
    [sym_dstring] = STATE(322),
    [aux_sym__newline_token1] = ACTIONS(421),
    [sym__sep] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_A] = ACTIONS(465),
    [anon_sym_B] = ACTIONS(467),
    [anon_sym_C] = ACTIONS(469),
    [anon_sym_D] = ACTIONS(471),
    [anon_sym_E] = ACTIONS(473),
    [anon_sym_F] = ACTIONS(475),
    [anon_sym_G] = ACTIONS(477),
    [anon_sym_H] = ACTIONS(479),
    [anon_sym_I] = ACTIONS(481),
    [anon_sym_J] = ACTIONS(483),
    [anon_sym_K] = ACTIONS(485),
    [anon_sym_L] = ACTIONS(487),
    [anon_sym_M] = ACTIONS(489),
    [anon_sym_N] = ACTIONS(491),
    [anon_sym_O] = ACTIONS(493),
    [anon_sym_P] = ACTIONS(495),
    [anon_sym_Q] = ACTIONS(497),
    [anon_sym_R] = ACTIONS(499),
    [anon_sym_S] = ACTIONS(501),
    [anon_sym_T] = ACTIONS(503),
    [anon_sym_U] = ACTIONS(505),
    [anon_sym_V] = ACTIONS(507),
    [anon_sym_W] = ACTIONS(509),
    [anon_sym_X] = ACTIONS(511),
    [anon_sym_Y] = ACTIONS(513),
    [anon_sym_Z] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_b] = ACTIONS(531),
    [anon_sym_c] = ACTIONS(533),
    [anon_sym_d] = ACTIONS(535),
    [anon_sym_e] = ACTIONS(537),
    [anon_sym_f] = ACTIONS(539),
    [anon_sym_g] = ACTIONS(541),
    [anon_sym_h] = ACTIONS(543),
    [anon_sym_i] = ACTIONS(545),
    [anon_sym_j] = ACTIONS(547),
    [anon_sym_k] = ACTIONS(549),
    [anon_sym_l] = ACTIONS(551),
    [anon_sym_m] = ACTIONS(553),
    [anon_sym_n] = ACTIONS(555),
    [anon_sym_o] = ACTIONS(557),
    [anon_sym_p] = ACTIONS(559),
    [anon_sym_q] = ACTIONS(561),
    [anon_sym_r] = ACTIONS(563),
    [anon_sym_s] = ACTIONS(565),
    [anon_sym_t] = ACTIONS(567),
    [anon_sym_u] = ACTIONS(569),
    [anon_sym_v] = ACTIONS(571),
    [anon_sym_w] = ACTIONS(573),
    [anon_sym_x] = ACTIONS(575),
    [anon_sym_y] = ACTIONS(577),
    [anon_sym_z] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(587),
  },
  [23] = {
    [sym__newline] = STATE(207),
    [sym_dstring] = STATE(585),
    [aux_sym__newline_token1] = ACTIONS(589),
    [sym__sep] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_A] = ACTIONS(465),
    [anon_sym_B] = ACTIONS(467),
    [anon_sym_C] = ACTIONS(469),
    [anon_sym_D] = ACTIONS(471),
    [anon_sym_E] = ACTIONS(473),
    [anon_sym_F] = ACTIONS(475),
    [anon_sym_G] = ACTIONS(477),
    [anon_sym_H] = ACTIONS(479),
    [anon_sym_I] = ACTIONS(481),
    [anon_sym_J] = ACTIONS(483),
    [anon_sym_K] = ACTIONS(485),
    [anon_sym_L] = ACTIONS(487),
    [anon_sym_M] = ACTIONS(489),
    [anon_sym_N] = ACTIONS(491),
    [anon_sym_O] = ACTIONS(493),
    [anon_sym_P] = ACTIONS(495),
    [anon_sym_Q] = ACTIONS(497),
    [anon_sym_R] = ACTIONS(499),
    [anon_sym_S] = ACTIONS(501),
    [anon_sym_T] = ACTIONS(503),
    [anon_sym_U] = ACTIONS(505),
    [anon_sym_V] = ACTIONS(507),
    [anon_sym_W] = ACTIONS(509),
    [anon_sym_X] = ACTIONS(511),
    [anon_sym_Y] = ACTIONS(513),
    [anon_sym_Z] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_b] = ACTIONS(531),
    [anon_sym_c] = ACTIONS(533),
    [anon_sym_d] = ACTIONS(535),
    [anon_sym_e] = ACTIONS(537),
    [anon_sym_f] = ACTIONS(539),
    [anon_sym_g] = ACTIONS(541),
    [anon_sym_h] = ACTIONS(543),
    [anon_sym_i] = ACTIONS(545),
    [anon_sym_j] = ACTIONS(547),
    [anon_sym_k] = ACTIONS(549),
    [anon_sym_l] = ACTIONS(551),
    [anon_sym_m] = ACTIONS(553),
    [anon_sym_n] = ACTIONS(555),
    [anon_sym_o] = ACTIONS(557),
    [anon_sym_p] = ACTIONS(559),
    [anon_sym_q] = ACTIONS(561),
    [anon_sym_r] = ACTIONS(563),
    [anon_sym_s] = ACTIONS(565),
    [anon_sym_t] = ACTIONS(567),
    [anon_sym_u] = ACTIONS(569),
    [anon_sym_v] = ACTIONS(571),
    [anon_sym_w] = ACTIONS(573),
    [anon_sym_x] = ACTIONS(575),
    [anon_sym_y] = ACTIONS(577),
    [anon_sym_z] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(587),
  },
  [24] = {
    [sym__string_operand] = STATE(585),
    [sym_dstring] = STATE(407),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_A] = ACTIONS(465),
    [anon_sym_B] = ACTIONS(467),
    [anon_sym_C] = ACTIONS(469),
    [anon_sym_D] = ACTIONS(471),
    [anon_sym_E] = ACTIONS(473),
    [anon_sym_F] = ACTIONS(475),
    [anon_sym_G] = ACTIONS(477),
    [anon_sym_H] = ACTIONS(479),
    [anon_sym_I] = ACTIONS(481),
    [anon_sym_J] = ACTIONS(483),
    [anon_sym_K] = ACTIONS(485),
    [anon_sym_L] = ACTIONS(487),
    [anon_sym_M] = ACTIONS(489),
    [anon_sym_N] = ACTIONS(491),
    [anon_sym_O] = ACTIONS(493),
    [anon_sym_P] = ACTIONS(495),
    [anon_sym_Q] = ACTIONS(497),
    [anon_sym_R] = ACTIONS(499),
    [anon_sym_S] = ACTIONS(501),
    [anon_sym_T] = ACTIONS(503),
    [anon_sym_U] = ACTIONS(505),
    [anon_sym_V] = ACTIONS(507),
    [anon_sym_W] = ACTIONS(509),
    [anon_sym_X] = ACTIONS(511),
    [anon_sym_Y] = ACTIONS(513),
    [anon_sym_Z] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_b] = ACTIONS(531),
    [anon_sym_c] = ACTIONS(533),
    [anon_sym_d] = ACTIONS(535),
    [anon_sym_e] = ACTIONS(537),
    [anon_sym_f] = ACTIONS(539),
    [anon_sym_g] = ACTIONS(541),
    [anon_sym_h] = ACTIONS(543),
    [anon_sym_i] = ACTIONS(545),
    [anon_sym_j] = ACTIONS(547),
    [anon_sym_k] = ACTIONS(549),
    [anon_sym_l] = ACTIONS(551),
    [anon_sym_m] = ACTIONS(553),
    [anon_sym_n] = ACTIONS(555),
    [anon_sym_o] = ACTIONS(557),
    [anon_sym_p] = ACTIONS(559),
    [anon_sym_q] = ACTIONS(561),
    [anon_sym_r] = ACTIONS(563),
    [anon_sym_s] = ACTIONS(565),
    [anon_sym_t] = ACTIONS(567),
    [anon_sym_u] = ACTIONS(569),
    [anon_sym_v] = ACTIONS(571),
    [anon_sym_w] = ACTIONS(573),
    [anon_sym_x] = ACTIONS(575),
    [anon_sym_y] = ACTIONS(577),
    [anon_sym_z] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(587),
  },
  [25] = {
    [sym__string_operand] = STATE(322),
    [sym_dstring] = STATE(407),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_A] = ACTIONS(465),
    [anon_sym_B] = ACTIONS(467),
    [anon_sym_C] = ACTIONS(469),
    [anon_sym_D] = ACTIONS(471),
    [anon_sym_E] = ACTIONS(473),
    [anon_sym_F] = ACTIONS(475),
    [anon_sym_G] = ACTIONS(477),
    [anon_sym_H] = ACTIONS(479),
    [anon_sym_I] = ACTIONS(481),
    [anon_sym_J] = ACTIONS(483),
    [anon_sym_K] = ACTIONS(485),
    [anon_sym_L] = ACTIONS(487),
    [anon_sym_M] = ACTIONS(489),
    [anon_sym_N] = ACTIONS(491),
    [anon_sym_O] = ACTIONS(493),
    [anon_sym_P] = ACTIONS(495),
    [anon_sym_Q] = ACTIONS(497),
    [anon_sym_R] = ACTIONS(499),
    [anon_sym_S] = ACTIONS(501),
    [anon_sym_T] = ACTIONS(503),
    [anon_sym_U] = ACTIONS(505),
    [anon_sym_V] = ACTIONS(507),
    [anon_sym_W] = ACTIONS(509),
    [anon_sym_X] = ACTIONS(511),
    [anon_sym_Y] = ACTIONS(513),
    [anon_sym_Z] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_b] = ACTIONS(531),
    [anon_sym_c] = ACTIONS(533),
    [anon_sym_d] = ACTIONS(535),
    [anon_sym_e] = ACTIONS(537),
    [anon_sym_f] = ACTIONS(539),
    [anon_sym_g] = ACTIONS(541),
    [anon_sym_h] = ACTIONS(543),
    [anon_sym_i] = ACTIONS(545),
    [anon_sym_j] = ACTIONS(547),
    [anon_sym_k] = ACTIONS(549),
    [anon_sym_l] = ACTIONS(551),
    [anon_sym_m] = ACTIONS(553),
    [anon_sym_n] = ACTIONS(555),
    [anon_sym_o] = ACTIONS(557),
    [anon_sym_p] = ACTIONS(559),
    [anon_sym_q] = ACTIONS(561),
    [anon_sym_r] = ACTIONS(563),
    [anon_sym_s] = ACTIONS(565),
    [anon_sym_t] = ACTIONS(567),
    [anon_sym_u] = ACTIONS(569),
    [anon_sym_v] = ACTIONS(571),
    [anon_sym_w] = ACTIONS(573),
    [anon_sym_x] = ACTIONS(575),
    [anon_sym_y] = ACTIONS(577),
    [anon_sym_z] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(587),
  },
  [26] = {
    [sym_dstring] = STATE(322),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_A] = ACTIONS(465),
    [anon_sym_B] = ACTIONS(467),
    [anon_sym_C] = ACTIONS(469),
    [anon_sym_D] = ACTIONS(471),
    [anon_sym_E] = ACTIONS(473),
    [anon_sym_F] = ACTIONS(475),
    [anon_sym_G] = ACTIONS(477),
    [anon_sym_H] = ACTIONS(479),
    [anon_sym_I] = ACTIONS(481),
    [anon_sym_J] = ACTIONS(483),
    [anon_sym_K] = ACTIONS(485),
    [anon_sym_L] = ACTIONS(487),
    [anon_sym_M] = ACTIONS(489),
    [anon_sym_N] = ACTIONS(491),
    [anon_sym_O] = ACTIONS(493),
    [anon_sym_P] = ACTIONS(495),
    [anon_sym_Q] = ACTIONS(497),
    [anon_sym_R] = ACTIONS(499),
    [anon_sym_S] = ACTIONS(501),
    [anon_sym_T] = ACTIONS(503),
    [anon_sym_U] = ACTIONS(505),
    [anon_sym_V] = ACTIONS(507),
    [anon_sym_W] = ACTIONS(509),
    [anon_sym_X] = ACTIONS(511),
    [anon_sym_Y] = ACTIONS(513),
    [anon_sym_Z] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_b] = ACTIONS(531),
    [anon_sym_c] = ACTIONS(533),
    [anon_sym_d] = ACTIONS(535),
    [anon_sym_e] = ACTIONS(537),
    [anon_sym_f] = ACTIONS(539),
    [anon_sym_g] = ACTIONS(541),
    [anon_sym_h] = ACTIONS(543),
    [anon_sym_i] = ACTIONS(545),
    [anon_sym_j] = ACTIONS(547),
    [anon_sym_k] = ACTIONS(549),
    [anon_sym_l] = ACTIONS(551),
    [anon_sym_m] = ACTIONS(553),
    [anon_sym_n] = ACTIONS(555),
    [anon_sym_o] = ACTIONS(557),
    [anon_sym_p] = ACTIONS(559),
    [anon_sym_q] = ACTIONS(561),
    [anon_sym_r] = ACTIONS(563),
    [anon_sym_s] = ACTIONS(565),
    [anon_sym_t] = ACTIONS(567),
    [anon_sym_u] = ACTIONS(569),
    [anon_sym_v] = ACTIONS(571),
    [anon_sym_w] = ACTIONS(573),
    [anon_sym_x] = ACTIONS(575),
    [anon_sym_y] = ACTIONS(577),
    [anon_sym_z] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(587),
  },
  [27] = {
    [sym_dstring] = STATE(585),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_AMP] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_STAR] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_A] = ACTIONS(465),
    [anon_sym_B] = ACTIONS(467),
    [anon_sym_C] = ACTIONS(469),
    [anon_sym_D] = ACTIONS(471),
    [anon_sym_E] = ACTIONS(473),
    [anon_sym_F] = ACTIONS(475),
    [anon_sym_G] = ACTIONS(477),
    [anon_sym_H] = ACTIONS(479),
    [anon_sym_I] = ACTIONS(481),
    [anon_sym_J] = ACTIONS(483),
    [anon_sym_K] = ACTIONS(485),
    [anon_sym_L] = ACTIONS(487),
    [anon_sym_M] = ACTIONS(489),
    [anon_sym_N] = ACTIONS(491),
    [anon_sym_O] = ACTIONS(493),
    [anon_sym_P] = ACTIONS(495),
    [anon_sym_Q] = ACTIONS(497),
    [anon_sym_R] = ACTIONS(499),
    [anon_sym_S] = ACTIONS(501),
    [anon_sym_T] = ACTIONS(503),
    [anon_sym_U] = ACTIONS(505),
    [anon_sym_V] = ACTIONS(507),
    [anon_sym_W] = ACTIONS(509),
    [anon_sym_X] = ACTIONS(511),
    [anon_sym_Y] = ACTIONS(513),
    [anon_sym_Z] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_b] = ACTIONS(531),
    [anon_sym_c] = ACTIONS(533),
    [anon_sym_d] = ACTIONS(535),
    [anon_sym_e] = ACTIONS(537),
    [anon_sym_f] = ACTIONS(539),
    [anon_sym_g] = ACTIONS(541),
    [anon_sym_h] = ACTIONS(543),
    [anon_sym_i] = ACTIONS(545),
    [anon_sym_j] = ACTIONS(547),
    [anon_sym_k] = ACTIONS(549),
    [anon_sym_l] = ACTIONS(551),
    [anon_sym_m] = ACTIONS(553),
    [anon_sym_n] = ACTIONS(555),
    [anon_sym_o] = ACTIONS(557),
    [anon_sym_p] = ACTIONS(559),
    [anon_sym_q] = ACTIONS(561),
    [anon_sym_r] = ACTIONS(563),
    [anon_sym_s] = ACTIONS(565),
    [anon_sym_t] = ACTIONS(567),
    [anon_sym_u] = ACTIONS(569),
    [anon_sym_v] = ACTIONS(571),
    [anon_sym_w] = ACTIONS(573),
    [anon_sym_x] = ACTIONS(575),
    [anon_sym_y] = ACTIONS(577),
    [anon_sym_z] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(587),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(585), 1,
      sym_filename,
    STATE(597), 2,
      sym_prodos,
      sym_dos33,
    ACTIONS(593), 52,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_H,
      anon_sym_I,
      anon_sym_J,
      anon_sym_K,
      anon_sym_L,
      anon_sym_M,
      anon_sym_N,
      anon_sym_O,
      anon_sym_P,
      anon_sym_Q,
      anon_sym_R,
      anon_sym_S,
      anon_sym_T,
      anon_sym_U,
      anon_sym_V,
      anon_sym_W,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_k,
      anon_sym_l,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_p,
      anon_sym_q,
      anon_sym_r,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
  [62] = 3,
    STATE(322), 1,
      sym_filename,
    STATE(597), 2,
      sym_prodos,
      sym_dos33,
    ACTIONS(593), 52,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_G,
      anon_sym_H,
      anon_sym_I,
      anon_sym_J,
      anon_sym_K,
      anon_sym_L,
      anon_sym_M,
      anon_sym_N,
      anon_sym_O,
      anon_sym_P,
      anon_sym_Q,
      anon_sym_R,
      anon_sym_S,
      anon_sym_T,
      anon_sym_U,
      anon_sym_V,
      anon_sym_W,
      anon_sym_X,
      anon_sym_Y,
      anon_sym_Z,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
      anon_sym_g,
      anon_sym_h,
      anon_sym_i,
      anon_sym_j,
      anon_sym_k,
      anon_sym_l,
      anon_sym_m,
      anon_sym_n,
      anon_sym_o,
      anon_sym_p,
      anon_sym_q,
      anon_sym_r,
      anon_sym_s,
      anon_sym_t,
      anon_sym_u,
      anon_sym_v,
      anon_sym_w,
      anon_sym_x,
      anon_sym_y,
      anon_sym_z,
  [124] = 21,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(95), 1,
      sym_mode_iopen,
    STATE(96), 1,
      sym_mode_dopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(599), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(113), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    STATE(307), 11,
      sym_imm,
      sym_addr,
      sym_addr_x,
      sym_addr_y,
      sym_iaddr_ix,
      sym_iaddr_y,
      sym_iaddr,
      sym_daddr,
      sym_daddr_y,
      sym_addr_s,
      sym_iaddr_is_y,
  [221] = 21,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(95), 1,
      sym_mode_iopen,
    STATE(96), 1,
      sym_mode_dopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(599), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(113), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    STATE(587), 11,
      sym_imm,
      sym_addr,
      sym_addr_x,
      sym_addr_y,
      sym_iaddr_ix,
      sym_iaddr_y,
      sym_iaddr,
      sym_daddr,
      sym_daddr_y,
      sym_addr_s,
      sym_iaddr_is_y,
  [318] = 18,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_mode_iopen,
    STATE(96), 1,
      sym_mode_dopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(599), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(113), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    STATE(307), 10,
      sym_addr,
      sym_addr_x,
      sym_addr_y,
      sym_iaddr_ix,
      sym_iaddr_y,
      sym_iaddr,
      sym_daddr,
      sym_daddr_y,
      sym_addr_s,
      sym_iaddr_is_y,
  [403] = 18,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_mode_iopen,
    STATE(96), 1,
      sym_mode_dopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(599), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(113), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    STATE(587), 10,
      sym_addr,
      sym_addr_x,
      sym_addr_y,
      sym_iaddr_ix,
      sym_iaddr_y,
      sym_iaddr,
      sym_daddr,
      sym_daddr_y,
      sym_addr_s,
      sym_iaddr_is_y,
  [488] = 4,
    STATE(34), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(621), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(619), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
    ACTIONS(623), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [541] = 4,
    STATE(34), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(626), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
    ACTIONS(630), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [594] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(632), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(587), 3,
      sym_imm,
      sym_addr,
      sym_addr_y,
    STATE(147), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [671] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(634), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(307), 3,
      sym_imm,
      sym_addr,
      sym_addr_x,
    STATE(148), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [748] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(632), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(307), 3,
      sym_imm,
      sym_addr,
      sym_addr_y,
    STATE(147), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [825] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(634), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(587), 3,
      sym_imm,
      sym_addr,
      sym_addr_x,
    STATE(148), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [902] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(307), 2,
      sym_imm,
      sym_addr,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [978] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(587), 2,
      sym_imm,
      sym_addr,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1054] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(92), 1,
      sym_imm_prefix,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(244), 1,
      sym__eaexpr,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(638), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(164), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1129] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(92), 1,
      sym_imm_prefix,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(474), 1,
      sym__eaexpr,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(638), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(164), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1204] = 17,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(603), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(92), 1,
      sym_imm_prefix,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(237), 1,
      sym__eaexpr,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
    ACTIONS(638), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(164), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1279] = 17,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(586), 1,
      sym_comment,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(587), 2,
      sym_addr,
      sym_addr_x,
    ACTIONS(634), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(148), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1353] = 17,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(310), 1,
      sym_comment,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(307), 2,
      sym_addr,
      sym_addr_x,
    ACTIONS(634), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(148), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1427] = 16,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(79), 1,
      sym_mode_iopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(587), 3,
      sym_addr,
      sym_iaddr_ix,
      sym_iaddr,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1499] = 16,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(79), 1,
      sym_mode_iopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(307), 3,
      sym_addr,
      sym_iaddr_ix,
      sym_iaddr,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1571] = 16,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(78), 1,
      sym_mode_iopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(307), 2,
      sym_addr,
      sym_iaddr_ix,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1642] = 16,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(78), 1,
      sym_mode_iopen,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(587), 2,
      sym_addr,
      sym_iaddr_ix,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1713] = 4,
    STATE(51), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(654), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
    ACTIONS(656), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    ACTIONS(652), 20,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [1759] = 16,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(207), 1,
      sym__newline,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(659), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(169), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1829] = 4,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(626), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
    ACTIONS(661), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [1875] = 16,
    ACTIONS(421), 1,
      aux_sym__newline_token1,
    ACTIONS(423), 1,
      sym__sep,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(222), 1,
      sym__newline,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(663), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(163), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [1945] = 4,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(619), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
    ACTIONS(665), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [1991] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(587), 2,
      sym_addr,
      sym_addr_x,
    ACTIONS(634), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(148), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2056] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(307), 2,
      sym_addr,
      sym_addr_x,
    ACTIONS(634), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(148), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2121] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(307), 2,
      sym_addr,
      sym_addr_y,
    ACTIONS(632), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(147), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2186] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(587), 2,
      sym_addr,
      sym_addr_y,
    ACTIONS(632), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(147), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2251] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(307), 1,
      sym_xyc,
    STATE(68), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(668), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(182), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2315] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(587), 1,
      sym_xyc,
    STATE(68), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(668), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(182), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2379] = 15,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(670), 1,
      sym_global_label,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(663), 2,
      sym_local_label,
      sym_var_label,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(163), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2445] = 15,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(674), 1,
      sym_global_label,
    ACTIONS(676), 1,
      anon_sym_BSLASH,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(659), 2,
      sym_local_label,
      sym_var_label,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(169), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2511] = 15,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    ACTIONS(678), 1,
      sym_global_label,
    ACTIONS(682), 1,
      anon_sym_BSLASH,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(680), 2,
      sym_local_label,
      sym_var_label,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(153), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2577] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(587), 1,
      sym_addr,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2641] = 14,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(307), 1,
      sym_addr,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(636), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(174), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2705] = 15,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    ACTIONS(684), 1,
      sym_global_label,
    ACTIONS(688), 1,
      anon_sym_BSLASH,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(686), 2,
      sym_local_label,
      sym_var_label,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(154), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2771] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(68), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(690), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(180), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2832] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(692), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(159), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2893] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(694), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(161), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [2954] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(696), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(146), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3015] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(698), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(143), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3076] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(702), 1,
      anon_sym_STAR,
    STATE(105), 1,
      aux_sym_decimal_repeat1,
    STATE(99), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(700), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(114), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(704), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3137] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(663), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(163), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3198] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(706), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(109), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3259] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(149), 1,
      aux_sym_decimal_repeat1,
    STATE(76), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(708), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(179), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(710), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3320] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(149), 1,
      aux_sym_decimal_repeat1,
    STATE(76), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(712), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(176), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(710), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3381] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_DOLLAR,
    ACTIONS(720), 1,
      anon_sym_PERCENT,
    ACTIONS(722), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_decimal_repeat1,
    STATE(97), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(714), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(184), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(157), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(724), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3442] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      anon_sym_DOLLAR,
    ACTIONS(732), 1,
      anon_sym_PERCENT,
    ACTIONS(734), 1,
      anon_sym_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_STAR,
    STATE(126), 1,
      aux_sym_decimal_repeat1,
    STATE(94), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(726), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(201), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(151), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(738), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3503] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(740), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(172), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3564] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(742), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(162), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3625] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(149), 1,
      aux_sym_decimal_repeat1,
    STATE(76), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(744), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(181), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(710), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3686] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(746), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(168), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3747] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(748), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(150), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3808] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(750), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(167), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3869] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(752), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(110), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3930] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      anon_sym_DOLLAR,
    ACTIONS(732), 1,
      anon_sym_PERCENT,
    ACTIONS(734), 1,
      anon_sym_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_STAR,
    STATE(126), 1,
      aux_sym_decimal_repeat1,
    STATE(94), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(754), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(201), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(155), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(738), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [3991] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(68), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(756), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(177), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4052] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(758), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(144), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4113] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_DOLLAR,
    ACTIONS(720), 1,
      anon_sym_PERCENT,
    ACTIONS(722), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_decimal_repeat1,
    STATE(97), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(760), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(184), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(131), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(724), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4174] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(762), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(158), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4235] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(764), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(165), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4296] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(659), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(169), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4357] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(728), 1,
      anon_sym_DQUOTE,
    ACTIONS(730), 1,
      anon_sym_DOLLAR,
    ACTIONS(732), 1,
      anon_sym_PERCENT,
    ACTIONS(734), 1,
      anon_sym_SQUOTE,
    ACTIONS(736), 1,
      anon_sym_STAR,
    STATE(126), 1,
      aux_sym_decimal_repeat1,
    STATE(94), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(766), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(201), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(160), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(738), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4418] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_DOLLAR,
    ACTIONS(720), 1,
      anon_sym_PERCENT,
    ACTIONS(722), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_decimal_repeat1,
    STATE(97), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(768), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(184), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(112), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(724), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4479] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      aux_sym_decimal_repeat1,
    STATE(86), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(770), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(145), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(615), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4540] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(611), 1,
      anon_sym_STAR,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_DOLLAR,
    ACTIONS(720), 1,
      anon_sym_PERCENT,
    ACTIONS(722), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      aux_sym_decimal_repeat1,
    STATE(97), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(772), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(184), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(124), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(724), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4601] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      anon_sym_DOLLAR,
    ACTIONS(644), 1,
      anon_sym_PERCENT,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      anon_sym_STAR,
    STATE(130), 1,
      aux_sym_decimal_repeat1,
    STATE(80), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(774), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(197), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(156), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(650), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4662] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(702), 1,
      anon_sym_STAR,
    STATE(105), 1,
      aux_sym_decimal_repeat1,
    STATE(99), 2,
      sym_eop_plus,
      sym_eop_minus,
    ACTIONS(776), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(125), 3,
      sym_decimal,
      sym_hexadecimal,
      sym_binary,
    STATE(116), 8,
      sym__label,
      sym__aexpr,
      sym_unary_aexpr,
      sym_binary_aexpr,
      sym_number,
      sym_pchar,
      sym_nchar,
      sym_current_addr,
    ACTIONS(704), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [4723] = 3,
    STATE(103), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(626), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    ACTIONS(778), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [4763] = 3,
    STATE(102), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(626), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(780), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [4803] = 3,
    STATE(102), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(619), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(782), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [4843] = 3,
    STATE(103), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(619), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    ACTIONS(785), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [4883] = 4,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(790), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    ACTIONS(788), 18,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [4922] = 4,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(794), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    ACTIONS(788), 16,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [4959] = 4,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(796), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    ACTIONS(652), 16,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [4996] = 16,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(478), 1,
      sym_mode_x,
    STATE(479), 1,
      sym_mode_y,
    STATE(480), 1,
      sym_mode_s,
    ACTIONS(813), 2,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
    ACTIONS(815), 2,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
    ACTIONS(817), 2,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
    ACTIONS(799), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
    STATE(73), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [5056] = 2,
    ACTIONS(819), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
    ACTIONS(355), 20,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [5087] = 3,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 18,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5120] = 3,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 18,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5153] = 4,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(790), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
    ACTIONS(788), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [5187] = 16,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      sym_mode_is_y,
    STATE(494), 1,
      sym_mode_iy,
    STATE(495), 1,
      sym_mode_iix,
    STATE(496), 1,
      sym_mode_iclose,
    ACTIONS(831), 2,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    ACTIONS(833), 2,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
    ACTIONS(835), 2,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
    STATE(90), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [5245] = 15,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(478), 1,
      sym_mode_x,
    STATE(479), 1,
      sym_mode_y,
    STATE(480), 1,
      sym_mode_s,
    ACTIONS(799), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(813), 2,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
    ACTIONS(815), 2,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
    ACTIONS(817), 2,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [5301] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(73), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 16,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5332] = 4,
    STATE(115), 1,
      aux_sym_binary_repeat1,
    ACTIONS(839), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(841), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(837), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5365] = 3,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(73), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 16,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5396] = 4,
    STATE(115), 1,
      aux_sym_binary_repeat1,
    ACTIONS(846), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(848), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(844), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5429] = 2,
    STATE(100), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(850), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [5457] = 2,
    STATE(53), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(852), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [5485] = 2,
    STATE(35), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(854), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [5513] = 2,
    STATE(101), 1,
      aux_sym_hexadecimal_repeat1,
    ACTIONS(856), 22,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_A,
      anon_sym_B,
      anon_sym_C,
      anon_sym_D,
      anon_sym_E,
      anon_sym_F,
      anon_sym_a,
      anon_sym_b,
      anon_sym_c,
      anon_sym_d,
      anon_sym_e,
      anon_sym_f,
  [5541] = 3,
    ACTIONS(862), 1,
      anon_sym_SQUOTE,
    ACTIONS(860), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(858), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5570] = 3,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(864), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5599] = 3,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    STATE(90), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [5627] = 2,
    ACTIONS(872), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(870), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5653] = 3,
    STATE(132), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(788), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    ACTIONS(874), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5681] = 3,
    STATE(127), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(652), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(876), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5709] = 2,
    ACTIONS(881), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(879), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5735] = 2,
    ACTIONS(885), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(883), 19,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [5761] = 3,
    STATE(127), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(788), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(887), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5789] = 3,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(90), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [5817] = 3,
    STATE(132), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(652), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    ACTIONS(889), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5845] = 1,
    ACTIONS(379), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5868] = 1,
    ACTIONS(370), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5891] = 1,
    ACTIONS(393), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5914] = 1,
    ACTIONS(400), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5937] = 1,
    ACTIONS(386), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5960] = 1,
    ACTIONS(892), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [5983] = 1,
    ACTIONS(894), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [6006] = 1,
    ACTIONS(896), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [6029] = 1,
    ACTIONS(898), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [6052] = 1,
    ACTIONS(900), 20,
      anon_sym_DASH,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [6075] = 13,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym_pseudo_operation_repeat3,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6121] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(908), 1,
      anon_sym_SEMI,
    STATE(227), 1,
      sym__newline,
    STATE(243), 1,
      aux_sym_pseudo_operation_repeat2,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6167] = 12,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    STATE(488), 1,
      sym_mode_dy,
    STATE(489), 1,
      sym_mode_dclose,
    ACTIONS(912), 2,
      anon_sym_RBRACK_COMMAY,
      anon_sym_RBRACK_COMMAy,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6211] = 13,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(908), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_pseudo_operation_repeat2,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6257] = 11,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(479), 1,
      sym_mode_y,
    ACTIONS(799), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(815), 2,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6299] = 11,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(478), 1,
      sym_mode_x,
    ACTIONS(799), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(813), 2,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6341] = 3,
    STATE(152), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(788), 8,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(914), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [6367] = 13,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    STATE(227), 1,
      sym__newline,
    STATE(246), 1,
      aux_sym_pseudo_operation_repeat3,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6413] = 12,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      sym_mode_iix,
    STATE(496), 1,
      sym_mode_iclose,
    ACTIONS(831), 2,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    STATE(87), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6457] = 3,
    STATE(152), 1,
      aux_sym_decimal_repeat1,
    ACTIONS(652), 8,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(918), 10,
      anon_sym_0,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
  [6483] = 12,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      sym__newline,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6526] = 12,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym__newline,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6569] = 2,
    STATE(87), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [6591] = 2,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [6613] = 10,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(495), 1,
      sym_mode_iix,
    ACTIONS(831), 2,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
    STATE(90), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6651] = 11,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(927), 1,
      sym__sep,
    STATE(212), 1,
      sym__newline,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6691] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(929), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6727] = 2,
    STATE(87), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [6749] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(931), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6785] = 11,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(933), 1,
      aux_sym__newline_token1,
    ACTIONS(935), 1,
      sym__sep,
    STATE(216), 1,
      sym__newline,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6825] = 11,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(207), 1,
      sym__newline,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6865] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(937), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6901] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(939), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6937] = 4,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_binary_repeat1,
    ACTIONS(941), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(837), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [6963] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(944), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [6999] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(946), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [7035] = 11,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    STATE(227), 1,
      sym__newline,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [7075] = 4,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_binary_repeat1,
    ACTIONS(948), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(844), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [7101] = 2,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    ACTIONS(355), 16,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX,
      anon_sym_COMMAx,
      anon_sym_COMMAY,
      anon_sym_COMMAy,
      anon_sym_COMMAS,
      anon_sym_COMMAs,
  [7123] = 2,
    STATE(98), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7145] = 7,
    ACTIONS(950), 1,
      ts_builtin_sym_end,
    ACTIONS(952), 1,
      aux_sym__newline_token1,
    ACTIONS(955), 1,
      sym__sep,
    ACTIONS(961), 1,
      aux_sym_main_comment_token1,
    STATE(270), 1,
      sym__label,
    ACTIONS(958), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(173), 8,
      sym__factor,
      sym_program_counter,
      sym_macro_calli,
      sym__newline,
      sym_operation,
      sym_pseudo_operation,
      sym_main_comment,
      aux_sym_source_file_repeat1,
  [7176] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(799), 2,
      aux_sym__newline_token1,
      sym__sep,
    STATE(75), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [7211] = 7,
    ACTIONS(7), 1,
      sym__sep,
    ACTIONS(11), 1,
      aux_sym_main_comment_token1,
    ACTIONS(964), 1,
      ts_builtin_sym_end,
    ACTIONS(966), 1,
      aux_sym__newline_token1,
    STATE(270), 1,
      sym__label,
    ACTIONS(9), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
    STATE(173), 8,
      sym__factor,
      sym_program_counter,
      sym_macro_calli,
      sym__newline,
      sym_operation,
      sym_pseudo_operation,
      sym_main_comment,
      aux_sym_source_file_repeat1,
  [7242] = 10,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      sym_mode_iclose,
    STATE(82), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [7279] = 2,
    STATE(88), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 8,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7299] = 3,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(864), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [7321] = 2,
    STATE(82), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 8,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7341] = 2,
    STATE(88), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(825), 8,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7361] = 2,
    STATE(82), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
    ACTIONS(821), 8,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7381] = 9,
    ACTIONS(595), 1,
      anon_sym_DASH,
    ACTIONS(613), 1,
      anon_sym_PLUS,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      anon_sym_SLASH,
    ACTIONS(807), 1,
      anon_sym_BANG,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(811), 1,
      anon_sym_STAR,
    ACTIONS(970), 1,
      anon_sym_COMMA,
    STATE(88), 7,
      sym_eop_plus,
      sym_eop_minus,
      sym_eop_times,
      sym_eop_div,
      sym_eop_or,
      sym_eop_and,
      sym_eop_xor,
  [7415] = 3,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    ACTIONS(972), 1,
      anon_sym_SQUOTE,
    ACTIONS(858), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [7437] = 2,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [7456] = 2,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    ACTIONS(883), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [7475] = 2,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    ACTIONS(879), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
      anon_sym_RPAREN_COMMAY,
      anon_sym_RPAREN_COMMAy,
      anon_sym_COMMAS_RPAREN_COMMAY,
      anon_sym_COMMAs_RPAREN_COMMAy,
  [7494] = 3,
    STATE(187), 1,
      aux_sym_binary_repeat1,
    ACTIONS(974), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(837), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7514] = 3,
    STATE(188), 1,
      aux_sym_binary_repeat1,
    ACTIONS(977), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(837), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7534] = 3,
    STATE(188), 1,
      aux_sym_binary_repeat1,
    ACTIONS(980), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(844), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7554] = 3,
    STATE(187), 1,
      aux_sym_binary_repeat1,
    ACTIONS(982), 2,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(844), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7574] = 2,
    ACTIONS(984), 1,
      anon_sym_SQUOTE,
    ACTIONS(858), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7590] = 2,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    ACTIONS(864), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7606] = 1,
    ACTIONS(355), 11,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7620] = 2,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    ACTIONS(864), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7636] = 2,
    ACTIONS(990), 1,
      anon_sym_SQUOTE,
    ACTIONS(858), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7652] = 1,
    ACTIONS(883), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7665] = 1,
    ACTIONS(870), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7678] = 1,
    ACTIONS(879), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7691] = 1,
    ACTIONS(883), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7704] = 1,
    ACTIONS(355), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7717] = 1,
    ACTIONS(870), 10,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMAX_RPAREN,
      anon_sym_COMMAx_RPAREN,
  [7730] = 6,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(992), 1,
      sym__sep,
    ACTIONS(996), 1,
      anon_sym_,
    STATE(6), 1,
      sym__arg_sep,
    STATE(227), 1,
      sym__newline,
    ACTIONS(994), 5,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [7753] = 1,
    ACTIONS(879), 10,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_PLUS,
  [7766] = 6,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(998), 1,
      sym__sep,
    ACTIONS(1002), 1,
      anon_sym_,
    STATE(7), 1,
      sym__arg_sep,
    STATE(207), 1,
      sym__newline,
    ACTIONS(1000), 5,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [7789] = 5,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    STATE(207), 1,
      sym__newline,
    STATE(245), 1,
      sym__label,
    ACTIONS(1004), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
  [7807] = 2,
    ACTIONS(1008), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1006), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7819] = 2,
    ACTIONS(1012), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1010), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7831] = 2,
    ACTIONS(1016), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1014), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7843] = 2,
    ACTIONS(1020), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1018), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7855] = 2,
    ACTIONS(1024), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1022), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7867] = 2,
    ACTIONS(1028), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1026), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7879] = 2,
    ACTIONS(1032), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1030), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7891] = 2,
    ACTIONS(1036), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1034), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7903] = 2,
    ACTIONS(1040), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1038), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7915] = 2,
    ACTIONS(1044), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1042), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7927] = 2,
    ACTIONS(1048), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1046), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7939] = 5,
    ACTIONS(421), 1,
      aux_sym__newline_token1,
    ACTIONS(423), 1,
      sym__sep,
    STATE(222), 1,
      sym__newline,
    STATE(238), 1,
      sym__label,
    ACTIONS(1050), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
  [7957] = 2,
    ACTIONS(1054), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1052), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7969] = 2,
    ACTIONS(1058), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1056), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7981] = 2,
    ACTIONS(1062), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1060), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [7993] = 2,
    ACTIONS(1066), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1064), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8005] = 2,
    ACTIONS(1070), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1068), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8017] = 2,
    ACTIONS(1074), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1072), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8029] = 2,
    ACTIONS(1078), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1076), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8041] = 2,
    ACTIONS(1082), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1080), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8053] = 2,
    ACTIONS(1086), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1084), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8065] = 2,
    ACTIONS(1090), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1088), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8077] = 2,
    ACTIONS(1094), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1092), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8089] = 2,
    ACTIONS(1098), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1096), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8101] = 2,
    ACTIONS(1102), 2,
      aux_sym__newline_token1,
      sym__sep,
    ACTIONS(1100), 5,
      ts_builtin_sym_end,
      sym_global_label,
      sym_local_label,
      sym_var_label,
      aux_sym_main_comment_token1,
  [8113] = 4,
    ACTIONS(603), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(307), 1,
      sym_imm,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
  [8128] = 4,
    ACTIONS(603), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_imm_prefix,
    STATE(587), 1,
      sym_imm,
    ACTIONS(345), 3,
      anon_sym_POUND_LT,
      anon_sym_POUND_GT,
      anon_sym_POUND_CARET,
  [8143] = 5,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(927), 1,
      sym__sep,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      sym__newline,
    STATE(264), 1,
      aux_sym_pseudo_operation_repeat1,
  [8159] = 5,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(927), 1,
      sym__sep,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym_pseudo_operation_repeat4,
  [8175] = 4,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      sym_hex_byte,
    STATE(248), 1,
      aux_sym_hex_data_repeat1,
    ACTIONS(1108), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8189] = 4,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    STATE(207), 1,
      sym__newline,
    ACTIONS(1114), 2,
      anon_sym_OFF,
      anon_sym_AVE,
  [8203] = 5,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym_pseudo_operation_repeat4,
  [8219] = 5,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      sym__newline,
    STATE(239), 1,
      aux_sym_pseudo_operation_repeat1,
  [8235] = 5,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym__newline,
    STATE(264), 1,
      aux_sym_pseudo_operation_repeat1,
  [8251] = 5,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(908), 1,
      anon_sym_SEMI,
    STATE(227), 1,
      sym__newline,
    STATE(253), 1,
      aux_sym_pseudo_operation_repeat2,
  [8267] = 5,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    STATE(227), 1,
      sym__newline,
    STATE(263), 1,
      aux_sym_pseudo_operation_repeat3,
  [8283] = 4,
    ACTIONS(421), 1,
      aux_sym__newline_token1,
    ACTIONS(423), 1,
      sym__sep,
    STATE(222), 1,
      sym__newline,
    ACTIONS(1116), 2,
      anon_sym_OFF,
      anon_sym_ON,
  [8297] = 5,
    ACTIONS(908), 1,
      anon_sym_SEMI,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(927), 1,
      sym__sep,
    STATE(212), 1,
      sym__newline,
    STATE(253), 1,
      aux_sym_pseudo_operation_repeat2,
  [8313] = 5,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym__newline,
    STATE(234), 1,
      aux_sym_pseudo_operation_repeat4,
  [8329] = 5,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym__newline,
    STATE(233), 1,
      aux_sym_pseudo_operation_repeat1,
  [8345] = 5,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(927), 1,
      sym__sep,
    STATE(212), 1,
      sym__newline,
    STATE(263), 1,
      aux_sym_pseudo_operation_repeat3,
  [8361] = 4,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    STATE(207), 1,
      sym__newline,
    ACTIONS(1114), 2,
      anon_sym_OFF,
      anon_sym_ON,
  [8375] = 4,
    ACTIONS(1110), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      sym_hex_byte,
    STATE(250), 1,
      aux_sym_hex_data_repeat1,
    ACTIONS(1118), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8389] = 4,
    ACTIONS(421), 1,
      aux_sym__newline_token1,
    ACTIONS(423), 1,
      sym__sep,
    STATE(222), 1,
      sym__newline,
    ACTIONS(1116), 2,
      anon_sym_OFF,
      anon_sym_AVE,
  [8403] = 4,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      sym_hex_byte,
    STATE(250), 1,
      aux_sym_hex_data_repeat1,
    ACTIONS(1122), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8417] = 5,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym_pseudo_operation_repeat4,
  [8433] = 4,
    ACTIONS(421), 1,
      aux_sym__newline_token1,
    ACTIONS(423), 1,
      sym__sep,
    ACTIONS(1116), 1,
      anon_sym_OFF,
    STATE(222), 1,
      sym__newline,
  [8446] = 3,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      aux_sym_pseudo_operation_repeat2,
    ACTIONS(946), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8457] = 4,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(1114), 1,
      anon_sym_OFF,
    STATE(207), 1,
      sym__newline,
  [8470] = 3,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      aux_sym_macro_args_repeat1,
    ACTIONS(1133), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8481] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_pseudo_operation_repeat4,
    ACTIONS(1137), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8492] = 4,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym__newline,
  [8505] = 1,
    ACTIONS(1122), 4,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
      sym_hex_byte,
  [8512] = 3,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    STATE(259), 1,
      aux_sym_macro_args_repeat1,
    ACTIONS(1142), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8523] = 4,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      sym__newline,
  [8536] = 2,
    STATE(484), 1,
      sym__label,
    ACTIONS(1147), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
  [8545] = 2,
    STATE(202), 1,
      sym__label,
    ACTIONS(1149), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
  [8554] = 3,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_pseudo_operation_repeat3,
    ACTIONS(944), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8565] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_pseudo_operation_repeat1,
    ACTIONS(1154), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8576] = 2,
    STATE(204), 1,
      sym__label,
    ACTIONS(1159), 3,
      sym_global_label,
      sym_local_label,
      sym_var_label,
  [8585] = 3,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    STATE(259), 1,
      aux_sym_macro_args_repeat1,
    ACTIONS(1161), 2,
      aux_sym__newline_token1,
      sym__sep,
  [8596] = 1,
    ACTIONS(1163), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [8602] = 3,
    ACTIONS(1165), 1,
      anon_sym_CARET,
    ACTIONS(1167), 1,
      aux_sym_pseudo_operation_token1,
    STATE(317), 1,
      aux_sym_dstring_repeat1,
  [8612] = 2,
    STATE(190), 1,
      aux_sym_binary_repeat1,
    ACTIONS(1169), 2,
      anon_sym_0,
      anon_sym_1,
  [8620] = 3,
    ACTIONS(1171), 1,
      aux_sym__newline_token1,
    ACTIONS(1173), 1,
      sym__sep,
    STATE(226), 1,
      sym__newline,
  [8630] = 3,
    ACTIONS(1175), 1,
      aux_sym__newline_token1,
    ACTIONS(1177), 1,
      sym__sep,
    STATE(230), 1,
      sym__newline,
  [8640] = 2,
    STATE(170), 1,
      aux_sym_binary_repeat1,
    ACTIONS(1179), 2,
      anon_sym_0,
      anon_sym_1,
  [8648] = 3,
    ACTIONS(1181), 1,
      aux_sym__newline_token1,
    ACTIONS(1183), 1,
      sym__sep,
    STATE(213), 1,
      sym__newline,
  [8658] = 2,
    STATE(189), 1,
      aux_sym_binary_repeat1,
    ACTIONS(1185), 2,
      anon_sym_0,
      anon_sym_1,
  [8666] = 3,
    ACTIONS(1187), 1,
      anon_sym_TILDE,
    ACTIONS(1189), 1,
      aux_sym_pseudo_operation_token1,
    STATE(275), 1,
      aux_sym_dstring_repeat1,
  [8676] = 3,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    ACTIONS(1192), 1,
      aux_sym_pseudo_operation_token1,
    STATE(276), 1,
      aux_sym_dstring_repeat1,
  [8686] = 3,
    ACTIONS(1187), 1,
      anon_sym_PIPE,
    ACTIONS(1195), 1,
      aux_sym_pseudo_operation_token1,
    STATE(277), 1,
      aux_sym_dstring_repeat1,
  [8696] = 3,
    ACTIONS(1187), 1,
      anon_sym_LBRACE,
    ACTIONS(1198), 1,
      aux_sym_pseudo_operation_token1,
    STATE(278), 1,
      aux_sym_dstring_repeat1,
  [8706] = 3,
    ACTIONS(1187), 1,
      anon_sym_z,
    ACTIONS(1201), 1,
      aux_sym_pseudo_operation_token1,
    STATE(279), 1,
      aux_sym_dstring_repeat1,
  [8716] = 3,
    ACTIONS(1187), 1,
      anon_sym_y,
    ACTIONS(1204), 1,
      aux_sym_pseudo_operation_token1,
    STATE(280), 1,
      aux_sym_dstring_repeat1,
  [8726] = 3,
    ACTIONS(1187), 1,
      anon_sym_x,
    ACTIONS(1207), 1,
      aux_sym_pseudo_operation_token1,
    STATE(281), 1,
      aux_sym_dstring_repeat1,
  [8736] = 3,
    ACTIONS(1187), 1,
      anon_sym_w,
    ACTIONS(1210), 1,
      aux_sym_pseudo_operation_token1,
    STATE(282), 1,
      aux_sym_dstring_repeat1,
  [8746] = 3,
    ACTIONS(1187), 1,
      anon_sym_v,
    ACTIONS(1213), 1,
      aux_sym_pseudo_operation_token1,
    STATE(283), 1,
      aux_sym_dstring_repeat1,
  [8756] = 3,
    ACTIONS(1187), 1,
      anon_sym_u,
    ACTIONS(1216), 1,
      aux_sym_pseudo_operation_token1,
    STATE(284), 1,
      aux_sym_dstring_repeat1,
  [8766] = 3,
    ACTIONS(1187), 1,
      anon_sym_t,
    ACTIONS(1219), 1,
      aux_sym_pseudo_operation_token1,
    STATE(285), 1,
      aux_sym_dstring_repeat1,
  [8776] = 3,
    ACTIONS(1222), 1,
      aux_sym__newline_token1,
    ACTIONS(1224), 1,
      sym__sep,
    STATE(214), 1,
      sym__newline,
  [8786] = 3,
    ACTIONS(1187), 1,
      anon_sym_s,
    ACTIONS(1226), 1,
      aux_sym_pseudo_operation_token1,
    STATE(287), 1,
      aux_sym_dstring_repeat1,
  [8796] = 3,
    ACTIONS(1187), 1,
      anon_sym_r,
    ACTIONS(1229), 1,
      aux_sym_pseudo_operation_token1,
    STATE(288), 1,
      aux_sym_dstring_repeat1,
  [8806] = 3,
    ACTIONS(1187), 1,
      anon_sym_q,
    ACTIONS(1232), 1,
      aux_sym_pseudo_operation_token1,
    STATE(289), 1,
      aux_sym_dstring_repeat1,
  [8816] = 3,
    ACTIONS(1187), 1,
      anon_sym_p,
    ACTIONS(1235), 1,
      aux_sym_pseudo_operation_token1,
    STATE(290), 1,
      aux_sym_dstring_repeat1,
  [8826] = 3,
    ACTIONS(1187), 1,
      anon_sym_o,
    ACTIONS(1238), 1,
      aux_sym_pseudo_operation_token1,
    STATE(291), 1,
      aux_sym_dstring_repeat1,
  [8836] = 3,
    ACTIONS(1187), 1,
      anon_sym_n,
    ACTIONS(1241), 1,
      aux_sym_pseudo_operation_token1,
    STATE(292), 1,
      aux_sym_dstring_repeat1,
  [8846] = 3,
    ACTIONS(1187), 1,
      anon_sym_m,
    ACTIONS(1244), 1,
      aux_sym_pseudo_operation_token1,
    STATE(293), 1,
      aux_sym_dstring_repeat1,
  [8856] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1222), 1,
      aux_sym__newline_token1,
    STATE(214), 1,
      sym__newline,
  [8866] = 3,
    ACTIONS(1187), 1,
      anon_sym_l,
    ACTIONS(1247), 1,
      aux_sym_pseudo_operation_token1,
    STATE(295), 1,
      aux_sym_dstring_repeat1,
  [8876] = 3,
    ACTIONS(1187), 1,
      anon_sym_k,
    ACTIONS(1250), 1,
      aux_sym_pseudo_operation_token1,
    STATE(296), 1,
      aux_sym_dstring_repeat1,
  [8886] = 3,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(1183), 1,
      sym__sep,
    STATE(207), 1,
      sym__newline,
  [8896] = 3,
    ACTIONS(1187), 1,
      anon_sym_j,
    ACTIONS(1253), 1,
      aux_sym_pseudo_operation_token1,
    STATE(298), 1,
      aux_sym_dstring_repeat1,
  [8906] = 3,
    ACTIONS(1187), 1,
      anon_sym_i,
    ACTIONS(1256), 1,
      aux_sym_pseudo_operation_token1,
    STATE(299), 1,
      aux_sym_dstring_repeat1,
  [8916] = 3,
    ACTIONS(1187), 1,
      anon_sym_h,
    ACTIONS(1259), 1,
      aux_sym_pseudo_operation_token1,
    STATE(300), 1,
      aux_sym_dstring_repeat1,
  [8926] = 3,
    ACTIONS(1187), 1,
      anon_sym_g,
    ACTIONS(1262), 1,
      aux_sym_pseudo_operation_token1,
    STATE(301), 1,
      aux_sym_dstring_repeat1,
  [8936] = 2,
    STATE(117), 1,
      aux_sym_binary_repeat1,
    ACTIONS(1265), 2,
      anon_sym_0,
      anon_sym_1,
  [8944] = 3,
    ACTIONS(1187), 1,
      anon_sym_f,
    ACTIONS(1267), 1,
      aux_sym_pseudo_operation_token1,
    STATE(303), 1,
      aux_sym_dstring_repeat1,
  [8954] = 3,
    ACTIONS(1187), 1,
      anon_sym_e,
    ACTIONS(1270), 1,
      aux_sym_pseudo_operation_token1,
    STATE(304), 1,
      aux_sym_dstring_repeat1,
  [8964] = 3,
    ACTIONS(1187), 1,
      anon_sym_d,
    ACTIONS(1273), 1,
      aux_sym_pseudo_operation_token1,
    STATE(305), 1,
      aux_sym_dstring_repeat1,
  [8974] = 3,
    ACTIONS(1276), 1,
      aux_sym__newline_token1,
    ACTIONS(1278), 1,
      sym__sep,
    STATE(224), 1,
      sym__newline,
  [8984] = 3,
    ACTIONS(1280), 1,
      aux_sym__newline_token1,
    ACTIONS(1282), 1,
      sym__sep,
    STATE(208), 1,
      sym__newline,
  [8994] = 3,
    ACTIONS(1187), 1,
      anon_sym_c,
    ACTIONS(1284), 1,
      aux_sym_pseudo_operation_token1,
    STATE(308), 1,
      aux_sym_dstring_repeat1,
  [9004] = 3,
    ACTIONS(1187), 1,
      anon_sym_b,
    ACTIONS(1287), 1,
      aux_sym_pseudo_operation_token1,
    STATE(309), 1,
      aux_sym_dstring_repeat1,
  [9014] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1280), 1,
      aux_sym__newline_token1,
    STATE(208), 1,
      sym__newline,
  [9024] = 3,
    ACTIONS(1276), 1,
      aux_sym__newline_token1,
    ACTIONS(1290), 1,
      sym__sep,
    STATE(224), 1,
      sym__newline,
  [9034] = 3,
    ACTIONS(1187), 1,
      anon_sym_a,
    ACTIONS(1292), 1,
      aux_sym_pseudo_operation_token1,
    STATE(312), 1,
      aux_sym_dstring_repeat1,
  [9044] = 3,
    ACTIONS(421), 1,
      aux_sym__newline_token1,
    ACTIONS(423), 1,
      sym__sep,
    STATE(222), 1,
      sym__newline,
  [9054] = 3,
    ACTIONS(1187), 1,
      anon_sym_BQUOTE,
    ACTIONS(1295), 1,
      aux_sym_pseudo_operation_token1,
    STATE(314), 1,
      aux_sym_dstring_repeat1,
  [9064] = 3,
    ACTIONS(1298), 1,
      aux_sym__newline_token1,
    ACTIONS(1300), 1,
      sym__sep,
    STATE(206), 1,
      sym__newline,
  [9074] = 3,
    ACTIONS(1187), 1,
      anon_sym__,
    ACTIONS(1302), 1,
      aux_sym_pseudo_operation_token1,
    STATE(316), 1,
      aux_sym_dstring_repeat1,
  [9084] = 3,
    ACTIONS(1187), 1,
      anon_sym_CARET,
    ACTIONS(1305), 1,
      aux_sym_pseudo_operation_token1,
    STATE(317), 1,
      aux_sym_dstring_repeat1,
  [9094] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(493), 1,
      sym_comment,
  [9104] = 3,
    ACTIONS(1187), 1,
      anon_sym_RBRACK,
    ACTIONS(1308), 1,
      aux_sym_pseudo_operation_token1,
    STATE(319), 1,
      aux_sym_dstring_repeat1,
  [9114] = 2,
    ACTIONS(1311), 1,
      anon_sym_ON,
    ACTIONS(1116), 2,
      anon_sym_OFF,
      anon_sym_ONLY,
  [9122] = 3,
    ACTIONS(1187), 1,
      anon_sym_BSLASH,
    ACTIONS(1313), 1,
      aux_sym_pseudo_operation_token1,
    STATE(321), 1,
      aux_sym_dstring_repeat1,
  [9132] = 3,
    ACTIONS(589), 1,
      aux_sym__newline_token1,
    ACTIONS(591), 1,
      sym__sep,
    STATE(207), 1,
      sym__newline,
  [9142] = 3,
    ACTIONS(1187), 1,
      anon_sym_LBRACK,
    ACTIONS(1316), 1,
      aux_sym_pseudo_operation_token1,
    STATE(323), 1,
      aux_sym_dstring_repeat1,
  [9152] = 3,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_mode_iopen,
    STATE(307), 1,
      sym_iaddr,
  [9162] = 3,
    ACTIONS(1319), 1,
      anon_sym_DOT,
    ACTIONS(1321), 1,
      aux_sym_pseudo_operation_token1,
    STATE(501), 1,
      aux_sym_dstring_repeat1,
  [9172] = 3,
    ACTIONS(1319), 1,
      anon_sym_DASH,
    ACTIONS(1323), 1,
      aux_sym_pseudo_operation_token1,
    STATE(502), 1,
      aux_sym_dstring_repeat1,
  [9182] = 3,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    ACTIONS(1325), 1,
      aux_sym_pseudo_operation_token1,
    STATE(503), 1,
      aux_sym_dstring_repeat1,
  [9192] = 3,
    ACTIONS(1319), 1,
      anon_sym_SEMI,
    ACTIONS(1327), 1,
      aux_sym_pseudo_operation_token1,
    STATE(504), 1,
      aux_sym_dstring_repeat1,
  [9202] = 3,
    ACTIONS(1319), 1,
      anon_sym_BANG,
    ACTIONS(1329), 1,
      aux_sym_pseudo_operation_token1,
    STATE(505), 1,
      aux_sym_dstring_repeat1,
  [9212] = 3,
    ACTIONS(1319), 1,
      anon_sym_DQUOTE,
    ACTIONS(1331), 1,
      aux_sym_pseudo_operation_token1,
    STATE(506), 1,
      aux_sym_dstring_repeat1,
  [9222] = 3,
    ACTIONS(1319), 1,
      anon_sym_POUND,
    ACTIONS(1333), 1,
      aux_sym_pseudo_operation_token1,
    STATE(507), 1,
      aux_sym_dstring_repeat1,
  [9232] = 3,
    ACTIONS(1319), 1,
      anon_sym_DOLLAR,
    ACTIONS(1335), 1,
      aux_sym_pseudo_operation_token1,
    STATE(508), 1,
      aux_sym_dstring_repeat1,
  [9242] = 3,
    ACTIONS(1319), 1,
      anon_sym_PERCENT,
    ACTIONS(1337), 1,
      aux_sym_pseudo_operation_token1,
    STATE(509), 1,
      aux_sym_dstring_repeat1,
  [9252] = 3,
    ACTIONS(1319), 1,
      anon_sym_AMP,
    ACTIONS(1339), 1,
      aux_sym_pseudo_operation_token1,
    STATE(510), 1,
      aux_sym_dstring_repeat1,
  [9262] = 3,
    ACTIONS(1319), 1,
      anon_sym_SQUOTE,
    ACTIONS(1341), 1,
      aux_sym_pseudo_operation_token1,
    STATE(511), 1,
      aux_sym_dstring_repeat1,
  [9272] = 3,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
    ACTIONS(1343), 1,
      aux_sym_pseudo_operation_token1,
    STATE(512), 1,
      aux_sym_dstring_repeat1,
  [9282] = 3,
    ACTIONS(1319), 1,
      anon_sym_STAR,
    ACTIONS(1345), 1,
      aux_sym_pseudo_operation_token1,
    STATE(513), 1,
      aux_sym_dstring_repeat1,
  [9292] = 3,
    ACTIONS(1319), 1,
      anon_sym_PLUS,
    ACTIONS(1347), 1,
      aux_sym_pseudo_operation_token1,
    STATE(514), 1,
      aux_sym_dstring_repeat1,
  [9302] = 3,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    ACTIONS(1349), 1,
      aux_sym_pseudo_operation_token1,
    STATE(515), 1,
      aux_sym_dstring_repeat1,
  [9312] = 3,
    ACTIONS(1319), 1,
      anon_sym_LT,
    ACTIONS(1351), 1,
      aux_sym_pseudo_operation_token1,
    STATE(516), 1,
      aux_sym_dstring_repeat1,
  [9322] = 3,
    ACTIONS(1319), 1,
      anon_sym_EQ,
    ACTIONS(1353), 1,
      aux_sym_pseudo_operation_token1,
    STATE(517), 1,
      aux_sym_dstring_repeat1,
  [9332] = 3,
    ACTIONS(1319), 1,
      anon_sym_GT,
    ACTIONS(1355), 1,
      aux_sym_pseudo_operation_token1,
    STATE(518), 1,
      aux_sym_dstring_repeat1,
  [9342] = 3,
    ACTIONS(1319), 1,
      anon_sym_QMARK,
    ACTIONS(1357), 1,
      aux_sym_pseudo_operation_token1,
    STATE(519), 1,
      aux_sym_dstring_repeat1,
  [9352] = 3,
    ACTIONS(1319), 1,
      anon_sym_AT,
    ACTIONS(1359), 1,
      aux_sym_pseudo_operation_token1,
    STATE(520), 1,
      aux_sym_dstring_repeat1,
  [9362] = 3,
    ACTIONS(1319), 1,
      anon_sym_A,
    ACTIONS(1361), 1,
      aux_sym_pseudo_operation_token1,
    STATE(521), 1,
      aux_sym_dstring_repeat1,
  [9372] = 3,
    ACTIONS(1319), 1,
      anon_sym_B,
    ACTIONS(1363), 1,
      aux_sym_pseudo_operation_token1,
    STATE(522), 1,
      aux_sym_dstring_repeat1,
  [9382] = 3,
    ACTIONS(1319), 1,
      anon_sym_C,
    ACTIONS(1365), 1,
      aux_sym_pseudo_operation_token1,
    STATE(523), 1,
      aux_sym_dstring_repeat1,
  [9392] = 3,
    ACTIONS(1319), 1,
      anon_sym_D,
    ACTIONS(1367), 1,
      aux_sym_pseudo_operation_token1,
    STATE(524), 1,
      aux_sym_dstring_repeat1,
  [9402] = 3,
    ACTIONS(1319), 1,
      anon_sym_E,
    ACTIONS(1369), 1,
      aux_sym_pseudo_operation_token1,
    STATE(525), 1,
      aux_sym_dstring_repeat1,
  [9412] = 3,
    ACTIONS(1319), 1,
      anon_sym_F,
    ACTIONS(1371), 1,
      aux_sym_pseudo_operation_token1,
    STATE(526), 1,
      aux_sym_dstring_repeat1,
  [9422] = 3,
    ACTIONS(1319), 1,
      anon_sym_G,
    ACTIONS(1373), 1,
      aux_sym_pseudo_operation_token1,
    STATE(527), 1,
      aux_sym_dstring_repeat1,
  [9432] = 3,
    ACTIONS(1319), 1,
      anon_sym_H,
    ACTIONS(1375), 1,
      aux_sym_pseudo_operation_token1,
    STATE(528), 1,
      aux_sym_dstring_repeat1,
  [9442] = 3,
    ACTIONS(1319), 1,
      anon_sym_I,
    ACTIONS(1377), 1,
      aux_sym_pseudo_operation_token1,
    STATE(529), 1,
      aux_sym_dstring_repeat1,
  [9452] = 3,
    ACTIONS(1319), 1,
      anon_sym_J,
    ACTIONS(1379), 1,
      aux_sym_pseudo_operation_token1,
    STATE(530), 1,
      aux_sym_dstring_repeat1,
  [9462] = 3,
    ACTIONS(1319), 1,
      anon_sym_K,
    ACTIONS(1381), 1,
      aux_sym_pseudo_operation_token1,
    STATE(531), 1,
      aux_sym_dstring_repeat1,
  [9472] = 3,
    ACTIONS(1319), 1,
      anon_sym_L,
    ACTIONS(1383), 1,
      aux_sym_pseudo_operation_token1,
    STATE(532), 1,
      aux_sym_dstring_repeat1,
  [9482] = 3,
    ACTIONS(1319), 1,
      anon_sym_M,
    ACTIONS(1385), 1,
      aux_sym_pseudo_operation_token1,
    STATE(533), 1,
      aux_sym_dstring_repeat1,
  [9492] = 3,
    ACTIONS(1319), 1,
      anon_sym_N,
    ACTIONS(1387), 1,
      aux_sym_pseudo_operation_token1,
    STATE(534), 1,
      aux_sym_dstring_repeat1,
  [9502] = 3,
    ACTIONS(1319), 1,
      anon_sym_O,
    ACTIONS(1389), 1,
      aux_sym_pseudo_operation_token1,
    STATE(535), 1,
      aux_sym_dstring_repeat1,
  [9512] = 3,
    ACTIONS(1319), 1,
      anon_sym_P,
    ACTIONS(1391), 1,
      aux_sym_pseudo_operation_token1,
    STATE(536), 1,
      aux_sym_dstring_repeat1,
  [9522] = 3,
    ACTIONS(1319), 1,
      anon_sym_Q,
    ACTIONS(1393), 1,
      aux_sym_pseudo_operation_token1,
    STATE(537), 1,
      aux_sym_dstring_repeat1,
  [9532] = 3,
    ACTIONS(1319), 1,
      anon_sym_R,
    ACTIONS(1395), 1,
      aux_sym_pseudo_operation_token1,
    STATE(538), 1,
      aux_sym_dstring_repeat1,
  [9542] = 3,
    ACTIONS(1319), 1,
      anon_sym_S,
    ACTIONS(1397), 1,
      aux_sym_pseudo_operation_token1,
    STATE(539), 1,
      aux_sym_dstring_repeat1,
  [9552] = 3,
    ACTIONS(1319), 1,
      anon_sym_T,
    ACTIONS(1399), 1,
      aux_sym_pseudo_operation_token1,
    STATE(540), 1,
      aux_sym_dstring_repeat1,
  [9562] = 3,
    ACTIONS(1319), 1,
      anon_sym_U,
    ACTIONS(1401), 1,
      aux_sym_pseudo_operation_token1,
    STATE(541), 1,
      aux_sym_dstring_repeat1,
  [9572] = 3,
    ACTIONS(1319), 1,
      anon_sym_V,
    ACTIONS(1403), 1,
      aux_sym_pseudo_operation_token1,
    STATE(542), 1,
      aux_sym_dstring_repeat1,
  [9582] = 3,
    ACTIONS(1319), 1,
      anon_sym_W,
    ACTIONS(1405), 1,
      aux_sym_pseudo_operation_token1,
    STATE(543), 1,
      aux_sym_dstring_repeat1,
  [9592] = 3,
    ACTIONS(1319), 1,
      anon_sym_X,
    ACTIONS(1407), 1,
      aux_sym_pseudo_operation_token1,
    STATE(544), 1,
      aux_sym_dstring_repeat1,
  [9602] = 3,
    ACTIONS(1319), 1,
      anon_sym_Y,
    ACTIONS(1409), 1,
      aux_sym_pseudo_operation_token1,
    STATE(545), 1,
      aux_sym_dstring_repeat1,
  [9612] = 3,
    ACTIONS(1319), 1,
      anon_sym_Z,
    ACTIONS(1411), 1,
      aux_sym_pseudo_operation_token1,
    STATE(546), 1,
      aux_sym_dstring_repeat1,
  [9622] = 3,
    ACTIONS(1319), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      aux_sym_pseudo_operation_token1,
    STATE(547), 1,
      aux_sym_dstring_repeat1,
  [9632] = 3,
    ACTIONS(1319), 1,
      anon_sym_BSLASH,
    ACTIONS(1415), 1,
      aux_sym_pseudo_operation_token1,
    STATE(548), 1,
      aux_sym_dstring_repeat1,
  [9642] = 3,
    ACTIONS(1319), 1,
      anon_sym_RBRACK,
    ACTIONS(1417), 1,
      aux_sym_pseudo_operation_token1,
    STATE(549), 1,
      aux_sym_dstring_repeat1,
  [9652] = 3,
    ACTIONS(1319), 1,
      anon_sym_CARET,
    ACTIONS(1419), 1,
      aux_sym_pseudo_operation_token1,
    STATE(268), 1,
      aux_sym_dstring_repeat1,
  [9662] = 3,
    ACTIONS(1319), 1,
      anon_sym__,
    ACTIONS(1421), 1,
      aux_sym_pseudo_operation_token1,
    STATE(551), 1,
      aux_sym_dstring_repeat1,
  [9672] = 3,
    ACTIONS(1319), 1,
      anon_sym_BQUOTE,
    ACTIONS(1423), 1,
      aux_sym_pseudo_operation_token1,
    STATE(552), 1,
      aux_sym_dstring_repeat1,
  [9682] = 3,
    ACTIONS(1319), 1,
      anon_sym_a,
    ACTIONS(1425), 1,
      aux_sym_pseudo_operation_token1,
    STATE(553), 1,
      aux_sym_dstring_repeat1,
  [9692] = 3,
    ACTIONS(1319), 1,
      anon_sym_b,
    ACTIONS(1427), 1,
      aux_sym_pseudo_operation_token1,
    STATE(554), 1,
      aux_sym_dstring_repeat1,
  [9702] = 3,
    ACTIONS(1319), 1,
      anon_sym_c,
    ACTIONS(1429), 1,
      aux_sym_pseudo_operation_token1,
    STATE(555), 1,
      aux_sym_dstring_repeat1,
  [9712] = 3,
    ACTIONS(1319), 1,
      anon_sym_d,
    ACTIONS(1431), 1,
      aux_sym_pseudo_operation_token1,
    STATE(556), 1,
      aux_sym_dstring_repeat1,
  [9722] = 3,
    ACTIONS(1319), 1,
      anon_sym_e,
    ACTIONS(1433), 1,
      aux_sym_pseudo_operation_token1,
    STATE(557), 1,
      aux_sym_dstring_repeat1,
  [9732] = 3,
    ACTIONS(1319), 1,
      anon_sym_f,
    ACTIONS(1435), 1,
      aux_sym_pseudo_operation_token1,
    STATE(558), 1,
      aux_sym_dstring_repeat1,
  [9742] = 3,
    ACTIONS(1319), 1,
      anon_sym_g,
    ACTIONS(1437), 1,
      aux_sym_pseudo_operation_token1,
    STATE(559), 1,
      aux_sym_dstring_repeat1,
  [9752] = 3,
    ACTIONS(1319), 1,
      anon_sym_h,
    ACTIONS(1439), 1,
      aux_sym_pseudo_operation_token1,
    STATE(560), 1,
      aux_sym_dstring_repeat1,
  [9762] = 3,
    ACTIONS(1319), 1,
      anon_sym_i,
    ACTIONS(1441), 1,
      aux_sym_pseudo_operation_token1,
    STATE(561), 1,
      aux_sym_dstring_repeat1,
  [9772] = 3,
    ACTIONS(1319), 1,
      anon_sym_j,
    ACTIONS(1443), 1,
      aux_sym_pseudo_operation_token1,
    STATE(562), 1,
      aux_sym_dstring_repeat1,
  [9782] = 3,
    ACTIONS(1319), 1,
      anon_sym_k,
    ACTIONS(1445), 1,
      aux_sym_pseudo_operation_token1,
    STATE(563), 1,
      aux_sym_dstring_repeat1,
  [9792] = 3,
    ACTIONS(1319), 1,
      anon_sym_l,
    ACTIONS(1447), 1,
      aux_sym_pseudo_operation_token1,
    STATE(564), 1,
      aux_sym_dstring_repeat1,
  [9802] = 3,
    ACTIONS(1319), 1,
      anon_sym_m,
    ACTIONS(1449), 1,
      aux_sym_pseudo_operation_token1,
    STATE(565), 1,
      aux_sym_dstring_repeat1,
  [9812] = 3,
    ACTIONS(1319), 1,
      anon_sym_n,
    ACTIONS(1451), 1,
      aux_sym_pseudo_operation_token1,
    STATE(566), 1,
      aux_sym_dstring_repeat1,
  [9822] = 3,
    ACTIONS(1319), 1,
      anon_sym_o,
    ACTIONS(1453), 1,
      aux_sym_pseudo_operation_token1,
    STATE(567), 1,
      aux_sym_dstring_repeat1,
  [9832] = 3,
    ACTIONS(1319), 1,
      anon_sym_p,
    ACTIONS(1455), 1,
      aux_sym_pseudo_operation_token1,
    STATE(568), 1,
      aux_sym_dstring_repeat1,
  [9842] = 3,
    ACTIONS(1319), 1,
      anon_sym_q,
    ACTIONS(1457), 1,
      aux_sym_pseudo_operation_token1,
    STATE(569), 1,
      aux_sym_dstring_repeat1,
  [9852] = 3,
    ACTIONS(1319), 1,
      anon_sym_r,
    ACTIONS(1459), 1,
      aux_sym_pseudo_operation_token1,
    STATE(570), 1,
      aux_sym_dstring_repeat1,
  [9862] = 3,
    ACTIONS(1319), 1,
      anon_sym_s,
    ACTIONS(1461), 1,
      aux_sym_pseudo_operation_token1,
    STATE(571), 1,
      aux_sym_dstring_repeat1,
  [9872] = 3,
    ACTIONS(1319), 1,
      anon_sym_t,
    ACTIONS(1463), 1,
      aux_sym_pseudo_operation_token1,
    STATE(572), 1,
      aux_sym_dstring_repeat1,
  [9882] = 3,
    ACTIONS(1319), 1,
      anon_sym_u,
    ACTIONS(1465), 1,
      aux_sym_pseudo_operation_token1,
    STATE(573), 1,
      aux_sym_dstring_repeat1,
  [9892] = 3,
    ACTIONS(1319), 1,
      anon_sym_v,
    ACTIONS(1467), 1,
      aux_sym_pseudo_operation_token1,
    STATE(574), 1,
      aux_sym_dstring_repeat1,
  [9902] = 3,
    ACTIONS(1319), 1,
      anon_sym_w,
    ACTIONS(1469), 1,
      aux_sym_pseudo_operation_token1,
    STATE(575), 1,
      aux_sym_dstring_repeat1,
  [9912] = 3,
    ACTIONS(1319), 1,
      anon_sym_x,
    ACTIONS(1471), 1,
      aux_sym_pseudo_operation_token1,
    STATE(576), 1,
      aux_sym_dstring_repeat1,
  [9922] = 3,
    ACTIONS(1319), 1,
      anon_sym_y,
    ACTIONS(1473), 1,
      aux_sym_pseudo_operation_token1,
    STATE(577), 1,
      aux_sym_dstring_repeat1,
  [9932] = 3,
    ACTIONS(1319), 1,
      anon_sym_z,
    ACTIONS(1475), 1,
      aux_sym_pseudo_operation_token1,
    STATE(578), 1,
      aux_sym_dstring_repeat1,
  [9942] = 3,
    ACTIONS(1319), 1,
      anon_sym_LBRACE,
    ACTIONS(1477), 1,
      aux_sym_pseudo_operation_token1,
    STATE(579), 1,
      aux_sym_dstring_repeat1,
  [9952] = 3,
    ACTIONS(1319), 1,
      anon_sym_PIPE,
    ACTIONS(1479), 1,
      aux_sym_pseudo_operation_token1,
    STATE(580), 1,
      aux_sym_dstring_repeat1,
  [9962] = 3,
    ACTIONS(1319), 1,
      anon_sym_RBRACE,
    ACTIONS(1481), 1,
      aux_sym_pseudo_operation_token1,
    STATE(581), 1,
      aux_sym_dstring_repeat1,
  [9972] = 3,
    ACTIONS(1319), 1,
      anon_sym_TILDE,
    ACTIONS(1483), 1,
      aux_sym_pseudo_operation_token1,
    STATE(582), 1,
      aux_sym_dstring_repeat1,
  [9982] = 2,
    ACTIONS(1487), 1,
      anon_sym_COMMA,
    ACTIONS(1485), 2,
      aux_sym__newline_token1,
      sym__sep,
  [9990] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(310), 1,
      sym_comment,
  [10000] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(297), 1,
      sym_comment,
  [10010] = 3,
    ACTIONS(1187), 1,
      anon_sym_Z,
    ACTIONS(1489), 1,
      aux_sym_pseudo_operation_token1,
    STATE(410), 1,
      aux_sym_dstring_repeat1,
  [10020] = 3,
    ACTIONS(1187), 1,
      anon_sym_Y,
    ACTIONS(1492), 1,
      aux_sym_pseudo_operation_token1,
    STATE(411), 1,
      aux_sym_dstring_repeat1,
  [10030] = 3,
    ACTIONS(1187), 1,
      anon_sym_X,
    ACTIONS(1495), 1,
      aux_sym_pseudo_operation_token1,
    STATE(412), 1,
      aux_sym_dstring_repeat1,
  [10040] = 3,
    ACTIONS(1187), 1,
      anon_sym_W,
    ACTIONS(1498), 1,
      aux_sym_pseudo_operation_token1,
    STATE(413), 1,
      aux_sym_dstring_repeat1,
  [10050] = 3,
    ACTIONS(1187), 1,
      anon_sym_V,
    ACTIONS(1501), 1,
      aux_sym_pseudo_operation_token1,
    STATE(414), 1,
      aux_sym_dstring_repeat1,
  [10060] = 3,
    ACTIONS(1187), 1,
      anon_sym_U,
    ACTIONS(1504), 1,
      aux_sym_pseudo_operation_token1,
    STATE(415), 1,
      aux_sym_dstring_repeat1,
  [10070] = 3,
    ACTIONS(1187), 1,
      anon_sym_T,
    ACTIONS(1507), 1,
      aux_sym_pseudo_operation_token1,
    STATE(416), 1,
      aux_sym_dstring_repeat1,
  [10080] = 3,
    ACTIONS(1187), 1,
      anon_sym_S,
    ACTIONS(1510), 1,
      aux_sym_pseudo_operation_token1,
    STATE(417), 1,
      aux_sym_dstring_repeat1,
  [10090] = 3,
    ACTIONS(1187), 1,
      anon_sym_R,
    ACTIONS(1513), 1,
      aux_sym_pseudo_operation_token1,
    STATE(418), 1,
      aux_sym_dstring_repeat1,
  [10100] = 3,
    ACTIONS(1187), 1,
      anon_sym_Q,
    ACTIONS(1516), 1,
      aux_sym_pseudo_operation_token1,
    STATE(419), 1,
      aux_sym_dstring_repeat1,
  [10110] = 3,
    ACTIONS(1187), 1,
      anon_sym_P,
    ACTIONS(1519), 1,
      aux_sym_pseudo_operation_token1,
    STATE(420), 1,
      aux_sym_dstring_repeat1,
  [10120] = 3,
    ACTIONS(1187), 1,
      anon_sym_O,
    ACTIONS(1522), 1,
      aux_sym_pseudo_operation_token1,
    STATE(421), 1,
      aux_sym_dstring_repeat1,
  [10130] = 3,
    ACTIONS(1187), 1,
      anon_sym_N,
    ACTIONS(1525), 1,
      aux_sym_pseudo_operation_token1,
    STATE(422), 1,
      aux_sym_dstring_repeat1,
  [10140] = 3,
    ACTIONS(1187), 1,
      anon_sym_M,
    ACTIONS(1528), 1,
      aux_sym_pseudo_operation_token1,
    STATE(423), 1,
      aux_sym_dstring_repeat1,
  [10150] = 3,
    ACTIONS(1187), 1,
      anon_sym_L,
    ACTIONS(1531), 1,
      aux_sym_pseudo_operation_token1,
    STATE(424), 1,
      aux_sym_dstring_repeat1,
  [10160] = 3,
    ACTIONS(1187), 1,
      anon_sym_K,
    ACTIONS(1534), 1,
      aux_sym_pseudo_operation_token1,
    STATE(425), 1,
      aux_sym_dstring_repeat1,
  [10170] = 3,
    ACTIONS(1187), 1,
      anon_sym_J,
    ACTIONS(1537), 1,
      aux_sym_pseudo_operation_token1,
    STATE(426), 1,
      aux_sym_dstring_repeat1,
  [10180] = 3,
    ACTIONS(1187), 1,
      anon_sym_I,
    ACTIONS(1540), 1,
      aux_sym_pseudo_operation_token1,
    STATE(427), 1,
      aux_sym_dstring_repeat1,
  [10190] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(586), 1,
      sym_comment,
  [10200] = 3,
    ACTIONS(1187), 1,
      anon_sym_H,
    ACTIONS(1543), 1,
      aux_sym_pseudo_operation_token1,
    STATE(429), 1,
      aux_sym_dstring_repeat1,
  [10210] = 3,
    ACTIONS(1187), 1,
      anon_sym_G,
    ACTIONS(1546), 1,
      aux_sym_pseudo_operation_token1,
    STATE(430), 1,
      aux_sym_dstring_repeat1,
  [10220] = 3,
    ACTIONS(1187), 1,
      anon_sym_F,
    ACTIONS(1549), 1,
      aux_sym_pseudo_operation_token1,
    STATE(431), 1,
      aux_sym_dstring_repeat1,
  [10230] = 3,
    ACTIONS(1187), 1,
      anon_sym_E,
    ACTIONS(1552), 1,
      aux_sym_pseudo_operation_token1,
    STATE(432), 1,
      aux_sym_dstring_repeat1,
  [10240] = 3,
    ACTIONS(1187), 1,
      anon_sym_D,
    ACTIONS(1555), 1,
      aux_sym_pseudo_operation_token1,
    STATE(433), 1,
      aux_sym_dstring_repeat1,
  [10250] = 3,
    ACTIONS(1187), 1,
      anon_sym_C,
    ACTIONS(1558), 1,
      aux_sym_pseudo_operation_token1,
    STATE(434), 1,
      aux_sym_dstring_repeat1,
  [10260] = 3,
    ACTIONS(1187), 1,
      anon_sym_B,
    ACTIONS(1561), 1,
      aux_sym_pseudo_operation_token1,
    STATE(435), 1,
      aux_sym_dstring_repeat1,
  [10270] = 3,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_mode_iopen,
    STATE(587), 1,
      sym_iaddr,
  [10280] = 3,
    ACTIONS(1187), 1,
      anon_sym_A,
    ACTIONS(1564), 1,
      aux_sym_pseudo_operation_token1,
    STATE(437), 1,
      aux_sym_dstring_repeat1,
  [10290] = 3,
    ACTIONS(1187), 1,
      anon_sym_AT,
    ACTIONS(1567), 1,
      aux_sym_pseudo_operation_token1,
    STATE(438), 1,
      aux_sym_dstring_repeat1,
  [10300] = 3,
    ACTIONS(1187), 1,
      anon_sym_QMARK,
    ACTIONS(1570), 1,
      aux_sym_pseudo_operation_token1,
    STATE(439), 1,
      aux_sym_dstring_repeat1,
  [10310] = 3,
    ACTIONS(1187), 1,
      anon_sym_GT,
    ACTIONS(1573), 1,
      aux_sym_pseudo_operation_token1,
    STATE(440), 1,
      aux_sym_dstring_repeat1,
  [10320] = 3,
    ACTIONS(1187), 1,
      anon_sym_EQ,
    ACTIONS(1576), 1,
      aux_sym_pseudo_operation_token1,
    STATE(441), 1,
      aux_sym_dstring_repeat1,
  [10330] = 3,
    ACTIONS(1187), 1,
      anon_sym_LT,
    ACTIONS(1579), 1,
      aux_sym_pseudo_operation_token1,
    STATE(442), 1,
      aux_sym_dstring_repeat1,
  [10340] = 3,
    ACTIONS(1187), 1,
      anon_sym_COLON,
    ACTIONS(1582), 1,
      aux_sym_pseudo_operation_token1,
    STATE(443), 1,
      aux_sym_dstring_repeat1,
  [10350] = 2,
    ACTIONS(1585), 1,
      anon_sym_ON,
    ACTIONS(1114), 2,
      anon_sym_OFF,
      anon_sym_ONLY,
  [10358] = 3,
    ACTIONS(1187), 1,
      anon_sym_PLUS,
    ACTIONS(1587), 1,
      aux_sym_pseudo_operation_token1,
    STATE(445), 1,
      aux_sym_dstring_repeat1,
  [10368] = 3,
    ACTIONS(1187), 1,
      anon_sym_STAR,
    ACTIONS(1590), 1,
      aux_sym_pseudo_operation_token1,
    STATE(446), 1,
      aux_sym_dstring_repeat1,
  [10378] = 3,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    ACTIONS(1593), 1,
      aux_sym_pseudo_operation_token1,
    STATE(447), 1,
      aux_sym_dstring_repeat1,
  [10388] = 3,
    ACTIONS(1596), 1,
      aux_sym__newline_token1,
    ACTIONS(1598), 1,
      sym__sep,
    STATE(221), 1,
      sym__newline,
  [10398] = 3,
    ACTIONS(1187), 1,
      anon_sym_SQUOTE,
    ACTIONS(1600), 1,
      aux_sym_pseudo_operation_token1,
    STATE(449), 1,
      aux_sym_dstring_repeat1,
  [10408] = 3,
    ACTIONS(1187), 1,
      anon_sym_AMP,
    ACTIONS(1603), 1,
      aux_sym_pseudo_operation_token1,
    STATE(450), 1,
      aux_sym_dstring_repeat1,
  [10418] = 3,
    ACTIONS(1187), 1,
      anon_sym_PERCENT,
    ACTIONS(1606), 1,
      aux_sym_pseudo_operation_token1,
    STATE(451), 1,
      aux_sym_dstring_repeat1,
  [10428] = 3,
    ACTIONS(1596), 1,
      aux_sym__newline_token1,
    ACTIONS(1609), 1,
      sym__sep,
    STATE(221), 1,
      sym__newline,
  [10438] = 3,
    ACTIONS(1187), 1,
      anon_sym_DOLLAR,
    ACTIONS(1611), 1,
      aux_sym_pseudo_operation_token1,
    STATE(453), 1,
      aux_sym_dstring_repeat1,
  [10448] = 3,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1614), 1,
      aux_sym_pseudo_operation_token1,
    STATE(454), 1,
      aux_sym_dstring_repeat1,
  [10458] = 3,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    ACTIONS(1617), 1,
      aux_sym_pseudo_operation_token1,
    STATE(455), 1,
      aux_sym_dstring_repeat1,
  [10468] = 3,
    ACTIONS(1187), 1,
      anon_sym_BANG,
    ACTIONS(1620), 1,
      aux_sym_pseudo_operation_token1,
    STATE(456), 1,
      aux_sym_dstring_repeat1,
  [10478] = 3,
    ACTIONS(1187), 1,
      anon_sym_SEMI,
    ACTIONS(1623), 1,
      aux_sym_pseudo_operation_token1,
    STATE(457), 1,
      aux_sym_dstring_repeat1,
  [10488] = 3,
    ACTIONS(1187), 1,
      anon_sym_LPAREN,
    ACTIONS(1626), 1,
      aux_sym_pseudo_operation_token1,
    STATE(458), 1,
      aux_sym_dstring_repeat1,
  [10498] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1629), 1,
      aux_sym__newline_token1,
    STATE(228), 1,
      sym__newline,
  [10508] = 3,
    ACTIONS(1187), 1,
      anon_sym_DASH,
    ACTIONS(1631), 1,
      aux_sym_pseudo_operation_token1,
    STATE(460), 1,
      aux_sym_dstring_repeat1,
  [10518] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1634), 1,
      aux_sym__newline_token1,
    STATE(225), 1,
      sym__newline,
  [10528] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(461), 1,
      sym_comment,
  [10538] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(584), 1,
      sym_comment,
  [10548] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1636), 1,
      aux_sym__newline_token1,
    STATE(220), 1,
      sym__newline,
  [10558] = 3,
    ACTIONS(1638), 1,
      aux_sym__newline_token1,
    ACTIONS(1640), 1,
      sym__sep,
    STATE(215), 1,
      sym__newline,
  [10568] = 3,
    ACTIONS(933), 1,
      aux_sym__newline_token1,
    ACTIONS(935), 1,
      sym__sep,
    STATE(216), 1,
      sym__newline,
  [10578] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1642), 1,
      aux_sym__newline_token1,
    STATE(219), 1,
      sym__newline,
  [10588] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1644), 1,
      aux_sym__newline_token1,
    STATE(218), 1,
      sym__newline,
  [10598] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(464), 1,
      sym_comment,
  [10608] = 3,
    ACTIONS(933), 1,
      aux_sym__newline_token1,
    ACTIONS(1183), 1,
      sym__sep,
    STATE(216), 1,
      sym__newline,
  [10618] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(467), 1,
      sym_comment,
  [10628] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(468), 1,
      sym_comment,
  [10638] = 3,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(927), 1,
      sym__sep,
    STATE(212), 1,
      sym__newline,
  [10648] = 1,
    ACTIONS(1137), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
  [10654] = 1,
    ACTIONS(1646), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10660] = 1,
    ACTIONS(1648), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10666] = 1,
    ACTIONS(1650), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10672] = 1,
    ACTIONS(1652), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10678] = 1,
    ACTIONS(1654), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10684] = 1,
    ACTIONS(1656), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10690] = 3,
    ACTIONS(1187), 1,
      anon_sym_DOT,
    ACTIONS(1658), 1,
      aux_sym_pseudo_operation_token1,
    STATE(481), 1,
      aux_sym_dstring_repeat1,
  [10700] = 1,
    ACTIONS(1661), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
  [10706] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(470), 1,
      sym_comment,
  [10716] = 1,
    ACTIONS(1154), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
  [10722] = 3,
    ACTIONS(925), 1,
      aux_sym__newline_token1,
    ACTIONS(1183), 1,
      sym__sep,
    STATE(212), 1,
      sym__newline,
  [10732] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1663), 1,
      aux_sym__newline_token1,
    STATE(211), 1,
      sym__newline,
  [10742] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(486), 1,
      sym_comment,
  [10752] = 1,
    ACTIONS(1665), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10758] = 1,
    ACTIONS(1667), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10764] = 1,
    ACTIONS(1669), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10770] = 1,
    ACTIONS(1671), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10776] = 3,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(485), 1,
      sym_comment,
  [10786] = 3,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(1183), 1,
      sym__sep,
    STATE(227), 1,
      sym__newline,
  [10796] = 1,
    ACTIONS(1673), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10802] = 1,
    ACTIONS(1675), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10808] = 1,
    ACTIONS(1677), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10814] = 1,
    ACTIONS(1679), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10820] = 1,
    ACTIONS(1681), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10826] = 1,
    ACTIONS(1683), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [10832] = 1,
    ACTIONS(1685), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_COMMA,
  [10838] = 3,
    ACTIONS(1165), 1,
      anon_sym_DOT,
    ACTIONS(1687), 1,
      aux_sym_pseudo_operation_token1,
    STATE(481), 1,
      aux_sym_dstring_repeat1,
  [10848] = 3,
    ACTIONS(1165), 1,
      anon_sym_DASH,
    ACTIONS(1689), 1,
      aux_sym_pseudo_operation_token1,
    STATE(460), 1,
      aux_sym_dstring_repeat1,
  [10858] = 3,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
    ACTIONS(1691), 1,
      aux_sym_pseudo_operation_token1,
    STATE(458), 1,
      aux_sym_dstring_repeat1,
  [10868] = 3,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    ACTIONS(1693), 1,
      aux_sym_pseudo_operation_token1,
    STATE(457), 1,
      aux_sym_dstring_repeat1,
  [10878] = 3,
    ACTIONS(1165), 1,
      anon_sym_BANG,
    ACTIONS(1695), 1,
      aux_sym_pseudo_operation_token1,
    STATE(456), 1,
      aux_sym_dstring_repeat1,
  [10888] = 3,
    ACTIONS(1165), 1,
      anon_sym_DQUOTE,
    ACTIONS(1697), 1,
      aux_sym_pseudo_operation_token1,
    STATE(455), 1,
      aux_sym_dstring_repeat1,
  [10898] = 3,
    ACTIONS(1165), 1,
      anon_sym_POUND,
    ACTIONS(1699), 1,
      aux_sym_pseudo_operation_token1,
    STATE(454), 1,
      aux_sym_dstring_repeat1,
  [10908] = 3,
    ACTIONS(1165), 1,
      anon_sym_DOLLAR,
    ACTIONS(1701), 1,
      aux_sym_pseudo_operation_token1,
    STATE(453), 1,
      aux_sym_dstring_repeat1,
  [10918] = 3,
    ACTIONS(1165), 1,
      anon_sym_PERCENT,
    ACTIONS(1703), 1,
      aux_sym_pseudo_operation_token1,
    STATE(451), 1,
      aux_sym_dstring_repeat1,
  [10928] = 3,
    ACTIONS(1165), 1,
      anon_sym_AMP,
    ACTIONS(1705), 1,
      aux_sym_pseudo_operation_token1,
    STATE(450), 1,
      aux_sym_dstring_repeat1,
  [10938] = 3,
    ACTIONS(1165), 1,
      anon_sym_SQUOTE,
    ACTIONS(1707), 1,
      aux_sym_pseudo_operation_token1,
    STATE(449), 1,
      aux_sym_dstring_repeat1,
  [10948] = 3,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    ACTIONS(1709), 1,
      aux_sym_pseudo_operation_token1,
    STATE(447), 1,
      aux_sym_dstring_repeat1,
  [10958] = 3,
    ACTIONS(1165), 1,
      anon_sym_STAR,
    ACTIONS(1711), 1,
      aux_sym_pseudo_operation_token1,
    STATE(446), 1,
      aux_sym_dstring_repeat1,
  [10968] = 3,
    ACTIONS(1165), 1,
      anon_sym_PLUS,
    ACTIONS(1713), 1,
      aux_sym_pseudo_operation_token1,
    STATE(445), 1,
      aux_sym_dstring_repeat1,
  [10978] = 3,
    ACTIONS(1165), 1,
      anon_sym_COLON,
    ACTIONS(1715), 1,
      aux_sym_pseudo_operation_token1,
    STATE(443), 1,
      aux_sym_dstring_repeat1,
  [10988] = 3,
    ACTIONS(1165), 1,
      anon_sym_LT,
    ACTIONS(1717), 1,
      aux_sym_pseudo_operation_token1,
    STATE(442), 1,
      aux_sym_dstring_repeat1,
  [10998] = 3,
    ACTIONS(1165), 1,
      anon_sym_EQ,
    ACTIONS(1719), 1,
      aux_sym_pseudo_operation_token1,
    STATE(441), 1,
      aux_sym_dstring_repeat1,
  [11008] = 3,
    ACTIONS(1165), 1,
      anon_sym_GT,
    ACTIONS(1721), 1,
      aux_sym_pseudo_operation_token1,
    STATE(440), 1,
      aux_sym_dstring_repeat1,
  [11018] = 3,
    ACTIONS(1165), 1,
      anon_sym_QMARK,
    ACTIONS(1723), 1,
      aux_sym_pseudo_operation_token1,
    STATE(439), 1,
      aux_sym_dstring_repeat1,
  [11028] = 3,
    ACTIONS(1165), 1,
      anon_sym_AT,
    ACTIONS(1725), 1,
      aux_sym_pseudo_operation_token1,
    STATE(438), 1,
      aux_sym_dstring_repeat1,
  [11038] = 3,
    ACTIONS(1165), 1,
      anon_sym_A,
    ACTIONS(1727), 1,
      aux_sym_pseudo_operation_token1,
    STATE(437), 1,
      aux_sym_dstring_repeat1,
  [11048] = 3,
    ACTIONS(1165), 1,
      anon_sym_B,
    ACTIONS(1729), 1,
      aux_sym_pseudo_operation_token1,
    STATE(435), 1,
      aux_sym_dstring_repeat1,
  [11058] = 3,
    ACTIONS(1165), 1,
      anon_sym_C,
    ACTIONS(1731), 1,
      aux_sym_pseudo_operation_token1,
    STATE(434), 1,
      aux_sym_dstring_repeat1,
  [11068] = 3,
    ACTIONS(1165), 1,
      anon_sym_D,
    ACTIONS(1733), 1,
      aux_sym_pseudo_operation_token1,
    STATE(433), 1,
      aux_sym_dstring_repeat1,
  [11078] = 3,
    ACTIONS(1165), 1,
      anon_sym_E,
    ACTIONS(1735), 1,
      aux_sym_pseudo_operation_token1,
    STATE(432), 1,
      aux_sym_dstring_repeat1,
  [11088] = 3,
    ACTIONS(1165), 1,
      anon_sym_F,
    ACTIONS(1737), 1,
      aux_sym_pseudo_operation_token1,
    STATE(431), 1,
      aux_sym_dstring_repeat1,
  [11098] = 3,
    ACTIONS(1165), 1,
      anon_sym_G,
    ACTIONS(1739), 1,
      aux_sym_pseudo_operation_token1,
    STATE(430), 1,
      aux_sym_dstring_repeat1,
  [11108] = 3,
    ACTIONS(1165), 1,
      anon_sym_H,
    ACTIONS(1741), 1,
      aux_sym_pseudo_operation_token1,
    STATE(429), 1,
      aux_sym_dstring_repeat1,
  [11118] = 3,
    ACTIONS(1165), 1,
      anon_sym_I,
    ACTIONS(1743), 1,
      aux_sym_pseudo_operation_token1,
    STATE(427), 1,
      aux_sym_dstring_repeat1,
  [11128] = 3,
    ACTIONS(1165), 1,
      anon_sym_J,
    ACTIONS(1745), 1,
      aux_sym_pseudo_operation_token1,
    STATE(426), 1,
      aux_sym_dstring_repeat1,
  [11138] = 3,
    ACTIONS(1165), 1,
      anon_sym_K,
    ACTIONS(1747), 1,
      aux_sym_pseudo_operation_token1,
    STATE(425), 1,
      aux_sym_dstring_repeat1,
  [11148] = 3,
    ACTIONS(1165), 1,
      anon_sym_L,
    ACTIONS(1749), 1,
      aux_sym_pseudo_operation_token1,
    STATE(424), 1,
      aux_sym_dstring_repeat1,
  [11158] = 3,
    ACTIONS(1165), 1,
      anon_sym_M,
    ACTIONS(1751), 1,
      aux_sym_pseudo_operation_token1,
    STATE(423), 1,
      aux_sym_dstring_repeat1,
  [11168] = 3,
    ACTIONS(1165), 1,
      anon_sym_N,
    ACTIONS(1753), 1,
      aux_sym_pseudo_operation_token1,
    STATE(422), 1,
      aux_sym_dstring_repeat1,
  [11178] = 3,
    ACTIONS(1165), 1,
      anon_sym_O,
    ACTIONS(1755), 1,
      aux_sym_pseudo_operation_token1,
    STATE(421), 1,
      aux_sym_dstring_repeat1,
  [11188] = 3,
    ACTIONS(1165), 1,
      anon_sym_P,
    ACTIONS(1757), 1,
      aux_sym_pseudo_operation_token1,
    STATE(420), 1,
      aux_sym_dstring_repeat1,
  [11198] = 3,
    ACTIONS(1165), 1,
      anon_sym_Q,
    ACTIONS(1759), 1,
      aux_sym_pseudo_operation_token1,
    STATE(419), 1,
      aux_sym_dstring_repeat1,
  [11208] = 3,
    ACTIONS(1165), 1,
      anon_sym_R,
    ACTIONS(1761), 1,
      aux_sym_pseudo_operation_token1,
    STATE(418), 1,
      aux_sym_dstring_repeat1,
  [11218] = 3,
    ACTIONS(1165), 1,
      anon_sym_S,
    ACTIONS(1763), 1,
      aux_sym_pseudo_operation_token1,
    STATE(417), 1,
      aux_sym_dstring_repeat1,
  [11228] = 3,
    ACTIONS(1165), 1,
      anon_sym_T,
    ACTIONS(1765), 1,
      aux_sym_pseudo_operation_token1,
    STATE(416), 1,
      aux_sym_dstring_repeat1,
  [11238] = 3,
    ACTIONS(1165), 1,
      anon_sym_U,
    ACTIONS(1767), 1,
      aux_sym_pseudo_operation_token1,
    STATE(415), 1,
      aux_sym_dstring_repeat1,
  [11248] = 3,
    ACTIONS(1165), 1,
      anon_sym_V,
    ACTIONS(1769), 1,
      aux_sym_pseudo_operation_token1,
    STATE(414), 1,
      aux_sym_dstring_repeat1,
  [11258] = 3,
    ACTIONS(1165), 1,
      anon_sym_W,
    ACTIONS(1771), 1,
      aux_sym_pseudo_operation_token1,
    STATE(413), 1,
      aux_sym_dstring_repeat1,
  [11268] = 3,
    ACTIONS(1165), 1,
      anon_sym_X,
    ACTIONS(1773), 1,
      aux_sym_pseudo_operation_token1,
    STATE(412), 1,
      aux_sym_dstring_repeat1,
  [11278] = 3,
    ACTIONS(1165), 1,
      anon_sym_Y,
    ACTIONS(1775), 1,
      aux_sym_pseudo_operation_token1,
    STATE(411), 1,
      aux_sym_dstring_repeat1,
  [11288] = 3,
    ACTIONS(1165), 1,
      anon_sym_Z,
    ACTIONS(1777), 1,
      aux_sym_pseudo_operation_token1,
    STATE(410), 1,
      aux_sym_dstring_repeat1,
  [11298] = 3,
    ACTIONS(1165), 1,
      anon_sym_LBRACK,
    ACTIONS(1779), 1,
      aux_sym_pseudo_operation_token1,
    STATE(323), 1,
      aux_sym_dstring_repeat1,
  [11308] = 3,
    ACTIONS(1165), 1,
      anon_sym_BSLASH,
    ACTIONS(1781), 1,
      aux_sym_pseudo_operation_token1,
    STATE(321), 1,
      aux_sym_dstring_repeat1,
  [11318] = 3,
    ACTIONS(1165), 1,
      anon_sym_RBRACK,
    ACTIONS(1783), 1,
      aux_sym_pseudo_operation_token1,
    STATE(319), 1,
      aux_sym_dstring_repeat1,
  [11328] = 1,
    ACTIONS(1785), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [11334] = 3,
    ACTIONS(1165), 1,
      anon_sym__,
    ACTIONS(1787), 1,
      aux_sym_pseudo_operation_token1,
    STATE(316), 1,
      aux_sym_dstring_repeat1,
  [11344] = 3,
    ACTIONS(1165), 1,
      anon_sym_BQUOTE,
    ACTIONS(1789), 1,
      aux_sym_pseudo_operation_token1,
    STATE(314), 1,
      aux_sym_dstring_repeat1,
  [11354] = 3,
    ACTIONS(1165), 1,
      anon_sym_a,
    ACTIONS(1791), 1,
      aux_sym_pseudo_operation_token1,
    STATE(312), 1,
      aux_sym_dstring_repeat1,
  [11364] = 3,
    ACTIONS(1165), 1,
      anon_sym_b,
    ACTIONS(1793), 1,
      aux_sym_pseudo_operation_token1,
    STATE(309), 1,
      aux_sym_dstring_repeat1,
  [11374] = 3,
    ACTIONS(1165), 1,
      anon_sym_c,
    ACTIONS(1795), 1,
      aux_sym_pseudo_operation_token1,
    STATE(308), 1,
      aux_sym_dstring_repeat1,
  [11384] = 3,
    ACTIONS(1165), 1,
      anon_sym_d,
    ACTIONS(1797), 1,
      aux_sym_pseudo_operation_token1,
    STATE(305), 1,
      aux_sym_dstring_repeat1,
  [11394] = 3,
    ACTIONS(1165), 1,
      anon_sym_e,
    ACTIONS(1799), 1,
      aux_sym_pseudo_operation_token1,
    STATE(304), 1,
      aux_sym_dstring_repeat1,
  [11404] = 3,
    ACTIONS(1165), 1,
      anon_sym_f,
    ACTIONS(1801), 1,
      aux_sym_pseudo_operation_token1,
    STATE(303), 1,
      aux_sym_dstring_repeat1,
  [11414] = 3,
    ACTIONS(1165), 1,
      anon_sym_g,
    ACTIONS(1803), 1,
      aux_sym_pseudo_operation_token1,
    STATE(301), 1,
      aux_sym_dstring_repeat1,
  [11424] = 3,
    ACTIONS(1165), 1,
      anon_sym_h,
    ACTIONS(1805), 1,
      aux_sym_pseudo_operation_token1,
    STATE(300), 1,
      aux_sym_dstring_repeat1,
  [11434] = 3,
    ACTIONS(1165), 1,
      anon_sym_i,
    ACTIONS(1807), 1,
      aux_sym_pseudo_operation_token1,
    STATE(299), 1,
      aux_sym_dstring_repeat1,
  [11444] = 3,
    ACTIONS(1165), 1,
      anon_sym_j,
    ACTIONS(1809), 1,
      aux_sym_pseudo_operation_token1,
    STATE(298), 1,
      aux_sym_dstring_repeat1,
  [11454] = 3,
    ACTIONS(1165), 1,
      anon_sym_k,
    ACTIONS(1811), 1,
      aux_sym_pseudo_operation_token1,
    STATE(296), 1,
      aux_sym_dstring_repeat1,
  [11464] = 3,
    ACTIONS(1165), 1,
      anon_sym_l,
    ACTIONS(1813), 1,
      aux_sym_pseudo_operation_token1,
    STATE(295), 1,
      aux_sym_dstring_repeat1,
  [11474] = 3,
    ACTIONS(1165), 1,
      anon_sym_m,
    ACTIONS(1815), 1,
      aux_sym_pseudo_operation_token1,
    STATE(293), 1,
      aux_sym_dstring_repeat1,
  [11484] = 3,
    ACTIONS(1165), 1,
      anon_sym_n,
    ACTIONS(1817), 1,
      aux_sym_pseudo_operation_token1,
    STATE(292), 1,
      aux_sym_dstring_repeat1,
  [11494] = 3,
    ACTIONS(1165), 1,
      anon_sym_o,
    ACTIONS(1819), 1,
      aux_sym_pseudo_operation_token1,
    STATE(291), 1,
      aux_sym_dstring_repeat1,
  [11504] = 3,
    ACTIONS(1165), 1,
      anon_sym_p,
    ACTIONS(1821), 1,
      aux_sym_pseudo_operation_token1,
    STATE(290), 1,
      aux_sym_dstring_repeat1,
  [11514] = 3,
    ACTIONS(1165), 1,
      anon_sym_q,
    ACTIONS(1823), 1,
      aux_sym_pseudo_operation_token1,
    STATE(289), 1,
      aux_sym_dstring_repeat1,
  [11524] = 3,
    ACTIONS(1165), 1,
      anon_sym_r,
    ACTIONS(1825), 1,
      aux_sym_pseudo_operation_token1,
    STATE(288), 1,
      aux_sym_dstring_repeat1,
  [11534] = 3,
    ACTIONS(1165), 1,
      anon_sym_s,
    ACTIONS(1827), 1,
      aux_sym_pseudo_operation_token1,
    STATE(287), 1,
      aux_sym_dstring_repeat1,
  [11544] = 3,
    ACTIONS(1165), 1,
      anon_sym_t,
    ACTIONS(1829), 1,
      aux_sym_pseudo_operation_token1,
    STATE(285), 1,
      aux_sym_dstring_repeat1,
  [11554] = 3,
    ACTIONS(1165), 1,
      anon_sym_u,
    ACTIONS(1831), 1,
      aux_sym_pseudo_operation_token1,
    STATE(284), 1,
      aux_sym_dstring_repeat1,
  [11564] = 3,
    ACTIONS(1165), 1,
      anon_sym_v,
    ACTIONS(1833), 1,
      aux_sym_pseudo_operation_token1,
    STATE(283), 1,
      aux_sym_dstring_repeat1,
  [11574] = 3,
    ACTIONS(1165), 1,
      anon_sym_w,
    ACTIONS(1835), 1,
      aux_sym_pseudo_operation_token1,
    STATE(282), 1,
      aux_sym_dstring_repeat1,
  [11584] = 3,
    ACTIONS(1165), 1,
      anon_sym_x,
    ACTIONS(1837), 1,
      aux_sym_pseudo_operation_token1,
    STATE(281), 1,
      aux_sym_dstring_repeat1,
  [11594] = 3,
    ACTIONS(1165), 1,
      anon_sym_y,
    ACTIONS(1839), 1,
      aux_sym_pseudo_operation_token1,
    STATE(280), 1,
      aux_sym_dstring_repeat1,
  [11604] = 3,
    ACTIONS(1165), 1,
      anon_sym_z,
    ACTIONS(1841), 1,
      aux_sym_pseudo_operation_token1,
    STATE(279), 1,
      aux_sym_dstring_repeat1,
  [11614] = 3,
    ACTIONS(1165), 1,
      anon_sym_LBRACE,
    ACTIONS(1843), 1,
      aux_sym_pseudo_operation_token1,
    STATE(278), 1,
      aux_sym_dstring_repeat1,
  [11624] = 3,
    ACTIONS(1165), 1,
      anon_sym_PIPE,
    ACTIONS(1845), 1,
      aux_sym_pseudo_operation_token1,
    STATE(277), 1,
      aux_sym_dstring_repeat1,
  [11634] = 3,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    ACTIONS(1847), 1,
      aux_sym_pseudo_operation_token1,
    STATE(276), 1,
      aux_sym_dstring_repeat1,
  [11644] = 3,
    ACTIONS(1165), 1,
      anon_sym_TILDE,
    ACTIONS(1849), 1,
      aux_sym_pseudo_operation_token1,
    STATE(275), 1,
      aux_sym_dstring_repeat1,
  [11654] = 1,
    ACTIONS(1142), 3,
      aux_sym__newline_token1,
      sym__sep,
      anon_sym_SEMI,
  [11660] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1851), 1,
      aux_sym__newline_token1,
    STATE(210), 1,
      sym__newline,
  [11670] = 3,
    ACTIONS(904), 1,
      aux_sym__newline_token1,
    ACTIONS(906), 1,
      sym__sep,
    STATE(227), 1,
      sym__newline,
  [11680] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1853), 1,
      aux_sym__newline_token1,
    STATE(229), 1,
      sym__newline,
  [11690] = 3,
    ACTIONS(1853), 1,
      aux_sym__newline_token1,
    ACTIONS(1855), 1,
      sym__sep,
    STATE(229), 1,
      sym__newline,
  [11700] = 3,
    ACTIONS(1183), 1,
      sym__sep,
    ACTIONS(1857), 1,
      aux_sym__newline_token1,
    STATE(223), 1,
      sym__newline,
  [11710] = 3,
    ACTIONS(1857), 1,
      aux_sym__newline_token1,
    ACTIONS(1859), 1,
      sym__sep,
    STATE(223), 1,
      sym__newline,
  [11720] = 1,
    ACTIONS(1861), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11725] = 1,
    ACTIONS(1863), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11730] = 2,
    ACTIONS(1865), 1,
      sym_hex_byte,
    STATE(322), 1,
      sym_hex_data,
  [11737] = 2,
    ACTIONS(1867), 1,
      aux_sym_literal_token1,
    STATE(602), 1,
      sym_comment_text,
  [11744] = 1,
    ACTIONS(1869), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11749] = 2,
    ACTIONS(1871), 1,
      aux_sym_literal_token1,
    STATE(322), 1,
      sym_literal,
  [11756] = 2,
    ACTIONS(1873), 1,
      aux_sym_prodos_token1,
    ACTIONS(1875), 1,
      aux_sym_dos33_token1,
  [11763] = 1,
    ACTIONS(1877), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11768] = 1,
    ACTIONS(1879), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11773] = 1,
    ACTIONS(1881), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11778] = 1,
    ACTIONS(1883), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11783] = 1,
    ACTIONS(1885), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11788] = 1,
    ACTIONS(1887), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11793] = 2,
    ACTIONS(1865), 1,
      sym_hex_byte,
    STATE(585), 1,
      sym_hex_data,
  [11800] = 1,
    ACTIONS(1889), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11805] = 2,
    ACTIONS(1871), 1,
      aux_sym_literal_token1,
    STATE(585), 1,
      sym_literal,
  [11812] = 1,
    ACTIONS(1891), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11817] = 1,
    ACTIONS(1893), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11822] = 1,
    ACTIONS(1895), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11827] = 1,
    ACTIONS(1897), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11832] = 1,
    ACTIONS(1899), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11837] = 1,
    ACTIONS(1901), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11842] = 1,
    ACTIONS(1903), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11847] = 2,
    ACTIONS(1865), 1,
      sym_hex_byte,
    STATE(639), 1,
      sym_hex_data,
  [11854] = 1,
    ACTIONS(1905), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11859] = 1,
    ACTIONS(1907), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11864] = 1,
    ACTIONS(1909), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11869] = 1,
    ACTIONS(1911), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11874] = 1,
    ACTIONS(1913), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11879] = 1,
    ACTIONS(1915), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11884] = 1,
    ACTIONS(1917), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11889] = 1,
    ACTIONS(1919), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11894] = 1,
    ACTIONS(1921), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11899] = 1,
    ACTIONS(1923), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11904] = 1,
    ACTIONS(1925), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11909] = 1,
    ACTIONS(1927), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11914] = 1,
    ACTIONS(1929), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11919] = 1,
    ACTIONS(1931), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11924] = 1,
    ACTIONS(1933), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11929] = 1,
    ACTIONS(1935), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11934] = 1,
    ACTIONS(1937), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11939] = 1,
    ACTIONS(1939), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11944] = 1,
    ACTIONS(1941), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11949] = 1,
    ACTIONS(1943), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11954] = 1,
    ACTIONS(1945), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11959] = 1,
    ACTIONS(1947), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11964] = 1,
    ACTIONS(1949), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11969] = 1,
    ACTIONS(1951), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11974] = 1,
    ACTIONS(1953), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11979] = 1,
    ACTIONS(1955), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11984] = 1,
    ACTIONS(1957), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11989] = 1,
    ACTIONS(1959), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11994] = 1,
    ACTIONS(1961), 2,
      aux_sym__newline_token1,
      sym__sep,
  [11999] = 1,
    ACTIONS(1963), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12004] = 1,
    ACTIONS(1965), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12009] = 1,
    ACTIONS(1967), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12014] = 1,
    ACTIONS(1969), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12019] = 1,
    ACTIONS(1971), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12024] = 1,
    ACTIONS(1973), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12029] = 1,
    ACTIONS(1975), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12034] = 1,
    ACTIONS(1977), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12039] = 1,
    ACTIONS(1979), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12044] = 1,
    ACTIONS(1981), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12049] = 1,
    ACTIONS(1983), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12054] = 1,
    ACTIONS(1985), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12059] = 1,
    ACTIONS(1987), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12064] = 1,
    ACTIONS(1989), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12069] = 1,
    ACTIONS(1991), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12074] = 1,
    ACTIONS(1993), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12079] = 1,
    ACTIONS(1995), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12084] = 1,
    ACTIONS(1997), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12089] = 1,
    ACTIONS(1999), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12094] = 1,
    ACTIONS(2001), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12099] = 1,
    ACTIONS(2003), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12104] = 1,
    ACTIONS(2005), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12109] = 1,
    ACTIONS(2007), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12114] = 1,
    ACTIONS(2009), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12119] = 1,
    ACTIONS(2011), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12124] = 1,
    ACTIONS(2013), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12129] = 1,
    ACTIONS(2015), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12134] = 1,
    ACTIONS(2017), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12139] = 1,
    ACTIONS(2019), 2,
      aux_sym__newline_token1,
      sym__sep,
  [12144] = 1,
    ACTIONS(2021), 1,
      sym__sep,
  [12148] = 1,
    ACTIONS(2023), 1,
      sym__sep,
  [12152] = 1,
    ACTIONS(2025), 1,
      sym__sep,
  [12156] = 1,
    ACTIONS(2027), 1,
      sym__sep,
  [12160] = 1,
    ACTIONS(2029), 1,
      sym__sep,
  [12164] = 1,
    ACTIONS(2031), 1,
      sym__sep,
  [12168] = 1,
    ACTIONS(2033), 1,
      sym__sep,
  [12172] = 1,
    ACTIONS(2035), 1,
      sym__sep,
  [12176] = 1,
    ACTIONS(2037), 1,
      sym__sep,
  [12180] = 1,
    ACTIONS(2039), 1,
      sym__sep,
  [12184] = 1,
    ACTIONS(2041), 1,
      sym__sep,
  [12188] = 1,
    ACTIONS(2043), 1,
      sym__sep,
  [12192] = 1,
    ACTIONS(2045), 1,
      sym__sep,
  [12196] = 1,
    ACTIONS(2047), 1,
      sym__sep,
  [12200] = 1,
    ACTIONS(2049), 1,
      sym_var_label,
  [12204] = 1,
    ACTIONS(2051), 1,
      sym__sep,
  [12208] = 1,
    ACTIONS(2053), 1,
      sym__sep,
  [12212] = 1,
    ACTIONS(2055), 1,
      sym__sep,
  [12216] = 1,
    ACTIONS(2057), 1,
      sym__sep,
  [12220] = 1,
    ACTIONS(2059), 1,
      sym__sep,
  [12224] = 1,
    ACTIONS(2061), 1,
      sym__sep,
  [12228] = 1,
    ACTIONS(2063), 1,
      sym__sep,
  [12232] = 1,
    ACTIONS(2065), 1,
      sym__sep,
  [12236] = 1,
    ACTIONS(2067), 1,
      sym__sep,
  [12240] = 1,
    ACTIONS(2069), 1,
      sym__sep,
  [12244] = 1,
    ACTIONS(2071), 1,
      sym__sep,
  [12248] = 1,
    ACTIONS(2073), 1,
      sym__sep,
  [12252] = 1,
    ACTIONS(2075), 1,
      sym__sep,
  [12256] = 1,
    ACTIONS(2077), 1,
      sym__sep,
  [12260] = 1,
    ACTIONS(2079), 1,
      sym__sep,
  [12264] = 1,
    ACTIONS(2081), 1,
      sym__sep,
  [12268] = 1,
    ACTIONS(2083), 1,
      sym__sep,
  [12272] = 1,
    ACTIONS(2085), 1,
      sym__sep,
  [12276] = 1,
    ACTIONS(2087), 1,
      sym__sep,
  [12280] = 1,
    ACTIONS(2089), 1,
      sym__sep,
  [12284] = 1,
    ACTIONS(2091), 1,
      sym__sep,
  [12288] = 1,
    ACTIONS(2093), 1,
      sym__sep,
  [12292] = 1,
    ACTIONS(2095), 1,
      sym__sep,
  [12296] = 1,
    ACTIONS(2097), 1,
      sym__sep,
  [12300] = 1,
    ACTIONS(2099), 1,
      sym__sep,
  [12304] = 1,
    ACTIONS(2101), 1,
      sym__sep,
  [12308] = 1,
    ACTIONS(2103), 1,
      sym__sep,
  [12312] = 1,
    ACTIONS(2105), 1,
      sym__sep,
  [12316] = 1,
    ACTIONS(2107), 1,
      sym__sep,
  [12320] = 1,
    ACTIONS(2109), 1,
      sym__sep,
  [12324] = 1,
    ACTIONS(2111), 1,
      sym__sep,
  [12328] = 1,
    ACTIONS(2113), 1,
      sym__sep,
  [12332] = 1,
    ACTIONS(2115), 1,
      sym__sep,
  [12336] = 1,
    ACTIONS(2117), 1,
      sym__sep,
  [12340] = 1,
    ACTIONS(2119), 1,
      sym__sep,
  [12344] = 1,
    ACTIONS(2121), 1,
      sym__sep,
  [12348] = 1,
    ACTIONS(2123), 1,
      sym__sep,
  [12352] = 1,
    ACTIONS(2125), 1,
      sym__sep,
  [12356] = 1,
    ACTIONS(2127), 1,
      sym__sep,
  [12360] = 1,
    ACTIONS(2129), 1,
      sym__sep,
  [12364] = 1,
    ACTIONS(2131), 1,
      sym__sep,
  [12368] = 1,
    ACTIONS(2133), 1,
      sym__sep,
  [12372] = 1,
    ACTIONS(2135), 1,
      aux_sym_pseudo_operation_token1,
  [12376] = 1,
    ACTIONS(2137), 1,
      sym__sep,
  [12380] = 1,
    ACTIONS(2139), 1,
      sym__sep,
  [12384] = 1,
    ACTIONS(2141), 1,
      sym__sep,
  [12388] = 1,
    ACTIONS(2143), 1,
      aux_sym_pseudo_operation_token1,
  [12392] = 1,
    ACTIONS(2145), 1,
      sym__sep,
  [12396] = 1,
    ACTIONS(2147), 1,
      sym__sep,
  [12400] = 1,
    ACTIONS(2149), 1,
      sym__sep,
  [12404] = 1,
    ACTIONS(2151), 1,
      sym__sep,
  [12408] = 1,
    ACTIONS(2153), 1,
      sym__sep,
  [12412] = 1,
    ACTIONS(2155), 1,
      sym__sep,
  [12416] = 1,
    ACTIONS(2157), 1,
      sym__sep,
  [12420] = 1,
    ACTIONS(2159), 1,
      sym__sep,
  [12424] = 1,
    ACTIONS(2161), 1,
      sym__sep,
  [12428] = 1,
    ACTIONS(2163), 1,
      sym__sep,
  [12432] = 1,
    ACTIONS(2165), 1,
      sym__sep,
  [12436] = 1,
    ACTIONS(2167), 1,
      sym__sep,
  [12440] = 1,
    ACTIONS(2169), 1,
      sym__sep,
  [12444] = 1,
    ACTIONS(2171), 1,
      sym__sep,
  [12448] = 1,
    ACTIONS(2173), 1,
      sym__sep,
  [12452] = 1,
    ACTIONS(2175), 1,
      sym__sep,
  [12456] = 1,
    ACTIONS(2177), 1,
      sym__sep,
  [12460] = 1,
    ACTIONS(2179), 1,
      sym__sep,
  [12464] = 1,
    ACTIONS(2181), 1,
      sym__sep,
  [12468] = 1,
    ACTIONS(2183), 1,
      sym__sep,
  [12472] = 1,
    ACTIONS(2185), 1,
      sym__sep,
  [12476] = 1,
    ACTIONS(2187), 1,
      sym__sep,
  [12480] = 1,
    ACTIONS(2189), 1,
      sym__sep,
  [12484] = 1,
    ACTIONS(2191), 1,
      sym__sep,
  [12488] = 1,
    ACTIONS(2193), 1,
      sym__sep,
  [12492] = 1,
    ACTIONS(2195), 1,
      sym__sep,
  [12496] = 1,
    ACTIONS(2197), 1,
      sym__sep,
  [12500] = 1,
    ACTIONS(2199), 1,
      sym__sep,
  [12504] = 1,
    ACTIONS(2201), 1,
      sym__sep,
  [12508] = 1,
    ACTIONS(2203), 1,
      sym__sep,
  [12512] = 1,
    ACTIONS(2205), 1,
      sym__sep,
  [12516] = 1,
    ACTIONS(2207), 1,
      sym__sep,
  [12520] = 1,
    ACTIONS(2209), 1,
      aux_sym_pseudo_operation_token1,
  [12524] = 1,
    ACTIONS(2211), 1,
      sym__sep,
  [12528] = 1,
    ACTIONS(2213), 1,
      sym__sep,
  [12532] = 1,
    ACTIONS(2215), 1,
      sym__sep,
  [12536] = 1,
    ACTIONS(2217), 1,
      sym__sep,
  [12540] = 1,
    ACTIONS(13), 1,
      aux_sym__newline_token1,
  [12544] = 1,
    ACTIONS(2219), 1,
      sym__sep,
  [12548] = 1,
    ACTIONS(2221), 1,
      sym__sep,
  [12552] = 1,
    ACTIONS(2223), 1,
      sym__sep,
  [12556] = 1,
    ACTIONS(2225), 1,
      aux_sym_pseudo_operation_token1,
  [12560] = 1,
    ACTIONS(2227), 1,
      sym__sep,
  [12564] = 1,
    ACTIONS(2229), 1,
      sym_hex_byte,
  [12568] = 1,
    ACTIONS(2231), 1,
      sym__sep,
  [12572] = 1,
    ACTIONS(2233), 1,
      sym__sep,
  [12576] = 1,
    ACTIONS(2235), 1,
      sym__sep,
  [12580] = 1,
    ACTIONS(2237), 1,
      sym__sep,
  [12584] = 1,
    ACTIONS(2239), 1,
      sym__sep,
  [12588] = 1,
    ACTIONS(2241), 1,
      aux_sym_pchar_token1,
  [12592] = 1,
    ACTIONS(2243), 1,
      sym__sep,
  [12596] = 1,
    ACTIONS(2245), 1,
      aux_sym_nchar_token1,
  [12600] = 1,
    ACTIONS(2247), 1,
      sym__sep,
  [12604] = 1,
    ACTIONS(2249), 1,
      sym__sep,
  [12608] = 1,
    ACTIONS(2251), 1,
      sym__sep,
  [12612] = 1,
    ACTIONS(2253), 1,
      sym__sep,
  [12616] = 1,
    ACTIONS(2255), 1,
      sym__sep,
  [12620] = 1,
    ACTIONS(2257), 1,
      sym__sep,
  [12624] = 1,
    ACTIONS(2259), 1,
      sym__sep,
  [12628] = 1,
    ACTIONS(2261), 1,
      sym__sep,
  [12632] = 1,
    ACTIONS(2263), 1,
      sym__sep,
  [12636] = 1,
    ACTIONS(2265), 1,
      sym__sep,
  [12640] = 1,
    ACTIONS(2267), 1,
      sym__sep,
  [12644] = 1,
    ACTIONS(2269), 1,
      sym__sep,
  [12648] = 1,
    ACTIONS(2271), 1,
      sym__sep,
  [12652] = 1,
    ACTIONS(2273), 1,
      sym__sep,
  [12656] = 1,
    ACTIONS(2275), 1,
      sym__sep,
  [12660] = 1,
    ACTIONS(2277), 1,
      sym__sep,
  [12664] = 1,
    ACTIONS(2279), 1,
      sym__sep,
  [12668] = 1,
    ACTIONS(2281), 1,
      sym__sep,
  [12672] = 1,
    ACTIONS(2283), 1,
      sym__sep,
  [12676] = 1,
    ACTIONS(2285), 1,
      sym__sep,
  [12680] = 1,
    ACTIONS(2287), 1,
      sym__sep,
  [12684] = 1,
    ACTIONS(2289), 1,
      sym__sep,
  [12688] = 1,
    ACTIONS(2291), 1,
      sym__sep,
  [12692] = 1,
    ACTIONS(2293), 1,
      sym__sep,
  [12696] = 1,
    ACTIONS(2295), 1,
      aux_sym_nchar_token1,
  [12700] = 1,
    ACTIONS(2297), 1,
      sym__sep,
  [12704] = 1,
    ACTIONS(2299), 1,
      sym__sep,
  [12708] = 1,
    ACTIONS(2301), 1,
      aux_sym_pchar_token1,
  [12712] = 1,
    ACTIONS(2303), 1,
      sym__sep,
  [12716] = 1,
    ACTIONS(2305), 1,
      sym__sep,
  [12720] = 1,
    ACTIONS(2307), 1,
      sym__sep,
  [12724] = 1,
    ACTIONS(2309), 1,
      sym__sep,
  [12728] = 1,
    ACTIONS(2311), 1,
      sym__sep,
  [12732] = 1,
    ACTIONS(2313), 1,
      sym_var_label,
  [12736] = 1,
    ACTIONS(2315), 1,
      sym__sep,
  [12740] = 1,
    ACTIONS(2317), 1,
      sym__sep,
  [12744] = 1,
    ACTIONS(2319), 1,
      aux_sym_nchar_token1,
  [12748] = 1,
    ACTIONS(2321), 1,
      sym__sep,
  [12752] = 1,
    ACTIONS(2323), 1,
      sym__sep,
  [12756] = 1,
    ACTIONS(2325), 1,
      aux_sym_pchar_token1,
  [12760] = 1,
    ACTIONS(2327), 1,
      sym__sep,
  [12764] = 1,
    ACTIONS(2329), 1,
      sym__sep,
  [12768] = 1,
    ACTIONS(2331), 1,
      aux_sym_nchar_token1,
  [12772] = 1,
    ACTIONS(2333), 1,
      ts_builtin_sym_end,
  [12776] = 1,
    ACTIONS(2335), 1,
      sym__sep,
  [12780] = 1,
    ACTIONS(2337), 1,
      aux_sym_pchar_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 62,
  [SMALL_STATE(30)] = 124,
  [SMALL_STATE(31)] = 221,
  [SMALL_STATE(32)] = 318,
  [SMALL_STATE(33)] = 403,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 594,
  [SMALL_STATE(37)] = 671,
  [SMALL_STATE(38)] = 748,
  [SMALL_STATE(39)] = 825,
  [SMALL_STATE(40)] = 902,
  [SMALL_STATE(41)] = 978,
  [SMALL_STATE(42)] = 1054,
  [SMALL_STATE(43)] = 1129,
  [SMALL_STATE(44)] = 1204,
  [SMALL_STATE(45)] = 1279,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1427,
  [SMALL_STATE(48)] = 1499,
  [SMALL_STATE(49)] = 1571,
  [SMALL_STATE(50)] = 1642,
  [SMALL_STATE(51)] = 1713,
  [SMALL_STATE(52)] = 1759,
  [SMALL_STATE(53)] = 1829,
  [SMALL_STATE(54)] = 1875,
  [SMALL_STATE(55)] = 1945,
  [SMALL_STATE(56)] = 1991,
  [SMALL_STATE(57)] = 2056,
  [SMALL_STATE(58)] = 2121,
  [SMALL_STATE(59)] = 2186,
  [SMALL_STATE(60)] = 2251,
  [SMALL_STATE(61)] = 2315,
  [SMALL_STATE(62)] = 2379,
  [SMALL_STATE(63)] = 2445,
  [SMALL_STATE(64)] = 2511,
  [SMALL_STATE(65)] = 2577,
  [SMALL_STATE(66)] = 2641,
  [SMALL_STATE(67)] = 2705,
  [SMALL_STATE(68)] = 2771,
  [SMALL_STATE(69)] = 2832,
  [SMALL_STATE(70)] = 2893,
  [SMALL_STATE(71)] = 2954,
  [SMALL_STATE(72)] = 3015,
  [SMALL_STATE(73)] = 3076,
  [SMALL_STATE(74)] = 3137,
  [SMALL_STATE(75)] = 3198,
  [SMALL_STATE(76)] = 3259,
  [SMALL_STATE(77)] = 3320,
  [SMALL_STATE(78)] = 3381,
  [SMALL_STATE(79)] = 3442,
  [SMALL_STATE(80)] = 3503,
  [SMALL_STATE(81)] = 3564,
  [SMALL_STATE(82)] = 3625,
  [SMALL_STATE(83)] = 3686,
  [SMALL_STATE(84)] = 3747,
  [SMALL_STATE(85)] = 3808,
  [SMALL_STATE(86)] = 3869,
  [SMALL_STATE(87)] = 3930,
  [SMALL_STATE(88)] = 3991,
  [SMALL_STATE(89)] = 4052,
  [SMALL_STATE(90)] = 4113,
  [SMALL_STATE(91)] = 4174,
  [SMALL_STATE(92)] = 4235,
  [SMALL_STATE(93)] = 4296,
  [SMALL_STATE(94)] = 4357,
  [SMALL_STATE(95)] = 4418,
  [SMALL_STATE(96)] = 4479,
  [SMALL_STATE(97)] = 4540,
  [SMALL_STATE(98)] = 4601,
  [SMALL_STATE(99)] = 4662,
  [SMALL_STATE(100)] = 4723,
  [SMALL_STATE(101)] = 4763,
  [SMALL_STATE(102)] = 4803,
  [SMALL_STATE(103)] = 4843,
  [SMALL_STATE(104)] = 4883,
  [SMALL_STATE(105)] = 4922,
  [SMALL_STATE(106)] = 4959,
  [SMALL_STATE(107)] = 4996,
  [SMALL_STATE(108)] = 5056,
  [SMALL_STATE(109)] = 5087,
  [SMALL_STATE(110)] = 5120,
  [SMALL_STATE(111)] = 5153,
  [SMALL_STATE(112)] = 5187,
  [SMALL_STATE(113)] = 5245,
  [SMALL_STATE(114)] = 5301,
  [SMALL_STATE(115)] = 5332,
  [SMALL_STATE(116)] = 5365,
  [SMALL_STATE(117)] = 5396,
  [SMALL_STATE(118)] = 5429,
  [SMALL_STATE(119)] = 5457,
  [SMALL_STATE(120)] = 5485,
  [SMALL_STATE(121)] = 5513,
  [SMALL_STATE(122)] = 5541,
  [SMALL_STATE(123)] = 5570,
  [SMALL_STATE(124)] = 5599,
  [SMALL_STATE(125)] = 5627,
  [SMALL_STATE(126)] = 5653,
  [SMALL_STATE(127)] = 5681,
  [SMALL_STATE(128)] = 5709,
  [SMALL_STATE(129)] = 5735,
  [SMALL_STATE(130)] = 5761,
  [SMALL_STATE(131)] = 5789,
  [SMALL_STATE(132)] = 5817,
  [SMALL_STATE(133)] = 5845,
  [SMALL_STATE(134)] = 5868,
  [SMALL_STATE(135)] = 5891,
  [SMALL_STATE(136)] = 5914,
  [SMALL_STATE(137)] = 5937,
  [SMALL_STATE(138)] = 5960,
  [SMALL_STATE(139)] = 5983,
  [SMALL_STATE(140)] = 6006,
  [SMALL_STATE(141)] = 6029,
  [SMALL_STATE(142)] = 6052,
  [SMALL_STATE(143)] = 6075,
  [SMALL_STATE(144)] = 6121,
  [SMALL_STATE(145)] = 6167,
  [SMALL_STATE(146)] = 6211,
  [SMALL_STATE(147)] = 6257,
  [SMALL_STATE(148)] = 6299,
  [SMALL_STATE(149)] = 6341,
  [SMALL_STATE(150)] = 6367,
  [SMALL_STATE(151)] = 6413,
  [SMALL_STATE(152)] = 6457,
  [SMALL_STATE(153)] = 6483,
  [SMALL_STATE(154)] = 6526,
  [SMALL_STATE(155)] = 6569,
  [SMALL_STATE(156)] = 6591,
  [SMALL_STATE(157)] = 6613,
  [SMALL_STATE(158)] = 6651,
  [SMALL_STATE(159)] = 6691,
  [SMALL_STATE(160)] = 6727,
  [SMALL_STATE(161)] = 6749,
  [SMALL_STATE(162)] = 6785,
  [SMALL_STATE(163)] = 6825,
  [SMALL_STATE(164)] = 6865,
  [SMALL_STATE(165)] = 6901,
  [SMALL_STATE(166)] = 6937,
  [SMALL_STATE(167)] = 6963,
  [SMALL_STATE(168)] = 6999,
  [SMALL_STATE(169)] = 7035,
  [SMALL_STATE(170)] = 7075,
  [SMALL_STATE(171)] = 7101,
  [SMALL_STATE(172)] = 7123,
  [SMALL_STATE(173)] = 7145,
  [SMALL_STATE(174)] = 7176,
  [SMALL_STATE(175)] = 7211,
  [SMALL_STATE(176)] = 7242,
  [SMALL_STATE(177)] = 7279,
  [SMALL_STATE(178)] = 7299,
  [SMALL_STATE(179)] = 7321,
  [SMALL_STATE(180)] = 7341,
  [SMALL_STATE(181)] = 7361,
  [SMALL_STATE(182)] = 7381,
  [SMALL_STATE(183)] = 7415,
  [SMALL_STATE(184)] = 7437,
  [SMALL_STATE(185)] = 7456,
  [SMALL_STATE(186)] = 7475,
  [SMALL_STATE(187)] = 7494,
  [SMALL_STATE(188)] = 7514,
  [SMALL_STATE(189)] = 7534,
  [SMALL_STATE(190)] = 7554,
  [SMALL_STATE(191)] = 7574,
  [SMALL_STATE(192)] = 7590,
  [SMALL_STATE(193)] = 7606,
  [SMALL_STATE(194)] = 7620,
  [SMALL_STATE(195)] = 7636,
  [SMALL_STATE(196)] = 7652,
  [SMALL_STATE(197)] = 7665,
  [SMALL_STATE(198)] = 7678,
  [SMALL_STATE(199)] = 7691,
  [SMALL_STATE(200)] = 7704,
  [SMALL_STATE(201)] = 7717,
  [SMALL_STATE(202)] = 7730,
  [SMALL_STATE(203)] = 7753,
  [SMALL_STATE(204)] = 7766,
  [SMALL_STATE(205)] = 7789,
  [SMALL_STATE(206)] = 7807,
  [SMALL_STATE(207)] = 7819,
  [SMALL_STATE(208)] = 7831,
  [SMALL_STATE(209)] = 7843,
  [SMALL_STATE(210)] = 7855,
  [SMALL_STATE(211)] = 7867,
  [SMALL_STATE(212)] = 7879,
  [SMALL_STATE(213)] = 7891,
  [SMALL_STATE(214)] = 7903,
  [SMALL_STATE(215)] = 7915,
  [SMALL_STATE(216)] = 7927,
  [SMALL_STATE(217)] = 7939,
  [SMALL_STATE(218)] = 7957,
  [SMALL_STATE(219)] = 7969,
  [SMALL_STATE(220)] = 7981,
  [SMALL_STATE(221)] = 7993,
  [SMALL_STATE(222)] = 8005,
  [SMALL_STATE(223)] = 8017,
  [SMALL_STATE(224)] = 8029,
  [SMALL_STATE(225)] = 8041,
  [SMALL_STATE(226)] = 8053,
  [SMALL_STATE(227)] = 8065,
  [SMALL_STATE(228)] = 8077,
  [SMALL_STATE(229)] = 8089,
  [SMALL_STATE(230)] = 8101,
  [SMALL_STATE(231)] = 8113,
  [SMALL_STATE(232)] = 8128,
  [SMALL_STATE(233)] = 8143,
  [SMALL_STATE(234)] = 8159,
  [SMALL_STATE(235)] = 8175,
  [SMALL_STATE(236)] = 8189,
  [SMALL_STATE(237)] = 8203,
  [SMALL_STATE(238)] = 8219,
  [SMALL_STATE(239)] = 8235,
  [SMALL_STATE(240)] = 8251,
  [SMALL_STATE(241)] = 8267,
  [SMALL_STATE(242)] = 8283,
  [SMALL_STATE(243)] = 8297,
  [SMALL_STATE(244)] = 8313,
  [SMALL_STATE(245)] = 8329,
  [SMALL_STATE(246)] = 8345,
  [SMALL_STATE(247)] = 8361,
  [SMALL_STATE(248)] = 8375,
  [SMALL_STATE(249)] = 8389,
  [SMALL_STATE(250)] = 8403,
  [SMALL_STATE(251)] = 8417,
  [SMALL_STATE(252)] = 8433,
  [SMALL_STATE(253)] = 8446,
  [SMALL_STATE(254)] = 8457,
  [SMALL_STATE(255)] = 8470,
  [SMALL_STATE(256)] = 8481,
  [SMALL_STATE(257)] = 8492,
  [SMALL_STATE(258)] = 8505,
  [SMALL_STATE(259)] = 8512,
  [SMALL_STATE(260)] = 8523,
  [SMALL_STATE(261)] = 8536,
  [SMALL_STATE(262)] = 8545,
  [SMALL_STATE(263)] = 8554,
  [SMALL_STATE(264)] = 8565,
  [SMALL_STATE(265)] = 8576,
  [SMALL_STATE(266)] = 8585,
  [SMALL_STATE(267)] = 8596,
  [SMALL_STATE(268)] = 8602,
  [SMALL_STATE(269)] = 8612,
  [SMALL_STATE(270)] = 8620,
  [SMALL_STATE(271)] = 8630,
  [SMALL_STATE(272)] = 8640,
  [SMALL_STATE(273)] = 8648,
  [SMALL_STATE(274)] = 8658,
  [SMALL_STATE(275)] = 8666,
  [SMALL_STATE(276)] = 8676,
  [SMALL_STATE(277)] = 8686,
  [SMALL_STATE(278)] = 8696,
  [SMALL_STATE(279)] = 8706,
  [SMALL_STATE(280)] = 8716,
  [SMALL_STATE(281)] = 8726,
  [SMALL_STATE(282)] = 8736,
  [SMALL_STATE(283)] = 8746,
  [SMALL_STATE(284)] = 8756,
  [SMALL_STATE(285)] = 8766,
  [SMALL_STATE(286)] = 8776,
  [SMALL_STATE(287)] = 8786,
  [SMALL_STATE(288)] = 8796,
  [SMALL_STATE(289)] = 8806,
  [SMALL_STATE(290)] = 8816,
  [SMALL_STATE(291)] = 8826,
  [SMALL_STATE(292)] = 8836,
  [SMALL_STATE(293)] = 8846,
  [SMALL_STATE(294)] = 8856,
  [SMALL_STATE(295)] = 8866,
  [SMALL_STATE(296)] = 8876,
  [SMALL_STATE(297)] = 8886,
  [SMALL_STATE(298)] = 8896,
  [SMALL_STATE(299)] = 8906,
  [SMALL_STATE(300)] = 8916,
  [SMALL_STATE(301)] = 8926,
  [SMALL_STATE(302)] = 8936,
  [SMALL_STATE(303)] = 8944,
  [SMALL_STATE(304)] = 8954,
  [SMALL_STATE(305)] = 8964,
  [SMALL_STATE(306)] = 8974,
  [SMALL_STATE(307)] = 8984,
  [SMALL_STATE(308)] = 8994,
  [SMALL_STATE(309)] = 9004,
  [SMALL_STATE(310)] = 9014,
  [SMALL_STATE(311)] = 9024,
  [SMALL_STATE(312)] = 9034,
  [SMALL_STATE(313)] = 9044,
  [SMALL_STATE(314)] = 9054,
  [SMALL_STATE(315)] = 9064,
  [SMALL_STATE(316)] = 9074,
  [SMALL_STATE(317)] = 9084,
  [SMALL_STATE(318)] = 9094,
  [SMALL_STATE(319)] = 9104,
  [SMALL_STATE(320)] = 9114,
  [SMALL_STATE(321)] = 9122,
  [SMALL_STATE(322)] = 9132,
  [SMALL_STATE(323)] = 9142,
  [SMALL_STATE(324)] = 9152,
  [SMALL_STATE(325)] = 9162,
  [SMALL_STATE(326)] = 9172,
  [SMALL_STATE(327)] = 9182,
  [SMALL_STATE(328)] = 9192,
  [SMALL_STATE(329)] = 9202,
  [SMALL_STATE(330)] = 9212,
  [SMALL_STATE(331)] = 9222,
  [SMALL_STATE(332)] = 9232,
  [SMALL_STATE(333)] = 9242,
  [SMALL_STATE(334)] = 9252,
  [SMALL_STATE(335)] = 9262,
  [SMALL_STATE(336)] = 9272,
  [SMALL_STATE(337)] = 9282,
  [SMALL_STATE(338)] = 9292,
  [SMALL_STATE(339)] = 9302,
  [SMALL_STATE(340)] = 9312,
  [SMALL_STATE(341)] = 9322,
  [SMALL_STATE(342)] = 9332,
  [SMALL_STATE(343)] = 9342,
  [SMALL_STATE(344)] = 9352,
  [SMALL_STATE(345)] = 9362,
  [SMALL_STATE(346)] = 9372,
  [SMALL_STATE(347)] = 9382,
  [SMALL_STATE(348)] = 9392,
  [SMALL_STATE(349)] = 9402,
  [SMALL_STATE(350)] = 9412,
  [SMALL_STATE(351)] = 9422,
  [SMALL_STATE(352)] = 9432,
  [SMALL_STATE(353)] = 9442,
  [SMALL_STATE(354)] = 9452,
  [SMALL_STATE(355)] = 9462,
  [SMALL_STATE(356)] = 9472,
  [SMALL_STATE(357)] = 9482,
  [SMALL_STATE(358)] = 9492,
  [SMALL_STATE(359)] = 9502,
  [SMALL_STATE(360)] = 9512,
  [SMALL_STATE(361)] = 9522,
  [SMALL_STATE(362)] = 9532,
  [SMALL_STATE(363)] = 9542,
  [SMALL_STATE(364)] = 9552,
  [SMALL_STATE(365)] = 9562,
  [SMALL_STATE(366)] = 9572,
  [SMALL_STATE(367)] = 9582,
  [SMALL_STATE(368)] = 9592,
  [SMALL_STATE(369)] = 9602,
  [SMALL_STATE(370)] = 9612,
  [SMALL_STATE(371)] = 9622,
  [SMALL_STATE(372)] = 9632,
  [SMALL_STATE(373)] = 9642,
  [SMALL_STATE(374)] = 9652,
  [SMALL_STATE(375)] = 9662,
  [SMALL_STATE(376)] = 9672,
  [SMALL_STATE(377)] = 9682,
  [SMALL_STATE(378)] = 9692,
  [SMALL_STATE(379)] = 9702,
  [SMALL_STATE(380)] = 9712,
  [SMALL_STATE(381)] = 9722,
  [SMALL_STATE(382)] = 9732,
  [SMALL_STATE(383)] = 9742,
  [SMALL_STATE(384)] = 9752,
  [SMALL_STATE(385)] = 9762,
  [SMALL_STATE(386)] = 9772,
  [SMALL_STATE(387)] = 9782,
  [SMALL_STATE(388)] = 9792,
  [SMALL_STATE(389)] = 9802,
  [SMALL_STATE(390)] = 9812,
  [SMALL_STATE(391)] = 9822,
  [SMALL_STATE(392)] = 9832,
  [SMALL_STATE(393)] = 9842,
  [SMALL_STATE(394)] = 9852,
  [SMALL_STATE(395)] = 9862,
  [SMALL_STATE(396)] = 9872,
  [SMALL_STATE(397)] = 9882,
  [SMALL_STATE(398)] = 9892,
  [SMALL_STATE(399)] = 9902,
  [SMALL_STATE(400)] = 9912,
  [SMALL_STATE(401)] = 9922,
  [SMALL_STATE(402)] = 9932,
  [SMALL_STATE(403)] = 9942,
  [SMALL_STATE(404)] = 9952,
  [SMALL_STATE(405)] = 9962,
  [SMALL_STATE(406)] = 9972,
  [SMALL_STATE(407)] = 9982,
  [SMALL_STATE(408)] = 9990,
  [SMALL_STATE(409)] = 10000,
  [SMALL_STATE(410)] = 10010,
  [SMALL_STATE(411)] = 10020,
  [SMALL_STATE(412)] = 10030,
  [SMALL_STATE(413)] = 10040,
  [SMALL_STATE(414)] = 10050,
  [SMALL_STATE(415)] = 10060,
  [SMALL_STATE(416)] = 10070,
  [SMALL_STATE(417)] = 10080,
  [SMALL_STATE(418)] = 10090,
  [SMALL_STATE(419)] = 10100,
  [SMALL_STATE(420)] = 10110,
  [SMALL_STATE(421)] = 10120,
  [SMALL_STATE(422)] = 10130,
  [SMALL_STATE(423)] = 10140,
  [SMALL_STATE(424)] = 10150,
  [SMALL_STATE(425)] = 10160,
  [SMALL_STATE(426)] = 10170,
  [SMALL_STATE(427)] = 10180,
  [SMALL_STATE(428)] = 10190,
  [SMALL_STATE(429)] = 10200,
  [SMALL_STATE(430)] = 10210,
  [SMALL_STATE(431)] = 10220,
  [SMALL_STATE(432)] = 10230,
  [SMALL_STATE(433)] = 10240,
  [SMALL_STATE(434)] = 10250,
  [SMALL_STATE(435)] = 10260,
  [SMALL_STATE(436)] = 10270,
  [SMALL_STATE(437)] = 10280,
  [SMALL_STATE(438)] = 10290,
  [SMALL_STATE(439)] = 10300,
  [SMALL_STATE(440)] = 10310,
  [SMALL_STATE(441)] = 10320,
  [SMALL_STATE(442)] = 10330,
  [SMALL_STATE(443)] = 10340,
  [SMALL_STATE(444)] = 10350,
  [SMALL_STATE(445)] = 10358,
  [SMALL_STATE(446)] = 10368,
  [SMALL_STATE(447)] = 10378,
  [SMALL_STATE(448)] = 10388,
  [SMALL_STATE(449)] = 10398,
  [SMALL_STATE(450)] = 10408,
  [SMALL_STATE(451)] = 10418,
  [SMALL_STATE(452)] = 10428,
  [SMALL_STATE(453)] = 10438,
  [SMALL_STATE(454)] = 10448,
  [SMALL_STATE(455)] = 10458,
  [SMALL_STATE(456)] = 10468,
  [SMALL_STATE(457)] = 10478,
  [SMALL_STATE(458)] = 10488,
  [SMALL_STATE(459)] = 10498,
  [SMALL_STATE(460)] = 10508,
  [SMALL_STATE(461)] = 10518,
  [SMALL_STATE(462)] = 10528,
  [SMALL_STATE(463)] = 10538,
  [SMALL_STATE(464)] = 10548,
  [SMALL_STATE(465)] = 10558,
  [SMALL_STATE(466)] = 10568,
  [SMALL_STATE(467)] = 10578,
  [SMALL_STATE(468)] = 10588,
  [SMALL_STATE(469)] = 10598,
  [SMALL_STATE(470)] = 10608,
  [SMALL_STATE(471)] = 10618,
  [SMALL_STATE(472)] = 10628,
  [SMALL_STATE(473)] = 10638,
  [SMALL_STATE(474)] = 10648,
  [SMALL_STATE(475)] = 10654,
  [SMALL_STATE(476)] = 10660,
  [SMALL_STATE(477)] = 10666,
  [SMALL_STATE(478)] = 10672,
  [SMALL_STATE(479)] = 10678,
  [SMALL_STATE(480)] = 10684,
  [SMALL_STATE(481)] = 10690,
  [SMALL_STATE(482)] = 10700,
  [SMALL_STATE(483)] = 10706,
  [SMALL_STATE(484)] = 10716,
  [SMALL_STATE(485)] = 10722,
  [SMALL_STATE(486)] = 10732,
  [SMALL_STATE(487)] = 10742,
  [SMALL_STATE(488)] = 10752,
  [SMALL_STATE(489)] = 10758,
  [SMALL_STATE(490)] = 10764,
  [SMALL_STATE(491)] = 10770,
  [SMALL_STATE(492)] = 10776,
  [SMALL_STATE(493)] = 10786,
  [SMALL_STATE(494)] = 10796,
  [SMALL_STATE(495)] = 10802,
  [SMALL_STATE(496)] = 10808,
  [SMALL_STATE(497)] = 10814,
  [SMALL_STATE(498)] = 10820,
  [SMALL_STATE(499)] = 10826,
  [SMALL_STATE(500)] = 10832,
  [SMALL_STATE(501)] = 10838,
  [SMALL_STATE(502)] = 10848,
  [SMALL_STATE(503)] = 10858,
  [SMALL_STATE(504)] = 10868,
  [SMALL_STATE(505)] = 10878,
  [SMALL_STATE(506)] = 10888,
  [SMALL_STATE(507)] = 10898,
  [SMALL_STATE(508)] = 10908,
  [SMALL_STATE(509)] = 10918,
  [SMALL_STATE(510)] = 10928,
  [SMALL_STATE(511)] = 10938,
  [SMALL_STATE(512)] = 10948,
  [SMALL_STATE(513)] = 10958,
  [SMALL_STATE(514)] = 10968,
  [SMALL_STATE(515)] = 10978,
  [SMALL_STATE(516)] = 10988,
  [SMALL_STATE(517)] = 10998,
  [SMALL_STATE(518)] = 11008,
  [SMALL_STATE(519)] = 11018,
  [SMALL_STATE(520)] = 11028,
  [SMALL_STATE(521)] = 11038,
  [SMALL_STATE(522)] = 11048,
  [SMALL_STATE(523)] = 11058,
  [SMALL_STATE(524)] = 11068,
  [SMALL_STATE(525)] = 11078,
  [SMALL_STATE(526)] = 11088,
  [SMALL_STATE(527)] = 11098,
  [SMALL_STATE(528)] = 11108,
  [SMALL_STATE(529)] = 11118,
  [SMALL_STATE(530)] = 11128,
  [SMALL_STATE(531)] = 11138,
  [SMALL_STATE(532)] = 11148,
  [SMALL_STATE(533)] = 11158,
  [SMALL_STATE(534)] = 11168,
  [SMALL_STATE(535)] = 11178,
  [SMALL_STATE(536)] = 11188,
  [SMALL_STATE(537)] = 11198,
  [SMALL_STATE(538)] = 11208,
  [SMALL_STATE(539)] = 11218,
  [SMALL_STATE(540)] = 11228,
  [SMALL_STATE(541)] = 11238,
  [SMALL_STATE(542)] = 11248,
  [SMALL_STATE(543)] = 11258,
  [SMALL_STATE(544)] = 11268,
  [SMALL_STATE(545)] = 11278,
  [SMALL_STATE(546)] = 11288,
  [SMALL_STATE(547)] = 11298,
  [SMALL_STATE(548)] = 11308,
  [SMALL_STATE(549)] = 11318,
  [SMALL_STATE(550)] = 11328,
  [SMALL_STATE(551)] = 11334,
  [SMALL_STATE(552)] = 11344,
  [SMALL_STATE(553)] = 11354,
  [SMALL_STATE(554)] = 11364,
  [SMALL_STATE(555)] = 11374,
  [SMALL_STATE(556)] = 11384,
  [SMALL_STATE(557)] = 11394,
  [SMALL_STATE(558)] = 11404,
  [SMALL_STATE(559)] = 11414,
  [SMALL_STATE(560)] = 11424,
  [SMALL_STATE(561)] = 11434,
  [SMALL_STATE(562)] = 11444,
  [SMALL_STATE(563)] = 11454,
  [SMALL_STATE(564)] = 11464,
  [SMALL_STATE(565)] = 11474,
  [SMALL_STATE(566)] = 11484,
  [SMALL_STATE(567)] = 11494,
  [SMALL_STATE(568)] = 11504,
  [SMALL_STATE(569)] = 11514,
  [SMALL_STATE(570)] = 11524,
  [SMALL_STATE(571)] = 11534,
  [SMALL_STATE(572)] = 11544,
  [SMALL_STATE(573)] = 11554,
  [SMALL_STATE(574)] = 11564,
  [SMALL_STATE(575)] = 11574,
  [SMALL_STATE(576)] = 11584,
  [SMALL_STATE(577)] = 11594,
  [SMALL_STATE(578)] = 11604,
  [SMALL_STATE(579)] = 11614,
  [SMALL_STATE(580)] = 11624,
  [SMALL_STATE(581)] = 11634,
  [SMALL_STATE(582)] = 11644,
  [SMALL_STATE(583)] = 11654,
  [SMALL_STATE(584)] = 11660,
  [SMALL_STATE(585)] = 11670,
  [SMALL_STATE(586)] = 11680,
  [SMALL_STATE(587)] = 11690,
  [SMALL_STATE(588)] = 11700,
  [SMALL_STATE(589)] = 11710,
  [SMALL_STATE(590)] = 11720,
  [SMALL_STATE(591)] = 11725,
  [SMALL_STATE(592)] = 11730,
  [SMALL_STATE(593)] = 11737,
  [SMALL_STATE(594)] = 11744,
  [SMALL_STATE(595)] = 11749,
  [SMALL_STATE(596)] = 11756,
  [SMALL_STATE(597)] = 11763,
  [SMALL_STATE(598)] = 11768,
  [SMALL_STATE(599)] = 11773,
  [SMALL_STATE(600)] = 11778,
  [SMALL_STATE(601)] = 11783,
  [SMALL_STATE(602)] = 11788,
  [SMALL_STATE(603)] = 11793,
  [SMALL_STATE(604)] = 11800,
  [SMALL_STATE(605)] = 11805,
  [SMALL_STATE(606)] = 11812,
  [SMALL_STATE(607)] = 11817,
  [SMALL_STATE(608)] = 11822,
  [SMALL_STATE(609)] = 11827,
  [SMALL_STATE(610)] = 11832,
  [SMALL_STATE(611)] = 11837,
  [SMALL_STATE(612)] = 11842,
  [SMALL_STATE(613)] = 11847,
  [SMALL_STATE(614)] = 11854,
  [SMALL_STATE(615)] = 11859,
  [SMALL_STATE(616)] = 11864,
  [SMALL_STATE(617)] = 11869,
  [SMALL_STATE(618)] = 11874,
  [SMALL_STATE(619)] = 11879,
  [SMALL_STATE(620)] = 11884,
  [SMALL_STATE(621)] = 11889,
  [SMALL_STATE(622)] = 11894,
  [SMALL_STATE(623)] = 11899,
  [SMALL_STATE(624)] = 11904,
  [SMALL_STATE(625)] = 11909,
  [SMALL_STATE(626)] = 11914,
  [SMALL_STATE(627)] = 11919,
  [SMALL_STATE(628)] = 11924,
  [SMALL_STATE(629)] = 11929,
  [SMALL_STATE(630)] = 11934,
  [SMALL_STATE(631)] = 11939,
  [SMALL_STATE(632)] = 11944,
  [SMALL_STATE(633)] = 11949,
  [SMALL_STATE(634)] = 11954,
  [SMALL_STATE(635)] = 11959,
  [SMALL_STATE(636)] = 11964,
  [SMALL_STATE(637)] = 11969,
  [SMALL_STATE(638)] = 11974,
  [SMALL_STATE(639)] = 11979,
  [SMALL_STATE(640)] = 11984,
  [SMALL_STATE(641)] = 11989,
  [SMALL_STATE(642)] = 11994,
  [SMALL_STATE(643)] = 11999,
  [SMALL_STATE(644)] = 12004,
  [SMALL_STATE(645)] = 12009,
  [SMALL_STATE(646)] = 12014,
  [SMALL_STATE(647)] = 12019,
  [SMALL_STATE(648)] = 12024,
  [SMALL_STATE(649)] = 12029,
  [SMALL_STATE(650)] = 12034,
  [SMALL_STATE(651)] = 12039,
  [SMALL_STATE(652)] = 12044,
  [SMALL_STATE(653)] = 12049,
  [SMALL_STATE(654)] = 12054,
  [SMALL_STATE(655)] = 12059,
  [SMALL_STATE(656)] = 12064,
  [SMALL_STATE(657)] = 12069,
  [SMALL_STATE(658)] = 12074,
  [SMALL_STATE(659)] = 12079,
  [SMALL_STATE(660)] = 12084,
  [SMALL_STATE(661)] = 12089,
  [SMALL_STATE(662)] = 12094,
  [SMALL_STATE(663)] = 12099,
  [SMALL_STATE(664)] = 12104,
  [SMALL_STATE(665)] = 12109,
  [SMALL_STATE(666)] = 12114,
  [SMALL_STATE(667)] = 12119,
  [SMALL_STATE(668)] = 12124,
  [SMALL_STATE(669)] = 12129,
  [SMALL_STATE(670)] = 12134,
  [SMALL_STATE(671)] = 12139,
  [SMALL_STATE(672)] = 12144,
  [SMALL_STATE(673)] = 12148,
  [SMALL_STATE(674)] = 12152,
  [SMALL_STATE(675)] = 12156,
  [SMALL_STATE(676)] = 12160,
  [SMALL_STATE(677)] = 12164,
  [SMALL_STATE(678)] = 12168,
  [SMALL_STATE(679)] = 12172,
  [SMALL_STATE(680)] = 12176,
  [SMALL_STATE(681)] = 12180,
  [SMALL_STATE(682)] = 12184,
  [SMALL_STATE(683)] = 12188,
  [SMALL_STATE(684)] = 12192,
  [SMALL_STATE(685)] = 12196,
  [SMALL_STATE(686)] = 12200,
  [SMALL_STATE(687)] = 12204,
  [SMALL_STATE(688)] = 12208,
  [SMALL_STATE(689)] = 12212,
  [SMALL_STATE(690)] = 12216,
  [SMALL_STATE(691)] = 12220,
  [SMALL_STATE(692)] = 12224,
  [SMALL_STATE(693)] = 12228,
  [SMALL_STATE(694)] = 12232,
  [SMALL_STATE(695)] = 12236,
  [SMALL_STATE(696)] = 12240,
  [SMALL_STATE(697)] = 12244,
  [SMALL_STATE(698)] = 12248,
  [SMALL_STATE(699)] = 12252,
  [SMALL_STATE(700)] = 12256,
  [SMALL_STATE(701)] = 12260,
  [SMALL_STATE(702)] = 12264,
  [SMALL_STATE(703)] = 12268,
  [SMALL_STATE(704)] = 12272,
  [SMALL_STATE(705)] = 12276,
  [SMALL_STATE(706)] = 12280,
  [SMALL_STATE(707)] = 12284,
  [SMALL_STATE(708)] = 12288,
  [SMALL_STATE(709)] = 12292,
  [SMALL_STATE(710)] = 12296,
  [SMALL_STATE(711)] = 12300,
  [SMALL_STATE(712)] = 12304,
  [SMALL_STATE(713)] = 12308,
  [SMALL_STATE(714)] = 12312,
  [SMALL_STATE(715)] = 12316,
  [SMALL_STATE(716)] = 12320,
  [SMALL_STATE(717)] = 12324,
  [SMALL_STATE(718)] = 12328,
  [SMALL_STATE(719)] = 12332,
  [SMALL_STATE(720)] = 12336,
  [SMALL_STATE(721)] = 12340,
  [SMALL_STATE(722)] = 12344,
  [SMALL_STATE(723)] = 12348,
  [SMALL_STATE(724)] = 12352,
  [SMALL_STATE(725)] = 12356,
  [SMALL_STATE(726)] = 12360,
  [SMALL_STATE(727)] = 12364,
  [SMALL_STATE(728)] = 12368,
  [SMALL_STATE(729)] = 12372,
  [SMALL_STATE(730)] = 12376,
  [SMALL_STATE(731)] = 12380,
  [SMALL_STATE(732)] = 12384,
  [SMALL_STATE(733)] = 12388,
  [SMALL_STATE(734)] = 12392,
  [SMALL_STATE(735)] = 12396,
  [SMALL_STATE(736)] = 12400,
  [SMALL_STATE(737)] = 12404,
  [SMALL_STATE(738)] = 12408,
  [SMALL_STATE(739)] = 12412,
  [SMALL_STATE(740)] = 12416,
  [SMALL_STATE(741)] = 12420,
  [SMALL_STATE(742)] = 12424,
  [SMALL_STATE(743)] = 12428,
  [SMALL_STATE(744)] = 12432,
  [SMALL_STATE(745)] = 12436,
  [SMALL_STATE(746)] = 12440,
  [SMALL_STATE(747)] = 12444,
  [SMALL_STATE(748)] = 12448,
  [SMALL_STATE(749)] = 12452,
  [SMALL_STATE(750)] = 12456,
  [SMALL_STATE(751)] = 12460,
  [SMALL_STATE(752)] = 12464,
  [SMALL_STATE(753)] = 12468,
  [SMALL_STATE(754)] = 12472,
  [SMALL_STATE(755)] = 12476,
  [SMALL_STATE(756)] = 12480,
  [SMALL_STATE(757)] = 12484,
  [SMALL_STATE(758)] = 12488,
  [SMALL_STATE(759)] = 12492,
  [SMALL_STATE(760)] = 12496,
  [SMALL_STATE(761)] = 12500,
  [SMALL_STATE(762)] = 12504,
  [SMALL_STATE(763)] = 12508,
  [SMALL_STATE(764)] = 12512,
  [SMALL_STATE(765)] = 12516,
  [SMALL_STATE(766)] = 12520,
  [SMALL_STATE(767)] = 12524,
  [SMALL_STATE(768)] = 12528,
  [SMALL_STATE(769)] = 12532,
  [SMALL_STATE(770)] = 12536,
  [SMALL_STATE(771)] = 12540,
  [SMALL_STATE(772)] = 12544,
  [SMALL_STATE(773)] = 12548,
  [SMALL_STATE(774)] = 12552,
  [SMALL_STATE(775)] = 12556,
  [SMALL_STATE(776)] = 12560,
  [SMALL_STATE(777)] = 12564,
  [SMALL_STATE(778)] = 12568,
  [SMALL_STATE(779)] = 12572,
  [SMALL_STATE(780)] = 12576,
  [SMALL_STATE(781)] = 12580,
  [SMALL_STATE(782)] = 12584,
  [SMALL_STATE(783)] = 12588,
  [SMALL_STATE(784)] = 12592,
  [SMALL_STATE(785)] = 12596,
  [SMALL_STATE(786)] = 12600,
  [SMALL_STATE(787)] = 12604,
  [SMALL_STATE(788)] = 12608,
  [SMALL_STATE(789)] = 12612,
  [SMALL_STATE(790)] = 12616,
  [SMALL_STATE(791)] = 12620,
  [SMALL_STATE(792)] = 12624,
  [SMALL_STATE(793)] = 12628,
  [SMALL_STATE(794)] = 12632,
  [SMALL_STATE(795)] = 12636,
  [SMALL_STATE(796)] = 12640,
  [SMALL_STATE(797)] = 12644,
  [SMALL_STATE(798)] = 12648,
  [SMALL_STATE(799)] = 12652,
  [SMALL_STATE(800)] = 12656,
  [SMALL_STATE(801)] = 12660,
  [SMALL_STATE(802)] = 12664,
  [SMALL_STATE(803)] = 12668,
  [SMALL_STATE(804)] = 12672,
  [SMALL_STATE(805)] = 12676,
  [SMALL_STATE(806)] = 12680,
  [SMALL_STATE(807)] = 12684,
  [SMALL_STATE(808)] = 12688,
  [SMALL_STATE(809)] = 12692,
  [SMALL_STATE(810)] = 12696,
  [SMALL_STATE(811)] = 12700,
  [SMALL_STATE(812)] = 12704,
  [SMALL_STATE(813)] = 12708,
  [SMALL_STATE(814)] = 12712,
  [SMALL_STATE(815)] = 12716,
  [SMALL_STATE(816)] = 12720,
  [SMALL_STATE(817)] = 12724,
  [SMALL_STATE(818)] = 12728,
  [SMALL_STATE(819)] = 12732,
  [SMALL_STATE(820)] = 12736,
  [SMALL_STATE(821)] = 12740,
  [SMALL_STATE(822)] = 12744,
  [SMALL_STATE(823)] = 12748,
  [SMALL_STATE(824)] = 12752,
  [SMALL_STATE(825)] = 12756,
  [SMALL_STATE(826)] = 12760,
  [SMALL_STATE(827)] = 12764,
  [SMALL_STATE(828)] = 12768,
  [SMALL_STATE(829)] = 12772,
  [SMALL_STATE(830)] = 12776,
  [SMALL_STATE(831)] = 12780,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(685),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_current_addr, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_current_addr, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_arg_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current_addr, 1),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_arg_repeat1, 1), REDUCE(aux_sym_decimal_repeat1, 1),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_literal_arg_repeat1, 1), REDUCE(aux_sym_decimal_repeat1, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 1),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_mode_dopen, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_dopen, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_dopen, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_literal_arg_repeat1, 1),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_eop_plus, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eop_plus, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_plus, 1),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_imm_prefix, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_prefix, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_prefix, 1),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_mode_iopen, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_iopen, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_iopen, 1),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_eop_minus, 1), REDUCE(aux_sym_literal_arg_repeat1, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eop_minus, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_minus, 1),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_arg_repeat1, 1), SHIFT(35),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_arg_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_arg_repeat1, 2), SHIFT_REPEAT(17),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_arg_repeat1, 1), SHIFT(117),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_arg, 1, .dynamic_precedence = -9),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hexadecimal_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hexadecimal_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_repeat1, 2), SHIFT_REPEAT(34),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 2),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decimal_repeat1, 2),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 2), SHIFT_REPEAT(51),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_repeat1, 2), SHIFT_REPEAT(55),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_repeat1, 2), SHIFT_REPEAT(102),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hexadecimal_repeat1, 2), SHIFT_REPEAT(103),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 2), SHIFT_REPEAT(106),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_current_addr, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_aexpr, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_aexpr, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_aexpr, 2),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_aexpr, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_repeat1, 2),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(115),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 2),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pchar, 2),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pchar, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nchar, 2),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nchar, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 2), SHIFT_REPEAT(127),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pchar, 3),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pchar, 3),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nchar, 3),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nchar, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 2), SHIFT_REPEAT(132),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_times, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_and, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_xor, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_div, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eop_or, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_repeat1, 2), SHIFT_REPEAT(152),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xyc, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eaexpr, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__eaexpr, 2),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(166),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat3, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat2, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [952] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(459),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(187),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(188),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_calli, 4),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_calli, 4),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 5),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 5),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 5),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 5),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline, 2),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_calli, 7),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_calli, 7),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 7),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 7),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 7),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 7),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_counter, 4),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_program_counter, 4),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_calli, 5),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_calli, 5),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 3),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 3),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 8),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 8),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_calli, 8),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_calli, 8),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 8),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 8),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 9),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 9),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 3),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 4),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 4),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_calli, 6),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_calli, 6),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 4),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 4),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 10),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 10),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_counter, 2),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_program_counter, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_operation, 6),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_operation, 6),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_comment, 2),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_comment, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 6),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 6),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_calli, 3),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_calli, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_data, 1),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_data, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_data_repeat1, 2),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_data_repeat1, 2), SHIFT_REPEAT(777),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_data_repeat1, 2), SHIFT_REPEAT(250),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat2, 2), SHIFT_REPEAT(83),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_args, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat4, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat4, 2), SHIFT_REPEAT(43),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_args_repeat1, 2),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_args_repeat1, 2), SHIFT_REPEAT(8),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat3, 2), SHIFT_REPEAT(85),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat1, 2),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_operation_repeat1, 2), SHIFT_REPEAT(261),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_args, 2),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_dy, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dstring_repeat1, 2),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(275),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(276),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(277),
  [1198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(278),
  [1201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(279),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(280),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(281),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(282),
  [1213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(283),
  [1216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(284),
  [1219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(285),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(287),
  [1229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(288),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(289),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(290),
  [1238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(291),
  [1241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(292),
  [1244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(293),
  [1247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(295),
  [1250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(296),
  [1253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(298),
  [1256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(299),
  [1259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(300),
  [1262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(301),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(303),
  [1270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(304),
  [1273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(305),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(308),
  [1287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(309),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(312),
  [1295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(314),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(316),
  [1305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(317),
  [1308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(319),
  [1311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(321),
  [1316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(323),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(410),
  [1492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(411),
  [1495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(412),
  [1498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(413),
  [1501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(414),
  [1504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(415),
  [1507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(416),
  [1510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(417),
  [1513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(418),
  [1516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(419),
  [1519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(420),
  [1522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(421),
  [1525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(422),
  [1528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(423),
  [1531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(424),
  [1534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(425),
  [1537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(426),
  [1540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(427),
  [1543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(429),
  [1546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(430),
  [1549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(431),
  [1552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(432),
  [1555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(433),
  [1558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(434),
  [1561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(435),
  [1564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(437),
  [1567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(438),
  [1570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(439),
  [1573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(440),
  [1576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(441),
  [1579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(442),
  [1582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(443),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(445),
  [1590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(446),
  [1593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(447),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(449),
  [1603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(450),
  [1606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(451),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(453),
  [1614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(454),
  [1617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(455),
  [1620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(456),
  [1623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(457),
  [1626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(458),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(460),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_x, 1),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_y, 1),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_s, 1),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_x, 2),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_y, 2),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_s, 2),
  [1658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dstring_repeat1, 2), SHIFT_REPEAT(481),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dstring, 3),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daddr_y, 3),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_daddr, 3),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_dclose, 1),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iaddr_is_y, 3),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iaddr_y, 3),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iaddr_ix, 3),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iaddr, 3),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_is_y, 1),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_iy, 1),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_iix, 1),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dstring, 2),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_iclose, 1),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_pau, 1),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_asl, 1),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_dend, 1),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_text, 1),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_pag, 1),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_end, 1),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_brk, 1),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_eom, 1),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_clc, 1),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_cld, 1),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_cli, 1),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_rel, 1),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_clv, 1),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_pha, 1),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dec, 1),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dex, 1),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_dey, 1),
  [1911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_inc, 1),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dos33, 2),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prodos, 2),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_inx, 1),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_iny, 1),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_dat, 1),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_mac, 1),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_lsr, 1),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tya, 1),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_sw, 1),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_xce, 1),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_xba, 1),
  [1935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_txs, 1),
  [1937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_txa, 1),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_wdm, 1),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tsx, 1),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_plx, 1),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_wai, 1),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tyx, 1),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_txy, 1),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_plp, 1),
  [1953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tay, 1),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 3),
  [1957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tsc, 1),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tdc, 1),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tax, 1),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tcs, 1),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tcd, 1),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_pla, 1),
  [1969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_rtl, 1),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_phy, 1),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_else, 1),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_phx, 1),
  [1977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_php, 1),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_pld, 1),
  [1981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_plb, 1),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_phk, 1),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_phd, 1),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_phb, 1),
  [1989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_per, 1),
  [1991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sei, 1),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_pei, 1),
  [1995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_pea, 1),
  [1997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sed, 1),
  [1999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sec, 1),
  [2001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_fin, 1),
  [2003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_chk, 1),
  [2005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_xc, 1),
  [2007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_rts, 1),
  [2009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_rti, 1),
  [2011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_nop, 1),
  [2013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ror, 1),
  [2015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_rol, 1),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_cop, 1),
  [2019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ply, 1),
  [2021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_jsr, 1),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [2025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_str, 1),
  [2027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_ttl, 1),
  [2029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_ddb, 1),
  [2031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_dfb, 1),
  [2033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_adr, 1),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_adrl, 1),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_hex, 1),
  [2039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_ds, 1),
  [2041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sep, 1),
  [2043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_do, 1),
  [2045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_rep, 1),
  [2047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_if, 1),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_mvp, 1),
  [2053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_mvn, 1),
  [2055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_err, 1),
  [2057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_kbd, 1),
  [2059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_jsl, 1),
  [2061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_lup, 1),
  [2063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_jml, 1),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_mx, 1),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_brl, 1),
  [2069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_tsb, 1),
  [2071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_trb, 1),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_stz, 1),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sty, 1),
  [2077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_stx, 1),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sta, 1),
  [2081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_sbc, 1),
  [2083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_usr, 1),
  [2085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ora, 1),
  [2087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_cyc, 1),
  [2089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ldy, 1),
  [2091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_ldx, 1),
  [2093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_lda, 1),
  [2095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_ext, 1),
  [2097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_fls, 1),
  [2099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_jmp, 1),
  [2101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_inv, 1),
  [2103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_dci, 1),
  [2105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_asc, 1),
  [2107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_eor, 1),
  [2109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_tr, 1),
  [2111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_skp, 1),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_cpy, 1),
  [2117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_cpx, 1),
  [2119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_cmp, 1),
  [2121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_ent, 1),
  [2123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_org, 1),
  [2125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_obj, 1),
  [2127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_put, 1),
  [2129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_use, 1),
  [2131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bvs, 1),
  [2133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bvc, 1),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_var, 1),
  [2139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_pmc, 1),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_sav, 1),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_da, 1),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_rev, 1),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_typ, 1),
  [2197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_dsk, 1),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_dum, 1),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [2219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_lstdo, 1),
  [2221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_lst, 1),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_exp, 1),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_ast, 1),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [2291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bra, 1),
  [2293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bpl, 1),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bne, 1),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [2303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bmi, 1),
  [2305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bit, 1),
  [2307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_beq, 1),
  [2309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bcs, 1),
  [2311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_bcc, 1),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_and, 1),
  [2317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_adc, 1),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psop_equ, 1),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2333] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_merlin6502(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
