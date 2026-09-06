nonmatching func_80187B00, 0x50

glabel func_80187B00
    /* 95F00 80187B00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 95F04 80187B04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 95F08 80187B08 2C0280AF */  sw         $zero, %gp_rel(D_8019EF28)($gp)
    /* 95F0C 80187B0C 280280AF */  sw         $zero, %gp_rel(D_8019EF24)($gp)
    /* 95F10 80187B10 9020060C */  jal        func_80188240
    /* 95F14 80187B14 00000000 */   nop
    /* 95F18 80187B18 03004010 */  beqz       $v0, .L80187B28
    /* 95F1C 80187B1C 00000000 */   nop
    /* 95F20 80187B20 D41E060C */  jal        func_80187B50
    /* 95F24 80187B24 01000424 */   addiu     $a0, $zero, 0x1
  .L80187B28:
    /* 95F28 80187B28 0E028287 */  lh         $v0, %gp_rel(D_8019EF0A)($gp)
    /* 95F2C 80187B2C 00000000 */  nop
    /* 95F30 80187B30 03004010 */  beqz       $v0, .L80187B40
    /* 95F34 80187B34 00000000 */   nop
    /* 95F38 80187B38 BB1E060C */  jal        func_80187AEC
    /* 95F3C 80187B3C 00000000 */   nop
  .L80187B40:
    /* 95F40 80187B40 1000BF8F */  lw         $ra, 0x10($sp)
    /* 95F44 80187B44 00000000 */  nop
    /* 95F48 80187B48 0800E003 */  jr         $ra
    /* 95F4C 80187B4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80187B00
