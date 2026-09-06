nonmatching func_80122964, 0x30

glabel func_80122964
    /* 30D64 80122964 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30D68 80122968 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30D6C 8012296C 77DC030C */  jal        func_800F71DC
    /* 30D70 80122970 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 30D74 80122974 40DD030C */  jal        func_800F7500
    /* 30D78 80122978 40100424 */   addiu     $a0, $zero, 0x1040
    /* 30D7C 8012297C 488B040C */  jal        func_80122D20
    /* 30D80 80122980 00000000 */   nop
    /* 30D84 80122984 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30D88 80122988 00000000 */  nop
    /* 30D8C 8012298C 0800E003 */  jr         $ra
    /* 30D90 80122990 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122964
