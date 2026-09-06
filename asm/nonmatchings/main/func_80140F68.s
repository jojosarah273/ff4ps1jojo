nonmatching func_80140F68, 0x50

glabel func_80140F68
    /* 4F368 80140F68 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F36C 80140F6C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F370 80140F70 90D8030C */  jal        func_800F6240
    /* 4F374 80140F74 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F378 80140F78 59D9030C */  jal        func_800F6564
    /* 4F37C 80140F7C 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F380 80140F80 0DD9030C */  jal        func_800F6434
    /* 4F384 80140F84 02020424 */   addiu     $a0, $zero, 0x202
    /* 4F388 80140F88 05004014 */  bnez       $v0, .L80140FA0
    /* 4F38C 80140F8C 00000000 */   nop
    /* 4F390 80140F90 53D9030C */  jal        func_800F654C
    /* 4F394 80140F94 05000424 */   addiu     $a0, $zero, 0x5
    /* 4F398 80140F98 CD04050C */  jal        func_80141334
    /* 4F39C 80140F9C 00000000 */   nop
  .L80140FA0:
    /* 4F3A0 80140FA0 EE03050C */  jal        func_80140FB8
    /* 4F3A4 80140FA4 00000000 */   nop
    /* 4F3A8 80140FA8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F3AC 80140FAC 00000000 */  nop
    /* 4F3B0 80140FB0 0800E003 */  jr         $ra
    /* 4F3B4 80140FB4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140F68
