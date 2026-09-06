nonmatching func_800F72A8, 0x38

glabel func_800F72A8
    /* 56A8 800F72A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 56AC 800F72AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 56B0 800F72B0 0FCF030C */  jal        func_800F3C3C
    /* 56B4 800F72B4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 56B8 800F72B8 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 56BC 800F72BC 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 56C0 800F72C0 00006490 */  lbu        $a0, 0x0($v1)
    /* 56C4 800F72C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 56C8 800F72C8 21104400 */  addu       $v0, $v0, $a0
    /* 56CC 800F72CC 00004390 */  lbu        $v1, 0x0($v0)
    /* 56D0 800F72D0 00000000 */  nop
    /* 56D4 800F72D4 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 56D8 800F72D8 0800E003 */  jr         $ra
    /* 56DC 800F72DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F72A8
