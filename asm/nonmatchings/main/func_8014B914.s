nonmatching func_8014B914, 0x28

glabel func_8014B914
    /* 59D14 8014B914 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59D18 8014B918 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59D1C 8014B91C 5B32050C */  jal        func_8014C96C
    /* 59D20 8014B920 00000000 */   nop
    /* 59D24 8014B924 4F2E050C */  jal        func_8014B93C
    /* 59D28 8014B928 00000000 */   nop
    /* 59D2C 8014B92C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59D30 8014B930 00000000 */  nop
    /* 59D34 8014B934 0800E003 */  jr         $ra
    /* 59D38 8014B938 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B914
