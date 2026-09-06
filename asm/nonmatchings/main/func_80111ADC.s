nonmatching func_80111ADC, 0x38

glabel func_80111ADC
    /* 1FEDC 80111ADC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1FEE0 80111AE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1FEE4 80111AE4 F6F9030C */  jal        func_800FE7D8
    /* 1FEE8 80111AE8 00000000 */   nop
    /* 1FEEC 80111AEC 09FC030C */  jal        func_800FF024
    /* 1FEF0 80111AF0 00000000 */   nop
    /* 1FEF4 80111AF4 5B50040C */  jal        func_8011416C
    /* 1FEF8 80111AF8 00000000 */   nop
    /* 1FEFC 80111AFC 7247040C */  jal        func_80111DC8
    /* 1FF00 80111B00 00000000 */   nop
    /* 1FF04 80111B04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1FF08 80111B08 00000000 */  nop
    /* 1FF0C 80111B0C 0800E003 */  jr         $ra
    /* 1FF10 80111B10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111ADC
