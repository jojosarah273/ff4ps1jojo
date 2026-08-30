nonmatching func_8015CEA0, 0x78

glabel func_8015CEA0
    /* 6B2A0 8015CEA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B2A4 8015CEA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B2A8 8015CEA8 F5D4030C */  jal        func_800F53D4
    /* 6B2AC 8015CEAC 00000000 */   nop
    /* 6B2B0 8015CEB0 0D004010 */  beqz       $v0, .L8015CEE8
    /* 6B2B4 8015CEB4 00000000 */   nop
    /* 6B2B8 8015CEB8 A8D7030C */  jal        func_800F5EA0
    /* 6B2BC 8015CEBC 00000000 */   nop
    /* 6B2C0 8015CEC0 C7E5030C */  jal        func_800F971C
    /* 6B2C4 8015CEC4 00000000 */   nop
    /* 6B2C8 8015CEC8 BBE0030C */  jal        func_800F82EC
    /* 6B2CC 8015CECC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6B2D0 8015CED0 A8D7030C */  jal        func_800F5EA0
    /* 6B2D4 8015CED4 00000000 */   nop
    /* 6B2D8 8015CED8 53D9030C */  jal        func_800F654C
    /* 6B2DC 8015CEDC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6B2E0 8015CEE0 BBE0030C */  jal        func_800F82EC
    /* 6B2E4 8015CEE4 80000424 */   addiu     $a0, $zero, 0x80
  .L8015CEE8:
    /* 6B2E8 8015CEE8 59D9030C */  jal        func_800F6564
    /* 6B2EC 8015CEEC 39390424 */   addiu     $a0, $zero, 0x3939
    /* 6B2F0 8015CEF0 93E0030C */  jal        func_800F824C
    /* 6B2F4 8015CEF4 01000424 */   addiu     $a0, $zero, 0x1
    /* 6B2F8 8015CEF8 53D9030C */  jal        func_800F654C
    /* 6B2FC 8015CEFC 06000424 */   addiu     $a0, $zero, 0x6
    /* 6B300 8015CF00 0E43050C */  jal        func_80150C38
    /* 6B304 8015CF04 00000000 */   nop
    /* 6B308 8015CF08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B30C 8015CF0C 00000000 */  nop
    /* 6B310 8015CF10 0800E003 */  jr         $ra
    /* 6B314 8015CF14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015CEA0
