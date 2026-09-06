nonmatching func_80123A70, 0x38

glabel func_80123A70
    /* 31E70 80123A70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31E74 80123A74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31E78 80123A78 ED8F040C */  jal        func_80123FB4
    /* 31E7C 80123A7C 00000000 */   nop
    /* 31E80 80123A80 6E90040C */  jal        func_801241B8
    /* 31E84 80123A84 00000000 */   nop
    /* 31E88 80123A88 A97D040C */  jal        func_8011F6A4
    /* 31E8C 80123A8C 00000000 */   nop
    /* 31E90 80123A90 A78A040C */  jal        func_80122A9C
    /* 31E94 80123A94 00000000 */   nop
    /* 31E98 80123A98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31E9C 80123A9C 00000000 */  nop
    /* 31EA0 80123AA0 0800E003 */  jr         $ra
    /* 31EA4 80123AA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80123A70
