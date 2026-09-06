nonmatching func_801263F0, 0x28

glabel func_801263F0
    /* 347F0 801263F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 347F4 801263F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 347F8 801263F8 C87C040C */  jal        func_8011F320
    /* 347FC 801263FC 00000000 */   nop
    /* 34800 80126400 0699040C */  jal        func_80126418
    /* 34804 80126404 00000000 */   nop
    /* 34808 80126408 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3480C 8012640C 00000000 */  nop
    /* 34810 80126410 0800E003 */  jr         $ra
    /* 34814 80126414 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801263F0
