nonmatching func_80117594, 0x30

glabel func_80117594
    /* 25994 80117594 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 25998 80117598 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2599C 8011759C D9D8030C */  jal        func_800F6364
    /* 259A0 801175A0 00000000 */   nop
    /* 259A4 801175A4 5BE3030C */  jal        func_800F8D6C
    /* 259A8 801175A8 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 259AC 801175AC DADA030C */  jal        func_800F6B68
    /* 259B0 801175B0 D5090424 */   addiu     $a0, $zero, 0x9D5
    /* 259B4 801175B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 259B8 801175B8 00000000 */  nop
    /* 259BC 801175BC 0800E003 */  jr         $ra
    /* 259C0 801175C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117594
