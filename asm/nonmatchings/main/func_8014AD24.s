nonmatching func_8014AD24, 0x20

glabel func_8014AD24
    /* 59124 8014AD24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59128 8014AD28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5912C 8014AD2C 2E14050C */  jal        func_801450B8
    /* 59130 8014AD30 00000000 */   nop
    /* 59134 8014AD34 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59138 8014AD38 00000000 */  nop
    /* 5913C 8014AD3C 0800E003 */  jr         $ra
    /* 59140 8014AD40 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AD24
