nonmatching func_8011EB1C, 0x20

glabel func_8011EB1C
    /* 2CF1C 8011EB1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CF20 8011EB20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CF24 8011EB24 24C9040C */  jal        func_80132490
    /* 2CF28 8011EB28 00000000 */   nop
    /* 2CF2C 8011EB2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CF30 8011EB30 00000000 */  nop
    /* 2CF34 8011EB34 0800E003 */  jr         $ra
    /* 2CF38 8011EB38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EB1C
