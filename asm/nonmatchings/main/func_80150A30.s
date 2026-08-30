nonmatching func_80150A30, 0x158

glabel func_80150A30
    /* 5EE30 80150A30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5EE34 80150A34 7E00043C */  lui        $a0, (0x7E3975 >> 16)
    /* 5EE38 80150A38 75398434 */  ori        $a0, $a0, (0x7E3975 & 0xFFFF)
    /* 5EE3C 80150A3C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 5EE40 80150A40 84E0030C */  jal        func_800F8210
    /* 5EE44 80150A44 1000B0AF */   sw        $s0, 0x10($sp)
    /* 5EE48 80150A48 0D80103C */  lui        $s0, %hi(D_800D0000)
    /* 5EE4C 80150A4C 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 5EE50 80150A50 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 5EE54 80150A54 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 5EE58 80150A58 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 5EE5C 80150A5C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5EE60 80150A60 00008590 */  lbu        $a1, 0x0($a0)
    /* 5EE64 80150A64 21105000 */  addu       $v0, $v0, $s0
    /* 5EE68 80150A68 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 5EE6C 80150A6C 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 5EE70 80150A70 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 5EE74 80150A74 00000000 */  nop
    /* 5EE78 80150A78 00006294 */  lhu        $v0, 0x0($v1)
    /* 5EE7C 80150A7C 30000424 */  addiu      $a0, $zero, 0x30
    /* 5EE80 80150A80 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 5EE84 80150A84 91E5030C */  jal        func_800F9644
    /* 5EE88 80150A88 000062A4 */   sh        $v0, 0x0($v1)
    /* 5EE8C 80150A8C 9BE4030C */  jal        func_800F926C
    /* 5EE90 80150A90 00000000 */   nop
    /* 5EE94 80150A94 A6E4030C */  jal        func_800F9298
    /* 5EE98 80150A98 00000000 */   nop
    /* 5EE9C 80150A9C 8BE4030C */  jal        func_800F922C
    /* 5EEA0 80150AA0 00000000 */   nop
    /* 5EEA4 80150AA4 CCE4030C */  jal        func_800F9330
    /* 5EEA8 80150AA8 00000000 */   nop
    /* 5EEAC 80150AAC E7E4030C */  jal        func_800F939C
    /* 5EEB0 80150AB0 00000000 */   nop
    /* 5EEB4 80150AB4 2ED5030C */  jal        func_800F54B8
    /* 5EEB8 80150AB8 00000000 */   nop
    /* 5EEBC 80150ABC 56D9030C */  jal        func_800F6558
    /* 5EEC0 80150AC0 21200000 */   addu      $a0, $zero, $zero
    /* 5EEC4 80150AC4 98E5030C */  jal        func_800F9660
    /* 5EEC8 80150AC8 20000424 */   addiu     $a0, $zero, 0x20
    /* 5EECC 80150ACC 91E5030C */  jal        func_800F9644
    /* 5EED0 80150AD0 10000424 */   addiu     $a0, $zero, 0x10
    /* 5EED4 80150AD4 77DC030C */  jal        func_800F71DC
    /* 5EED8 80150AD8 21200000 */   addu      $a0, $zero, $zero
    /* 5EEDC 80150ADC CCE4030C */  jal        func_800F9330
    /* 5EEE0 80150AE0 00000000 */   nop
    /* 5EEE4 80150AE4 2EE5030C */  jal        func_800F94B8
    /* 5EEE8 80150AE8 00000000 */   nop
    /* 5EEEC 80150AEC 53D9030C */  jal        func_800F654C
    /* 5EEF0 80150AF0 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 5EEF4 80150AF4 80E4030C */  jal        func_800F9200
    /* 5EEF8 80150AF8 00000000 */   nop
    /* 5EEFC 80150AFC 12E5030C */  jal        func_800F9448
    /* 5EF00 80150B00 00000000 */   nop
    /* 5EF04 80150B04 B660050C */  jal        func_801582D8
    /* 5EF08 80150B08 00000000 */   nop
    /* 5EF0C 80150B0C 91E5030C */  jal        func_800F9644
    /* 5EF10 80150B10 30000424 */   addiu     $a0, $zero, 0x30
    /* 5EF14 80150B14 83E5030C */  jal        func_800F960C
    /* 5EF18 80150B18 00000000 */   nop
    /* 5EF1C 80150B1C 68E5030C */  jal        func_800F95A0
    /* 5EF20 80150B20 00000000 */   nop
    /* 5EF24 80150B24 04E5030C */  jal        func_800F9410
    /* 5EF28 80150B28 00000000 */   nop
    /* 5EF2C 80150B2C 2EE5030C */  jal        func_800F94B8
    /* 5EF30 80150B30 00000000 */   nop
    /* 5EF34 80150B34 12E5030C */  jal        func_800F9448
    /* 5EF38 80150B38 00000000 */   nop
    /* 5EF3C 80150B3C 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 5EF40 80150B40 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 5EF44 80150B44 00000000 */  nop
    /* 5EF48 80150B48 00008294 */  lhu        $v0, 0x0($a0)
    /* 5EF4C 80150B4C 00000000 */  nop
    /* 5EF50 80150B50 01004224 */  addiu      $v0, $v0, 0x1
    /* 5EF54 80150B54 000082A4 */  sh         $v0, 0x0($a0)
    /* 5EF58 80150B58 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 5EF5C 80150B5C 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 5EF60 80150B60 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5EF64 80150B64 00006294 */  lhu        $v0, 0x0($v1)
    /* 5EF68 80150B68 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 5EF6C 80150B6C 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 5EF70 80150B70 21105000 */  addu       $v0, $v0, $s0
    /* 5EF74 80150B74 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 5EF78 80150B78 1000B08F */  lw         $s0, 0x10($sp)
    /* 5EF7C 80150B7C 000083A0 */  sb         $v1, 0x0($a0)
    /* 5EF80 80150B80 0800E003 */  jr         $ra
    /* 5EF84 80150B84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80150A30
