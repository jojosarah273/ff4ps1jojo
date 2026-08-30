nonmatching func_8014AB70, 0x20

glabel func_8014AB70
    /* 58F70 8014AB70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58F74 8014AB74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58F78 8014AB78 C713050C */  jal        func_80144F1C
    /* 58F7C 8014AB7C 00000000 */   nop
    /* 58F80 8014AB80 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58F84 8014AB84 00000000 */  nop
    /* 58F88 8014AB88 0800E003 */  jr         $ra
    /* 58F8C 8014AB8C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AB70
