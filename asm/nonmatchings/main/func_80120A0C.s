nonmatching func_80120A0C, 0x160

glabel func_80120A0C
    /* 2EE0C 80120A0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2EE10 80120A10 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2EE14 80120A14 92D0030C */  jal        func_800F4248
    /* 2EE18 80120A18 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2EE1C 80120A1C 48D0030C */  jal        func_800F4120
    /* 2EE20 80120A20 02020424 */   addiu     $a0, $zero, 0x202
    /* 2EE24 80120A24 4D004010 */  beqz       $v0, .L80120B5C
    /* 2EE28 80120A28 00000000 */   nop
    /* 2EE2C 80120A2C 33D7030C */  jal        func_800F5CCC
    /* 2EE30 80120A30 00000000 */   nop
    /* 2EE34 80120A34 3489040C */  jal        func_801224D0
    /* 2EE38 80120A38 00000000 */   nop
    /* 2EE3C 80120A3C 1A80023C */  lui        $v0, %hi(D_80199304)
    /* 2EE40 80120A40 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 2EE44 80120A44 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 2EE48 80120A48 04934224 */  addiu      $v0, $v0, %lo(D_80199304)
    /* 2EE4C 80120A4C 00008394 */  lhu        $v1, 0x0($a0)
    /* 2EE50 80120A50 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2EE54 80120A54 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2EE58 80120A58 21186200 */  addu       $v1, $v1, $v0
    /* 2EE5C 80120A5C 00006290 */  lbu        $v0, 0x0($v1)
    /* 2EE60 80120A60 50D4030C */  jal        func_800F5140
    /* 2EE64 80120A64 000082A0 */   sb        $v0, 0x0($a0)
    /* 2EE68 80120A68 93E0030C */  jal        func_800F824C
    /* 2EE6C 80120A6C 45000424 */   addiu     $a0, $zero, 0x45
    /* 2EE70 80120A70 50D4030C */  jal        func_800F5140
    /* 2EE74 80120A74 00000000 */   nop
    /* 2EE78 80120A78 D3D3030C */  jal        func_800F4F4C
    /* 2EE7C 80120A7C 00000000 */   nop
    /* 2EE80 80120A80 0FCF030C */  jal        func_800F3C3C
    /* 2EE84 80120A84 45000424 */   addiu     $a0, $zero, 0x45
    /* 2EE88 80120A88 CECF030C */  jal        func_800F3F38
    /* 2EE8C 80120A8C 21204000 */   addu      $a0, $v0, $zero
    /* 2EE90 80120A90 3489040C */  jal        func_801224D0
    /* 2EE94 80120A94 00000000 */   nop
    /* 2EE98 80120A98 91E5030C */  jal        func_800F9644
    /* 2EE9C 80120A9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2EEA0 80120AA0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2EEA4 80120AA4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2EEA8 80120AA8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 2EEAC 80120AAC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 2EEB0 80120AB0 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EEB4 80120AB4 04D5030C */  jal        func_800F5410
    /* 2EEB8 80120AB8 000082A4 */   sh        $v0, 0x0($a0)
    /* 2EEBC 80120ABC 0FCF030C */  jal        func_800F3C3C
    /* 2EEC0 80120AC0 29000424 */   addiu     $a0, $zero, 0x29
    /* 2EEC4 80120AC4 E5CF030C */  jal        func_800F3F94
    /* 2EEC8 80120AC8 21204000 */   addu      $a0, $v0, $zero
    /* 2EECC 80120ACC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2EED0 80120AD0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2EED4 80120AD4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2EED8 80120AD8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2EEDC 80120ADC 00004394 */  lhu        $v1, 0x0($v0)
    /* 2EEE0 80120AE0 20000424 */  addiu      $a0, $zero, 0x20
    /* 2EEE4 80120AE4 98E5030C */  jal        func_800F9660
    /* 2EEE8 80120AE8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2EEEC 80120AEC 53D9030C */  jal        func_800F654C
    /* 2EEF0 80120AF0 06000424 */   addiu     $a0, $zero, 0x6
    /* 2EEF4 80120AF4 93E0030C */  jal        func_800F824C
    /* 2EEF8 80120AF8 45000424 */   addiu     $a0, $zero, 0x45
  .L80120AFC:
    /* 2EEFC 80120AFC DADA030C */  jal        func_800F6B68
    /* 2EF00 80120B00 00150424 */   addiu     $a0, $zero, 0x1500
    /* 2EF04 80120B04 D9D8030C */  jal        func_800F6364
    /* 2EF08 80120B08 00000000 */   nop
    /* 2EF0C 80120B0C 6D91040C */  jal        func_801245B4
    /* 2EF10 80120B10 00000000 */   nop
    /* 2EF14 80120B14 58E2030C */  jal        func_800F8960
    /* 2EF18 80120B18 21200000 */   addu      $a0, $zero, $zero
    /* 2EF1C 80120B1C 52CF030C */  jal        func_800F3D48
    /* 2EF20 80120B20 00000000 */   nop
    /* 2EF24 80120B24 58E2030C */  jal        func_800F8960
    /* 2EF28 80120B28 40000424 */   addiu     $a0, $zero, 0x40
    /* 2EF2C 80120B2C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2EF30 80120B30 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2EF34 80120B34 00000000 */  nop
    /* 2EF38 80120B38 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EF3C 80120B3C 45000424 */  addiu      $a0, $zero, 0x45
    /* 2EF40 80120B40 02004224 */  addiu      $v0, $v0, 0x2
    /* 2EF44 80120B44 68D7030C */  jal        func_800F5DA0
    /* 2EF48 80120B48 000062A4 */   sh        $v0, 0x0($v1)
    /* 2EF4C 80120B4C E3D6030C */  jal        func_800F5B8C
    /* 2EF50 80120B50 02020424 */   addiu     $a0, $zero, 0x202
    /* 2EF54 80120B54 E9FF4014 */  bnez       $v0, .L80120AFC
    /* 2EF58 80120B58 00000000 */   nop
  .L80120B5C:
    /* 2EF5C 80120B5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2EF60 80120B60 00000000 */  nop
    /* 2EF64 80120B64 0800E003 */  jr         $ra
    /* 2EF68 80120B68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120A0C
