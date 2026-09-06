nonmatching func_8014B804, 0x28

glabel func_8014B804
    /* 59C04 8014B804 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59C08 8014B808 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59C0C 8014B80C D110050C */  jal        func_80144344
    /* 59C10 8014B810 00000000 */   nop
    /* 59C14 8014B814 FD54020C */  jal        func_800953F4
    /* 59C18 8014B818 00000000 */   nop
    /* 59C1C 8014B81C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59C20 8014B820 00000000 */  nop
    /* 59C24 8014B824 0800E003 */  jr         $ra
    /* 59C28 8014B828 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B804
