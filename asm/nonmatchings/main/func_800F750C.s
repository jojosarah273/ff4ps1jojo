nonmatching func_800F750C, 0x28

glabel func_800F750C
    /* 590C 800F750C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5910 800F7510 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5914 800F7514 C1CE030C */  jal        func_800F3B04
    /* 5918 800F7518 00000000 */   nop
    /* 591C 800F751C 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 5920 800F7520 00004390 */  lbu        $v1, 0x0($v0)
    /* 5924 800F7524 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5928 800F7528 000083A0 */  sb         $v1, 0x0($a0)
    /* 592C 800F752C 0800E003 */  jr         $ra
    /* 5930 800F7530 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F750C
