nonmatching func_8014A980, 0x30

glabel func_8014A980
    /* 58D80 8014A980 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58D84 8014A984 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58D88 8014A988 A035050C */  jal        func_8014D680
    /* 58D8C 8014A98C 00000000 */   nop
    /* 58D90 8014A990 7902050C */  jal        func_801409E4
    /* 58D94 8014A994 00000000 */   nop
    /* 58D98 8014A998 3A2A050C */  jal        func_8014A8E8
    /* 58D9C 8014A99C 00000000 */   nop
    /* 58DA0 8014A9A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58DA4 8014A9A4 00000000 */  nop
    /* 58DA8 8014A9A8 0800E003 */  jr         $ra
    /* 58DAC 8014A9AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A980
