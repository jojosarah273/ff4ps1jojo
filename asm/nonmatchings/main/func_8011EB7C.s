nonmatching func_8011EB7C, 0x20

glabel func_8011EB7C
    /* 2CF7C 8011EB7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CF80 8011EB80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CF84 8011EB84 48E2040C */  jal        func_80138920
    /* 2CF88 8011EB88 00000000 */   nop
    /* 2CF8C 8011EB8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CF90 8011EB90 00000000 */  nop
    /* 2CF94 8011EB94 0800E003 */  jr         $ra
    /* 2CF98 8011EB98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EB7C
