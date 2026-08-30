nonmatching func_80147000, 0x20

glabel func_80147000
    /* 55400 80147000 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 55404 80147004 1000BFAF */  sw         $ra, 0x10($sp)
    /* 55408 80147008 081C050C */  jal        func_80147020
    /* 5540C 8014700C 00000000 */   nop
    /* 55410 80147010 1000BF8F */  lw         $ra, 0x10($sp)
    /* 55414 80147014 00000000 */  nop
    /* 55418 80147018 0800E003 */  jr         $ra
    /* 5541C 8014701C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80147000
