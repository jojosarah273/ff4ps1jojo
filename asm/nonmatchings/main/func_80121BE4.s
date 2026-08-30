nonmatching func_80121BE4, 0x28

glabel func_80121BE4
    /* 2FFE4 80121BE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FFE8 80121BE8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FFEC 80121BEC 4987040C */  jal        func_80121D24
    /* 2FFF0 80121BF0 00000000 */   nop
    /* 2FFF4 80121BF4 A786040C */  jal        func_80121A9C
    /* 2FFF8 80121BF8 00000000 */   nop
    /* 2FFFC 80121BFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30000 80121C00 00000000 */  nop
    /* 30004 80121C04 0800E003 */  jr         $ra
    /* 30008 80121C08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121BE4
