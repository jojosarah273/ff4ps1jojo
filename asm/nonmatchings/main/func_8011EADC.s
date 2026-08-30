nonmatching func_8011EADC, 0x20

glabel func_8011EADC
    /* 2CEDC 8011EADC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CEE0 8011EAE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CEE4 8011EAE4 697B040C */  jal        func_8011EDA4
    /* 2CEE8 8011EAE8 00000000 */   nop
    /* 2CEEC 8011EAEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CEF0 8011EAF0 00000000 */  nop
    /* 2CEF4 8011EAF4 0800E003 */  jr         $ra
    /* 2CEF8 8011EAF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EADC
