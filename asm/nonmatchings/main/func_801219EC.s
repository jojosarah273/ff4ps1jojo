nonmatching func_801219EC, 0x88

glabel func_801219EC
    /* 2FDEC 801219EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FDF0 801219F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FDF4 801219F4 F0D4030C */  jal        func_800F53C0
    /* 2FDF8 801219F8 00000000 */   nop
    /* 2FDFC 801219FC 07004010 */  beqz       $v0, .L80121A1C
    /* 2FE00 80121A00 00000000 */   nop
    /* 2FE04 80121A04 E387040C */  jal        func_80121F8C
    /* 2FE08 80121A08 00000000 */   nop
    /* 2FE0C 80121A0C 68D7030C */  jal        func_800F5DA0
    /* 2FE10 80121A10 63000424 */   addiu     $a0, $zero, 0x63
    /* 2FE14 80121A14 8B860408 */  j          .L80121A2C
    /* 2FE18 80121A18 00000000 */   nop
  .L80121A1C:
    /* 2FE1C 80121A1C 3B88040C */  jal        func_801220EC
    /* 2FE20 80121A20 00000000 */   nop
    /* 2FE24 80121A24 AFD8030C */  jal        func_800F62BC
    /* 2FE28 80121A28 63000424 */   addiu     $a0, $zero, 0x63
  .L80121A2C:
    /* 2FE2C 80121A2C 53D9030C */  jal        func_800F654C
    /* 2FE30 80121A30 F7000424 */   addiu     $a0, $zero, 0xF7
    /* 2FE34 80121A34 93E0030C */  jal        func_800F824C
    /* 2FE38 80121A38 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 2FE3C 80121A3C 53D9030C */  jal        func_800F654C
    /* 2FE40 80121A40 FA000424 */   addiu     $a0, $zero, 0xFA
    /* 2FE44 80121A44 93E0030C */  jal        func_800F824C
    /* 2FE48 80121A48 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2FE4C 80121A4C 53D9030C */  jal        func_800F654C
    /* 2FE50 80121A50 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 2FE54 80121A54 93E0030C */  jal        func_800F824C
    /* 2FE58 80121A58 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FE5C 80121A5C 9D86040C */  jal        func_80121A74
    /* 2FE60 80121A60 00000000 */   nop
    /* 2FE64 80121A64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FE68 80121A68 00000000 */  nop
    /* 2FE6C 80121A6C 0800E003 */  jr         $ra
    /* 2FE70 80121A70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801219EC
