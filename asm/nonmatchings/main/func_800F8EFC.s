nonmatching func_800F8EFC, 0x34

glabel func_800F8EFC
    /* 72FC 800F8EFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7300 800F8F00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7304 800F8F04 0FCF030C */  jal        func_800F3C3C
    /* 7308 800F8F08 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 730C 800F8F0C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7310 800F8F10 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 7314 800F8F14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7318 800F8F18 00006590 */  lbu        $a1, 0x0($v1)
    /* 731C 800F8F1C 00008690 */  lbu        $a2, 0x0($a0)
    /* 7320 800F8F20 21104500 */  addu       $v0, $v0, $a1
    /* 7324 800F8F24 000046A0 */  sb         $a2, 0x0($v0)
    /* 7328 800F8F28 0800E003 */  jr         $ra
    /* 732C 800F8F2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8EFC
