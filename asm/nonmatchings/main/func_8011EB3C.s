nonmatching func_8011EB3C, 0x20

glabel func_8011EB3C
    /* 2CF3C 8011EB3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CF40 8011EB40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CF44 8011EB44 197E040C */  jal        func_8011F864
    /* 2CF48 8011EB48 00000000 */   nop
    /* 2CF4C 8011EB4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CF50 8011EB50 00000000 */  nop
    /* 2CF54 8011EB54 0800E003 */  jr         $ra
    /* 2CF58 8011EB58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EB3C
