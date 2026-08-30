nonmatching func_8011EB5C, 0x20

glabel func_8011EB5C
    /* 2CF5C 8011EB5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CF60 8011EB60 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CF64 8011EB64 57EE040C */  jal        func_8013B95C
    /* 2CF68 8011EB68 00000000 */   nop
    /* 2CF6C 8011EB6C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CF70 8011EB70 00000000 */  nop
    /* 2CF74 8011EB74 0800E003 */  jr         $ra
    /* 2CF78 8011EB78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EB5C
