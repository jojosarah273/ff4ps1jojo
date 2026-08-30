nonmatching func_8011EAFC, 0x20

glabel func_8011EAFC
    /* 2CEFC 8011EAFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CF00 8011EB00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CF04 8011EB04 48E2040C */  jal        func_80138920
    /* 2CF08 8011EB08 00000000 */   nop
    /* 2CF0C 8011EB0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CF10 8011EB10 00000000 */  nop
    /* 2CF14 8011EB14 0800E003 */  jr         $ra
    /* 2CF18 8011EB18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EAFC
