nonmatching func_8011EA9C, 0x20

glabel func_8011EA9C
    /* 2CE9C 8011EA9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CEA0 8011EAA0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CEA4 8011EAA4 24C9040C */  jal        func_80132490
    /* 2CEA8 8011EAA8 00000000 */   nop
    /* 2CEAC 8011EAAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CEB0 8011EAB0 00000000 */  nop
    /* 2CEB4 8011EAB4 0800E003 */  jr         $ra
    /* 2CEB8 8011EAB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EA9C
