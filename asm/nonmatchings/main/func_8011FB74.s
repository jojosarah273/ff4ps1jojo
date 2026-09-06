nonmatching func_8011FB74, 0x30

glabel func_8011FB74
    /* 2DF74 8011FB74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DF78 8011FB78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DF7C 8011FB7C CC7B040C */  jal        func_8011EF30
    /* 2DF80 8011FB80 00000000 */   nop
    /* 2DF84 8011FB84 4689040C */  jal        func_80122518
    /* 2DF88 8011FB88 00000000 */   nop
    /* 2DF8C 8011FB8C E97E040C */  jal        func_8011FBA4
    /* 2DF90 8011FB90 00000000 */   nop
    /* 2DF94 8011FB94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DF98 8011FB98 00000000 */  nop
    /* 2DF9C 8011FB9C 0800E003 */  jr         $ra
    /* 2DFA0 8011FBA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011FB74
