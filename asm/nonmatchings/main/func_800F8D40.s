nonmatching func_800F8D40, 0x2C

glabel func_800F8D40
    /* 7140 800F8D40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7144 800F8D44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7148 800F8D48 0FCF030C */  jal        func_800F3C3C
    /* 714C 800F8D4C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 7150 800F8D50 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 7154 800F8D54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7158 800F8D58 00006490 */  lbu        $a0, 0x0($v1)
    /* 715C 800F8D5C 00000000 */  nop
    /* 7160 800F8D60 000044A0 */  sb         $a0, 0x0($v0)
    /* 7164 800F8D64 0800E003 */  jr         $ra
    /* 7168 800F8D68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8D40
