nonmatching func_8011F844, 0x20

glabel func_8011F844
    /* 2DC44 8011F844 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DC48 8011F848 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DC4C 8011F84C 87BA050C */  jal        func_8016EA1C
    /* 2DC50 8011F850 00000000 */   nop
    /* 2DC54 8011F854 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DC58 8011F858 00000000 */  nop
    /* 2DC5C 8011F85C 0800E003 */  jr         $ra
    /* 2DC60 8011F860 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F844
