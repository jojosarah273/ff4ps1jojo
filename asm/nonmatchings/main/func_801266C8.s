nonmatching func_801266C8, 0x28

glabel func_801266C8
    /* 34AC8 801266C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34ACC 801266CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34AD0 801266D0 C87C040C */  jal        func_8011F320
    /* 34AD4 801266D4 00000000 */   nop
    /* 34AD8 801266D8 9FBA050C */  jal        func_8016EA7C
    /* 34ADC 801266DC 00000000 */   nop
    /* 34AE0 801266E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34AE4 801266E4 00000000 */  nop
    /* 34AE8 801266E8 0800E003 */  jr         $ra
    /* 34AEC 801266EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801266C8
