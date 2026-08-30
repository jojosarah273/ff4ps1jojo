nonmatching func_8011B448, 0x5C

glabel func_8011B448
    /* 29848 8011B448 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2984C 8011B44C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29850 8011B450 9CDC030C */  jal        func_800F7270
    /* 29854 8011B454 BC000424 */   addiu     $a0, $zero, 0xBC
  .L8011B458:
    /* 29858 8011B458 D9D8030C */  jal        func_800F6364
    /* 2985C 8011B45C 00000000 */   nop
    /* 29860 8011B460 1300043C */  lui        $a0, (0x139C00 >> 16)
    /* 29864 8011B464 1ADB030C */  jal        func_800F6C68
    /* 29868 8011B468 009C8434 */   ori       $a0, $a0, (0x139C00 & 0xFFFF)
    /* 2986C 8011B46C 5DD5030C */  jal        func_800F5574
    /* 29870 8011B470 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 29874 8011B474 F5D4030C */  jal        func_800F53D4
    /* 29878 8011B478 00000000 */   nop
    /* 2987C 8011B47C F6FF4010 */  beqz       $v0, .L8011B458
    /* 29880 8011B480 00000000 */   nop
    /* 29884 8011B484 D9D8030C */  jal        func_800F6364
    /* 29888 8011B488 00000000 */   nop
    /* 2988C 8011B48C 5BE3030C */  jal        func_800F8D6C
    /* 29890 8011B490 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 29894 8011B494 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29898 8011B498 00000000 */  nop
    /* 2989C 8011B49C 0800E003 */  jr         $ra
    /* 298A0 8011B4A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B448
