nonmatching func_8010E100, 0x28

glabel func_8010E100
    /* 1C500 8010E100 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C504 8010E104 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C508 8010E108 4A38040C */  jal        func_8010E128
    /* 1C50C 8010E10C 00000000 */   nop
    /* 1C510 8010E110 977A040C */  jal        func_8011EA5C
    /* 1C514 8010E114 00000000 */   nop
    /* 1C518 8010E118 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C51C 8010E11C 00000000 */  nop
    /* 1C520 8010E120 0800E003 */  jr         $ra
    /* 1C524 8010E124 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E100
