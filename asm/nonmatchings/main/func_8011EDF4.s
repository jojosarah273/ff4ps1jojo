nonmatching func_8011EDF4, 0x40

glabel func_8011EDF4
    /* 2D1F4 8011EDF4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D1F8 8011EDF8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D1FC 8011EDFC 80E4030C */  jal        func_800F9200
    /* 2D200 8011EE00 00000000 */   nop
    /* 2D204 8011EE04 87BA050C */  jal        func_8016EA1C
    /* 2D208 8011EE08 00000000 */   nop
    /* 2D20C 8011EE0C 53D9030C */  jal        func_800F654C
    /* 2D210 8011EE10 21200000 */   addu      $a0, $zero, $zero
    /* 2D214 8011EE14 52CF030C */  jal        func_800F3D48
    /* 2D218 8011EE18 00000000 */   nop
    /* 2D21C 8011EE1C F7E4030C */  jal        func_800F93DC
    /* 2D220 8011EE20 00000000 */   nop
    /* 2D224 8011EE24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D228 8011EE28 00000000 */  nop
    /* 2D22C 8011EE2C 0800E003 */  jr         $ra
    /* 2D230 8011EE30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EDF4
