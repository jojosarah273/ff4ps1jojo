nonmatching func_8011B4A4, 0x78

glabel func_8011B4A4
    /* 298A4 8011B4A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 298A8 8011B4A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 298AC 8011B4AC D16D040C */  jal        func_8011B744
    /* 298B0 8011B4B0 00000000 */   nop
    /* 298B4 8011B4B4 53D9030C */  jal        func_800F654C
    /* 298B8 8011B4B8 FE000424 */   addiu     $a0, $zero, 0xFE
  .L8011B4BC:
    /* 298BC 8011B4BC A4D6030C */  jal        func_800F5A90
    /* 298C0 8011B4C0 21200000 */   addu      $a0, $zero, $zero
    /* 298C4 8011B4C4 F5D4030C */  jal        func_800F53D4
    /* 298C8 8011B4C8 00000000 */   nop
    /* 298CC 8011B4CC 09004014 */  bnez       $v0, .L8011B4F4
    /* 298D0 8011B4D0 00000000 */   nop
    /* 298D4 8011B4D4 20D5030C */  jal        func_800F5480
    /* 298D8 8011B4D8 00000000 */   nop
    /* 298DC 8011B4DC 1BDF030C */  jal        func_800F7C6C
    /* 298E0 8011B4E0 00000000 */   nop
    /* 298E4 8011B4E4 A8D7030C */  jal        func_800F5EA0
    /* 298E8 8011B4E8 00000000 */   nop
    /* 298EC 8011B4EC 2F6D0408 */  j          .L8011B4BC
    /* 298F0 8011B4F0 00000000 */   nop
  .L8011B4F4:
    /* 298F4 8011B4F4 9CDC030C */  jal        func_800F7270
    /* 298F8 8011B4F8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 298FC 8011B4FC 58D2030C */  jal        func_800F4960
    /* 29900 8011B500 80120424 */   addiu     $a0, $zero, 0x1280
    /* 29904 8011B504 DAE1030C */  jal        func_800F8768
    /* 29908 8011B508 80120424 */   addiu     $a0, $zero, 0x1280
    /* 2990C 8011B50C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29910 8011B510 00000000 */  nop
    /* 29914 8011B514 0800E003 */  jr         $ra
    /* 29918 8011B518 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B4A4
