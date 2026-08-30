nonmatching func_800F4370, 0x30

glabel func_800F4370
    /* 2770 800F4370 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2774 800F4374 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2778 800F4378 0FCF030C */  jal        func_800F3C3C
    /* 277C 800F437C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2780 800F4380 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 2784 800F4384 00004590 */  lbu        $a1, 0x0($v0)
    /* 2788 800F4388 00006490 */  lbu        $a0, 0x0($v1)
    /* 278C 800F438C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2790 800F4390 24208500 */  and        $a0, $a0, $a1
    /* 2794 800F4394 000064A0 */  sb         $a0, 0x0($v1)
    /* 2798 800F4398 0800E003 */  jr         $ra
    /* 279C 800F439C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4370
