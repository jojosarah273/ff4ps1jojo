nonmatching func_80141DA0, 0x20

glabel func_80141DA0
    /* 501A0 80141DA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 501A4 80141DA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 501A8 80141DA8 A007050C */  jal        func_80141E80
    /* 501AC 80141DAC 00000000 */   nop
    /* 501B0 80141DB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 501B4 80141DB4 00000000 */  nop
    /* 501B8 80141DB8 0800E003 */  jr         $ra
    /* 501BC 80141DBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141DA0
