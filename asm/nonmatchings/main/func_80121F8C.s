nonmatching func_80121F8C, 0x50

glabel func_80121F8C
    /* 3038C 80121F8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30390 80121F90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30394 80121F94 53D9030C */  jal        func_800F654C
    /* 30398 80121F98 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 3039C 80121F9C 93E0030C */  jal        func_800F824C
    /* 303A0 80121FA0 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 303A4 80121FA4 53D9030C */  jal        func_800F654C
    /* 303A8 80121FA8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 303AC 80121FAC 93E0030C */  jal        func_800F824C
    /* 303B0 80121FB0 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 303B4 80121FB4 53D9030C */  jal        func_800F654C
    /* 303B8 80121FB8 FD000424 */   addiu     $a0, $zero, 0xFD
    /* 303BC 80121FBC 93E0030C */  jal        func_800F824C
    /* 303C0 80121FC0 20000424 */   addiu     $a0, $zero, 0x20
    /* 303C4 80121FC4 9D86040C */  jal        func_80121A74
    /* 303C8 80121FC8 00000000 */   nop
    /* 303CC 80121FCC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 303D0 80121FD0 00000000 */  nop
    /* 303D4 80121FD4 0800E003 */  jr         $ra
    /* 303D8 80121FD8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121F8C
