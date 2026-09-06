nonmatching func_801386C8, 0x68

glabel func_801386C8
    /* 46AC8 801386C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 46ACC 801386CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 46AD0 801386D0 A899040C */  jal        func_801266A0
    /* 46AD4 801386D4 00000000 */   nop
    /* 46AD8 801386D8 9FBA050C */  jal        func_8016EA7C
    /* 46ADC 801386DC 00000000 */   nop
    /* 46AE0 801386E0 9996040C */  jal        func_80125A64
    /* 46AE4 801386E4 00000000 */   nop
    /* 46AE8 801386E8 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 46AEC 801386EC 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 46AF0 801386F0 00030524 */  addiu      $a1, $zero, 0x300
    /* 46AF4 801386F4 21300000 */  addu       $a2, $zero, $zero
    /* 46AF8 801386F8 3EFE050C */  jal        func_8017F8F8
    /* 46AFC 801386FC FFFF0724 */   addiu     $a3, $zero, -0x1
    /* 46B00 80138700 9C8E040C */  jal        func_80123A70
    /* 46B04 80138704 00000000 */   nop
    /* 46B08 80138708 CC98040C */  jal        func_80126330
    /* 46B0C 8013870C 00000000 */   nop
    /* 46B10 80138710 A97D040C */  jal        func_8011F6A4
    /* 46B14 80138714 00000000 */   nop
    /* 46B18 80138718 6499040C */  jal        func_80126590
    /* 46B1C 8013871C 00000000 */   nop
    /* 46B20 80138720 1000BF8F */  lw         $ra, 0x10($sp)
    /* 46B24 80138724 00000000 */  nop
    /* 46B28 80138728 0800E003 */  jr         $ra
    /* 46B2C 8013872C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801386C8
