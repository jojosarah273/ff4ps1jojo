nonmatching func_800F71E8, 0x28

glabel func_800F71E8
    /* 55E8 800F71E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 55EC 800F71EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 55F0 800F71F0 C1CE030C */  jal        func_800F3B04
    /* 55F4 800F71F4 00000000 */   nop
    /* 55F8 800F71F8 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 55FC 800F71FC 00004390 */  lbu        $v1, 0x0($v0)
    /* 5600 800F7200 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5604 800F7204 000083A0 */  sb         $v1, 0x0($a0)
    /* 5608 800F7208 0800E003 */  jr         $ra
    /* 560C 800F720C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F71E8
