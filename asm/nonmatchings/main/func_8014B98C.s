nonmatching func_8014B98C, 0x28

glabel func_8014B98C
    /* 59D8C 8014B98C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59D90 8014B990 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59D94 8014B994 DDE3030C */  jal        func_800F8F74
    /* 59D98 8014B998 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 59D9C 8014B99C 4F2E050C */  jal        func_8014B93C
    /* 59DA0 8014B9A0 00000000 */   nop
    /* 59DA4 8014B9A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59DA8 8014B9A8 00000000 */  nop
    /* 59DAC 8014B9AC 0800E003 */  jr         $ra
    /* 59DB0 8014B9B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B98C
