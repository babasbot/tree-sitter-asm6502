#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 111
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_acc_register = 2,
  sym_x_register = 3,
  sym_y_register = 4,
  sym_label = 5,
  sym_symbol = 6,
  anon_sym_COMMA = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_adc_opcode = 10,
  sym_and_opcode = 11,
  sym_asl_opcode = 12,
  sym_bcc_opcode = 13,
  sym_bcs_opcode = 14,
  sym_beq_opcode = 15,
  sym_bit_opcode = 16,
  sym_bmi_opcode = 17,
  sym_bne_opcode = 18,
  sym_bpl_opcode = 19,
  sym_brk_opcode = 20,
  sym_bvc_opcode = 21,
  sym_bvs_opcode = 22,
  sym_clc_opcode = 23,
  sym_cld_opcode = 24,
  sym_cli_opcode = 25,
  sym_clv_opcode = 26,
  sym_cmp_opcode = 27,
  sym_cpx_opcode = 28,
  sym_cpy_opcode = 29,
  sym_dec_opcode = 30,
  sym_dex_opcode = 31,
  sym_dey_opcode = 32,
  sym_eor_opcode = 33,
  sym_inc_opcode = 34,
  sym_inx_opcode = 35,
  sym_iny_opcode = 36,
  sym_jmp_opcode = 37,
  sym_jsr_opcode = 38,
  sym_lda_opcode = 39,
  sym_ldx_opcode = 40,
  sym_ldy_opcode = 41,
  sym_lsr_opcode = 42,
  sym_nop_opcode = 43,
  sym_ora_opcode = 44,
  sym_pha_opcode = 45,
  sym_php_opcode = 46,
  sym_pla_opcode = 47,
  sym_plp_opcode = 48,
  sym_rol_opcode = 49,
  sym_ror_opcode = 50,
  sym_rti_opcode = 51,
  sym_rts_opcode = 52,
  sym_sbc_opcode = 53,
  sym_sec_opcode = 54,
  sym_sed_opcode = 55,
  sym_sei_opcode = 56,
  sym_sta_opcode = 57,
  sym_stx_opcode = 58,
  sym_sty_opcode = 59,
  sym_tax_opcode = 60,
  sym_tay_opcode = 61,
  sym_tsx_opcode = 62,
  sym_txa_opcode = 63,
  sym_tcs_opcode = 64,
  sym_tya_opcode = 65,
  anon_sym_PERCENT = 66,
  aux_sym_bin_8_token1 = 67,
  sym_dec_8 = 68,
  anon_sym_DOLLAR = 69,
  anon_sym_h = 70,
  aux_sym_hex_8_token1 = 71,
  aux_sym_hex_8_token2 = 72,
  aux_sym_bin_16_token1 = 73,
  sym_dec_16 = 74,
  aux_sym_hex_16_token1 = 75,
  sym_imm_prefix = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_DOTBITNOT = 79,
  anon_sym_TILDE = 80,
  anon_sym_DOTLOBYTE = 81,
  anon_sym_LT = 82,
  anon_sym_DOTHIBYTE = 83,
  anon_sym_GT = 84,
  anon_sym_DOTBANKBYTE = 85,
  anon_sym_CARET = 86,
  anon_sym_STAR = 87,
  anon_sym_SLASH = 88,
  anon_sym_DOTMOD = 89,
  anon_sym_DOTBITAND = 90,
  anon_sym_AMP = 91,
  anon_sym_DOTBITXOR = 92,
  anon_sym_DOTSHL = 93,
  anon_sym_DOTSHR = 94,
  anon_sym_DOTBITOR = 95,
  anon_sym_PIPE = 96,
  anon_sym_EQ = 97,
  anon_sym_LT_EQ = 98,
  anon_sym_GT_EQ = 99,
  anon_sym_DOTAND = 100,
  anon_sym_AMP_AMP = 101,
  anon_sym_DOTXOR = 102,
  anon_sym_DOTOR = 103,
  anon_sym_PIPE_PIPE = 104,
  anon_sym_DOTNOT = 105,
  anon_sym_BANG = 106,
  sym_a16_ctrl_cmd = 107,
  sym_a8_ctrl_cmd = 108,
  aux_sym_addr_ctrl_cmd_token1 = 109,
  aux_sym_align_ctrl_cmd_token1 = 110,
  sym_ca65 = 111,
  sym_inst = 112,
  sym_impl_addr_inst = 113,
  sym_acc_addr_inst = 114,
  sym_imm_addr_inst = 115,
  sym_abs_addr_inst = 116,
  sym_zp_addr_inst = 117,
  sym_abs_x_addr_inst = 118,
  sym_abs_y_addr_inst = 119,
  sym_zp_x_addr_inst = 120,
  sym_zp_y_addr_inst = 121,
  sym_ind_addr_inst = 122,
  sym_ind_x_addr_inst = 123,
  sym_ind_y_addr_inst = 124,
  sym_rel_addr_inst = 125,
  sym_operand_8 = 126,
  sym_bin_8 = 127,
  sym_hex_8 = 128,
  sym_operand_16 = 129,
  sym_bin_16 = 130,
  sym_hex_16 = 131,
  sym_ctrl_cmd = 132,
  sym_addr_ctrl_cmd = 133,
  sym_align_ctrl_cmd = 134,
  aux_sym_ca65_repeat1 = 135,
  aux_sym_addr_ctrl_cmd_repeat1 = 136,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_acc_register] = "acc_register",
  [sym_x_register] = "x_register",
  [sym_y_register] = "y_register",
  [sym_label] = "label",
  [sym_symbol] = "symbol",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_adc_opcode] = "adc_opcode",
  [sym_and_opcode] = "and_opcode",
  [sym_asl_opcode] = "asl_opcode",
  [sym_bcc_opcode] = "bcc_opcode",
  [sym_bcs_opcode] = "bcs_opcode",
  [sym_beq_opcode] = "beq_opcode",
  [sym_bit_opcode] = "bit_opcode",
  [sym_bmi_opcode] = "bmi_opcode",
  [sym_bne_opcode] = "bne_opcode",
  [sym_bpl_opcode] = "bpl_opcode",
  [sym_brk_opcode] = "brk_opcode",
  [sym_bvc_opcode] = "bvc_opcode",
  [sym_bvs_opcode] = "bvs_opcode",
  [sym_clc_opcode] = "clc_opcode",
  [sym_cld_opcode] = "cld_opcode",
  [sym_cli_opcode] = "cli_opcode",
  [sym_clv_opcode] = "clv_opcode",
  [sym_cmp_opcode] = "cmp_opcode",
  [sym_cpx_opcode] = "cpx_opcode",
  [sym_cpy_opcode] = "cpy_opcode",
  [sym_dec_opcode] = "dec_opcode",
  [sym_dex_opcode] = "dex_opcode",
  [sym_dey_opcode] = "dey_opcode",
  [sym_eor_opcode] = "eor_opcode",
  [sym_inc_opcode] = "inc_opcode",
  [sym_inx_opcode] = "inx_opcode",
  [sym_iny_opcode] = "iny_opcode",
  [sym_jmp_opcode] = "jmp_opcode",
  [sym_jsr_opcode] = "jsr_opcode",
  [sym_lda_opcode] = "lda_opcode",
  [sym_ldx_opcode] = "ldx_opcode",
  [sym_ldy_opcode] = "ldy_opcode",
  [sym_lsr_opcode] = "lsr_opcode",
  [sym_nop_opcode] = "nop_opcode",
  [sym_ora_opcode] = "ora_opcode",
  [sym_pha_opcode] = "pha_opcode",
  [sym_php_opcode] = "php_opcode",
  [sym_pla_opcode] = "pla_opcode",
  [sym_plp_opcode] = "plp_opcode",
  [sym_rol_opcode] = "rol_opcode",
  [sym_ror_opcode] = "ror_opcode",
  [sym_rti_opcode] = "rti_opcode",
  [sym_rts_opcode] = "rts_opcode",
  [sym_sbc_opcode] = "sbc_opcode",
  [sym_sec_opcode] = "sec_opcode",
  [sym_sed_opcode] = "sed_opcode",
  [sym_sei_opcode] = "sei_opcode",
  [sym_sta_opcode] = "sta_opcode",
  [sym_stx_opcode] = "stx_opcode",
  [sym_sty_opcode] = "sty_opcode",
  [sym_tax_opcode] = "tax_opcode",
  [sym_tay_opcode] = "tay_opcode",
  [sym_tsx_opcode] = "tsx_opcode",
  [sym_txa_opcode] = "txa_opcode",
  [sym_tcs_opcode] = "tcs_opcode",
  [sym_tya_opcode] = "tya_opcode",
  [anon_sym_PERCENT] = "%",
  [aux_sym_bin_8_token1] = "bin_8_token1",
  [sym_dec_8] = "dec_8",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_h] = "h",
  [aux_sym_hex_8_token1] = "hex_8_token1",
  [aux_sym_hex_8_token2] = "hex_8_token2",
  [aux_sym_bin_16_token1] = "bin_16_token1",
  [sym_dec_16] = "dec_16",
  [aux_sym_hex_16_token1] = "hex_16_token1",
  [sym_imm_prefix] = "imm_prefix",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOTBITNOT] = ".BITNOT",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOTLOBYTE] = ".LOBYTE",
  [anon_sym_LT] = "<",
  [anon_sym_DOTHIBYTE] = ".HIBYTE",
  [anon_sym_GT] = ">",
  [anon_sym_DOTBANKBYTE] = ".BANKBYTE",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOTMOD] = ".MOD",
  [anon_sym_DOTBITAND] = ".BITAND",
  [anon_sym_AMP] = "&",
  [anon_sym_DOTBITXOR] = ".BITXOR",
  [anon_sym_DOTSHL] = ".SHL",
  [anon_sym_DOTSHR] = ".SHR",
  [anon_sym_DOTBITOR] = ".BITOR",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_DOTAND] = ".AND",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_DOTXOR] = ".XOR",
  [anon_sym_DOTOR] = ".OR",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOTNOT] = ".NOT",
  [anon_sym_BANG] = "!",
  [sym_a16_ctrl_cmd] = "a16_ctrl_cmd",
  [sym_a8_ctrl_cmd] = "a8_ctrl_cmd",
  [aux_sym_addr_ctrl_cmd_token1] = "addr_ctrl_cmd_token1",
  [aux_sym_align_ctrl_cmd_token1] = "align_ctrl_cmd_token1",
  [sym_ca65] = "ca65",
  [sym_inst] = "inst",
  [sym_impl_addr_inst] = "impl_addr_inst",
  [sym_acc_addr_inst] = "acc_addr_inst",
  [sym_imm_addr_inst] = "imm_addr_inst",
  [sym_abs_addr_inst] = "abs_addr_inst",
  [sym_zp_addr_inst] = "zp_addr_inst",
  [sym_abs_x_addr_inst] = "abs_x_addr_inst",
  [sym_abs_y_addr_inst] = "abs_y_addr_inst",
  [sym_zp_x_addr_inst] = "zp_x_addr_inst",
  [sym_zp_y_addr_inst] = "zp_y_addr_inst",
  [sym_ind_addr_inst] = "ind_addr_inst",
  [sym_ind_x_addr_inst] = "ind_x_addr_inst",
  [sym_ind_y_addr_inst] = "ind_y_addr_inst",
  [sym_rel_addr_inst] = "rel_addr_inst",
  [sym_operand_8] = "operand_8",
  [sym_bin_8] = "bin_8",
  [sym_hex_8] = "hex_8",
  [sym_operand_16] = "operand_16",
  [sym_bin_16] = "bin_16",
  [sym_hex_16] = "hex_16",
  [sym_ctrl_cmd] = "ctrl_cmd",
  [sym_addr_ctrl_cmd] = "addr_ctrl_cmd",
  [sym_align_ctrl_cmd] = "align_ctrl_cmd",
  [aux_sym_ca65_repeat1] = "ca65_repeat1",
  [aux_sym_addr_ctrl_cmd_repeat1] = "addr_ctrl_cmd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_acc_register] = sym_acc_register,
  [sym_x_register] = sym_x_register,
  [sym_y_register] = sym_y_register,
  [sym_label] = sym_label,
  [sym_symbol] = sym_symbol,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_adc_opcode] = sym_adc_opcode,
  [sym_and_opcode] = sym_and_opcode,
  [sym_asl_opcode] = sym_asl_opcode,
  [sym_bcc_opcode] = sym_bcc_opcode,
  [sym_bcs_opcode] = sym_bcs_opcode,
  [sym_beq_opcode] = sym_beq_opcode,
  [sym_bit_opcode] = sym_bit_opcode,
  [sym_bmi_opcode] = sym_bmi_opcode,
  [sym_bne_opcode] = sym_bne_opcode,
  [sym_bpl_opcode] = sym_bpl_opcode,
  [sym_brk_opcode] = sym_brk_opcode,
  [sym_bvc_opcode] = sym_bvc_opcode,
  [sym_bvs_opcode] = sym_bvs_opcode,
  [sym_clc_opcode] = sym_clc_opcode,
  [sym_cld_opcode] = sym_cld_opcode,
  [sym_cli_opcode] = sym_cli_opcode,
  [sym_clv_opcode] = sym_clv_opcode,
  [sym_cmp_opcode] = sym_cmp_opcode,
  [sym_cpx_opcode] = sym_cpx_opcode,
  [sym_cpy_opcode] = sym_cpy_opcode,
  [sym_dec_opcode] = sym_dec_opcode,
  [sym_dex_opcode] = sym_dex_opcode,
  [sym_dey_opcode] = sym_dey_opcode,
  [sym_eor_opcode] = sym_eor_opcode,
  [sym_inc_opcode] = sym_inc_opcode,
  [sym_inx_opcode] = sym_inx_opcode,
  [sym_iny_opcode] = sym_iny_opcode,
  [sym_jmp_opcode] = sym_jmp_opcode,
  [sym_jsr_opcode] = sym_jsr_opcode,
  [sym_lda_opcode] = sym_lda_opcode,
  [sym_ldx_opcode] = sym_ldx_opcode,
  [sym_ldy_opcode] = sym_ldy_opcode,
  [sym_lsr_opcode] = sym_lsr_opcode,
  [sym_nop_opcode] = sym_nop_opcode,
  [sym_ora_opcode] = sym_ora_opcode,
  [sym_pha_opcode] = sym_pha_opcode,
  [sym_php_opcode] = sym_php_opcode,
  [sym_pla_opcode] = sym_pla_opcode,
  [sym_plp_opcode] = sym_plp_opcode,
  [sym_rol_opcode] = sym_rol_opcode,
  [sym_ror_opcode] = sym_ror_opcode,
  [sym_rti_opcode] = sym_rti_opcode,
  [sym_rts_opcode] = sym_rts_opcode,
  [sym_sbc_opcode] = sym_sbc_opcode,
  [sym_sec_opcode] = sym_sec_opcode,
  [sym_sed_opcode] = sym_sed_opcode,
  [sym_sei_opcode] = sym_sei_opcode,
  [sym_sta_opcode] = sym_sta_opcode,
  [sym_stx_opcode] = sym_stx_opcode,
  [sym_sty_opcode] = sym_sty_opcode,
  [sym_tax_opcode] = sym_tax_opcode,
  [sym_tay_opcode] = sym_tay_opcode,
  [sym_tsx_opcode] = sym_tsx_opcode,
  [sym_txa_opcode] = sym_txa_opcode,
  [sym_tcs_opcode] = sym_tcs_opcode,
  [sym_tya_opcode] = sym_tya_opcode,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_bin_8_token1] = aux_sym_bin_8_token1,
  [sym_dec_8] = sym_dec_8,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_h] = anon_sym_h,
  [aux_sym_hex_8_token1] = aux_sym_hex_8_token1,
  [aux_sym_hex_8_token2] = aux_sym_hex_8_token2,
  [aux_sym_bin_16_token1] = aux_sym_bin_16_token1,
  [sym_dec_16] = sym_dec_16,
  [aux_sym_hex_16_token1] = aux_sym_hex_16_token1,
  [sym_imm_prefix] = sym_imm_prefix,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOTBITNOT] = anon_sym_DOTBITNOT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOTLOBYTE] = anon_sym_DOTLOBYTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOTHIBYTE] = anon_sym_DOTHIBYTE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOTBANKBYTE] = anon_sym_DOTBANKBYTE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOTMOD] = anon_sym_DOTMOD,
  [anon_sym_DOTBITAND] = anon_sym_DOTBITAND,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOTBITXOR] = anon_sym_DOTBITXOR,
  [anon_sym_DOTSHL] = anon_sym_DOTSHL,
  [anon_sym_DOTSHR] = anon_sym_DOTSHR,
  [anon_sym_DOTBITOR] = anon_sym_DOTBITOR,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DOTAND] = anon_sym_DOTAND,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_DOTXOR] = anon_sym_DOTXOR,
  [anon_sym_DOTOR] = anon_sym_DOTOR,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOTNOT] = anon_sym_DOTNOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_a16_ctrl_cmd] = sym_a16_ctrl_cmd,
  [sym_a8_ctrl_cmd] = sym_a8_ctrl_cmd,
  [aux_sym_addr_ctrl_cmd_token1] = aux_sym_addr_ctrl_cmd_token1,
  [aux_sym_align_ctrl_cmd_token1] = aux_sym_align_ctrl_cmd_token1,
  [sym_ca65] = sym_ca65,
  [sym_inst] = sym_inst,
  [sym_impl_addr_inst] = sym_impl_addr_inst,
  [sym_acc_addr_inst] = sym_acc_addr_inst,
  [sym_imm_addr_inst] = sym_imm_addr_inst,
  [sym_abs_addr_inst] = sym_abs_addr_inst,
  [sym_zp_addr_inst] = sym_zp_addr_inst,
  [sym_abs_x_addr_inst] = sym_abs_x_addr_inst,
  [sym_abs_y_addr_inst] = sym_abs_y_addr_inst,
  [sym_zp_x_addr_inst] = sym_zp_x_addr_inst,
  [sym_zp_y_addr_inst] = sym_zp_y_addr_inst,
  [sym_ind_addr_inst] = sym_ind_addr_inst,
  [sym_ind_x_addr_inst] = sym_ind_x_addr_inst,
  [sym_ind_y_addr_inst] = sym_ind_y_addr_inst,
  [sym_rel_addr_inst] = sym_rel_addr_inst,
  [sym_operand_8] = sym_operand_8,
  [sym_bin_8] = sym_bin_8,
  [sym_hex_8] = sym_hex_8,
  [sym_operand_16] = sym_operand_16,
  [sym_bin_16] = sym_bin_16,
  [sym_hex_16] = sym_hex_16,
  [sym_ctrl_cmd] = sym_ctrl_cmd,
  [sym_addr_ctrl_cmd] = sym_addr_ctrl_cmd,
  [sym_align_ctrl_cmd] = sym_align_ctrl_cmd,
  [aux_sym_ca65_repeat1] = aux_sym_ca65_repeat1,
  [aux_sym_addr_ctrl_cmd_repeat1] = aux_sym_addr_ctrl_cmd_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_acc_register] = {
    .visible = true,
    .named = true,
  },
  [sym_x_register] = {
    .visible = true,
    .named = true,
  },
  [sym_y_register] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_adc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_and_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_asl_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bcc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bcs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_beq_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bmi_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bne_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bpl_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_brk_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bvc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_bvs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_clc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cld_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cli_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_clv_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cmp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cpx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_cpy_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dex_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_dey_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_eor_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_inx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_iny_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_jmp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_jsr_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_lda_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ldx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ldy_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_lsr_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_nop_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ora_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pha_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_php_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pla_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_plp_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rol_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ror_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rti_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_rts_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sbc_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sec_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sed_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sei_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sta_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_stx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_sty_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tax_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tay_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tsx_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_txa_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tcs_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_tya_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bin_8_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec_8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_8_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_8_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bin_16_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec_16] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_16_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_imm_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTLOBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTHIBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBANKBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTMOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSHR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBITOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_a16_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_a8_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_addr_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_align_ctrl_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ca65] = {
    .visible = true,
    .named = true,
  },
  [sym_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_impl_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_acc_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_zp_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_x_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_ind_y_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_addr_inst] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_8] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_8] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_8] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_16] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_16] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_16] = {
    .visible = true,
    .named = true,
  },
  [sym_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_addr_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_align_ctrl_cmd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ca65_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addr_ctrl_cmd_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(202);
      ADVANCE_MAP(
        '!', 435,
        '#', 405,
        '$', 363,
        '%', 324,
        '&', 420,
        '(', 213,
        ')', 214,
        '*', 416,
        '+', 406,
        ',', 212,
        '-', 407,
        '.', 72,
        '/', 417,
        '0', 326,
        '1', 342,
        ';', 203,
        '<', 411,
        '=', 426,
        '>', 413,
        '^', 415,
        'h', 364,
        '|', 425,
        '~', 409,
        'A', 204,
        'a', 204,
        'B', 121,
        'b', 121,
        'C', 139,
        'c', 139,
        'D', 131,
        'd', 131,
        'E', 146,
        'e', 146,
        'I', 144,
        'i', 144,
        'J', 142,
        'j', 142,
        'L', 129,
        'l', 129,
        'N', 147,
        'n', 147,
        'O', 152,
        'o', 152,
        'P', 134,
        'p', 134,
        'R', 145,
        'r', 145,
        'S', 120,
        's', 120,
        'T', 119,
        't', 119,
        'X', 206,
        'x', 206,
        'Y', 207,
        'y', 207,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 405,
        '$', 363,
        '%', 324,
        '(', 213,
        '0', 344,
        '1', 353,
        '2', 346,
        '6', 347,
        ';', 203,
        'h', 365,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(358);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '%') ADVANCE(324);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == '0') ADVANCE(391);
      if (lookahead == '6') ADVANCE(394);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == 'h') ADVANCE(365);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '$', 363,
        '%', 324,
        '0', 344,
        '1', 353,
        '2', 346,
        '6', 347,
        ';', 203,
        'h', 365,
        'A', 205,
        'a', 205,
      );
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(358);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(363);
      if (lookahead == '%') ADVANCE(324);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(349);
      if (lookahead == ';') ADVANCE(203);
      if (lookahead == 'h') ADVANCE(365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(367);
      if (lookahead == ';') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == ';') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(374);
      if (lookahead == '1') ADVANCE(389);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == ';') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '1') ADVANCE(197);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(9);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(368);
      if (lookahead == ';') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(194);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '1') ADVANCE(191);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(187);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '1') ADVANCE(182);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '1') ADVANCE(176);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '8') ADVANCE(437);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '8') ADVANCE(437);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(436);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(273);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        ':', 208,
        'A', 69,
        'a', 69,
        'C', 66,
        'c', 66,
        'S', 70,
        's', 70,
        'X', 27,
        'x', 27,
        'Y', 28,
        'y', 28,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ':', 208,
        'C', 33,
        'c', 33,
        'E', 61,
        'e', 61,
        'I', 67,
        'i', 67,
        'M', 46,
        'm', 46,
        'N', 44,
        'n', 44,
        'P', 51,
        'p', 51,
        'R', 48,
        'r', 48,
        'V', 34,
        'v', 34,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(235);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        ':', 208,
        'C', 239,
        'c', 239,
        'D', 241,
        'd', 241,
        'I', 243,
        'i', 243,
        'V', 245,
        'v', 245,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(255);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(249);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(313);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ADVANCE_MAP(
        'A', 19,
        'B', 73,
        'H', 85,
        'L', 95,
        'M', 91,
        'N', 92,
        'O', 96,
        'S', 84,
        'X', 90,
        'a', 20,
      );
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(429);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(418);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(419);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(412);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(410);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(414);
      END_STATE();
    case 84:
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(423);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(432);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(431);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(424);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(421);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(434);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(408);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'Y') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(272);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(308);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 119:
      ADVANCE_MAP(
        'A', 160,
        'a', 160,
        'C', 157,
        'c', 157,
        'S', 161,
        's', 161,
        'X', 117,
        'x', 117,
        'Y', 118,
        'y', 118,
      );
      END_STATE();
    case 120:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 121:
      ADVANCE_MAP(
        'C', 122,
        'c', 122,
        'E', 151,
        'e', 151,
        'I', 158,
        'i', 158,
        'M', 135,
        'm', 135,
        'N', 132,
        'n', 132,
        'P', 140,
        'p', 140,
        'R', 138,
        'r', 138,
        'V', 123,
        'v', 123,
      );
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 124:
      ADVANCE_MAP(
        'C', 238,
        'c', 238,
        'D', 240,
        'd', 240,
        'I', 242,
        'i', 242,
        'V', 244,
        'v', 244,
      );
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(262);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(302);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 133:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(232);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 145:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 148:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 149:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 150:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 151:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(222);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 153:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 157:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 159:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 160:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 161:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 162:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 165:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(164);
      END_STATE();
    case 166:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(375);
      END_STATE();
    case 170:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(168);
      END_STATE();
    case 171:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(169);
      END_STATE();
    case 172:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(174);
      END_STATE();
    case 176:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(175);
      END_STATE();
    case 177:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      END_STATE();
    case 178:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(188);
      END_STATE();
    case 190:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(190);
      END_STATE();
    case 192:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 193:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      END_STATE();
    case 194:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      END_STATE();
    case 195:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      END_STATE();
    case 196:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      END_STATE();
    case 197:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 201:
      if (eof) ADVANCE(202);
      ADVANCE_MAP(
        ')', 214,
        ',', 212,
        '.', 111,
        '0', 327,
        '1', 341,
        ';', 203,
        'A', 40,
        'a', 40,
        'B', 31,
        'b', 31,
        'C', 49,
        'c', 49,
        'D', 43,
        'd', 43,
        'E', 56,
        'e', 56,
        'I', 54,
        'i', 54,
        'J', 53,
        'j', 53,
        'L', 41,
        'l', 41,
        'N', 57,
        'n', 57,
        'O', 62,
        'o', 62,
        'P', 45,
        'p', 45,
        'R', 55,
        'r', 55,
        'S', 30,
        's', 30,
        'T', 29,
        't', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(201);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_acc_register);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_acc_register);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_x_register);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_y_register);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(109);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(211);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_symbol);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_adc_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_and_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_asl_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_bcc_opcode);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_bcc_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_bcs_opcode);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_bcs_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_beq_opcode);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_beq_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_bit_opcode);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_bit_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_bmi_opcode);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_bmi_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_bne_opcode);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_bne_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_bpl_opcode);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_bpl_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_brk_opcode);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_brk_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_bvc_opcode);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_bvc_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_bvs_opcode);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_bvs_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_clc_opcode);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_clc_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_cld_opcode);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_cld_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_cli_opcode);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_cli_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_clv_opcode);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_clv_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_cmp_opcode);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_cmp_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_cpx_opcode);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_cpx_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_cpy_opcode);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_cpy_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_dec_opcode);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_dec_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_dex_opcode);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_dex_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_dey_opcode);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_dey_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_eor_opcode);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_eor_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_inc_opcode);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_inc_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_inx_opcode);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_inx_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_iny_opcode);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_iny_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_jmp_opcode);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_jmp_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_jsr_opcode);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_jsr_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_lda_opcode);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_lda_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ldx_opcode);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ldx_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ldy_opcode);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ldy_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_lsr_opcode);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_lsr_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_nop_opcode);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_nop_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ora_opcode);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ora_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_pha_opcode);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_pha_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_php_opcode);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_php_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_pla_opcode);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_pla_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_plp_opcode);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_plp_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_rol_opcode);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_rol_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ror_opcode);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ror_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_rti_opcode);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_rti_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_rts_opcode);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_rts_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_sbc_opcode);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_sbc_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_sec_opcode);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_sec_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_sed_opcode);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_sed_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_sei_opcode);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_sei_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_sta_opcode);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_sta_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_stx_opcode);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_stx_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_sty_opcode);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_sty_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_tax_opcode);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_tax_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_tay_opcode);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_tay_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_tsx_opcode);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_tsx_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_txa_opcode);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_txa_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_tcs_opcode);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_tcs_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_tya_opcode);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_tya_opcode);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(326);
      if (lookahead == '1') ADVANCE(342);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0') ADVANCE(327);
      if (lookahead == '1') ADVANCE(341);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(325);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(329);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(332);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(333);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(334);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(335);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(336);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(338);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_bin_8_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_dec_8);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(344);
      if (lookahead == '1') ADVANCE(353);
      if (lookahead == '2') ADVANCE(346);
      if (lookahead == '6') ADVANCE(347);
      if (lookahead == 'h') ADVANCE(372);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(358);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '0') ADVANCE(345);
      if (lookahead == '1') ADVANCE(361);
      if (lookahead == '2') ADVANCE(349);
      if (lookahead == 'h') ADVANCE(372);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(351);
      if (lookahead == 'h') ADVANCE(372);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(372);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(392);
      if (lookahead == 'h') ADVANCE(372);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(398);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(372);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(362);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(343);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_dec_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_h);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(367);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (lookahead == '0') ADVANCE(368);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_hex_8_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_hex_8_token2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0') ADVANCE(374);
      if (lookahead == '1') ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(382);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(377);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(375);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_bin_16_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_dec_16);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '0') ADVANCE(391);
      if (lookahead == '6') ADVANCE(394);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(399);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '3') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(397);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(392);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(398);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_dec_16);
      if (lookahead == '5') ADVANCE(393);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(390);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_dec_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (lookahead == '0') ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_hex_16_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_imm_prefix);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DOTBITNOT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DOTLOBYTE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(427);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DOTHIBYTE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(428);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DOTBANKBYTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOTMOD);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DOTBITAND);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(430);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOTBITXOR);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOTSHL);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DOTSHR);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DOTBITOR);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(433);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOTAND);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DOTXOR);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DOTOR);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DOTNOT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_a16_ctrl_cmd);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_a8_ctrl_cmd);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_addr_ctrl_cmd_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_align_ctrl_cmd_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 201},
  [2] = {.lex_state = 201},
  [3] = {.lex_state = 201},
  [4] = {.lex_state = 201},
  [5] = {.lex_state = 201},
  [6] = {.lex_state = 201},
  [7] = {.lex_state = 201},
  [8] = {.lex_state = 201},
  [9] = {.lex_state = 201},
  [10] = {.lex_state = 201},
  [11] = {.lex_state = 201},
  [12] = {.lex_state = 201},
  [13] = {.lex_state = 201},
  [14] = {.lex_state = 201},
  [15] = {.lex_state = 201},
  [16] = {.lex_state = 201},
  [17] = {.lex_state = 201},
  [18] = {.lex_state = 201},
  [19] = {.lex_state = 201},
  [20] = {.lex_state = 201},
  [21] = {.lex_state = 201},
  [22] = {.lex_state = 201},
  [23] = {.lex_state = 201},
  [24] = {.lex_state = 201},
  [25] = {.lex_state = 201},
  [26] = {.lex_state = 201},
  [27] = {.lex_state = 201},
  [28] = {.lex_state = 201},
  [29] = {.lex_state = 201},
  [30] = {.lex_state = 201},
  [31] = {.lex_state = 201},
  [32] = {.lex_state = 201},
  [33] = {.lex_state = 201},
  [34] = {.lex_state = 201},
  [35] = {.lex_state = 201},
  [36] = {.lex_state = 201},
  [37] = {.lex_state = 201},
  [38] = {.lex_state = 201},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 201},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_acc_register] = ACTIONS(1),
    [sym_x_register] = ACTIONS(1),
    [sym_y_register] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_bcc_opcode] = ACTIONS(1),
    [sym_bcs_opcode] = ACTIONS(1),
    [sym_beq_opcode] = ACTIONS(1),
    [sym_bit_opcode] = ACTIONS(1),
    [sym_bmi_opcode] = ACTIONS(1),
    [sym_bne_opcode] = ACTIONS(1),
    [sym_bpl_opcode] = ACTIONS(1),
    [sym_brk_opcode] = ACTIONS(1),
    [sym_bvc_opcode] = ACTIONS(1),
    [sym_bvs_opcode] = ACTIONS(1),
    [sym_clc_opcode] = ACTIONS(1),
    [sym_cld_opcode] = ACTIONS(1),
    [sym_cli_opcode] = ACTIONS(1),
    [sym_clv_opcode] = ACTIONS(1),
    [sym_cmp_opcode] = ACTIONS(1),
    [sym_cpx_opcode] = ACTIONS(1),
    [sym_cpy_opcode] = ACTIONS(1),
    [sym_dec_opcode] = ACTIONS(1),
    [sym_dex_opcode] = ACTIONS(1),
    [sym_dey_opcode] = ACTIONS(1),
    [sym_eor_opcode] = ACTIONS(1),
    [sym_inc_opcode] = ACTIONS(1),
    [sym_inx_opcode] = ACTIONS(1),
    [sym_iny_opcode] = ACTIONS(1),
    [sym_jmp_opcode] = ACTIONS(1),
    [sym_jsr_opcode] = ACTIONS(1),
    [sym_lda_opcode] = ACTIONS(1),
    [sym_ldx_opcode] = ACTIONS(1),
    [sym_ldy_opcode] = ACTIONS(1),
    [sym_lsr_opcode] = ACTIONS(1),
    [sym_nop_opcode] = ACTIONS(1),
    [sym_ora_opcode] = ACTIONS(1),
    [sym_pha_opcode] = ACTIONS(1),
    [sym_php_opcode] = ACTIONS(1),
    [sym_pla_opcode] = ACTIONS(1),
    [sym_plp_opcode] = ACTIONS(1),
    [sym_rol_opcode] = ACTIONS(1),
    [sym_ror_opcode] = ACTIONS(1),
    [sym_rti_opcode] = ACTIONS(1),
    [sym_rts_opcode] = ACTIONS(1),
    [sym_sbc_opcode] = ACTIONS(1),
    [sym_sec_opcode] = ACTIONS(1),
    [sym_sed_opcode] = ACTIONS(1),
    [sym_sei_opcode] = ACTIONS(1),
    [sym_sta_opcode] = ACTIONS(1),
    [sym_stx_opcode] = ACTIONS(1),
    [sym_sty_opcode] = ACTIONS(1),
    [sym_tax_opcode] = ACTIONS(1),
    [sym_tay_opcode] = ACTIONS(1),
    [sym_tsx_opcode] = ACTIONS(1),
    [sym_txa_opcode] = ACTIONS(1),
    [sym_tcs_opcode] = ACTIONS(1),
    [sym_tya_opcode] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_bin_8_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [aux_sym_bin_16_token1] = ACTIONS(1),
    [sym_imm_prefix] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOTBITNOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOTLOBYTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOTHIBYTE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOTBANKBYTE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOTMOD] = ACTIONS(1),
    [anon_sym_DOTBITAND] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOTBITXOR] = ACTIONS(1),
    [anon_sym_DOTSHL] = ACTIONS(1),
    [anon_sym_DOTSHR] = ACTIONS(1),
    [anon_sym_DOTBITOR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DOTAND] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DOTXOR] = ACTIONS(1),
    [anon_sym_DOTOR] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOTNOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_a16_ctrl_cmd] = ACTIONS(1),
    [sym_a8_ctrl_cmd] = ACTIONS(1),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(1),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(67),
    [sym_inst] = STATE(3),
    [sym_impl_addr_inst] = STATE(24),
    [sym_acc_addr_inst] = STATE(24),
    [sym_imm_addr_inst] = STATE(24),
    [sym_abs_addr_inst] = STATE(24),
    [sym_zp_addr_inst] = STATE(24),
    [sym_abs_x_addr_inst] = STATE(24),
    [sym_abs_y_addr_inst] = STATE(24),
    [sym_zp_x_addr_inst] = STATE(24),
    [sym_zp_y_addr_inst] = STATE(24),
    [sym_ind_addr_inst] = STATE(24),
    [sym_ind_x_addr_inst] = STATE(24),
    [sym_ind_y_addr_inst] = STATE(24),
    [sym_rel_addr_inst] = STATE(24),
    [sym_ctrl_cmd] = STATE(3),
    [sym_addr_ctrl_cmd] = STATE(25),
    [sym_align_ctrl_cmd] = STATE(25),
    [aux_sym_ca65_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(7),
    [sym_adc_opcode] = ACTIONS(9),
    [sym_and_opcode] = ACTIONS(9),
    [sym_asl_opcode] = ACTIONS(11),
    [sym_bcc_opcode] = ACTIONS(13),
    [sym_bcs_opcode] = ACTIONS(13),
    [sym_beq_opcode] = ACTIONS(13),
    [sym_bit_opcode] = ACTIONS(15),
    [sym_bmi_opcode] = ACTIONS(13),
    [sym_bne_opcode] = ACTIONS(13),
    [sym_bpl_opcode] = ACTIONS(13),
    [sym_brk_opcode] = ACTIONS(17),
    [sym_bvc_opcode] = ACTIONS(13),
    [sym_bvs_opcode] = ACTIONS(13),
    [sym_clc_opcode] = ACTIONS(17),
    [sym_cld_opcode] = ACTIONS(17),
    [sym_cli_opcode] = ACTIONS(17),
    [sym_clv_opcode] = ACTIONS(17),
    [sym_cmp_opcode] = ACTIONS(9),
    [sym_cpx_opcode] = ACTIONS(19),
    [sym_cpy_opcode] = ACTIONS(19),
    [sym_dec_opcode] = ACTIONS(21),
    [sym_dex_opcode] = ACTIONS(17),
    [sym_dey_opcode] = ACTIONS(17),
    [sym_eor_opcode] = ACTIONS(9),
    [sym_inc_opcode] = ACTIONS(21),
    [sym_inx_opcode] = ACTIONS(17),
    [sym_iny_opcode] = ACTIONS(17),
    [sym_jmp_opcode] = ACTIONS(23),
    [sym_jsr_opcode] = ACTIONS(25),
    [sym_lda_opcode] = ACTIONS(9),
    [sym_ldx_opcode] = ACTIONS(27),
    [sym_ldy_opcode] = ACTIONS(29),
    [sym_lsr_opcode] = ACTIONS(29),
    [sym_nop_opcode] = ACTIONS(17),
    [sym_ora_opcode] = ACTIONS(9),
    [sym_pha_opcode] = ACTIONS(17),
    [sym_php_opcode] = ACTIONS(17),
    [sym_pla_opcode] = ACTIONS(17),
    [sym_plp_opcode] = ACTIONS(17),
    [sym_rol_opcode] = ACTIONS(11),
    [sym_ror_opcode] = ACTIONS(11),
    [sym_rti_opcode] = ACTIONS(17),
    [sym_rts_opcode] = ACTIONS(17),
    [sym_sbc_opcode] = ACTIONS(9),
    [sym_sec_opcode] = ACTIONS(17),
    [sym_sed_opcode] = ACTIONS(17),
    [sym_sei_opcode] = ACTIONS(17),
    [sym_sta_opcode] = ACTIONS(31),
    [sym_stx_opcode] = ACTIONS(33),
    [sym_sty_opcode] = ACTIONS(35),
    [sym_tax_opcode] = ACTIONS(17),
    [sym_tay_opcode] = ACTIONS(17),
    [sym_tsx_opcode] = ACTIONS(17),
    [sym_txa_opcode] = ACTIONS(17),
    [sym_tcs_opcode] = ACTIONS(17),
    [sym_tya_opcode] = ACTIONS(17),
    [sym_a16_ctrl_cmd] = ACTIONS(37),
    [sym_a8_ctrl_cmd] = ACTIONS(37),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(39),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(41),
  },
  [2] = {
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(24),
    [sym_acc_addr_inst] = STATE(24),
    [sym_imm_addr_inst] = STATE(24),
    [sym_abs_addr_inst] = STATE(24),
    [sym_zp_addr_inst] = STATE(24),
    [sym_abs_x_addr_inst] = STATE(24),
    [sym_abs_y_addr_inst] = STATE(24),
    [sym_zp_x_addr_inst] = STATE(24),
    [sym_zp_y_addr_inst] = STATE(24),
    [sym_ind_addr_inst] = STATE(24),
    [sym_ind_x_addr_inst] = STATE(24),
    [sym_ind_y_addr_inst] = STATE(24),
    [sym_rel_addr_inst] = STATE(24),
    [sym_ctrl_cmd] = STATE(2),
    [sym_addr_ctrl_cmd] = STATE(25),
    [sym_align_ctrl_cmd] = STATE(25),
    [aux_sym_ca65_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(45),
    [sym_adc_opcode] = ACTIONS(48),
    [sym_and_opcode] = ACTIONS(48),
    [sym_asl_opcode] = ACTIONS(51),
    [sym_bcc_opcode] = ACTIONS(54),
    [sym_bcs_opcode] = ACTIONS(54),
    [sym_beq_opcode] = ACTIONS(54),
    [sym_bit_opcode] = ACTIONS(57),
    [sym_bmi_opcode] = ACTIONS(54),
    [sym_bne_opcode] = ACTIONS(54),
    [sym_bpl_opcode] = ACTIONS(54),
    [sym_brk_opcode] = ACTIONS(60),
    [sym_bvc_opcode] = ACTIONS(54),
    [sym_bvs_opcode] = ACTIONS(54),
    [sym_clc_opcode] = ACTIONS(60),
    [sym_cld_opcode] = ACTIONS(60),
    [sym_cli_opcode] = ACTIONS(60),
    [sym_clv_opcode] = ACTIONS(60),
    [sym_cmp_opcode] = ACTIONS(48),
    [sym_cpx_opcode] = ACTIONS(63),
    [sym_cpy_opcode] = ACTIONS(63),
    [sym_dec_opcode] = ACTIONS(66),
    [sym_dex_opcode] = ACTIONS(60),
    [sym_dey_opcode] = ACTIONS(60),
    [sym_eor_opcode] = ACTIONS(48),
    [sym_inc_opcode] = ACTIONS(66),
    [sym_inx_opcode] = ACTIONS(60),
    [sym_iny_opcode] = ACTIONS(60),
    [sym_jmp_opcode] = ACTIONS(69),
    [sym_jsr_opcode] = ACTIONS(72),
    [sym_lda_opcode] = ACTIONS(48),
    [sym_ldx_opcode] = ACTIONS(75),
    [sym_ldy_opcode] = ACTIONS(78),
    [sym_lsr_opcode] = ACTIONS(78),
    [sym_nop_opcode] = ACTIONS(60),
    [sym_ora_opcode] = ACTIONS(48),
    [sym_pha_opcode] = ACTIONS(60),
    [sym_php_opcode] = ACTIONS(60),
    [sym_pla_opcode] = ACTIONS(60),
    [sym_plp_opcode] = ACTIONS(60),
    [sym_rol_opcode] = ACTIONS(51),
    [sym_ror_opcode] = ACTIONS(51),
    [sym_rti_opcode] = ACTIONS(60),
    [sym_rts_opcode] = ACTIONS(60),
    [sym_sbc_opcode] = ACTIONS(48),
    [sym_sec_opcode] = ACTIONS(60),
    [sym_sed_opcode] = ACTIONS(60),
    [sym_sei_opcode] = ACTIONS(60),
    [sym_sta_opcode] = ACTIONS(81),
    [sym_stx_opcode] = ACTIONS(84),
    [sym_sty_opcode] = ACTIONS(87),
    [sym_tax_opcode] = ACTIONS(60),
    [sym_tay_opcode] = ACTIONS(60),
    [sym_tsx_opcode] = ACTIONS(60),
    [sym_txa_opcode] = ACTIONS(60),
    [sym_tcs_opcode] = ACTIONS(60),
    [sym_tya_opcode] = ACTIONS(60),
    [sym_a16_ctrl_cmd] = ACTIONS(90),
    [sym_a8_ctrl_cmd] = ACTIONS(90),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(93),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(96),
  },
  [3] = {
    [sym_inst] = STATE(2),
    [sym_impl_addr_inst] = STATE(24),
    [sym_acc_addr_inst] = STATE(24),
    [sym_imm_addr_inst] = STATE(24),
    [sym_abs_addr_inst] = STATE(24),
    [sym_zp_addr_inst] = STATE(24),
    [sym_abs_x_addr_inst] = STATE(24),
    [sym_abs_y_addr_inst] = STATE(24),
    [sym_zp_x_addr_inst] = STATE(24),
    [sym_zp_y_addr_inst] = STATE(24),
    [sym_ind_addr_inst] = STATE(24),
    [sym_ind_x_addr_inst] = STATE(24),
    [sym_ind_y_addr_inst] = STATE(24),
    [sym_rel_addr_inst] = STATE(24),
    [sym_ctrl_cmd] = STATE(2),
    [sym_addr_ctrl_cmd] = STATE(25),
    [sym_align_ctrl_cmd] = STATE(25),
    [aux_sym_ca65_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(101),
    [sym_adc_opcode] = ACTIONS(9),
    [sym_and_opcode] = ACTIONS(9),
    [sym_asl_opcode] = ACTIONS(11),
    [sym_bcc_opcode] = ACTIONS(13),
    [sym_bcs_opcode] = ACTIONS(13),
    [sym_beq_opcode] = ACTIONS(13),
    [sym_bit_opcode] = ACTIONS(15),
    [sym_bmi_opcode] = ACTIONS(13),
    [sym_bne_opcode] = ACTIONS(13),
    [sym_bpl_opcode] = ACTIONS(13),
    [sym_brk_opcode] = ACTIONS(17),
    [sym_bvc_opcode] = ACTIONS(13),
    [sym_bvs_opcode] = ACTIONS(13),
    [sym_clc_opcode] = ACTIONS(17),
    [sym_cld_opcode] = ACTIONS(17),
    [sym_cli_opcode] = ACTIONS(17),
    [sym_clv_opcode] = ACTIONS(17),
    [sym_cmp_opcode] = ACTIONS(9),
    [sym_cpx_opcode] = ACTIONS(19),
    [sym_cpy_opcode] = ACTIONS(19),
    [sym_dec_opcode] = ACTIONS(21),
    [sym_dex_opcode] = ACTIONS(17),
    [sym_dey_opcode] = ACTIONS(17),
    [sym_eor_opcode] = ACTIONS(9),
    [sym_inc_opcode] = ACTIONS(21),
    [sym_inx_opcode] = ACTIONS(17),
    [sym_iny_opcode] = ACTIONS(17),
    [sym_jmp_opcode] = ACTIONS(23),
    [sym_jsr_opcode] = ACTIONS(25),
    [sym_lda_opcode] = ACTIONS(9),
    [sym_ldx_opcode] = ACTIONS(27),
    [sym_ldy_opcode] = ACTIONS(29),
    [sym_lsr_opcode] = ACTIONS(29),
    [sym_nop_opcode] = ACTIONS(17),
    [sym_ora_opcode] = ACTIONS(9),
    [sym_pha_opcode] = ACTIONS(17),
    [sym_php_opcode] = ACTIONS(17),
    [sym_pla_opcode] = ACTIONS(17),
    [sym_plp_opcode] = ACTIONS(17),
    [sym_rol_opcode] = ACTIONS(11),
    [sym_ror_opcode] = ACTIONS(11),
    [sym_rti_opcode] = ACTIONS(17),
    [sym_rts_opcode] = ACTIONS(17),
    [sym_sbc_opcode] = ACTIONS(9),
    [sym_sec_opcode] = ACTIONS(17),
    [sym_sed_opcode] = ACTIONS(17),
    [sym_sei_opcode] = ACTIONS(17),
    [sym_sta_opcode] = ACTIONS(31),
    [sym_stx_opcode] = ACTIONS(33),
    [sym_sty_opcode] = ACTIONS(35),
    [sym_tax_opcode] = ACTIONS(17),
    [sym_tay_opcode] = ACTIONS(17),
    [sym_tsx_opcode] = ACTIONS(17),
    [sym_txa_opcode] = ACTIONS(17),
    [sym_tcs_opcode] = ACTIONS(17),
    [sym_tya_opcode] = ACTIONS(17),
    [sym_a16_ctrl_cmd] = ACTIONS(37),
    [sym_a8_ctrl_cmd] = ACTIONS(37),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(39),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(41),
  },
  [4] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_adc_opcode] = ACTIONS(107),
    [sym_and_opcode] = ACTIONS(107),
    [sym_asl_opcode] = ACTIONS(107),
    [sym_bcc_opcode] = ACTIONS(107),
    [sym_bcs_opcode] = ACTIONS(107),
    [sym_beq_opcode] = ACTIONS(107),
    [sym_bit_opcode] = ACTIONS(107),
    [sym_bmi_opcode] = ACTIONS(107),
    [sym_bne_opcode] = ACTIONS(107),
    [sym_bpl_opcode] = ACTIONS(107),
    [sym_brk_opcode] = ACTIONS(107),
    [sym_bvc_opcode] = ACTIONS(107),
    [sym_bvs_opcode] = ACTIONS(107),
    [sym_clc_opcode] = ACTIONS(107),
    [sym_cld_opcode] = ACTIONS(107),
    [sym_cli_opcode] = ACTIONS(107),
    [sym_clv_opcode] = ACTIONS(107),
    [sym_cmp_opcode] = ACTIONS(107),
    [sym_cpx_opcode] = ACTIONS(107),
    [sym_cpy_opcode] = ACTIONS(107),
    [sym_dec_opcode] = ACTIONS(107),
    [sym_dex_opcode] = ACTIONS(107),
    [sym_dey_opcode] = ACTIONS(107),
    [sym_eor_opcode] = ACTIONS(107),
    [sym_inc_opcode] = ACTIONS(107),
    [sym_inx_opcode] = ACTIONS(107),
    [sym_iny_opcode] = ACTIONS(107),
    [sym_jmp_opcode] = ACTIONS(107),
    [sym_jsr_opcode] = ACTIONS(107),
    [sym_lda_opcode] = ACTIONS(107),
    [sym_ldx_opcode] = ACTIONS(107),
    [sym_ldy_opcode] = ACTIONS(107),
    [sym_lsr_opcode] = ACTIONS(107),
    [sym_nop_opcode] = ACTIONS(107),
    [sym_ora_opcode] = ACTIONS(107),
    [sym_pha_opcode] = ACTIONS(107),
    [sym_php_opcode] = ACTIONS(107),
    [sym_pla_opcode] = ACTIONS(107),
    [sym_plp_opcode] = ACTIONS(107),
    [sym_rol_opcode] = ACTIONS(107),
    [sym_ror_opcode] = ACTIONS(107),
    [sym_rti_opcode] = ACTIONS(107),
    [sym_rts_opcode] = ACTIONS(107),
    [sym_sbc_opcode] = ACTIONS(107),
    [sym_sec_opcode] = ACTIONS(107),
    [sym_sed_opcode] = ACTIONS(107),
    [sym_sei_opcode] = ACTIONS(107),
    [sym_sta_opcode] = ACTIONS(107),
    [sym_stx_opcode] = ACTIONS(107),
    [sym_sty_opcode] = ACTIONS(107),
    [sym_tax_opcode] = ACTIONS(107),
    [sym_tay_opcode] = ACTIONS(107),
    [sym_tsx_opcode] = ACTIONS(107),
    [sym_txa_opcode] = ACTIONS(107),
    [sym_tcs_opcode] = ACTIONS(107),
    [sym_tya_opcode] = ACTIONS(107),
    [sym_a16_ctrl_cmd] = ACTIONS(103),
    [sym_a8_ctrl_cmd] = ACTIONS(103),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(103),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(103),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_adc_opcode] = ACTIONS(111),
    [sym_and_opcode] = ACTIONS(111),
    [sym_asl_opcode] = ACTIONS(111),
    [sym_bcc_opcode] = ACTIONS(111),
    [sym_bcs_opcode] = ACTIONS(111),
    [sym_beq_opcode] = ACTIONS(111),
    [sym_bit_opcode] = ACTIONS(111),
    [sym_bmi_opcode] = ACTIONS(111),
    [sym_bne_opcode] = ACTIONS(111),
    [sym_bpl_opcode] = ACTIONS(111),
    [sym_brk_opcode] = ACTIONS(111),
    [sym_bvc_opcode] = ACTIONS(111),
    [sym_bvs_opcode] = ACTIONS(111),
    [sym_clc_opcode] = ACTIONS(111),
    [sym_cld_opcode] = ACTIONS(111),
    [sym_cli_opcode] = ACTIONS(111),
    [sym_clv_opcode] = ACTIONS(111),
    [sym_cmp_opcode] = ACTIONS(111),
    [sym_cpx_opcode] = ACTIONS(111),
    [sym_cpy_opcode] = ACTIONS(111),
    [sym_dec_opcode] = ACTIONS(111),
    [sym_dex_opcode] = ACTIONS(111),
    [sym_dey_opcode] = ACTIONS(111),
    [sym_eor_opcode] = ACTIONS(111),
    [sym_inc_opcode] = ACTIONS(111),
    [sym_inx_opcode] = ACTIONS(111),
    [sym_iny_opcode] = ACTIONS(111),
    [sym_jmp_opcode] = ACTIONS(111),
    [sym_jsr_opcode] = ACTIONS(111),
    [sym_lda_opcode] = ACTIONS(111),
    [sym_ldx_opcode] = ACTIONS(111),
    [sym_ldy_opcode] = ACTIONS(111),
    [sym_lsr_opcode] = ACTIONS(111),
    [sym_nop_opcode] = ACTIONS(111),
    [sym_ora_opcode] = ACTIONS(111),
    [sym_pha_opcode] = ACTIONS(111),
    [sym_php_opcode] = ACTIONS(111),
    [sym_pla_opcode] = ACTIONS(111),
    [sym_plp_opcode] = ACTIONS(111),
    [sym_rol_opcode] = ACTIONS(111),
    [sym_ror_opcode] = ACTIONS(111),
    [sym_rti_opcode] = ACTIONS(111),
    [sym_rts_opcode] = ACTIONS(111),
    [sym_sbc_opcode] = ACTIONS(111),
    [sym_sec_opcode] = ACTIONS(111),
    [sym_sed_opcode] = ACTIONS(111),
    [sym_sei_opcode] = ACTIONS(111),
    [sym_sta_opcode] = ACTIONS(111),
    [sym_stx_opcode] = ACTIONS(111),
    [sym_sty_opcode] = ACTIONS(111),
    [sym_tax_opcode] = ACTIONS(111),
    [sym_tay_opcode] = ACTIONS(111),
    [sym_tsx_opcode] = ACTIONS(111),
    [sym_txa_opcode] = ACTIONS(111),
    [sym_tcs_opcode] = ACTIONS(111),
    [sym_tya_opcode] = ACTIONS(111),
    [sym_a16_ctrl_cmd] = ACTIONS(109),
    [sym_a8_ctrl_cmd] = ACTIONS(109),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(109),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(109),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_adc_opcode] = ACTIONS(115),
    [sym_and_opcode] = ACTIONS(115),
    [sym_asl_opcode] = ACTIONS(115),
    [sym_bcc_opcode] = ACTIONS(115),
    [sym_bcs_opcode] = ACTIONS(115),
    [sym_beq_opcode] = ACTIONS(115),
    [sym_bit_opcode] = ACTIONS(115),
    [sym_bmi_opcode] = ACTIONS(115),
    [sym_bne_opcode] = ACTIONS(115),
    [sym_bpl_opcode] = ACTIONS(115),
    [sym_brk_opcode] = ACTIONS(115),
    [sym_bvc_opcode] = ACTIONS(115),
    [sym_bvs_opcode] = ACTIONS(115),
    [sym_clc_opcode] = ACTIONS(115),
    [sym_cld_opcode] = ACTIONS(115),
    [sym_cli_opcode] = ACTIONS(115),
    [sym_clv_opcode] = ACTIONS(115),
    [sym_cmp_opcode] = ACTIONS(115),
    [sym_cpx_opcode] = ACTIONS(115),
    [sym_cpy_opcode] = ACTIONS(115),
    [sym_dec_opcode] = ACTIONS(115),
    [sym_dex_opcode] = ACTIONS(115),
    [sym_dey_opcode] = ACTIONS(115),
    [sym_eor_opcode] = ACTIONS(115),
    [sym_inc_opcode] = ACTIONS(115),
    [sym_inx_opcode] = ACTIONS(115),
    [sym_iny_opcode] = ACTIONS(115),
    [sym_jmp_opcode] = ACTIONS(115),
    [sym_jsr_opcode] = ACTIONS(115),
    [sym_lda_opcode] = ACTIONS(115),
    [sym_ldx_opcode] = ACTIONS(115),
    [sym_ldy_opcode] = ACTIONS(115),
    [sym_lsr_opcode] = ACTIONS(115),
    [sym_nop_opcode] = ACTIONS(115),
    [sym_ora_opcode] = ACTIONS(115),
    [sym_pha_opcode] = ACTIONS(115),
    [sym_php_opcode] = ACTIONS(115),
    [sym_pla_opcode] = ACTIONS(115),
    [sym_plp_opcode] = ACTIONS(115),
    [sym_rol_opcode] = ACTIONS(115),
    [sym_ror_opcode] = ACTIONS(115),
    [sym_rti_opcode] = ACTIONS(115),
    [sym_rts_opcode] = ACTIONS(115),
    [sym_sbc_opcode] = ACTIONS(115),
    [sym_sec_opcode] = ACTIONS(115),
    [sym_sed_opcode] = ACTIONS(115),
    [sym_sei_opcode] = ACTIONS(115),
    [sym_sta_opcode] = ACTIONS(115),
    [sym_stx_opcode] = ACTIONS(115),
    [sym_sty_opcode] = ACTIONS(115),
    [sym_tax_opcode] = ACTIONS(115),
    [sym_tay_opcode] = ACTIONS(115),
    [sym_tsx_opcode] = ACTIONS(115),
    [sym_txa_opcode] = ACTIONS(115),
    [sym_tcs_opcode] = ACTIONS(115),
    [sym_tya_opcode] = ACTIONS(115),
    [sym_a16_ctrl_cmd] = ACTIONS(113),
    [sym_a8_ctrl_cmd] = ACTIONS(113),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(113),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(113),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [sym_adc_opcode] = ACTIONS(119),
    [sym_and_opcode] = ACTIONS(119),
    [sym_asl_opcode] = ACTIONS(119),
    [sym_bcc_opcode] = ACTIONS(119),
    [sym_bcs_opcode] = ACTIONS(119),
    [sym_beq_opcode] = ACTIONS(119),
    [sym_bit_opcode] = ACTIONS(119),
    [sym_bmi_opcode] = ACTIONS(119),
    [sym_bne_opcode] = ACTIONS(119),
    [sym_bpl_opcode] = ACTIONS(119),
    [sym_brk_opcode] = ACTIONS(119),
    [sym_bvc_opcode] = ACTIONS(119),
    [sym_bvs_opcode] = ACTIONS(119),
    [sym_clc_opcode] = ACTIONS(119),
    [sym_cld_opcode] = ACTIONS(119),
    [sym_cli_opcode] = ACTIONS(119),
    [sym_clv_opcode] = ACTIONS(119),
    [sym_cmp_opcode] = ACTIONS(119),
    [sym_cpx_opcode] = ACTIONS(119),
    [sym_cpy_opcode] = ACTIONS(119),
    [sym_dec_opcode] = ACTIONS(119),
    [sym_dex_opcode] = ACTIONS(119),
    [sym_dey_opcode] = ACTIONS(119),
    [sym_eor_opcode] = ACTIONS(119),
    [sym_inc_opcode] = ACTIONS(119),
    [sym_inx_opcode] = ACTIONS(119),
    [sym_iny_opcode] = ACTIONS(119),
    [sym_jmp_opcode] = ACTIONS(119),
    [sym_jsr_opcode] = ACTIONS(119),
    [sym_lda_opcode] = ACTIONS(119),
    [sym_ldx_opcode] = ACTIONS(119),
    [sym_ldy_opcode] = ACTIONS(119),
    [sym_lsr_opcode] = ACTIONS(119),
    [sym_nop_opcode] = ACTIONS(119),
    [sym_ora_opcode] = ACTIONS(119),
    [sym_pha_opcode] = ACTIONS(119),
    [sym_php_opcode] = ACTIONS(119),
    [sym_pla_opcode] = ACTIONS(119),
    [sym_plp_opcode] = ACTIONS(119),
    [sym_rol_opcode] = ACTIONS(119),
    [sym_ror_opcode] = ACTIONS(119),
    [sym_rti_opcode] = ACTIONS(119),
    [sym_rts_opcode] = ACTIONS(119),
    [sym_sbc_opcode] = ACTIONS(119),
    [sym_sec_opcode] = ACTIONS(119),
    [sym_sed_opcode] = ACTIONS(119),
    [sym_sei_opcode] = ACTIONS(119),
    [sym_sta_opcode] = ACTIONS(119),
    [sym_stx_opcode] = ACTIONS(119),
    [sym_sty_opcode] = ACTIONS(119),
    [sym_tax_opcode] = ACTIONS(119),
    [sym_tay_opcode] = ACTIONS(119),
    [sym_tsx_opcode] = ACTIONS(119),
    [sym_txa_opcode] = ACTIONS(119),
    [sym_tcs_opcode] = ACTIONS(119),
    [sym_tya_opcode] = ACTIONS(119),
    [sym_a16_ctrl_cmd] = ACTIONS(117),
    [sym_a8_ctrl_cmd] = ACTIONS(117),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(117),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(117),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_adc_opcode] = ACTIONS(123),
    [sym_and_opcode] = ACTIONS(123),
    [sym_asl_opcode] = ACTIONS(123),
    [sym_bcc_opcode] = ACTIONS(123),
    [sym_bcs_opcode] = ACTIONS(123),
    [sym_beq_opcode] = ACTIONS(123),
    [sym_bit_opcode] = ACTIONS(123),
    [sym_bmi_opcode] = ACTIONS(123),
    [sym_bne_opcode] = ACTIONS(123),
    [sym_bpl_opcode] = ACTIONS(123),
    [sym_brk_opcode] = ACTIONS(123),
    [sym_bvc_opcode] = ACTIONS(123),
    [sym_bvs_opcode] = ACTIONS(123),
    [sym_clc_opcode] = ACTIONS(123),
    [sym_cld_opcode] = ACTIONS(123),
    [sym_cli_opcode] = ACTIONS(123),
    [sym_clv_opcode] = ACTIONS(123),
    [sym_cmp_opcode] = ACTIONS(123),
    [sym_cpx_opcode] = ACTIONS(123),
    [sym_cpy_opcode] = ACTIONS(123),
    [sym_dec_opcode] = ACTIONS(123),
    [sym_dex_opcode] = ACTIONS(123),
    [sym_dey_opcode] = ACTIONS(123),
    [sym_eor_opcode] = ACTIONS(123),
    [sym_inc_opcode] = ACTIONS(123),
    [sym_inx_opcode] = ACTIONS(123),
    [sym_iny_opcode] = ACTIONS(123),
    [sym_jmp_opcode] = ACTIONS(123),
    [sym_jsr_opcode] = ACTIONS(123),
    [sym_lda_opcode] = ACTIONS(123),
    [sym_ldx_opcode] = ACTIONS(123),
    [sym_ldy_opcode] = ACTIONS(123),
    [sym_lsr_opcode] = ACTIONS(123),
    [sym_nop_opcode] = ACTIONS(123),
    [sym_ora_opcode] = ACTIONS(123),
    [sym_pha_opcode] = ACTIONS(123),
    [sym_php_opcode] = ACTIONS(123),
    [sym_pla_opcode] = ACTIONS(123),
    [sym_plp_opcode] = ACTIONS(123),
    [sym_rol_opcode] = ACTIONS(123),
    [sym_ror_opcode] = ACTIONS(123),
    [sym_rti_opcode] = ACTIONS(123),
    [sym_rts_opcode] = ACTIONS(123),
    [sym_sbc_opcode] = ACTIONS(123),
    [sym_sec_opcode] = ACTIONS(123),
    [sym_sed_opcode] = ACTIONS(123),
    [sym_sei_opcode] = ACTIONS(123),
    [sym_sta_opcode] = ACTIONS(123),
    [sym_stx_opcode] = ACTIONS(123),
    [sym_sty_opcode] = ACTIONS(123),
    [sym_tax_opcode] = ACTIONS(123),
    [sym_tay_opcode] = ACTIONS(123),
    [sym_tsx_opcode] = ACTIONS(123),
    [sym_txa_opcode] = ACTIONS(123),
    [sym_tcs_opcode] = ACTIONS(123),
    [sym_tya_opcode] = ACTIONS(123),
    [sym_a16_ctrl_cmd] = ACTIONS(121),
    [sym_a8_ctrl_cmd] = ACTIONS(121),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(121),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(121),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_adc_opcode] = ACTIONS(127),
    [sym_and_opcode] = ACTIONS(127),
    [sym_asl_opcode] = ACTIONS(127),
    [sym_bcc_opcode] = ACTIONS(127),
    [sym_bcs_opcode] = ACTIONS(127),
    [sym_beq_opcode] = ACTIONS(127),
    [sym_bit_opcode] = ACTIONS(127),
    [sym_bmi_opcode] = ACTIONS(127),
    [sym_bne_opcode] = ACTIONS(127),
    [sym_bpl_opcode] = ACTIONS(127),
    [sym_brk_opcode] = ACTIONS(127),
    [sym_bvc_opcode] = ACTIONS(127),
    [sym_bvs_opcode] = ACTIONS(127),
    [sym_clc_opcode] = ACTIONS(127),
    [sym_cld_opcode] = ACTIONS(127),
    [sym_cli_opcode] = ACTIONS(127),
    [sym_clv_opcode] = ACTIONS(127),
    [sym_cmp_opcode] = ACTIONS(127),
    [sym_cpx_opcode] = ACTIONS(127),
    [sym_cpy_opcode] = ACTIONS(127),
    [sym_dec_opcode] = ACTIONS(127),
    [sym_dex_opcode] = ACTIONS(127),
    [sym_dey_opcode] = ACTIONS(127),
    [sym_eor_opcode] = ACTIONS(127),
    [sym_inc_opcode] = ACTIONS(127),
    [sym_inx_opcode] = ACTIONS(127),
    [sym_iny_opcode] = ACTIONS(127),
    [sym_jmp_opcode] = ACTIONS(127),
    [sym_jsr_opcode] = ACTIONS(127),
    [sym_lda_opcode] = ACTIONS(127),
    [sym_ldx_opcode] = ACTIONS(127),
    [sym_ldy_opcode] = ACTIONS(127),
    [sym_lsr_opcode] = ACTIONS(127),
    [sym_nop_opcode] = ACTIONS(127),
    [sym_ora_opcode] = ACTIONS(127),
    [sym_pha_opcode] = ACTIONS(127),
    [sym_php_opcode] = ACTIONS(127),
    [sym_pla_opcode] = ACTIONS(127),
    [sym_plp_opcode] = ACTIONS(127),
    [sym_rol_opcode] = ACTIONS(127),
    [sym_ror_opcode] = ACTIONS(127),
    [sym_rti_opcode] = ACTIONS(127),
    [sym_rts_opcode] = ACTIONS(127),
    [sym_sbc_opcode] = ACTIONS(127),
    [sym_sec_opcode] = ACTIONS(127),
    [sym_sed_opcode] = ACTIONS(127),
    [sym_sei_opcode] = ACTIONS(127),
    [sym_sta_opcode] = ACTIONS(127),
    [sym_stx_opcode] = ACTIONS(127),
    [sym_sty_opcode] = ACTIONS(127),
    [sym_tax_opcode] = ACTIONS(127),
    [sym_tay_opcode] = ACTIONS(127),
    [sym_tsx_opcode] = ACTIONS(127),
    [sym_txa_opcode] = ACTIONS(127),
    [sym_tcs_opcode] = ACTIONS(127),
    [sym_tya_opcode] = ACTIONS(127),
    [sym_a16_ctrl_cmd] = ACTIONS(125),
    [sym_a8_ctrl_cmd] = ACTIONS(125),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(125),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(125),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym_adc_opcode] = ACTIONS(131),
    [sym_and_opcode] = ACTIONS(131),
    [sym_asl_opcode] = ACTIONS(131),
    [sym_bcc_opcode] = ACTIONS(131),
    [sym_bcs_opcode] = ACTIONS(131),
    [sym_beq_opcode] = ACTIONS(131),
    [sym_bit_opcode] = ACTIONS(131),
    [sym_bmi_opcode] = ACTIONS(131),
    [sym_bne_opcode] = ACTIONS(131),
    [sym_bpl_opcode] = ACTIONS(131),
    [sym_brk_opcode] = ACTIONS(131),
    [sym_bvc_opcode] = ACTIONS(131),
    [sym_bvs_opcode] = ACTIONS(131),
    [sym_clc_opcode] = ACTIONS(131),
    [sym_cld_opcode] = ACTIONS(131),
    [sym_cli_opcode] = ACTIONS(131),
    [sym_clv_opcode] = ACTIONS(131),
    [sym_cmp_opcode] = ACTIONS(131),
    [sym_cpx_opcode] = ACTIONS(131),
    [sym_cpy_opcode] = ACTIONS(131),
    [sym_dec_opcode] = ACTIONS(131),
    [sym_dex_opcode] = ACTIONS(131),
    [sym_dey_opcode] = ACTIONS(131),
    [sym_eor_opcode] = ACTIONS(131),
    [sym_inc_opcode] = ACTIONS(131),
    [sym_inx_opcode] = ACTIONS(131),
    [sym_iny_opcode] = ACTIONS(131),
    [sym_jmp_opcode] = ACTIONS(131),
    [sym_jsr_opcode] = ACTIONS(131),
    [sym_lda_opcode] = ACTIONS(131),
    [sym_ldx_opcode] = ACTIONS(131),
    [sym_ldy_opcode] = ACTIONS(131),
    [sym_lsr_opcode] = ACTIONS(131),
    [sym_nop_opcode] = ACTIONS(131),
    [sym_ora_opcode] = ACTIONS(131),
    [sym_pha_opcode] = ACTIONS(131),
    [sym_php_opcode] = ACTIONS(131),
    [sym_pla_opcode] = ACTIONS(131),
    [sym_plp_opcode] = ACTIONS(131),
    [sym_rol_opcode] = ACTIONS(131),
    [sym_ror_opcode] = ACTIONS(131),
    [sym_rti_opcode] = ACTIONS(131),
    [sym_rts_opcode] = ACTIONS(131),
    [sym_sbc_opcode] = ACTIONS(131),
    [sym_sec_opcode] = ACTIONS(131),
    [sym_sed_opcode] = ACTIONS(131),
    [sym_sei_opcode] = ACTIONS(131),
    [sym_sta_opcode] = ACTIONS(131),
    [sym_stx_opcode] = ACTIONS(131),
    [sym_sty_opcode] = ACTIONS(131),
    [sym_tax_opcode] = ACTIONS(131),
    [sym_tay_opcode] = ACTIONS(131),
    [sym_tsx_opcode] = ACTIONS(131),
    [sym_txa_opcode] = ACTIONS(131),
    [sym_tcs_opcode] = ACTIONS(131),
    [sym_tya_opcode] = ACTIONS(131),
    [sym_a16_ctrl_cmd] = ACTIONS(129),
    [sym_a8_ctrl_cmd] = ACTIONS(129),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(129),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(129),
  },
  [11] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(135),
    [sym_adc_opcode] = ACTIONS(138),
    [sym_and_opcode] = ACTIONS(138),
    [sym_asl_opcode] = ACTIONS(138),
    [sym_bcc_opcode] = ACTIONS(138),
    [sym_bcs_opcode] = ACTIONS(138),
    [sym_beq_opcode] = ACTIONS(138),
    [sym_bit_opcode] = ACTIONS(138),
    [sym_bmi_opcode] = ACTIONS(138),
    [sym_bne_opcode] = ACTIONS(138),
    [sym_bpl_opcode] = ACTIONS(138),
    [sym_brk_opcode] = ACTIONS(138),
    [sym_bvc_opcode] = ACTIONS(138),
    [sym_bvs_opcode] = ACTIONS(138),
    [sym_clc_opcode] = ACTIONS(138),
    [sym_cld_opcode] = ACTIONS(138),
    [sym_cli_opcode] = ACTIONS(138),
    [sym_clv_opcode] = ACTIONS(138),
    [sym_cmp_opcode] = ACTIONS(138),
    [sym_cpx_opcode] = ACTIONS(138),
    [sym_cpy_opcode] = ACTIONS(138),
    [sym_dec_opcode] = ACTIONS(138),
    [sym_dex_opcode] = ACTIONS(138),
    [sym_dey_opcode] = ACTIONS(138),
    [sym_eor_opcode] = ACTIONS(138),
    [sym_inc_opcode] = ACTIONS(138),
    [sym_inx_opcode] = ACTIONS(138),
    [sym_iny_opcode] = ACTIONS(138),
    [sym_jmp_opcode] = ACTIONS(138),
    [sym_jsr_opcode] = ACTIONS(138),
    [sym_lda_opcode] = ACTIONS(138),
    [sym_ldx_opcode] = ACTIONS(138),
    [sym_ldy_opcode] = ACTIONS(138),
    [sym_lsr_opcode] = ACTIONS(138),
    [sym_nop_opcode] = ACTIONS(138),
    [sym_ora_opcode] = ACTIONS(138),
    [sym_pha_opcode] = ACTIONS(138),
    [sym_php_opcode] = ACTIONS(138),
    [sym_pla_opcode] = ACTIONS(138),
    [sym_plp_opcode] = ACTIONS(138),
    [sym_rol_opcode] = ACTIONS(138),
    [sym_ror_opcode] = ACTIONS(138),
    [sym_rti_opcode] = ACTIONS(138),
    [sym_rts_opcode] = ACTIONS(138),
    [sym_sbc_opcode] = ACTIONS(138),
    [sym_sec_opcode] = ACTIONS(138),
    [sym_sed_opcode] = ACTIONS(138),
    [sym_sei_opcode] = ACTIONS(138),
    [sym_sta_opcode] = ACTIONS(138),
    [sym_stx_opcode] = ACTIONS(138),
    [sym_sty_opcode] = ACTIONS(138),
    [sym_tax_opcode] = ACTIONS(138),
    [sym_tay_opcode] = ACTIONS(138),
    [sym_tsx_opcode] = ACTIONS(138),
    [sym_txa_opcode] = ACTIONS(138),
    [sym_tcs_opcode] = ACTIONS(138),
    [sym_tya_opcode] = ACTIONS(138),
    [sym_a16_ctrl_cmd] = ACTIONS(133),
    [sym_a8_ctrl_cmd] = ACTIONS(133),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(133),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(133),
  },
  [12] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(105),
    [sym_adc_opcode] = ACTIONS(142),
    [sym_and_opcode] = ACTIONS(142),
    [sym_asl_opcode] = ACTIONS(142),
    [sym_bcc_opcode] = ACTIONS(142),
    [sym_bcs_opcode] = ACTIONS(142),
    [sym_beq_opcode] = ACTIONS(142),
    [sym_bit_opcode] = ACTIONS(142),
    [sym_bmi_opcode] = ACTIONS(142),
    [sym_bne_opcode] = ACTIONS(142),
    [sym_bpl_opcode] = ACTIONS(142),
    [sym_brk_opcode] = ACTIONS(142),
    [sym_bvc_opcode] = ACTIONS(142),
    [sym_bvs_opcode] = ACTIONS(142),
    [sym_clc_opcode] = ACTIONS(142),
    [sym_cld_opcode] = ACTIONS(142),
    [sym_cli_opcode] = ACTIONS(142),
    [sym_clv_opcode] = ACTIONS(142),
    [sym_cmp_opcode] = ACTIONS(142),
    [sym_cpx_opcode] = ACTIONS(142),
    [sym_cpy_opcode] = ACTIONS(142),
    [sym_dec_opcode] = ACTIONS(142),
    [sym_dex_opcode] = ACTIONS(142),
    [sym_dey_opcode] = ACTIONS(142),
    [sym_eor_opcode] = ACTIONS(142),
    [sym_inc_opcode] = ACTIONS(142),
    [sym_inx_opcode] = ACTIONS(142),
    [sym_iny_opcode] = ACTIONS(142),
    [sym_jmp_opcode] = ACTIONS(142),
    [sym_jsr_opcode] = ACTIONS(142),
    [sym_lda_opcode] = ACTIONS(142),
    [sym_ldx_opcode] = ACTIONS(142),
    [sym_ldy_opcode] = ACTIONS(142),
    [sym_lsr_opcode] = ACTIONS(142),
    [sym_nop_opcode] = ACTIONS(142),
    [sym_ora_opcode] = ACTIONS(142),
    [sym_pha_opcode] = ACTIONS(142),
    [sym_php_opcode] = ACTIONS(142),
    [sym_pla_opcode] = ACTIONS(142),
    [sym_plp_opcode] = ACTIONS(142),
    [sym_rol_opcode] = ACTIONS(142),
    [sym_ror_opcode] = ACTIONS(142),
    [sym_rti_opcode] = ACTIONS(142),
    [sym_rts_opcode] = ACTIONS(142),
    [sym_sbc_opcode] = ACTIONS(142),
    [sym_sec_opcode] = ACTIONS(142),
    [sym_sed_opcode] = ACTIONS(142),
    [sym_sei_opcode] = ACTIONS(142),
    [sym_sta_opcode] = ACTIONS(142),
    [sym_stx_opcode] = ACTIONS(142),
    [sym_sty_opcode] = ACTIONS(142),
    [sym_tax_opcode] = ACTIONS(142),
    [sym_tay_opcode] = ACTIONS(142),
    [sym_tsx_opcode] = ACTIONS(142),
    [sym_txa_opcode] = ACTIONS(142),
    [sym_tcs_opcode] = ACTIONS(142),
    [sym_tya_opcode] = ACTIONS(142),
    [sym_a16_ctrl_cmd] = ACTIONS(140),
    [sym_a8_ctrl_cmd] = ACTIONS(140),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(140),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(140),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_adc_opcode] = ACTIONS(146),
    [sym_and_opcode] = ACTIONS(146),
    [sym_asl_opcode] = ACTIONS(146),
    [sym_bcc_opcode] = ACTIONS(146),
    [sym_bcs_opcode] = ACTIONS(146),
    [sym_beq_opcode] = ACTIONS(146),
    [sym_bit_opcode] = ACTIONS(146),
    [sym_bmi_opcode] = ACTIONS(146),
    [sym_bne_opcode] = ACTIONS(146),
    [sym_bpl_opcode] = ACTIONS(146),
    [sym_brk_opcode] = ACTIONS(146),
    [sym_bvc_opcode] = ACTIONS(146),
    [sym_bvs_opcode] = ACTIONS(146),
    [sym_clc_opcode] = ACTIONS(146),
    [sym_cld_opcode] = ACTIONS(146),
    [sym_cli_opcode] = ACTIONS(146),
    [sym_clv_opcode] = ACTIONS(146),
    [sym_cmp_opcode] = ACTIONS(146),
    [sym_cpx_opcode] = ACTIONS(146),
    [sym_cpy_opcode] = ACTIONS(146),
    [sym_dec_opcode] = ACTIONS(146),
    [sym_dex_opcode] = ACTIONS(146),
    [sym_dey_opcode] = ACTIONS(146),
    [sym_eor_opcode] = ACTIONS(146),
    [sym_inc_opcode] = ACTIONS(146),
    [sym_inx_opcode] = ACTIONS(146),
    [sym_iny_opcode] = ACTIONS(146),
    [sym_jmp_opcode] = ACTIONS(146),
    [sym_jsr_opcode] = ACTIONS(146),
    [sym_lda_opcode] = ACTIONS(146),
    [sym_ldx_opcode] = ACTIONS(146),
    [sym_ldy_opcode] = ACTIONS(146),
    [sym_lsr_opcode] = ACTIONS(146),
    [sym_nop_opcode] = ACTIONS(146),
    [sym_ora_opcode] = ACTIONS(146),
    [sym_pha_opcode] = ACTIONS(146),
    [sym_php_opcode] = ACTIONS(146),
    [sym_pla_opcode] = ACTIONS(146),
    [sym_plp_opcode] = ACTIONS(146),
    [sym_rol_opcode] = ACTIONS(146),
    [sym_ror_opcode] = ACTIONS(146),
    [sym_rti_opcode] = ACTIONS(146),
    [sym_rts_opcode] = ACTIONS(146),
    [sym_sbc_opcode] = ACTIONS(146),
    [sym_sec_opcode] = ACTIONS(146),
    [sym_sed_opcode] = ACTIONS(146),
    [sym_sei_opcode] = ACTIONS(146),
    [sym_sta_opcode] = ACTIONS(146),
    [sym_stx_opcode] = ACTIONS(146),
    [sym_sty_opcode] = ACTIONS(146),
    [sym_tax_opcode] = ACTIONS(146),
    [sym_tay_opcode] = ACTIONS(146),
    [sym_tsx_opcode] = ACTIONS(146),
    [sym_txa_opcode] = ACTIONS(146),
    [sym_tcs_opcode] = ACTIONS(146),
    [sym_tya_opcode] = ACTIONS(146),
    [sym_a16_ctrl_cmd] = ACTIONS(144),
    [sym_a8_ctrl_cmd] = ACTIONS(144),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(144),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(144),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(152), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(158), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(138), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(164), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(169), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(152), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(158), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(152), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_COMMA,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(169), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(180), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(184), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(188), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(192), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(196), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(200), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(204), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(208), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(212), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(216), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(220), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(224), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(228), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(158), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(152), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      sym_label,
      sym_a16_ctrl_cmd,
      sym_a8_ctrl_cmd,
      aux_sym_addr_ctrl_cmd_token1,
      aux_sym_align_ctrl_cmd_token1,
    ACTIONS(232), 56,
      sym_adc_opcode,
      sym_and_opcode,
      sym_asl_opcode,
      sym_bcc_opcode,
      sym_bcs_opcode,
      sym_beq_opcode,
      sym_bit_opcode,
      sym_bmi_opcode,
      sym_bne_opcode,
      sym_bpl_opcode,
      sym_brk_opcode,
      sym_bvc_opcode,
      sym_bvs_opcode,
      sym_clc_opcode,
      sym_cld_opcode,
      sym_cli_opcode,
      sym_clv_opcode,
      sym_cmp_opcode,
      sym_cpx_opcode,
      sym_cpy_opcode,
      sym_dec_opcode,
      sym_dex_opcode,
      sym_dey_opcode,
      sym_eor_opcode,
      sym_inc_opcode,
      sym_inx_opcode,
      sym_iny_opcode,
      sym_jmp_opcode,
      sym_jsr_opcode,
      sym_lda_opcode,
      sym_ldx_opcode,
      sym_ldy_opcode,
      sym_lsr_opcode,
      sym_nop_opcode,
      sym_ora_opcode,
      sym_pha_opcode,
      sym_php_opcode,
      sym_pla_opcode,
      sym_plp_opcode,
      sym_rol_opcode,
      sym_ror_opcode,
      sym_rti_opcode,
      sym_rts_opcode,
      sym_sbc_opcode,
      sym_sec_opcode,
      sym_sed_opcode,
      sym_sei_opcode,
      sym_sta_opcode,
      sym_stx_opcode,
      sym_sty_opcode,
      sym_tax_opcode,
      sym_tay_opcode,
      sym_tsx_opcode,
      sym_txa_opcode,
      sym_tcs_opcode,
      sym_tya_opcode,
  [1773] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(250), 1,
      sym_imm_prefix,
    STATE(15), 1,
      sym_operand_8,
    STATE(21), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [1818] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    STATE(15), 1,
      sym_operand_8,
    STATE(21), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [1860] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(250), 1,
      sym_imm_prefix,
    STATE(14), 1,
      sym_operand_16,
    STATE(15), 1,
      sym_operand_8,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [1902] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(250), 1,
      sym_imm_prefix,
    STATE(36), 1,
      sym_operand_8,
    STATE(37), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [1944] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(250), 1,
      sym_imm_prefix,
    STATE(19), 1,
      sym_operand_16,
    STATE(20), 1,
      sym_operand_8,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [1986] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(252), 1,
      sym_acc_register,
    STATE(14), 1,
      sym_operand_16,
    STATE(15), 1,
      sym_operand_8,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2028] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(17), 2,
      sym_operand_8,
      sym_operand_16,
  [2065] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    STATE(36), 1,
      sym_operand_8,
    STATE(37), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2104] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    STATE(14), 1,
      sym_operand_16,
    STATE(15), 1,
      sym_operand_8,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2143] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(254), 1,
      sym_symbol,
    STATE(20), 1,
      sym_operand_8,
    STATE(37), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2182] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    ACTIONS(254), 1,
      sym_symbol,
    STATE(15), 1,
      sym_operand_8,
    STATE(37), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2221] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_symbol,
    ACTIONS(238), 1,
      anon_sym_PERCENT,
    ACTIONS(240), 1,
      sym_dec_8,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_h,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(248), 1,
      sym_dec_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(27), 2,
      sym_operand_8,
      sym_operand_16,
  [2258] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_symbol,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_h,
    ACTIONS(264), 1,
      sym_dec_16,
    STATE(37), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
  [2287] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    STATE(60), 1,
      sym_operand_8,
    ACTIONS(240), 2,
      sym_symbol,
      sym_dec_8,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2314] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_hex_8_token2,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_h,
    STATE(23), 1,
      sym_operand_8,
    ACTIONS(240), 2,
      sym_symbol,
      sym_dec_8,
    STATE(13), 2,
      sym_bin_8,
      sym_hex_8,
  [2341] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_symbol,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_h,
    ACTIONS(264), 1,
      sym_dec_16,
    STATE(35), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
  [2367] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_symbol,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_h,
    ACTIONS(264), 1,
      sym_dec_16,
    STATE(70), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
  [2393] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_symbol,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_h,
    ACTIONS(264), 1,
      sym_dec_16,
    STATE(37), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
  [2419] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_symbol,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_h,
    ACTIONS(264), 1,
      sym_dec_16,
    STATE(4), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
  [2445] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_symbol,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_h,
    ACTIONS(264), 1,
      sym_dec_16,
    STATE(16), 1,
      sym_operand_16,
    STATE(9), 2,
      sym_bin_16,
      sym_hex_16,
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_bin_8_token1,
    ACTIONS(274), 1,
      aux_sym_bin_16_token1,
  [2481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_x_register,
    ACTIONS(282), 1,
      sym_y_register,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_hex_8_token1,
    ACTIONS(286), 1,
      aux_sym_hex_16_token1,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_x_register,
  [2518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_x_register,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_bin_8_token1,
  [2539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_y_register,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_y_register,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_x_register,
  [2574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_y_register,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_hex_8_token1,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_bin_16_token1,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_hex_16_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 73,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 363,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 509,
  [SMALL_STATE(22)] = 582,
  [SMALL_STATE(23)] = 653,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 793,
  [SMALL_STATE(26)] = 863,
  [SMALL_STATE(27)] = 933,
  [SMALL_STATE(28)] = 1003,
  [SMALL_STATE(29)] = 1073,
  [SMALL_STATE(30)] = 1143,
  [SMALL_STATE(31)] = 1213,
  [SMALL_STATE(32)] = 1283,
  [SMALL_STATE(33)] = 1353,
  [SMALL_STATE(34)] = 1423,
  [SMALL_STATE(35)] = 1493,
  [SMALL_STATE(36)] = 1563,
  [SMALL_STATE(37)] = 1633,
  [SMALL_STATE(38)] = 1703,
  [SMALL_STATE(39)] = 1773,
  [SMALL_STATE(40)] = 1818,
  [SMALL_STATE(41)] = 1860,
  [SMALL_STATE(42)] = 1902,
  [SMALL_STATE(43)] = 1944,
  [SMALL_STATE(44)] = 1986,
  [SMALL_STATE(45)] = 2028,
  [SMALL_STATE(46)] = 2065,
  [SMALL_STATE(47)] = 2104,
  [SMALL_STATE(48)] = 2143,
  [SMALL_STATE(49)] = 2182,
  [SMALL_STATE(50)] = 2221,
  [SMALL_STATE(51)] = 2258,
  [SMALL_STATE(52)] = 2287,
  [SMALL_STATE(53)] = 2314,
  [SMALL_STATE(54)] = 2341,
  [SMALL_STATE(55)] = 2367,
  [SMALL_STATE(56)] = 2393,
  [SMALL_STATE(57)] = 2419,
  [SMALL_STATE(58)] = 2445,
  [SMALL_STATE(59)] = 2471,
  [SMALL_STATE(60)] = 2481,
  [SMALL_STATE(61)] = 2491,
  [SMALL_STATE(62)] = 2501,
  [SMALL_STATE(63)] = 2511,
  [SMALL_STATE(64)] = 2518,
  [SMALL_STATE(65)] = 2525,
  [SMALL_STATE(66)] = 2532,
  [SMALL_STATE(67)] = 2539,
  [SMALL_STATE(68)] = 2546,
  [SMALL_STATE(69)] = 2553,
  [SMALL_STATE(70)] = 2560,
  [SMALL_STATE(71)] = 2567,
  [SMALL_STATE(72)] = 2574,
  [SMALL_STATE(73)] = 2581,
  [SMALL_STATE(74)] = 2588,
  [SMALL_STATE(75)] = 2595,
  [SMALL_STATE(76)] = 2602,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1, 0, 0), REDUCE(sym_operand_16, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ca65(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
