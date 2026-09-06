nonmatching func_8014ADD4, 0x48

glabel func_8014ADD4
    /* 591D4 8014ADD4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 591D8 8014ADD8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 591DC 8014ADDC 53D9030C */  jal        func_800F654C
    /* 591E0 8014ADE0 21200000 */   addu      $a0, $zero, $zero
    /* 591E4 8014ADE4 512B050C */  jal        func_8014AD44
    /* 591E8 8014ADE8 00000000 */   nop
    /* 591EC 8014ADEC A035050C */  jal        func_8014D680
    /* 591F0 8014ADF0 00000000 */   nop
    /* 591F4 8014ADF4 3F0A050C */  jal        func_801428FC
    /* 591F8 8014ADF8 00000000 */   nop
    /* 591FC 8014ADFC 53D9030C */  jal        func_800F654C
    /* 59200 8014AE00 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 59204 8014AE04 62E0030C */  jal        func_800F8188
    /* 59208 8014AE08 7FF40434 */   ori       $a0, $zero, 0xF47F
    /* 5920C 8014AE0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59210 8014AE10 00000000 */  nop
    /* 59214 8014AE14 0800E003 */  jr         $ra
    /* 59218 8014AE18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014ADD4
