nonmatching func_800F75CC, 0x38

glabel func_800F75CC
    /* 59CC 800F75CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59D0 800F75D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59D4 800F75D4 0FCF030C */  jal        func_800F3C3C
    /* 59D8 800F75D8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 59DC 800F75DC 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 59E0 800F75E0 6400858F */  lw         $a1, %gp_rel(D_8019ED60)($gp)
    /* 59E4 800F75E4 00006490 */  lbu        $a0, 0x0($v1)
    /* 59E8 800F75E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59EC 800F75EC 21104400 */  addu       $v0, $v0, $a0
    /* 59F0 800F75F0 00004390 */  lbu        $v1, 0x0($v0)
    /* 59F4 800F75F4 00000000 */  nop
    /* 59F8 800F75F8 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 59FC 800F75FC 0800E003 */  jr         $ra
    /* 5A00 800F7600 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F75CC
