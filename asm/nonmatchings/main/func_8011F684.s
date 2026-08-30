nonmatching func_8011F684, 0x20

glabel func_8011F684
    /* 2DA84 8011F684 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DA88 8011F688 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DA8C 8011F68C C87C040C */  jal        func_8011F320
    /* 2DA90 8011F690 00000000 */   nop
    /* 2DA94 8011F694 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DA98 8011F698 00000000 */  nop
    /* 2DA9C 8011F69C 0800E003 */  jr         $ra
    /* 2DAA0 8011F6A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F684
