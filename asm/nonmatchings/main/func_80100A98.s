nonmatching func_80100A98, 0x98

glabel func_80100A98
    /* EE98 80100A98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* EE9C 80100A9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* EEA0 80100AA0 59D9030C */  jal        func_800F6564
    /* EEA4 80100AA4 FC080424 */   addiu     $a0, $zero, 0x8FC
    /* EEA8 80100AA8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* EEAC 80100AAC 00000000 */  nop
    /* EEB0 80100AB0 00006290 */  lbu        $v0, 0x0($v1)
    /* EEB4 80100AB4 00000000 */  nop
    /* EEB8 80100AB8 C2100200 */  srl        $v0, $v0, 3
    /* EEBC 80100ABC A4E5030C */  jal        func_800F9690
    /* EEC0 80100AC0 000062A0 */   sb        $v0, 0x0($v1)
    /* EEC4 80100AC4 59D9030C */  jal        func_800F6564
    /* EEC8 80100AC8 01170424 */   addiu     $a0, $zero, 0x1701
    /* EECC 80100ACC 0DD9030C */  jal        func_800F6434
    /* EED0 80100AD0 02000424 */   addiu     $a0, $zero, 0x2
    /* EED4 80100AD4 0A004014 */  bnez       $v0, .L80100B00
    /* EED8 80100AD8 00000000 */   nop
    /* EEDC 80100ADC 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* EEE0 80100AE0 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* EEE4 80100AE4 00004390 */  lbu        $v1, 0x0($v0)
    /* EEE8 80100AE8 04D5030C */  jal        func_800F5410
    /* EEEC 80100AEC 000083A0 */   sb        $v1, 0x0($a0)
    /* EEF0 80100AF0 02D0030C */  jal        func_800F4008
    /* EEF4 80100AF4 20000424 */   addiu     $a0, $zero, 0x20
    /* EEF8 80100AF8 A4E5030C */  jal        func_800F9690
    /* EEFC 80100AFC 00000000 */   nop
  .L80100B00:
    /* EF00 80100B00 59D9030C */  jal        func_800F6564
    /* EF04 80100B04 FC080424 */   addiu     $a0, $zero, 0x8FC
    /* EF08 80100B08 92D0030C */  jal        func_800F4248
    /* EF0C 80100B0C 07000424 */   addiu     $a0, $zero, 0x7
    /* EF10 80100B10 7AD8030C */  jal        func_800F61E8
    /* EF14 80100B14 00000000 */   nop
    /* EF18 80100B18 B8E5030C */  jal        func_800F96E0
    /* EF1C 80100B1C 00000000 */   nop
    /* EF20 80100B20 1000BF8F */  lw         $ra, 0x10($sp)
    /* EF24 80100B24 00000000 */  nop
    /* EF28 80100B28 0800E003 */  jr         $ra
    /* EF2C 80100B2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80100A98
