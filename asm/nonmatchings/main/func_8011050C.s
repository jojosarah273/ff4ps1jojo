nonmatching func_8011050C, 0x30

glabel func_8011050C
    /* 1E90C 8011050C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1E910 80110510 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1E914 80110514 DEF9030C */  jal        func_800FE778
    /* 1E918 80110518 00000000 */   nop
    /* 1E91C 8011051C 1CFA030C */  jal        func_800FE870
    /* 1E920 80110520 00000000 */   nop
    /* 1E924 80110524 1D41040C */  jal        func_80110474
    /* 1E928 80110528 00000000 */   nop
    /* 1E92C 8011052C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1E930 80110530 00000000 */  nop
    /* 1E934 80110534 0800E003 */  jr         $ra
    /* 1E938 80110538 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011050C
