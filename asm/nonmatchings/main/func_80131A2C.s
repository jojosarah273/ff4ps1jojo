nonmatching func_80131A2C, 0x10C

glabel func_80131A2C
    /* 3FE2C 80131A2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FE30 80131A30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FE34 80131A34 80E4030C */  jal        func_800F9200
    /* 3FE38 80131A38 00000000 */   nop
    /* 3FE3C 80131A3C 62E0030C */  jal        func_800F8188
    /* 3FE40 80131A40 BC1B0424 */   addiu     $a0, $zero, 0x1BBC
    /* 3FE44 80131A44 3489040C */  jal        func_801224D0
    /* 3FE48 80131A48 00000000 */   nop
    /* 3FE4C 80131A4C DADA030C */  jal        func_800F6B68
    /* 3FE50 80131A50 8B1B0424 */   addiu     $a0, $zero, 0x1B8B
    /* 3FE54 80131A54 0DD9030C */  jal        func_800F6434
    /* 3FE58 80131A58 02000424 */   addiu     $a0, $zero, 0x2
    /* 3FE5C 80131A5C 30004014 */  bnez       $v0, .L80131B20
    /* 3FE60 80131A60 00000000 */   nop
    /* 3FE64 80131A64 9CDC030C */  jal        func_800F7270
    /* 3FE68 80131A68 43000424 */   addiu     $a0, $zero, 0x43
    /* 3FE6C 80131A6C 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 3FE70 80131A70 1ADB030C */  jal        func_800F6C68
    /* 3FE74 80131A74 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 3FE78 80131A78 AB93040C */  jal        func_80124EAC
    /* 3FE7C 80131A7C 00000000 */   nop
    /* 3FE80 80131A80 DADA030C */  jal        func_800F6B68
    /* 3FE84 80131A84 03000424 */   addiu     $a0, $zero, 0x3
    /* 3FE88 80131A88 92D0030C */  jal        func_800F4248
    /* 3FE8C 80131A8C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 3FE90 80131A90 48D0030C */  jal        func_800F4120
    /* 3FE94 80131A94 02020424 */   addiu     $a0, $zero, 0x202
    /* 3FE98 80131A98 21004014 */  bnez       $v0, .L80131B20
    /* 3FE9C 80131A9C 00000000 */   nop
    /* 3FEA0 80131AA0 59D9030C */  jal        func_800F6564
    /* 3FEA4 80131AA4 BC1B0424 */   addiu     $a0, $zero, 0x1BBC
    /* 3FEA8 80131AA8 5EC8040C */  jal        func_80132178
    /* 3FEAC 80131AAC 00000000 */   nop
    /* 3FEB0 80131AB0 91E5030C */  jal        func_800F9644
    /* 3FEB4 80131AB4 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FEB8 80131AB8 F8DA030C */  jal        func_800F6BE0
    /* 3FEBC 80131ABC 07000424 */   addiu     $a0, $zero, 0x7
    /* 3FEC0 80131AC0 04D5030C */  jal        func_800F5410
    /* 3FEC4 80131AC4 00000000 */   nop
    /* 3FEC8 80131AC8 0FCF030C */  jal        func_800F3C3C
    /* 3FECC 80131ACC 45000424 */   addiu     $a0, $zero, 0x45
    /* 3FED0 80131AD0 E5CF030C */  jal        func_800F3F94
    /* 3FED4 80131AD4 21204000 */   addu      $a0, $v0, $zero
    /* 3FED8 80131AD8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3FEDC 80131ADC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3FEE0 80131AE0 00000000 */  nop
    /* 3FEE4 80131AE4 00004494 */  lhu        $a0, 0x0($v0)
    /* 3FEE8 80131AE8 C1CE030C */  jal        func_800F3B04
    /* 3FEEC 80131AEC 09008424 */   addiu     $a0, $a0, 0x9
    /* 3FEF0 80131AF0 48D5030C */  jal        func_800F5520
    /* 3FEF4 80131AF4 21204000 */   addu      $a0, $v0, $zero
    /* 3FEF8 80131AF8 F0D4030C */  jal        func_800F53C0
    /* 3FEFC 80131AFC 00000000 */   nop
    /* 3FF00 80131B00 03004010 */  beqz       $v0, .L80131B10
    /* 3FF04 80131B04 00000000 */   nop
    /* 3FF08 80131B08 F8DA030C */  jal        func_800F6BE0
    /* 3FF0C 80131B0C 09000424 */   addiu     $a0, $zero, 0x9
  .L80131B10:
    /* 3FF10 80131B10 F7E1030C */  jal        func_800F87DC
    /* 3FF14 80131B14 07000424 */   addiu     $a0, $zero, 0x7
    /* 3FF18 80131B18 98E5030C */  jal        func_800F9660
    /* 3FF1C 80131B1C 20000424 */   addiu     $a0, $zero, 0x20
  .L80131B20:
    /* 3FF20 80131B20 F7E4030C */  jal        func_800F93DC
    /* 3FF24 80131B24 00000000 */   nop
    /* 3FF28 80131B28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FF2C 80131B2C 00000000 */  nop
    /* 3FF30 80131B30 0800E003 */  jr         $ra
    /* 3FF34 80131B34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131A2C
