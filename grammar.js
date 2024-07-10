module.exports = grammar({
  name: "asm6502",

  extras: ($) => [$.comment, /\s/],

  word: ($) => $.symbol,

  rules: {
    asm: ($) => repeat($._asm_factor),

    _asm_factor: ($) => choice($.inst, $.const_assignment, $.ctrl_cmd),

    comment: ($) => token(seq(";", /.*/)),

    /**
     * Instructions
     */
    inst: ($) =>
      choice(
        /**
         * Implied Addressing Instruction.
         * Example: CLC
         */
        $.impl_addr_inst,

        /**
         * Accumulator Addressing Instruction.
         * Example: ROL A
         */
        $.acc_addr_inst,

        /**
         * Immediate Addressing Instruction.
         * Example: LDA #$07
         */
        $.imm_addr_inst,

        /**
         * Absolute Addressing Instruction.
         * Example: LDA $3010
         */
        $.abs_addr_inst,

        /**
         * Zero-Page Addressing Instruction.
         * Example: LDA $3010
         */
        $.zp_addr_inst,

        /**
         * Indexed Addressing Instruction: Absolute,X.
         * Example: LDA $3120,X
         */
        $.abs_x_addr_inst,

        /**
         * Indexed Addressing Instruction: Absolute,Y.
         * Example: LDX $8240,Y
         */
        $.abs_y_addr_inst,

        /**
         * Indexed Addressing Instruction: Zero-Page,X.
         * Example: LDA $80,X
         */
        $.zp_x_addr_inst,

        /**
         * Indexed Addressing Instruction: Zero-Page,Y.
         * Example: LDX $60,Y
         */
        $.zp_y_addr_inst,

        /**
         * Indirect Addressing Instruction.
         * Example: JMP ($FF82)
         */
        $.ind_addr_inst,

        /**
         * Pre-Indexed Indirect Addressing Instruction.
         * Example: LDA ($70,X)
         */
        $.ind_x_addr_inst,

        /**
         * Post-Indexed Indirect Addressing Instruction.
         * Example: LDA ($70),Y
         */
        $.ind_y_addr_inst,

        /**
         * Relative Addressing Instruction.
         * Example: BEQ $1005
         */
        $.rel_addr_inst,
      ),

    /**
     * Implied Addressing Instructions.
     * Example: OPC
     */
    impl_addr_inst: ($) =>
      choice(
        $.brk_opcode,
        $.clc_opcode,
        $.cld_opcode,
        $.cli_opcode,
        $.clv_opcode,
        $.dex_opcode,
        $.dey_opcode,
        $.inx_opcode,
        $.iny_opcode,
        $.nop_opcode,
        $.pha_opcode,
        $.php_opcode,
        $.pla_opcode,
        $.plp_opcode,
        $.rti_opcode,
        $.rts_opcode,
        $.sec_opcode,
        $.sed_opcode,
        $.sei_opcode,
        $.tax_opcode,
        $.tay_opcode,
        $.tsx_opcode,
        $.txa_opcode,
        $.tcs_opcode,
        $.tya_opcode,
      ),

    /**
     * Accumulator Addressing Instructions.
     * Example: OPC A
     */
    acc_addr_inst: ($) =>
      prec.left(
        choice(
          ...[$.asl_opcode, $.rol_opcode, $.ror_opcode].map((opcode) =>
            seq(opcode, $.acc_register),
          ),
        ),
      ),

    /**
     * Immediate Addressing Instructions.
     * Example: OPC #$BB
     */
    imm_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.cpx_opcode,
          $.cpy_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.sbc_opcode,
        ].map((opcode) => seq(opcode, $.imm_prefix, $.operand_8)),
      ),

    /**
     * Absolute Addressing Instructions.
     * Example: OPC $LLHH
     */
    abs_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.bit_opcode,
          $.cmp_opcode,
          $.cpx_opcode,
          $.cpy_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.jmp_opcode,
          $.jsr_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
          $.stx_opcode,
          $.sty_opcode,
        ].map((opcode) => seq(opcode, choice($.operand_16, $.symbol))),
      ),

    /**
     * Zero-Page Addressing Instructions.
     * Example: OPC $LL
     */
    zp_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.bit_opcode,
          $.cmp_opcode,
          $.cpx_opcode,
          $.cpy_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
          $.stx_opcode,
          $.sty_opcode,
        ].map((opcode) => seq(opcode, $.operand_8)),
      ),

    /**
     * Indexed Addressing Instructions: Absolute,X.
     * Example: OPC $LLHH,X
     */
    abs_x_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.cmp_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.lda_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) => seq(opcode, $.operand_16, ",", $.x_register)),
      ),

    /**
     * Indexed Addressing Instructions: Absolute,Y.
     * Example: OPC $LLHH,Y
     */
    abs_y_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ldx_opcode,
          $.ora_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) => seq(opcode, $.operand_16, ",", $.y_register)),
      ),

    /**
     * Indexed Addressing Instructions: Zero-Page,X.
     * Example: OPC $LL,X
     */
    zp_x_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.asl_opcode,
          $.cmp_opcode,
          $.dec_opcode,
          $.eor_opcode,
          $.inc_opcode,
          $.lda_opcode,
          $.ldy_opcode,
          $.lsr_opcode,
          $.ora_opcode,
          $.rol_opcode,
          $.ror_opcode,
          $.sbc_opcode,
          $.sta_opcode,
          $.sty_opcode,
        ].map((opcode) => seq(opcode, $.operand_8, ",", $.x_register)),
      ),

    /**
     * Indexed Addressing Instructions: Zero-Page,Y.
     * Example: OPC $LL,Y
     */
    zp_y_addr_inst: ($) =>
      choice(
        ...[$.ldx_opcode, $.stx_opcode].map((opcode) =>
          seq(opcode, $.operand_8, ",", $.y_register),
        ),
      ),

    /**
     * Indirect Addressing Instructions.
     * Example: OPC ($LLHH)
     */
    ind_addr_inst: ($) =>
      choice(
        ...[$.jmp_opcode].map((opcode) => seq(opcode, "(", $.operand_16, ")")),
      ),

    /**
     * Pre-Indexed Indirect Addressing Instruction.
     * OPC ($LL,X)
     */
    ind_x_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ora_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) =>
          seq(opcode, "(", $.operand_8, ",", $.x_register, ")"),
        ),
      ),

    /**
     * Post-Indexed Indirect Addressing Instructions.
     * Example: OPC ($LL),Y
     */
    ind_y_addr_inst: ($) =>
      choice(
        ...[
          $.adc_opcode,
          $.and_opcode,
          $.cmp_opcode,
          $.eor_opcode,
          $.lda_opcode,
          $.ora_opcode,
          $.sbc_opcode,
          $.sta_opcode,
        ].map((opcode) =>
          seq(opcode, "(", $.operand_8, ")", ",", $.y_register),
        ),
      ),

    /**
     * Relative Addressing Instruction.
     * Example: OPC $BB
     */
    rel_addr_inst: ($) =>
      choice(
        ...[
          $.bcc_opcode,
          $.bcs_opcode,
          $.beq_opcode,
          $.bmi_opcode,
          $.bne_opcode,
          $.bpl_opcode,
          $.bvc_opcode,
          $.bvs_opcode,
        ].map((opcode) => seq(opcode, $.operand_16)),
      ),

    /**
     * Opcodes
     */

    adc_opcode: ($) => /[Aa][Dd][Cc]/,
    and_opcode: ($) => /[Aa][Nn][Dd]/,
    asl_opcode: ($) => /[Aa][Ss][Ll]/,
    bcc_opcode: ($) => /[Bb][Cc][Cc]/,
    bcs_opcode: ($) => /[Bb][Cc][Ss]/,
    beq_opcode: ($) => /[Bb][Ee][Qq]/,
    bit_opcode: ($) => /[Bb][Ii][Tt]/,
    bmi_opcode: ($) => /[Bb][Mm][Ii]/,
    bne_opcode: ($) => /[Bb][Nn][Ee]/,
    bpl_opcode: ($) => /[Bb][Pp][Ll]/,
    brk_opcode: ($) => /[Bb][Rr][Kk]/,
    bvc_opcode: ($) => /[Bb][Vv][Cc]/,
    bvs_opcode: ($) => /[Bb][Vv][Ss]/,
    clc_opcode: ($) => /[Cc][Ll][Cc]/,
    cld_opcode: ($) => /[Cc][Ll][Dd]/,
    cli_opcode: ($) => /[Cc][Ll][Ii]/,
    clv_opcode: ($) => /[Cc][Ll][Vv]/,
    cmp_opcode: ($) => /[Cc][Mm][Pp]/,
    cpx_opcode: ($) => /[Cc][Pp][Xx]/,
    cpy_opcode: ($) => /[Cc][Pp][Yy]/,
    dec_opcode: ($) => /[Dd][Ee][Cc]/,
    dex_opcode: ($) => /[Dd][Ee][Xx]/,
    dey_opcode: ($) => /[Dd][Ee][Yy]/,
    eor_opcode: ($) => /[Ee][Oo][Rr]/,
    inc_opcode: ($) => /[Ii][Nn][Cc]/,
    inx_opcode: ($) => /[Ii][Nn][Xx]/,
    iny_opcode: ($) => /[Ii][Nn][Yy]/,
    jmp_opcode: ($) => /[Jj][Mm][Pp]/,
    jsr_opcode: ($) => /[Jj][Ss][Rr]/,
    lda_opcode: ($) => /[Ll][Dd][Aa]/,
    ldx_opcode: ($) => /[Ll][Dd][Xx]/,
    ldy_opcode: ($) => /[Ll][Dd][Yy]/,
    lsr_opcode: ($) => /[Ll][Ss][Rr]/,
    nop_opcode: ($) => /[Nn][Oo][Pp]/,
    ora_opcode: ($) => /[Oo][Rr][Aa]/,
    pha_opcode: ($) => /[Pp][Hh][Aa]/,
    php_opcode: ($) => /[Pp][Hh][Pp]/,
    pla_opcode: ($) => /[Pp][Ll][Aa]/,
    plp_opcode: ($) => /[Pp][Ll][Pp]/,
    rol_opcode: ($) => /[Rr][Oo][Ll]/,
    ror_opcode: ($) => /[Rr][Oo][Rr]/,
    rti_opcode: ($) => /[Rr][Tt][Ii]/,
    rts_opcode: ($) => /[Rr][Tt][Ss]/,
    sbc_opcode: ($) => /[Ss][Bb][Cc]/,
    sec_opcode: ($) => /[Ss][Ee][Cc]/,
    sed_opcode: ($) => /[Ss][Ee][Dd]/,
    sei_opcode: ($) => /[Ss][Ee][Ii]/,
    sta_opcode: ($) => /[Ss][Tt][Aa]/,
    stx_opcode: ($) => /[Ss][Tt][Xx]/,
    sty_opcode: ($) => /[Ss][Tt][Yy]/,
    tax_opcode: ($) => /[Tt][Aa][Xx]/,
    tay_opcode: ($) => /[Tt][Aa][Yy]/,
    tsx_opcode: ($) => /[Tt][Ss][Xx]/,
    txa_opcode: ($) => /[Tt][Xx][Aa]/,
    tcs_opcode: ($) => /[Tt][Cc][Ss]/,
    tya_opcode: ($) => /[Tt][Yy][Aa]/,

    /**
     * Operand with an 8-bit value.
     */
    operand_8: ($) => choice($.bin_8, $.dec_8, $.hex_8),

    /**
     * 8-bit binary length number.
     */
    bin_8: ($) => seq("%", /0*[01]{1,8}/),

    /**
     * 8-bit decimal length number.
     */
    dec_8: ($) => /0*(25[0-5]|2[0-4][0-9]|[01]?[0-9]{1,2})/,

    /**
     * 8-bit hexadecimal length number.
     */
    hex_8: ($) =>
      choice(seq("$", /0*[0-9a-fA-F]{1,2}/), seq(/0*[0-9a-fA-F]{1,2}h/)),

    /**
     * Operand with a 16-bit length value.
     */
    operand_16: ($) => choice($.bin_16, $.dec_16, $.hex_16),

    /**
     * 16-bit length binary number.
     */
    bin_16: ($) => seq("%", /0*[01]{9,16}/),

    /**
     * 16-bit length decimal number.
     */
    dec_16: ($) =>
      /0*(6553[0-5]|655[0-2]\d|65[0-4]\d{2}|6[0-4]\d{3}|[1-5]?\d{1,4})/,

    /**
     * 16-bit length hexadecimal number.
     */
    hex_16: ($) => seq("$", /0*[0-9a-fA-F]{3,4}/),

    /**
     * Registers.
     */

    /**
     * Accumulator.
     */
    acc_register: ($) => /[aA]/,

    /**
     * The X register.
     */
    x_register: ($) => /[xX]/,

    /**
     * The Y register.
     */
    y_register: ($) => /[yY]/,

    imm_prefix: ($) => "#",

    /*
     * EXPRESSIONS
     */

    exp: ($) =>
      choice(
        $.add_op,
        $.bankbyte_op,
        $.bit_and_op,
        $.bit_or_op,
        $.bit_xor_op,
        $.bitnot_op,
        $.bool_and_op,
        $.bool_not_op,
        $.bool_or_op,
        $.bool_xor_op,
        $.div_op,
        $.eql_op,
        $.gt_op,
        $.gte_op,
        $.hibyte_op,
        $.symbol,
        $.lobyte_op,
        $.lt_op,
        $.lte_op,
        $.mod_op,
        $.mult_op,
        $.not_eql_op,
        $.num_32,
        $.pseudo_var,
        $.shift_left_op,
        $.shift_right_op,
        $.sub_op,
        $.unary_neg_op,
        $.unary_pos_op,
        seq("(", $.exp, ")"),
      ),

    unary_pos_op: ($) => prec.right(1, seq("+", $.exp)),

    unary_neg_op: ($) => prec.right(1, seq("-", $.exp)),

    bitnot_op: ($) => prec.left(1, seq(choice(".BITNOT", "~"), $.exp)),

    lobyte_op: ($) => prec.left(2, seq(choice(".LOBYTE", "<"), $.exp)),

    hibyte_op: ($) => prec.left(1, seq(choice(".HIBYTE", ">"), $.exp)),

    bankbyte_op: ($) => prec.right(1, seq(choice(".BANKBYTE", "^"), $.exp)),

    mult_op: ($) => prec.left(2, seq($.exp, "*", $.exp)),

    div_op: ($) => prec.left(2, seq($.exp, "/", $.exp)),

    mod_op: ($) => prec.left(2, seq($.exp, ".MOD", $.exp)),

    bit_and_op: ($) => prec.left(2, seq($.exp, choice(".BITAND", "&"), $.exp)),

    bit_xor_op: ($) => prec.left(2, seq($.exp, choice(".BITXOR", "^"), $.exp)),

    shift_left_op: ($) => prec.left(2, seq($.exp, choice(".SHL", "<<"), $.exp)),

    shift_right_op: ($) =>
      prec.left(2, seq($.exp, choice(".SHR", ">>"), $.exp)),

    add_op: ($) => prec.left(3, seq($.exp, "+", $.exp)),

    sub_op: ($) => prec.left(3, seq($.exp, "-", $.exp)),

    bit_or_op: ($) => prec.left(3, seq($.exp, choice(".BITOR", "|"), $.exp)),

    eql_op: ($) => prec.left(4, seq($.exp, "=", $.exp)),

    not_eql_op: ($) => prec.left(4, seq($.exp, "<>", $.exp)),

    lt_op: ($) => prec.left(4, seq($.exp, "<", $.exp)),

    gt_op: ($) => prec.left(4, seq($.exp, ">", $.exp)),

    lte_op: ($) => prec.left(4, seq($.exp, "<=", $.exp)),

    gte_op: ($) => prec.left(4, seq($.exp, ">=", $.exp)),

    bool_and_op: ($) => prec.left(5, seq($.exp, choice(".AND", "&&"), $.exp)),

    bool_xor_op: ($) => prec.left(5, seq($.exp, ".XOR", $.exp)),

    bool_or_op: ($) => prec.left(6, seq($.exp, choice(".OR", "||"), $.exp)),

    bool_not_op: ($) => prec.right(7, seq(choice(".NOT", "!"), $.exp)),

    num_32: ($) =>
      choice(
        /\d+/, // decimal
        seq("$", /[0-9a-fA-F]+/), // hex $ notation
        seq(/[0-9a-fA-F]+/, "h"), // hex h notation
        seq("%", /[0-1]+/), // binary
      ),

    /*
     * PSEUDO VARIABLES
     */

    star_pseudo_var: ($) => "*",
    asize_pseudo_var: ($) => /\.[Aa][Ss][Ii][Zz][Ee]/,
    cpu_pseudo_var: ($) => /\.[Cc][Pp][Uu]/,
    isize_pseudo_var: ($) => /\.[Ii][Ss][Ii][Zz][Ee]/,
    paramcount_pseudo_var: ($) => /\.[Pp][Aa][Rr][Aa][Mm][Cc][Oo][Uu][Nn][Tt]/,
    time_pseudo_var: ($) => /\.[Tt][Ii][Mm][Ee]/,
    version_pseudo_var: ($) => /\.[Vv][Ee][Rr][Ss][Ii][Oo][Nn]/,

    pseudo_var: ($) =>
      prec(
        1,
        choice(
          $.star_pseudo_var,
          $.asize_pseudo_var,
          $.cpu_pseudo_var,
          $.isize_pseudo_var,
          $.paramcount_pseudo_var,
          $.time_pseudo_var,
          $.version_pseudo_var,
        ),
      ),

    /*
     * CONTROL COMMANDS
     */

    a16_ctrl_cmd: ($) => /\.[Aa]16/,

    a8_ctrl_cmd: ($) => /\.[Aa]8/,

    addr_ctrl_cmd: ($) =>
      seq(/\.[Aa][Dd][Dd][Rr]/, $.exp, optional(repeat1(seq(",", $.exp)))),

    align_ctrl_cmd: ($) =>
      seq(/\.[Aa][Ll][Ii][Gg][Nn]/, $.exp, optional(seq(",", $.exp))),

    asciiz_ctrl_cmd: ($) =>
      seq(
        /\.[Aa][Ss][Cc][Ii][Ii][Zz]/,
        $.str,
        optional(repeat1(seq(",", $.str))),
      ),

    assert_ctrl_cmd: ($) =>
      seq(
        /\.[Aa][Ss][Ss][Ee][Rr][Tt]/,
        $.exp,
        ",",
        choice("warning", "error", "ldwarning", "lderror"),
        optional(seq(",", $.str)),
      ),

    autoimport_ctrl_cmd: ($) =>
      seq(/\.[Aa][Uu][Tt][Oo][Ii][Mm][Pp][Oo][Rr][Tt]/, choice("+", "-")),

    bankbytes_ctrl_cmd: ($) =>
      seq(
        /\.[Bb][Aa][Nn][Kk][Bb][Yy][Tt][Ee][Ss]/,
        seq($.exp, optional(repeat1(seq(",", $.exp)))),
      ),

    bss_ctrl_cmd: ($) => /\.[Bb][Ss][Ss]/,

    byte_ctrl_cmd: ($) =>
      seq(
        /\.[Bb][Yy][Tt][Ee]?/,
        choice($.exp, $.str),
        optional(repeat1(seq(",", choice($.exp, $.str)))),
      ),

    case_ctrl_cmd: ($) => seq(/\.[Cc][Aa][Ss][Ee]/, choice("+", "-")),

    charmap_ctrl_cmd: ($) =>
      seq(/\.[Cc][Hh][Aa][Rr][Mm][Aa][Pp]/, $.exp, ",", $.exp),

    code_ctrl_cmd: ($) => /\.[Cc][Oo][Dd][Ee]/,

    condes_ctrl_cmd: ($) =>
      seq(
        /\.[Cc][Oo][Nn][Dd][Ee][Ss]/,
        $.symbol,
        ",",
        choice("constructor", "destructor", $.exp),
        optional(seq(",", $.exp)),
      ),

    constructor_ctrl_cmd: ($) =>
      seq(
        /\.[Cc][Oo][Nn][Ss][Tt][Rr][Uu][Cc][Tt][Oo][Rr]/,
        $.symbol,
        optional(seq(",", $.exp)),
      ),

    data_ctrl_cmd: ($) => /\.[Dd][Aa][Tt][Aa]/,

    dbyt_ctrl_cmd: ($) =>
      seq(/\.[Dd][Bb][Yy][Tt]/, $.exp, optional(repeat1(seq(",", $.exp)))),

    debuginfo_ctrl_cmd: ($) =>
      seq(/\.[Dd][Ee][Bb][Uu][Gg][Ii][Nn][Ff][Oo]/, choice("+", "-")),

    define_ctrl_cmd: ($) =>
      seq(
        /\.[Dd][Ee][Ff][Ii][Nn][Ee]/,
        $.symbol,
        choice($.exp, $.str),
        optional(repeat1(seq(",", choice($.exp, $.str)))),
      ),

    delmacro_ctrl_cmd: ($) =>
      seq(/\.[Dd][Ee][Ll][Mm][Aa][Cc]([Rr][Oo])?/, $.symbol),

    destructor_ctrl_cmd: ($) =>
      seq(
        /\.[Dd][Ee][Ss][Tr][Rr][Uu][Cc][Tt][Oo][Rr]/,
        $.symbol,
        optional(seq(",", $.exp)),
      ),

    dword_ctrl_cmd: ($) =>
      seq(/\.[Dd][Ww][Oo][Rr][Dd]/, $.exp, optional(repeat1(seq(",", $.exp)))),

    end_ctrl_cmd: ($) => /\.[Ee][Nn][Dd]/,

    endenum_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Ee][Nn][Uu][Mm]/,

    endmacro_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Mm][Aa][Cc]([Rr][Oo])?/,

    endproc_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Pp][Rr][Oo][Cc]/,

    endrepeat_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Rr][Ee][Pp][Ee][Aa][Tt]/,

    endscope_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Ss][Cc][Oo][Pp][Ee]/,

    endstruct_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Ss][Tt][Rr][Uu][Cc][Tt]/,

    endunion_ctrl_cmd: ($) => /\.[Ee][Nn][Dd][Uu][Nn][Ii][Oo][Nn]/,

    enum_ctrl_cmd: ($) =>
      seq(
        /\.[Ee][Nn][Uu][Mm]/,
        optional(field("enum_name", $.symbol)),
        "\n",
        optional(repeat1($.enum_def)),
        /\.[Ee][Nn][Dd][Ee][Nn][Uu][Mm]/,
      ),

    enum_def: ($) =>
      seq(field("enum_symbol", $.symbol), optional(seq("=", $.exp))),

    error_ctrl_cmd: ($) => seq(/\.[Ee][Rr][Rr][Oo][Rr]/, $.str),

    export_ctrl_cmd: ($) =>
      seq(
        /\.[Ee][Xx][Pp][Oo][Rr][Tt]/,
        $._export_ctrl_cmd_factor,
        optional(repeat1(seq(",", $._export_ctrl_cmd_factor))),
      ),

    _export_ctrl_cmd_factor: ($) =>
      choice($.symbol, seq($.label, choice($.num_assignment, $.symbol))),

    exportzp_ctrl_cmd: ($) =>
      seq(
        /\.[Ee][Xx][Pp][Oo][Rr][Tt][Zz][Pp]/,
        $._exportzp_ctrl_cmd_factor,
        optional(repeat1(seq(",", $._exportzp_ctrl_cmd_factor))),
      ),

    _exportzp_ctrl_cmd_factor: ($) =>
      choice($.symbol, seq($.label, choice($.num_assignment, $.symbol))),

    faraddr_ctrl_cmd: ($) =>
      seq(
        /\.[Ff][Aa][Rr][Aa][Dd][Dd][Rr]/,
        $._faraddr_ctrl_cmd_factor,
        optional(repeat1(seq(",", $._faraddr_ctrl_cmd_factor))),
      ),

    _faraddr_ctrl_cmd_factor: ($) => choice($.symbol, $.num_32),

    fatal_ctrl_cmd: ($) => seq(/\.[Ff][Aa][Tt][Aa][Ll]/, $.str),

    feature_ctrl_cmd: ($) =>
      seq(
        /\.[Ff][Ee][Aa][Tt][Uu][Rr][Ee]/,
        choice(
          "addrsize",
          "at_in_identifiers",
          "bracket_as_indirect",
          "c_comments",
          "dollar_in_identifiers",
          "dollar_is_pc",
          "force_range",
          "labels_without_colons",
          "leading_dot_in_identifiers",
          "loose_char_term",
          "loose_string_term",
          "missing_char_term",
          "org_per_seg",
          "pc_assignment",
          "string_escapes",
          "ubiquitous_idents",
          "underline_in_numbers",
        ),
      ),

    fileopt_ctrl_cmd: ($) =>
      seq(
        choice(/\.[Ff][Ii][Ll][Ee][Oo][Pp][Tt]/, /\.[Ff][Oo][Pp][Tt]/),
        field(
          "keyword",
          choice(choice("author", "comment", "compiler"), $.exp),
        ),
        ",",
        $.str,
      ),

    forceimport_ctrl_cmd: ($) =>
      seq(
        /\.[Ff][Oo][Rr][Cc][Ee][Ii][Mm][Pp][Oo][Rr][Tt]/,
        $.symbol,
        optional(repeat1(seq(",", $.symbol))),
      ),

    global_ctrl_cmd: ($) =>
      seq(
        /\.[Gg][Ll][Oo][Bb][Aa][Ll]/,
        $.symbol,
        optional(repeat1(seq(",", $.symbol))),
      ),

    globalzp_ctrl_cmd: ($) =>
      seq(
        /\.[Gg][Ll][Oo][Bb][Aa][Ll][Zz][Pp]/,
        $.symbol,
        optional(repeat1(seq(",", $.symbol))),
      ),

    hibytes_ctrl_cmd: ($) =>
      seq(
        /\.[Hh][Ii][Bb][Yy][Tt][Ee][Ss]/,
        $.exp,
        optional(repeat1(seq(",", $.exp))),
      ),

    i16_ctrl_cmd: ($) => /\.[Ii]16/,

    i8_ctrl_cmd: ($) => /\.[Ii]8/,

    if_ctrl_cmd: ($) =>
      seq(
        $._if,
        optional($._if_true_branch),
        optional(seq($._else, optional($._if_false_branch))),
        $._endif,
      ),

    elseif_ctrl_cmd: ($) => seq(/\.[Ee][Ll][Ss][Ee][Ii][Ff]/, $.exp),
    else_ctrl_cmd: ($) => /\.[Ee][Ll][Ss][Ee]/,

    _if: ($) => seq(/\.[Ii][Ff]/, $.exp, "\n"),
    _if_true_branch: ($) => repeat1(choice($._asm_factor, $.elseif_ctrl_cmd)),
    _else: ($) => seq($.else_ctrl_cmd, "\n"),
    _if_false_branch: ($) => repeat1($._asm_factor),
    _endif: ($) => seq(/\.[Ee][Nn][Dd][Ii][Ff]/, "\n"),

    ifblank_ctrl_cmd: ($) =>
      seq(
        $._ifblank,
        optional($._if_true_branch),
        optional(seq($._else, optional($._if_false_branch))),
        $._endif,
      ),

    _ifblank: ($) => seq(/\.[Ii][Ff][Bb][Ll][Aa][Nn][Kk]/, $.exp, "\n"),

    ifconst_ctrl_cmd: ($) =>
      seq(
        $._ifconst,
        optional($._if_true_branch),
        optional(seq($._else, optional($._if_false_branch))),
        $._endif,
      ),

    _ifconst: ($) => seq(/\.[Ii][Ff][Cc][Oo][Nn][Ss][Tt]/, $.exp, "\n"),

    ifdef_ctrl_cmd: ($) =>
      seq(
        $._ifdef,
        optional($._if_true_branch),
        optional(seq($._else, optional($._if_false_branch))),
        $._endif,
      ),

    _ifdef: ($) => seq(/\.[Ii][Ff][Dd][Ee][Ff]/, $.exp, "\n"),

    ifnblank_ctrl_cmd: ($) =>
      seq(
        $._ifnblank,
        optional($._if_true_branch),
        optional(seq($._else, optional($._if_false_branch))),
        $._endif,
      ),

    _ifnblank: ($) => seq(/\.[Ii][Ff][Nn][Bb][Ll][Aa][Nn][Kk]/, $.exp, "\n"),

    ctrl_cmd: ($) =>
      choice(
        $.a16_ctrl_cmd,
        $.a8_ctrl_cmd,
        $.addr_ctrl_cmd,
        $.align_ctrl_cmd,
        $.asciiz_ctrl_cmd,
        $.assert_ctrl_cmd,
        $.autoimport_ctrl_cmd,
        $.bankbytes_ctrl_cmd,
        $.bss_ctrl_cmd,
        $.byte_ctrl_cmd,
        $.case_ctrl_cmd,
        $.charmap_ctrl_cmd,
        $.code_ctrl_cmd,
        $.condes_ctrl_cmd,
        $.constructor_ctrl_cmd,
        $.data_ctrl_cmd,
        $.dbyt_ctrl_cmd,
        $.debuginfo_ctrl_cmd,
        $.define_ctrl_cmd,
        $.delmacro_ctrl_cmd,
        $.destructor_ctrl_cmd,
        $.dword_ctrl_cmd,
        $.end_ctrl_cmd,
        $.endmacro_ctrl_cmd,
        $.endproc_ctrl_cmd,
        $.endrepeat_ctrl_cmd,
        $.endscope_ctrl_cmd,
        $.endstruct_ctrl_cmd,
        $.endunion_ctrl_cmd,
        $.enum_ctrl_cmd,
        $.error_ctrl_cmd,
        $.export_ctrl_cmd,
        $.exportzp_ctrl_cmd,
        $.faraddr_ctrl_cmd,
        $.fatal_ctrl_cmd,
        $.feature_ctrl_cmd,
        $.fileopt_ctrl_cmd,
        $.forceimport_ctrl_cmd,
        $.global_ctrl_cmd,
        $.globalzp_ctrl_cmd,
        $.hibytes_ctrl_cmd,
        $.i16_ctrl_cmd,
        $.i8_ctrl_cmd,
        $.if_ctrl_cmd,
        $.ifblank_ctrl_cmd,
        $.ifconst_ctrl_cmd,
        $.ifdef_ctrl_cmd,
        $.ifnblank_ctrl_cmd,
      ),

    /*
     * CONSTANTS
     */
    str: ($) => /\"(?:\\.|[^\\"])*\"/,

    /*
     * SYMBOLS AND LABELS
     */

    symbol: ($) => token(/@?[a-zA-Z_][a-zA-Z0-9_]*/),

    const_assignment: ($) =>
      choice($.label_assignment, $.num_assignment, $.label),

    label_assignment: ($) => seq($.symbol, ":=", $.exp),
    num_assignment: ($) => seq($.symbol, "=", $.exp),
    label: ($) => seq(/@?[a-zA-Z_][a-zA-Z0-9_]*:/),
  },
});
