nonmatching func_80110F2C, 0x78

glabel func_80110F2C
    /* 1F32C 80110F2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F330 80110F30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F334 80110F34 53D9030C */  jal        func_800F654C
    /* 1F338 80110F38 06000424 */   addiu     $a0, $zero, 0x6
    /* 1F33C 80110F3C 62E0030C */  jal        func_800F8188
    /* 1F340 80110F40 04170424 */   addiu     $a0, $zero, 0x1704
    /* 1F344 80110F44 53D9030C */  jal        func_800F654C
    /* 1F348 80110F48 03000424 */   addiu     $a0, $zero, 0x3
    /* 1F34C 80110F4C 62E0030C */  jal        func_800F8188
    /* 1F350 80110F50 05170424 */   addiu     $a0, $zero, 0x1705
    /* 1F354 80110F54 53D9030C */  jal        func_800F654C
    /* 1F358 80110F58 58000424 */   addiu     $a0, $zero, 0x58
    /* 1F35C 80110F5C 93E0030C */  jal        func_800F824C
    /* 1F360 80110F60 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 1F364 80110F64 53D9030C */  jal        func_800F654C
    /* 1F368 80110F68 60000424 */   addiu     $a0, $zero, 0x60
    /* 1F36C 80110F6C 93E0030C */  jal        func_800F824C
    /* 1F370 80110F70 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1F374 80110F74 EF46040C */  jal        func_80111BBC
    /* 1F378 80110F78 00000000 */   nop
    /* 1F37C 80110F7C EEE3030C */  jal        func_800F8FB8
    /* 1F380 80110F80 79000424 */   addiu     $a0, $zero, 0x79
    /* 1F384 80110F84 EEE3030C */  jal        func_800F8FB8
    /* 1F388 80110F88 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1F38C 80110F8C EEE3030C */  jal        func_800F8FB8
    /* 1F390 80110F90 24000424 */   addiu     $a0, $zero, 0x24
    /* 1F394 80110F94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F398 80110F98 00000000 */  nop
    /* 1F39C 80110F9C 0800E003 */  jr         $ra
    /* 1F3A0 80110FA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110F2C
