nonmatching func_801263C8, 0x28

glabel func_801263C8
    /* 347C8 801263C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 347CC 801263CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 347D0 801263D0 2A90040C */  jal        func_801240A8
    /* 347D4 801263D4 00000000 */   nop
    /* 347D8 801263D8 FC98040C */  jal        func_801263F0
    /* 347DC 801263DC 00000000 */   nop
    /* 347E0 801263E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 347E4 801263E4 00000000 */  nop
    /* 347E8 801263E8 0800E003 */  jr         $ra
    /* 347EC 801263EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801263C8
