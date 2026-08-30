nonmatching func_800F6C28, 0x40

glabel func_800F6C28
    /* 5028 800F6C28 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 502C 800F6C2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5030 800F6C30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5034 800F6C34 00004590 */  lbu        $a1, 0x0($v0)
    /* 5038 800F6C38 E7CE030C */  jal        func_800F3B9C
    /* 503C 800F6C3C 00000000 */   nop
    /* 5040 800F6C40 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 5044 800F6C44 00000000 */  nop
    /* 5048 800F6C48 00006490 */  lbu        $a0, 0x0($v1)
    /* 504C 800F6C4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5050 800F6C50 21104400 */  addu       $v0, $v0, $a0
    /* 5054 800F6C54 00004390 */  lbu        $v1, 0x0($v0)
    /* 5058 800F6C58 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 505C 800F6C5C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 5060 800F6C60 0800E003 */  jr         $ra
    /* 5064 800F6C64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6C28
