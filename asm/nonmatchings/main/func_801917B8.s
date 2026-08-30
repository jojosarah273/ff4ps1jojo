nonmatching func_801917B8, 0x20

glabel func_801917B8
    /* 9FBB8 801917B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9FBBC 801917BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9FBC0 801917C0 F643060C */  jal        func_80190FD8
    /* 9FBC4 801917C4 00000000 */   nop
    /* 9FBC8 801917C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9FBCC 801917CC 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9FBD0 801917D0 0800E003 */  jr         $ra
    /* 9FBD4 801917D4 00000000 */   nop
endlabel func_801917B8
