nonmatching func_80121B5C, 0x88

glabel func_80121B5C
    /* 2FF5C 80121B5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FF60 80121B60 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FF64 80121B64 F0D4030C */  jal        func_800F53C0
    /* 2FF68 80121B68 00000000 */   nop
    /* 2FF6C 80121B6C 07004010 */  beqz       $v0, .L80121B8C
    /* 2FF70 80121B70 00000000 */   nop
    /* 2FF74 80121B74 0B88040C */  jal        func_8012202C
    /* 2FF78 80121B78 00000000 */   nop
    /* 2FF7C 80121B7C 68D7030C */  jal        func_800F5DA0
    /* 2FF80 80121B80 65000424 */   addiu     $a0, $zero, 0x65
    /* 2FF84 80121B84 E7860408 */  j          .L80121B9C
    /* 2FF88 80121B88 00000000 */   nop
  .L80121B8C:
    /* 2FF8C 80121B8C F787040C */  jal        func_80121FDC
    /* 2FF90 80121B90 00000000 */   nop
    /* 2FF94 80121B94 AFD8030C */  jal        func_800F62BC
    /* 2FF98 80121B98 65000424 */   addiu     $a0, $zero, 0x65
  .L80121B9C:
    /* 2FF9C 80121B9C 53D9030C */  jal        func_800F654C
    /* 2FFA0 80121BA0 F9000424 */   addiu     $a0, $zero, 0xF9
    /* 2FFA4 80121BA4 93E0030C */  jal        func_800F824C
    /* 2FFA8 80121BA8 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 2FFAC 80121BAC 53D9030C */  jal        func_800F654C
    /* 2FFB0 80121BB0 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 2FFB4 80121BB4 93E0030C */  jal        func_800F824C
    /* 2FFB8 80121BB8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2FFBC 80121BBC 53D9030C */  jal        func_800F654C
    /* 2FFC0 80121BC0 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 2FFC4 80121BC4 93E0030C */  jal        func_800F824C
    /* 2FFC8 80121BC8 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FFCC 80121BCC F986040C */  jal        func_80121BE4
    /* 2FFD0 80121BD0 00000000 */   nop
    /* 2FFD4 80121BD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FFD8 80121BD8 00000000 */  nop
    /* 2FFDC 80121BDC 0800E003 */  jr         $ra
    /* 2FFE0 80121BE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121B5C
