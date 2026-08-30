nonmatching func_80188AE8, 0x40

glabel func_80188AE8
    /* 96EE8 80188AE8 8C02858F */  lw         $a1, %gp_rel(D_8019EF88)($gp)
    /* 96EEC 80188AEC 9002838F */  lw         $v1, %gp_rel(D_8019EF8C)($gp)
    /* 96EF0 80188AF0 00000000 */  nop
    /* 96EF4 80188AF4 2A106500 */  slt        $v0, $v1, $a1
    /* 96EF8 80188AF8 07004014 */  bnez       $v0, .L80188B18
    /* 96EFC 80188AFC 00000000 */   nop
    /* 96F00 80188B00 4402828F */  lw         $v0, %gp_rel(D_8019EF40)($gp)
    /* 96F04 80188B04 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 96F08 80188B08 23104300 */  subu       $v0, $v0, $v1
    /* 96F0C 80188B0C 21104500 */  addu       $v0, $v0, $a1
    /* 96F10 80188B10 0800E003 */  jr         $ra
    /* 96F14 80188B14 2A104400 */   slt       $v0, $v0, $a0
  .L80188B18:
    /* 96F18 80188B18 2310A300 */  subu       $v0, $a1, $v1
    /* 96F1C 80188B1C 2A108200 */  slt        $v0, $a0, $v0
    /* 96F20 80188B20 0800E003 */  jr         $ra
    /* 96F24 80188B24 01004238 */   xori      $v0, $v0, 0x1
endlabel func_80188AE8
