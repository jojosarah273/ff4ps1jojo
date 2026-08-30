nonmatching func_80106830, 0x30

glabel func_80106830
    /* 14C30 80106830 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 14C34 80106834 1000BFAF */  sw         $ra, 0x10($sp)
    /* 14C38 80106838 53D9030C */  jal        func_800F654C
    /* 14C3C 8010683C 11000424 */   addiu     $a0, $zero, 0x11
    /* 14C40 80106840 62E0030C */  jal        func_800F8188
    /* 14C44 80106844 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 14C48 80106848 4AA4050C */  jal        func_80169128
    /* 14C4C 8010684C 00000000 */   nop
    /* 14C50 80106850 1000BF8F */  lw         $ra, 0x10($sp)
    /* 14C54 80106854 00000000 */  nop
    /* 14C58 80106858 0800E003 */  jr         $ra
    /* 14C5C 8010685C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80106830
