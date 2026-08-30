nonmatching func_8012468C, 0x78

glabel func_8012468C
    /* 32A8C 8012468C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 32A90 80124690 1000BFAF */  sw         $ra, 0x10($sp)
    /* 32A94 80124694 77DC030C */  jal        func_800F71DC
    /* 32A98 80124698 04000424 */   addiu     $a0, $zero, 0x4
    /* 32A9C 8012469C 91E5030C */  jal        func_800F9644
    /* 32AA0 801246A0 20000424 */   addiu     $a0, $zero, 0x20
  .L801246A4:
    /* 32AA4 801246A4 56D9030C */  jal        func_800F6558
    /* 32AA8 801246A8 00010424 */   addiu     $a0, $zero, 0x100
    /* 32AAC 801246AC 75E2030C */  jal        func_800F89D4
    /* 32AB0 801246B0 21200000 */   addu      $a0, $zero, $zero
    /* 32AB4 801246B4 75E2030C */  jal        func_800F89D4
    /* 32AB8 801246B8 02000424 */   addiu     $a0, $zero, 0x2
    /* 32ABC 801246BC 75E2030C */  jal        func_800F89D4
    /* 32AC0 801246C0 04000424 */   addiu     $a0, $zero, 0x4
    /* 32AC4 801246C4 75E2030C */  jal        func_800F89D4
    /* 32AC8 801246C8 06000424 */   addiu     $a0, $zero, 0x6
    /* 32ACC 801246CC CD88040C */  jal        func_80122334
    /* 32AD0 801246D0 00000000 */   nop
    /* 32AD4 801246D4 92D7030C */  jal        func_800F5E48
    /* 32AD8 801246D8 00000000 */   nop
    /* 32ADC 801246DC 19D7030C */  jal        func_800F5C64
    /* 32AE0 801246E0 02020424 */   addiu     $a0, $zero, 0x202
    /* 32AE4 801246E4 EFFF4014 */  bnez       $v0, .L801246A4
    /* 32AE8 801246E8 00000000 */   nop
    /* 32AEC 801246EC 98E5030C */  jal        func_800F9660
    /* 32AF0 801246F0 20000424 */   addiu     $a0, $zero, 0x20
    /* 32AF4 801246F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 32AF8 801246F8 00000000 */  nop
    /* 32AFC 801246FC 0800E003 */  jr         $ra
    /* 32B00 80124700 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012468C
