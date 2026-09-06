nonmatching func_8012281C, 0x28

glabel func_8012281C
    /* 30C1C 8012281C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30C20 80122820 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30C24 80122824 118A040C */  jal        func_80122844
    /* 30C28 80122828 00000000 */   nop
    /* 30C2C 8012282C 898A040C */  jal        func_80122A24
    /* 30C30 80122830 00000000 */   nop
    /* 30C34 80122834 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30C38 80122838 00000000 */  nop
    /* 30C3C 8012283C 0800E003 */  jr         $ra
    /* 30C40 80122840 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012281C
