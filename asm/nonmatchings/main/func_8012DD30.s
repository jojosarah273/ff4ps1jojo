nonmatching func_8012DD30, 0x28

glabel func_8012DD30
    /* 3C130 8012DD30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3C134 8012DD34 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3C138 8012DD38 56B7040C */  jal        func_8012DD58
    /* 3C13C 8012DD3C 00000000 */   nop
    /* 3C140 8012DD40 DDE3030C */  jal        func_800F8F74
    /* 3C144 8012DD44 B81B0424 */   addiu     $a0, $zero, 0x1BB8
    /* 3C148 8012DD48 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3C14C 8012DD4C 00000000 */  nop
    /* 3C150 8012DD50 0800E003 */  jr         $ra
    /* 3C154 8012DD54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012DD30
