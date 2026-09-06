nonmatching func_8014AB90, 0x28

glabel func_8014AB90
    /* 58F90 8014AB90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58F94 8014AB94 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58F98 8014AB98 A95D020C */  jal        func_800976A4
    /* 58F9C 8014AB9C 00000000 */   nop
    /* 58FA0 8014ABA0 C913050C */  jal        func_80144F24
    /* 58FA4 8014ABA4 00000000 */   nop
    /* 58FA8 8014ABA8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58FAC 8014ABAC 00000000 */  nop
    /* 58FB0 8014ABB0 0800E003 */  jr         $ra
    /* 58FB4 8014ABB4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AB90
