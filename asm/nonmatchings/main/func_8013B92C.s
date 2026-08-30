nonmatching func_8013B92C, 0x30

glabel func_8013B92C
    /* 49D2C 8013B92C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49D30 8013B930 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49D34 8013B934 53D9030C */  jal        func_800F654C
    /* 49D38 8013B938 04000424 */   addiu     $a0, $zero, 0x4
    /* 49D3C 8013B93C 77DC030C */  jal        func_800F71DC
    /* 49D40 8013B940 06000424 */   addiu     $a0, $zero, 0x6
    /* 49D44 8013B944 35EE040C */  jal        func_8013B8D4
    /* 49D48 8013B948 00000000 */   nop
    /* 49D4C 8013B94C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49D50 8013B950 00000000 */  nop
    /* 49D54 8013B954 0800E003 */  jr         $ra
    /* 49D58 8013B958 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B92C
