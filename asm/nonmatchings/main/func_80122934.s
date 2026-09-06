nonmatching func_80122934, 0x30

glabel func_80122934
    /* 30D34 80122934 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30D38 80122938 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30D3C 8012293C 77DC030C */  jal        func_800F71DC
    /* 30D40 80122940 CE020424 */   addiu     $a0, $zero, 0x2CE
    /* 30D44 80122944 40DD030C */  jal        func_800F7500
    /* 30D48 80122948 00100424 */   addiu     $a0, $zero, 0x1000
    /* 30D4C 8012294C 488B040C */  jal        func_80122D20
    /* 30D50 80122950 00000000 */   nop
    /* 30D54 80122954 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30D58 80122958 00000000 */  nop
    /* 30D5C 8012295C 0800E003 */  jr         $ra
    /* 30D60 80122960 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122934
