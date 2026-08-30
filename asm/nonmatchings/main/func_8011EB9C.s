nonmatching func_8011EB9C, 0x20

glabel func_8011EB9C
    /* 2CF9C 8011EB9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CFA0 8011EBA0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CFA4 8011EBA4 7D7B040C */  jal        func_8011EDF4
    /* 2CFA8 8011EBA8 00000000 */   nop
    /* 2CFAC 8011EBAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CFB0 8011EBB0 00000000 */  nop
    /* 2CFB4 8011EBB4 0800E003 */  jr         $ra
    /* 2CFB8 8011EBB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EB9C
