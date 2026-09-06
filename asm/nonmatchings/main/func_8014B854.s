nonmatching func_8014B854, 0x30

glabel func_8014B854
    /* 59C54 8014B854 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59C58 8014B858 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59C5C 8014B85C 2D08050C */  jal        func_801420B4
    /* 59C60 8014B860 00000000 */   nop
    /* 59C64 8014B864 FD54020C */  jal        func_800953F4
    /* 59C68 8014B868 00000000 */   nop
    /* 59C6C 8014B86C 632E050C */  jal        func_8014B98C
    /* 59C70 8014B870 00000000 */   nop
    /* 59C74 8014B874 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59C78 8014B878 00000000 */  nop
    /* 59C7C 8014B87C 0800E003 */  jr         $ra
    /* 59C80 8014B880 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B854
