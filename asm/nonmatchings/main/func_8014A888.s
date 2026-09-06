nonmatching func_8014A888, 0x30

glabel func_8014A888
    /* 58C88 8014A888 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58C8C 8014A88C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58C90 8014A890 53D9030C */  jal        func_800F654C
    /* 58C94 8014A894 07000424 */   addiu     $a0, $zero, 0x7
    /* 58C98 8014A898 62E0030C */  jal        func_800F8188
    /* 58C9C 8014A89C D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 58CA0 8014A8A0 999D050C */  jal        func_80167664
    /* 58CA4 8014A8A4 00000000 */   nop
    /* 58CA8 8014A8A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58CAC 8014A8AC 00000000 */  nop
    /* 58CB0 8014A8B0 0800E003 */  jr         $ra
    /* 58CB4 8014A8B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A888
