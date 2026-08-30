nonmatching func_80169100, 0x20

glabel func_80169100
    /* 77500 80169100 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 77504 80169104 1000BFAF */  sw         $ra, 0x10($sp)
    /* 77508 80169108 4AA4050C */  jal        func_80169128
    /* 7750C 8016910C 00000000 */   nop
    /* 77510 80169110 1000BF8F */  lw         $ra, 0x10($sp)
    /* 77514 80169114 00000000 */  nop
    /* 77518 80169118 0800E003 */  jr         $ra
    /* 7751C 8016911C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80169100
