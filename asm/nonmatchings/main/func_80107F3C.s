nonmatching func_80107F3C, 0x88

glabel func_80107F3C
    /* 1633C 80107F3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 16340 80107F40 1000BFAF */  sw         $ra, 0x10($sp)
  .L80107F44:
    /* 16344 80107F44 DEF9030C */  jal        func_800FE778
    /* 16348 80107F48 00000000 */   nop
  .L80107F4C:
    /* 1634C 80107F4C 8CD9030C */  jal        func_800F6630
    /* 16350 80107F50 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 16354 80107F54 5DD5030C */  jal        func_800F5574
    /* 16358 80107F58 02000424 */   addiu     $a0, $zero, 0x2
    /* 1635C 80107F5C F5D4030C */  jal        func_800F53D4
    /* 16360 80107F60 00000000 */   nop
    /* 16364 80107F64 F9FF4010 */  beqz       $v0, .L80107F4C
    /* 16368 80107F68 00000000 */   nop
    /* 1636C 80107F6C 68D7030C */  jal        func_800F5DA0
    /* 16370 80107F70 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 16374 80107F74 8CD9030C */  jal        func_800F6630
    /* 16378 80107F78 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 1637C 80107F7C 5DD5030C */  jal        func_800F5574
    /* 16380 80107F80 21200000 */   addu      $a0, $zero, $zero
    /* 16384 80107F84 F5D4030C */  jal        func_800F53D4
    /* 16388 80107F88 00000000 */   nop
    /* 1638C 80107F8C EDFF4010 */  beqz       $v0, .L80107F44
    /* 16390 80107F90 00000000 */   nop
    /* 16394 80107F94 53D9030C */  jal        func_800F654C
    /* 16398 80107F98 01000424 */   addiu     $a0, $zero, 0x1
    /* 1639C 80107F9C 93E0030C */  jal        func_800F824C
    /* 163A0 80107FA0 EC000424 */   addiu     $a0, $zero, 0xEC
    /* 163A4 80107FA4 DEF9030C */  jal        func_800FE778
    /* 163A8 80107FA8 00000000 */   nop
    /* 163AC 80107FAC EEE3030C */  jal        func_800F8FB8
    /* 163B0 80107FB0 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 163B4 80107FB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 163B8 80107FB8 00000000 */  nop
    /* 163BC 80107FBC 0800E003 */  jr         $ra
    /* 163C0 80107FC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80107F3C
