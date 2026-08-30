nonmatching func_8015F7B0, 0x38

glabel func_8015F7B0
    /* 6DBB0 8015F7B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DBB4 8015F7B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DBB8 8015F7B8 53D9030C */  jal        func_800F654C
    /* 6DBBC 8015F7BC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6DBC0 8015F7C0 62E0030C */  jal        func_800F8188
    /* 6DBC4 8015F7C4 A4280424 */   addiu     $a0, $zero, 0x28A4
    /* 6DBC8 8015F7C8 DD95010C */  jal        func_80065774
    /* 6DBCC 8015F7CC 00000000 */   nop
    /* 6DBD0 8015F7D0 FA7D050C */  jal        func_8015F7E8
    /* 6DBD4 8015F7D4 00000000 */   nop
    /* 6DBD8 8015F7D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DBDC 8015F7DC 00000000 */  nop
    /* 6DBE0 8015F7E0 0800E003 */  jr         $ra
    /* 6DBE4 8015F7E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F7B0
