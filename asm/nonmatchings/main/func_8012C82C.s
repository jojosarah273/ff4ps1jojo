nonmatching func_8012C82C, 0x78

glabel func_8012C82C
    /* 3AC2C 8012C82C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3AC30 8012C830 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3AC34 8012C834 91E5030C */  jal        func_800F9644
    /* 3AC38 8012C838 20000424 */   addiu     $a0, $zero, 0x20
    /* 3AC3C 8012C83C 40DD030C */  jal        func_800F7500
    /* 3AC40 8012C840 0D000424 */   addiu     $a0, $zero, 0xD
    /* 3AC44 8012C844 D9D9030C */  jal        func_800F6764
    /* 3AC48 8012C848 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AC4C 8012C84C 04D5030C */  jal        func_800F5410
    /* 3AC50 8012C850 00000000 */   nop
    /* 3AC54 8012C854 19D0030C */  jal        func_800F4064
    /* 3AC58 8012C858 0A000424 */   addiu     $a0, $zero, 0xA
    /* 3AC5C 8012C85C 70D5030C */  jal        func_800F55C0
    /* 3AC60 8012C860 E7030424 */   addiu     $a0, $zero, 0x3E7
    /* 3AC64 8012C864 F0D4030C */  jal        func_800F53C0
    /* 3AC68 8012C868 00000000 */   nop
    /* 3AC6C 8012C86C 03004010 */  beqz       $v0, .L8012C87C
    /* 3AC70 8012C870 00000000 */   nop
    /* 3AC74 8012C874 56D9030C */  jal        func_800F6558
    /* 3AC78 8012C878 E7030424 */   addiu     $a0, $zero, 0x3E7
  .L8012C87C:
    /* 3AC7C 8012C87C DEE0030C */  jal        func_800F8378
    /* 3AC80 8012C880 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AC84 8012C884 98E5030C */  jal        func_800F9660
    /* 3AC88 8012C888 20000424 */   addiu     $a0, $zero, 0x20
    /* 3AC8C 8012C88C 7B88040C */  jal        func_801221EC
    /* 3AC90 8012C890 00000000 */   nop
    /* 3AC94 8012C894 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3AC98 8012C898 00000000 */  nop
    /* 3AC9C 8012C89C 0800E003 */  jr         $ra
    /* 3ACA0 8012C8A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C82C
