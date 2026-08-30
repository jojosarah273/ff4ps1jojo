nonmatching func_8011B6B4, 0x90

glabel func_8011B6B4
    /* 29AB4 8011B6B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29AB8 8011B6B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29ABC 8011B6BC CCE4030C */  jal        func_800F9330
    /* 29AC0 8011B6C0 00000000 */   nop
    /* 29AC4 8011B6C4 D16D040C */  jal        func_8011B744
    /* 29AC8 8011B6C8 00000000 */   nop
    /* 29ACC 8011B6CC 9CDC030C */  jal        func_800F7270
    /* 29AD0 8011B6D0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29AD4 8011B6D4 DADA030C */  jal        func_800F6B68
    /* 29AD8 8011B6D8 80120424 */   addiu     $a0, $zero, 0x1280
  .L8011B6DC:
    /* 29ADC 8011B6DC A4D6030C */  jal        func_800F5A90
    /* 29AE0 8011B6E0 21200000 */   addu      $a0, $zero, $zero
    /* 29AE4 8011B6E4 F5D4030C */  jal        func_800F53D4
    /* 29AE8 8011B6E8 00000000 */   nop
    /* 29AEC 8011B6EC 07004014 */  bnez       $v0, .L8011B70C
    /* 29AF0 8011B6F0 00000000 */   nop
    /* 29AF4 8011B6F4 19DE030C */  jal        func_800F7864
    /* 29AF8 8011B6F8 00000000 */   nop
    /* 29AFC 8011B6FC A8D7030C */  jal        func_800F5EA0
    /* 29B00 8011B700 00000000 */   nop
    /* 29B04 8011B704 B76D0408 */  j          .L8011B6DC
    /* 29B08 8011B708 00000000 */   nop
  .L8011B70C:
    /* 29B0C 8011B70C 19DE030C */  jal        func_800F7864
    /* 29B10 8011B710 00000000 */   nop
    /* 29B14 8011B714 BADD030C */  jal        func_800F76E8
    /* 29B18 8011B718 00000000 */   nop
    /* 29B1C 8011B71C 53D9030C */  jal        func_800F654C
    /* 29B20 8011B720 21200000 */   addu      $a0, $zero, $zero
    /* 29B24 8011B724 02D0030C */  jal        func_800F4008
    /* 29B28 8011B728 21200000 */   addu      $a0, $zero, $zero
    /* 29B2C 8011B72C 68E5030C */  jal        func_800F95A0
    /* 29B30 8011B730 00000000 */   nop
    /* 29B34 8011B734 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29B38 8011B738 00000000 */  nop
    /* 29B3C 8011B73C 0800E003 */  jr         $ra
    /* 29B40 8011B740 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B6B4
