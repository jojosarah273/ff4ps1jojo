nonmatching func_8014B82C, 0x28

glabel func_8014B82C
    /* 59C2C 8014B82C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59C30 8014B830 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59C34 8014B834 5A14050C */  jal        func_80145168
    /* 59C38 8014B838 00000000 */   nop
    /* 59C3C 8014B83C FD54020C */  jal        func_800953F4
    /* 59C40 8014B840 00000000 */   nop
    /* 59C44 8014B844 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59C48 8014B848 00000000 */  nop
    /* 59C4C 8014B84C 0800E003 */  jr         $ra
    /* 59C50 8014B850 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B82C
