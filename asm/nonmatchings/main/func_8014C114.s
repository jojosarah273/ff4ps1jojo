nonmatching func_8014C114, 0x28

glabel func_8014C114
    /* 5A514 8014C114 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A518 8014C118 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A51C 8014C11C 53D9030C */  jal        func_800F654C
    /* 5A520 8014C120 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 5A524 8014C124 E52E050C */  jal        func_8014BB94
    /* 5A528 8014C128 00000000 */   nop
    /* 5A52C 8014C12C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5A530 8014C130 00000000 */  nop
    /* 5A534 8014C134 0800E003 */  jr         $ra
    /* 5A538 8014C138 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C114
