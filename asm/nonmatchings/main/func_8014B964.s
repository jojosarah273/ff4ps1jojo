nonmatching func_8014B964, 0x28

glabel func_8014B964
    /* 59D64 8014B964 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59D68 8014B968 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59D6C 8014B96C 90D8030C */  jal        func_800F6240
    /* 59D70 8014B970 85F20434 */   ori       $a0, $zero, 0xF285
    /* 59D74 8014B974 632E050C */  jal        func_8014B98C
    /* 59D78 8014B978 00000000 */   nop
    /* 59D7C 8014B97C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59D80 8014B980 00000000 */  nop
    /* 59D84 8014B984 0800E003 */  jr         $ra
    /* 59D88 8014B988 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B964
