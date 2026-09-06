nonmatching func_800F8E90, 0x2C

glabel func_800F8E90
    /* 7290 800F8E90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7294 800F8E94 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7298 800F8E98 0FCF030C */  jal        func_800F3C3C
    /* 729C 800F8E9C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 72A0 800F8EA0 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 72A4 800F8EA4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 72A8 800F8EA8 00006490 */  lbu        $a0, 0x0($v1)
    /* 72AC 800F8EAC 00000000 */  nop
    /* 72B0 800F8EB0 000044A0 */  sb         $a0, 0x0($v0)
    /* 72B4 800F8EB4 0800E003 */  jr         $ra
    /* 72B8 800F8EB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8E90
