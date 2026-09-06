nonmatching func_800F7594, 0x38

glabel func_800F7594
    /* 5994 800F7594 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5998 800F7598 1000BFAF */  sw         $ra, 0x10($sp)
    /* 599C 800F759C 0FCF030C */  jal        func_800F3C3C
    /* 59A0 800F75A0 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 59A4 800F75A4 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 59A8 800F75A8 00004390 */  lbu        $v1, 0x0($v0)
    /* 59AC 800F75AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59B0 800F75B0 000083A0 */  sb         $v1, 0x0($a0)
    /* 59B4 800F75B4 6400858F */  lw         $a1, %gp_rel(D_8019ED60)($gp)
    /* 59B8 800F75B8 01004390 */  lbu        $v1, 0x1($v0)
    /* 59BC 800F75BC 00000000 */  nop
    /* 59C0 800F75C0 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 59C4 800F75C4 0800E003 */  jr         $ra
    /* 59C8 800F75C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7594
