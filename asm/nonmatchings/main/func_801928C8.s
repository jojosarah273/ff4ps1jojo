nonmatching func_801928C8, 0x20

glabel func_801928C8
    /* A0CC8 801928C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0CCC 801928CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0CD0 801928D0 7E5F060C */  jal        func_80197DF8
    /* A0CD4 801928D4 00000000 */   nop
    /* A0CD8 801928D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0CDC 801928DC 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0CE0 801928E0 0800E003 */  jr         $ra
    /* A0CE4 801928E4 00000000 */   nop
endlabel func_801928C8
