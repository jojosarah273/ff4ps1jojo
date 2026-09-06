nonmatching func_80121A9C, 0x68

glabel func_80121A9C
    /* 2FE9C 80121A9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FEA0 80121AA0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FEA4 80121AA4 8CD9030C */  jal        func_800F6630
    /* 2FEA8 80121AA8 66000424 */   addiu     $a0, $zero, 0x66
    /* 2FEAC 80121AAC 20D5030C */  jal        func_800F5480
    /* 2FEB0 80121AB0 00000000 */   nop
    /* 2FEB4 80121AB4 0FCF030C */  jal        func_800F3C3C
    /* 2FEB8 80121AB8 64000424 */   addiu     $a0, $zero, 0x64
    /* 2FEBC 80121ABC D2DF030C */  jal        func_800F7F48
    /* 2FEC0 80121AC0 21204000 */   addu      $a0, $v0, $zero
    /* 2FEC4 80121AC4 33D7030C */  jal        func_800F5CCC
    /* 2FEC8 80121AC8 00000000 */   nop
    /* 2FECC 80121ACC 93E0030C */  jal        func_800F824C
    /* 2FED0 80121AD0 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2FED4 80121AD4 8CD9030C */  jal        func_800F6630
    /* 2FED8 80121AD8 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 2FEDC 80121ADC DAE1030C */  jal        func_800F8768
    /* 2FEE0 80121AE0 21200000 */   addu      $a0, $zero, $zero
    /* 2FEE4 80121AE4 B188040C */  jal        func_801222C4
    /* 2FEE8 80121AE8 00000000 */   nop
    /* 2FEEC 80121AEC C186040C */  jal        func_80121B04
    /* 2FEF0 80121AF0 00000000 */   nop
    /* 2FEF4 80121AF4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FEF8 80121AF8 00000000 */  nop
    /* 2FEFC 80121AFC 0800E003 */  jr         $ra
    /* 2FF00 80121B00 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121A9C
