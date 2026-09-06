nonmatching func_8011F6D4, 0x28

glabel func_8011F6D4
    /* 2DAD4 8011F6D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DAD8 8011F6D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DADC 8011F6DC 40DD030C */  jal        func_800F7500
    /* 2DAE0 8011F6E0 00030424 */   addiu     $a0, $zero, 0x300
    /* 2DAE4 8011F6E4 BF7D040C */  jal        func_8011F6FC
    /* 2DAE8 8011F6E8 00000000 */   nop
    /* 2DAEC 8011F6EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DAF0 8011F6F0 00000000 */  nop
    /* 2DAF4 8011F6F4 0800E003 */  jr         $ra
    /* 2DAF8 8011F6F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F6D4
