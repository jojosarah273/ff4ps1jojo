nonmatching func_801229F4, 0x30

glabel func_801229F4
    /* 30DF4 801229F4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30DF8 801229F8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30DFC 801229FC 77DC030C */  jal        func_800F71DC
    /* 30E00 80122A00 0E040424 */   addiu     $a0, $zero, 0x40E
    /* 30E04 80122A04 40DD030C */  jal        func_800F7500
    /* 30E08 80122A08 00110424 */   addiu     $a0, $zero, 0x1100
    /* 30E0C 80122A0C 488B040C */  jal        func_80122D20
    /* 30E10 80122A10 00000000 */   nop
    /* 30E14 80122A14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30E18 80122A18 00000000 */  nop
    /* 30E1C 80122A1C 0800E003 */  jr         $ra
    /* 30E20 80122A20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801229F4
