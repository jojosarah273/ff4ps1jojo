nonmatching func_8012EAC0, 0x138

glabel func_8012EAC0
    /* 3CEC0 8012EAC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3CEC4 8012EAC4 1000BFAF */  sw         $ra, 0x10($sp)
  .L8012EAC8:
    /* 3CEC8 8012EAC8 9CDC030C */  jal        func_800F7270
    /* 3CECC 8012EACC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CED0 8012EAD0 D9D8030C */  jal        func_800F6364
    /* 3CED4 8012EAD4 00000000 */   nop
    /* 3CED8 8012EAD8 5BE3030C */  jal        func_800F8D6C
    /* 3CEDC 8012EADC 23000424 */   addiu     $a0, $zero, 0x23
    /* 3CEE0 8012EAE0 8CDB030C */  jal        func_800F6E30
    /* 3CEE4 8012EAE4 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CEE8 8012EAE8 0DD9030C */  jal        func_800F6434
    /* 3CEEC 8012EAEC 02020424 */   addiu     $a0, $zero, 0x202
    /* 3CEF0 8012EAF0 2D004014 */  bnez       $v0, .L8012EBA8
    /* 3CEF4 8012EAF4 00000000 */   nop
    /* 3CEF8 8012EAF8 65DD030C */  jal        func_800F7594
    /* 3CEFC 8012EAFC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CF00 8012EB00 EFD8030C */  jal        func_800F63BC
    /* 3CF04 8012EB04 00000000 */   nop
    /* 3CF08 8012EB08 EFD8030C */  jal        func_800F63BC
    /* 3CF0C 8012EB0C 00000000 */   nop
  .L8012EB10:
    /* 3CF10 8012EB10 5CDB030C */  jal        func_800F6D70
    /* 3CF14 8012EB14 21200000 */   addu      $a0, $zero, $zero
    /* 3CF18 8012EB18 0DD9030C */  jal        func_800F6434
    /* 3CF1C 8012EB1C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3CF20 8012EB20 15004014 */  bnez       $v0, .L8012EB78
    /* 3CF24 8012EB24 00000000 */   nop
    /* 3CF28 8012EB28 5DD5030C */  jal        func_800F5574
    /* 3CF2C 8012EB2C FE000424 */   addiu     $a0, $zero, 0xFE
    /* 3CF30 8012EB30 F0D4030C */  jal        func_800F53C0
    /* 3CF34 8012EB34 00000000 */   nop
    /* 3CF38 8012EB38 0F004014 */  bnez       $v0, .L8012EB78
    /* 3CF3C 8012EB3C 00000000 */   nop
    /* 3CF40 8012EB40 86E2030C */  jal        func_800F8A18
    /* 3CF44 8012EB44 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CF48 8012EB48 5CDB030C */  jal        func_800F6D70
    /* 3CF4C 8012EB4C 01000424 */   addiu     $a0, $zero, 0x1
    /* 3CF50 8012EB50 86E2030C */  jal        func_800F8A18
    /* 3CF54 8012EB54 23000424 */   addiu     $a0, $zero, 0x23
    /* 3CF58 8012EB58 53D9030C */  jal        func_800F654C
    /* 3CF5C 8012EB5C 21200000 */   addu      $a0, $zero, $zero
    /* 3CF60 8012EB60 58E2030C */  jal        func_800F8960
    /* 3CF64 8012EB64 21200000 */   addu      $a0, $zero, $zero
    /* 3CF68 8012EB68 58E2030C */  jal        func_800F8960
    /* 3CF6C 8012EB6C 01000424 */   addiu     $a0, $zero, 0x1
    /* 3CF70 8012EB70 EABA0408 */  j          .L8012EBA8
    /* 3CF74 8012EB74 00000000 */   nop
  .L8012EB78:
    /* 3CF78 8012EB78 EFD8030C */  jal        func_800F63BC
    /* 3CF7C 8012EB7C 00000000 */   nop
    /* 3CF80 8012EB80 EFD8030C */  jal        func_800F63BC
    /* 3CF84 8012EB84 00000000 */   nop
    /* 3CF88 8012EB88 0FCF030C */  jal        func_800F3C3C
    /* 3CF8C 8012EB8C 25000424 */   addiu     $a0, $zero, 0x25
    /* 3CF90 8012EB90 01D6030C */  jal        func_800F5804
    /* 3CF94 8012EB94 21204000 */   addu      $a0, $v0, $zero
    /* 3CF98 8012EB98 F5D4030C */  jal        func_800F53D4
    /* 3CF9C 8012EB9C 00000000 */   nop
    /* 3CFA0 8012EBA0 DBFF4010 */  beqz       $v0, .L8012EB10
    /* 3CFA4 8012EBA4 00000000 */   nop
  .L8012EBA8:
    /* 3CFA8 8012EBA8 9CDC030C */  jal        func_800F7270
    /* 3CFAC 8012EBAC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CFB0 8012EBB0 D9D8030C */  jal        func_800F6364
    /* 3CFB4 8012EBB4 00000000 */   nop
    /* 3CFB8 8012EBB8 D9D8030C */  jal        func_800F6364
    /* 3CFBC 8012EBBC 00000000 */   nop
    /* 3CFC0 8012EBC0 5BE3030C */  jal        func_800F8D6C
    /* 3CFC4 8012EBC4 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CFC8 8012EBC8 0FCF030C */  jal        func_800F3C3C
    /* 3CFCC 8012EBCC 21000424 */   addiu     $a0, $zero, 0x21
    /* 3CFD0 8012EBD0 ABD5030C */  jal        func_800F56AC
    /* 3CFD4 8012EBD4 21204000 */   addu      $a0, $v0, $zero
    /* 3CFD8 8012EBD8 F5D4030C */  jal        func_800F53D4
    /* 3CFDC 8012EBDC 00000000 */   nop
    /* 3CFE0 8012EBE0 B9FF4010 */  beqz       $v0, .L8012EAC8
    /* 3CFE4 8012EBE4 00000000 */   nop
    /* 3CFE8 8012EBE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3CFEC 8012EBEC 00000000 */  nop
    /* 3CFF0 8012EBF0 0800E003 */  jr         $ra
    /* 3CFF4 8012EBF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012EAC0
