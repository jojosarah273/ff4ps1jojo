nonmatching func_8011EABC, 0x20

glabel func_8011EABC
    /* 2CEBC 8011EABC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CEC0 8011EAC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CEC4 8011EAC4 1DD3040C */  jal        func_80134C74
    /* 2CEC8 8011EAC8 00000000 */   nop
    /* 2CECC 8011EACC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CED0 8011EAD0 00000000 */  nop
    /* 2CED4 8011EAD4 0800E003 */  jr         $ra
    /* 2CED8 8011EAD8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EABC
