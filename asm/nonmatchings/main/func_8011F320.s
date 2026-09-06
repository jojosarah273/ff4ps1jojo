nonmatching func_8011F320, 0x40

glabel func_8011F320
    /* 2D720 8011F320 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D724 8011F324 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D728 8011F328 80E4030C */  jal        func_800F9200
    /* 2D72C 8011F32C 00000000 */   nop
    /* 2D730 8011F330 7BDF050C */  jal        func_80177DEC
    /* 2D734 8011F334 00000000 */   nop
    /* 2D738 8011F338 8CD9030C */  jal        func_800F6630
    /* 2D73C 8011F33C 88000424 */   addiu     $a0, $zero, 0x88
    /* 2D740 8011F340 7AE0030C */  jal        func_800F81E8
    /* 2D744 8011F344 00210424 */   addiu     $a0, $zero, 0x2100
    /* 2D748 8011F348 F7E4030C */  jal        func_800F93DC
    /* 2D74C 8011F34C 00000000 */   nop
    /* 2D750 8011F350 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D754 8011F354 00000000 */  nop
    /* 2D758 8011F358 0800E003 */  jr         $ra
    /* 2D75C 8011F35C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F320
