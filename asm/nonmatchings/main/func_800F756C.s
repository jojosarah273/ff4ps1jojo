nonmatching func_800F756C, 0x28

glabel func_800F756C
    /* 596C 800F756C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5970 800F7570 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5974 800F7574 0FCF030C */  jal        func_800F3C3C
    /* 5978 800F7578 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 597C 800F757C 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 5980 800F7580 00004390 */  lbu        $v1, 0x0($v0)
    /* 5984 800F7584 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5988 800F7588 000083A0 */  sb         $v1, 0x0($a0)
    /* 598C 800F758C 0800E003 */  jr         $ra
    /* 5990 800F7590 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F756C
