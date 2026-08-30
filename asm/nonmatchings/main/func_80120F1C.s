nonmatching func_80120F1C, 0x78

glabel func_80120F1C
    /* 2F31C 80120F1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F320 80120F20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F324 80120F24 80E4030C */  jal        func_800F9200
    /* 2F328 80120F28 00000000 */   nop
    /* 2F32C 80120F2C CCE4030C */  jal        func_800F9330
    /* 2F330 80120F30 00000000 */   nop
    /* 2F334 80120F34 77DC030C */  jal        func_800F71DC
    /* 2F338 80120F38 00C60434 */   ori       $a0, $zero, 0xC600
    /* 2F33C 80120F3C 5BE3030C */  jal        func_800F8D6C
    /* 2F340 80120F40 29000424 */   addiu     $a0, $zero, 0x29
    /* 2F344 80120F44 77DC030C */  jal        func_800F71DC
    /* 2F348 80120F48 00780424 */   addiu     $a0, $zero, 0x7800
    /* 2F34C 80120F4C 5BE3030C */  jal        func_800F8D6C
    /* 2F350 80120F50 35000424 */   addiu     $a0, $zero, 0x35
    /* 2F354 80120F54 53D9030C */  jal        func_800F654C
    /* 2F358 80120F58 02000424 */   addiu     $a0, $zero, 0x2
    /* 2F35C 80120F5C 93E0030C */  jal        func_800F824C
    /* 2F360 80120F60 C3000424 */   addiu     $a0, $zero, 0xC3
    /* 2F364 80120F64 53D9030C */  jal        func_800F654C
    /* 2F368 80120F68 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F36C 80120F6C 93E0030C */  jal        func_800F824C
    /* 2F370 80120F70 34000424 */   addiu     $a0, $zero, 0x34
    /* 2F374 80120F74 68E5030C */  jal        func_800F95A0
    /* 2F378 80120F78 00000000 */   nop
    /* 2F37C 80120F7C F7E4030C */  jal        func_800F93DC
    /* 2F380 80120F80 00000000 */   nop
    /* 2F384 80120F84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F388 80120F88 00000000 */  nop
    /* 2F38C 80120F8C 0800E003 */  jr         $ra
    /* 2F390 80120F90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120F1C
