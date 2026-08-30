nonmatching func_80117F10, 0x30

glabel func_80117F10
    /* 26310 80117F10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26314 80117F14 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26318 80117F18 655D040C */  jal        func_80117594
    /* 2631C 80117F1C 00000000 */   nop
    /* 26320 80117F20 D05F040C */  jal        func_80117F40
    /* 26324 80117F24 00000000 */   nop
    /* 26328 80117F28 DEF9030C */  jal        func_800FE778
    /* 2632C 80117F2C 00000000 */   nop
    /* 26330 80117F30 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26334 80117F34 00000000 */  nop
    /* 26338 80117F38 0800E003 */  jr         $ra
    /* 2633C 80117F3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117F10
