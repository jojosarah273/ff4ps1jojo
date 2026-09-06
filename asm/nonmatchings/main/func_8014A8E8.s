nonmatching func_8014A8E8, 0x38

glabel func_8014A8E8
    /* 58CE8 8014A8E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58CEC 8014A8EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58CF0 8014A8F0 77DC030C */  jal        func_800F71DC
    /* 58CF4 8014A8F4 10000424 */   addiu     $a0, $zero, 0x10
    /* 58CF8 8014A8F8 AA65020C */  jal        func_800996A8
    /* 58CFC 8014A8FC 00000000 */   nop
    /* 58D00 8014A900 DDE3030C */  jal        func_800F8F74
    /* 58D04 8014A904 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 58D08 8014A908 632E050C */  jal        func_8014B98C
    /* 58D0C 8014A90C 00000000 */   nop
    /* 58D10 8014A910 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58D14 8014A914 00000000 */  nop
    /* 58D18 8014A918 0800E003 */  jr         $ra
    /* 58D1C 8014A91C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A8E8
