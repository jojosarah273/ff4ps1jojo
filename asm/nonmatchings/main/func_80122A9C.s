nonmatching func_80122A9C, 0xB8

glabel func_80122A9C
    /* 30E9C 80122A9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30EA0 80122AA0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 30EA4 80122AA4 078A040C */  jal        func_8012281C
    /* 30EA8 80122AA8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 30EAC 80122AAC 8B83040C */  jal        func_80120E2C
    /* 30EB0 80122AB0 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 30EB4 80122AB4 90911026 */  addiu      $s0, $s0, %lo(D_80199190)
    /* 30EB8 80122AB8 0C000496 */  lhu        $a0, 0xC($s0)
    /* 30EBC 80122ABC 40DD030C */  jal        func_800F7500
    /* 30EC0 80122AC0 00000000 */   nop
    /* 30EC4 80122AC4 CC7B040C */  jal        func_8011EF30
    /* 30EC8 80122AC8 00000000 */   nop
    /* 30ECC 80122ACC 0A000496 */  lhu        $a0, 0xA($s0)
    /* 30ED0 80122AD0 40DD030C */  jal        func_800F7500
    /* 30ED4 80122AD4 00000000 */   nop
    /* 30ED8 80122AD8 CC7B040C */  jal        func_8011EF30
    /* 30EDC 80122ADC 00000000 */   nop
    /* 30EE0 80122AE0 C783040C */  jal        func_80120F1C
    /* 30EE4 80122AE4 00000000 */   nop
    /* 30EE8 80122AE8 0E000496 */  lhu        $a0, 0xE($s0)
    /* 30EEC 80122AEC 40DD030C */  jal        func_800F7500
    /* 30EF0 80122AF0 00000000 */   nop
    /* 30EF4 80122AF4 DD7E040C */  jal        func_8011FB74
    /* 30EF8 80122AF8 00000000 */   nop
    /* 30EFC 80122AFC 59D9030C */  jal        func_800F6564
    /* 30F00 80122B00 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* 30F04 80122B04 0DD9030C */  jal        func_800F6434
    /* 30F08 80122B08 02020424 */   addiu     $a0, $zero, 0x202
    /* 30F0C 80122B0C 0D004014 */  bnez       $v0, .L80122B44
    /* 30F10 80122B10 00000000 */   nop
    /* 30F14 80122B14 53D9030C */  jal        func_800F654C
    /* 30F18 80122B18 24000424 */   addiu     $a0, $zero, 0x24
    /* 30F1C 80122B1C 62E0030C */  jal        func_800F8188
    /* 30F20 80122B20 31CA0434 */   ori       $a0, $zero, 0xCA31
    /* 30F24 80122B24 62E0030C */  jal        func_800F8188
    /* 30F28 80122B28 33CA0434 */   ori       $a0, $zero, 0xCA33
    /* 30F2C 80122B2C 62E0030C */  jal        func_800F8188
    /* 30F30 80122B30 35CA0434 */   ori       $a0, $zero, 0xCA35
    /* 30F34 80122B34 62E0030C */  jal        func_800F8188
    /* 30F38 80122B38 37CA0434 */   ori       $a0, $zero, 0xCA37
    /* 30F3C 80122B3C 62E0030C */  jal        func_800F8188
    /* 30F40 80122B40 F5C90434 */   ori       $a0, $zero, 0xC9F5
  .L80122B44:
    /* 30F44 80122B44 1400BF8F */  lw         $ra, 0x14($sp)
    /* 30F48 80122B48 1000B08F */  lw         $s0, 0x10($sp)
    /* 30F4C 80122B4C 0800E003 */  jr         $ra
    /* 30F50 80122B50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122A9C
