nonmatching func_80197DF8, 0x38

glabel func_80197DF8
    /* A61F8 80197DF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A61FC 80197DFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* A6200 80197E00 5B5F060C */  jal        func_80197D6C
    /* A6204 80197E04 00000000 */   nop
    /* A6208 80197E08 9A5F060C */  jal        func_80197E68
    /* A620C 80197E0C 00000000 */   nop
    /* A6210 80197E10 8C5F060C */  jal        func_80197E30
    /* A6214 80197E14 00000000 */   nop
    /* A6218 80197E18 9E5E060C */  jal        func_80197A78
    /* A621C 80197E1C 21200000 */   addu      $a0, $zero, $zero
    /* A6220 80197E20 1000BF8F */  lw         $ra, 0x10($sp)
    /* A6224 80197E24 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A6228 80197E28 0800E003 */  jr         $ra
    /* A622C 80197E2C 00000000 */   nop
endlabel func_80197DF8
