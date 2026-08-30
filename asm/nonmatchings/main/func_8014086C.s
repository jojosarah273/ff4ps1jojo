nonmatching func_8014086C, 0x28

glabel func_8014086C
    /* 4EC6C 8014086C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EC70 80140870 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EC74 80140874 53D9030C */  jal        func_800F654C
    /* 4EC78 80140878 80000424 */   addiu     $a0, $zero, 0x80
    /* 4EC7C 8014087C 0502050C */  jal        func_80140814
    /* 4EC80 80140880 00000000 */   nop
    /* 4EC84 80140884 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EC88 80140888 00000000 */  nop
    /* 4EC8C 8014088C 0800E003 */  jr         $ra
    /* 4EC90 80140890 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014086C
