nonmatching func_8014B1A8, 0x28

glabel func_8014B1A8
    /* 595A8 8014B1A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 595AC 8014B1AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 595B0 8014B1B0 462C050C */  jal        func_8014B118
    /* 595B4 8014B1B4 00000000 */   nop
    /* 595B8 8014B1B8 6D2E050C */  jal        func_8014B9B4
    /* 595BC 8014B1BC 00000000 */   nop
    /* 595C0 8014B1C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 595C4 8014B1C4 00000000 */  nop
    /* 595C8 8014B1C8 0800E003 */  jr         $ra
    /* 595CC 8014B1CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B1A8
