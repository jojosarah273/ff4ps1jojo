nonmatching func_801917F8, 0x20

glabel func_801917F8
    /* 9FBF8 801917F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9FBFC 801917FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9FC00 80191800 7F41060C */  jal        func_801905FC
    /* 9FC04 80191804 00000000 */   nop
    /* 9FC08 80191808 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9FC0C 8019180C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9FC10 80191810 0800E003 */  jr         $ra
    /* 9FC14 80191814 00000000 */   nop
endlabel func_801917F8
