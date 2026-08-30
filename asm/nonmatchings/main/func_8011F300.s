nonmatching func_8011F300, 0x20

glabel func_8011F300
    /* 2D700 8011F300 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D704 8011F304 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D708 8011F308 C87C040C */  jal        func_8011F320
    /* 2D70C 8011F30C 00000000 */   nop
    /* 2D710 8011F310 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D714 8011F314 00000000 */  nop
    /* 2D718 8011F318 0800E003 */  jr         $ra
    /* 2D71C 8011F31C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F300
