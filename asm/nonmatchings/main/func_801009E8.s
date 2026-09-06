nonmatching func_801009E8, 0xB0

glabel func_801009E8
    /* EDE8 801009E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* EDEC 801009EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* EDF0 801009F0 A602040C */  jal        func_80100A98
    /* EDF4 801009F4 00000000 */   nop
    /* EDF8 801009F8 53D9030C */  jal        func_800F654C
    /* EDFC 801009FC 01000424 */   addiu     $a0, $zero, 0x1
  .L80100A00:
    /* EE00 80100A00 A8D7030C */  jal        func_800F5EA0
    /* EE04 80100A04 00000000 */   nop
    /* EE08 80100A08 19D7030C */  jal        func_800F5C64
    /* EE0C 80100A0C 02000424 */   addiu     $a0, $zero, 0x2
    /* EE10 80100A10 05004014 */  bnez       $v0, .L80100A28
    /* EE14 80100A14 00000000 */   nop
    /* EE18 80100A18 50D4030C */  jal        func_800F5140
    /* EE1C 80100A1C 00000000 */   nop
    /* EE20 80100A20 80020408 */  j          .L80100A00
    /* EE24 80100A24 00000000 */   nop
  .L80100A28:
    /* EE28 80100A28 93E0030C */  jal        func_800F824C
    /* EE2C 80100A2C 06000424 */   addiu     $a0, $zero, 0x6
    /* EE30 80100A30 DADA030C */  jal        func_800F6B68
    /* EE34 80100A34 A0120424 */   addiu     $a0, $zero, 0x12A0
    /* EE38 80100A38 DCD0030C */  jal        func_800F4370
    /* EE3C 80100A3C 06000424 */   addiu     $a0, $zero, 0x6
    /* EE40 80100A40 93E0030C */  jal        func_800F824C
    /* EE44 80100A44 07000424 */   addiu     $a0, $zero, 0x7
    /* EE48 80100A48 48D0030C */  jal        func_800F4120
    /* EE4C 80100A4C 02020424 */   addiu     $a0, $zero, 0x202
    /* EE50 80100A50 0B004014 */  bnez       $v0, .L80100A80
    /* EE54 80100A54 00000000 */   nop
    /* EE58 80100A58 DADA030C */  jal        func_800F6B68
    /* EE5C 80100A5C A0120424 */   addiu     $a0, $zero, 0x12A0
    /* EE60 80100A60 04D5030C */  jal        func_800F5410
    /* EE64 80100A64 00000000 */   nop
    /* EE68 80100A68 0FCF030C */  jal        func_800F3C3C
    /* EE6C 80100A6C 06000424 */   addiu     $a0, $zero, 0x6
    /* EE70 80100A70 CECF030C */  jal        func_800F3F38
    /* EE74 80100A74 21204000 */   addu      $a0, $v0, $zero
    /* EE78 80100A78 DAE1030C */  jal        func_800F8768
    /* EE7C 80100A7C A0120424 */   addiu     $a0, $zero, 0x12A0
  .L80100A80:
    /* EE80 80100A80 8CD9030C */  jal        func_800F6630
    /* EE84 80100A84 07000424 */   addiu     $a0, $zero, 0x7
    /* EE88 80100A88 1000BF8F */  lw         $ra, 0x10($sp)
    /* EE8C 80100A8C 00000000 */  nop
    /* EE90 80100A90 0800E003 */  jr         $ra
    /* EE94 80100A94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801009E8
