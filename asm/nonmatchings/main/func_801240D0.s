nonmatching func_801240D0, 0x28

glabel func_801240D0
    /* 324D0 801240D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 324D4 801240D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 324D8 801240D8 77DC030C */  jal        func_800F71DC
    /* 324DC 801240DC 00B60434 */   ori       $a0, $zero, 0xB600
    /* 324E0 801240E0 3E90040C */  jal        func_801240F8
    /* 324E4 801240E4 00000000 */   nop
    /* 324E8 801240E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 324EC 801240EC 00000000 */  nop
    /* 324F0 801240F0 0800E003 */  jr         $ra
    /* 324F4 801240F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801240D0
