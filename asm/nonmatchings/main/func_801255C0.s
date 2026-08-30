nonmatching func_801255C0, 0x28

glabel func_801255C0
    /* 339C0 801255C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 339C4 801255C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 339C8 801255C8 CCE4030C */  jal        func_800F9330
    /* 339CC 801255CC 00000000 */   nop
    /* 339D0 801255D0 4A95040C */  jal        func_80125528
    /* 339D4 801255D4 00000000 */   nop
    /* 339D8 801255D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 339DC 801255DC 00000000 */  nop
    /* 339E0 801255E0 0800E003 */  jr         $ra
    /* 339E4 801255E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801255C0
