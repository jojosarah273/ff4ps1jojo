nonmatching func_8014BB6C, 0x28

glabel func_8014BB6C
    /* 59F6C 8014BB6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59F70 8014BB70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59F74 8014BB74 53D9030C */  jal        func_800F654C
    /* 59F78 8014BB78 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 59F7C 8014BB7C E52E050C */  jal        func_8014BB94
    /* 59F80 8014BB80 00000000 */   nop
    /* 59F84 8014BB84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59F88 8014BB88 00000000 */  nop
    /* 59F8C 8014BB8C 0800E003 */  jr         $ra
    /* 59F90 8014BB90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014BB6C
