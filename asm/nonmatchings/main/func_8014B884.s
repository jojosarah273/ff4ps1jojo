nonmatching func_8014B884, 0x28

glabel func_8014B884
    /* 59C84 8014B884 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59C88 8014B888 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59C8C 8014B88C 8814050C */  jal        func_80145220
    /* 59C90 8014B890 00000000 */   nop
    /* 59C94 8014B894 FD54020C */  jal        func_800953F4
    /* 59C98 8014B898 00000000 */   nop
    /* 59C9C 8014B89C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59CA0 8014B8A0 00000000 */  nop
    /* 59CA4 8014B8A4 0800E003 */  jr         $ra
    /* 59CA8 8014B8A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B884
