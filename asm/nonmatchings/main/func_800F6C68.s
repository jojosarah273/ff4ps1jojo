nonmatching func_800F6C68, 0x40

glabel func_800F6C68
    /* 5068 800F6C68 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 506C 800F6C6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5070 800F6C70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5074 800F6C74 00004594 */  lhu        $a1, 0x0($v0)
    /* 5078 800F6C78 E7CE030C */  jal        func_800F3B9C
    /* 507C 800F6C7C 00000000 */   nop
    /* 5080 800F6C80 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 5084 800F6C84 00000000 */  nop
    /* 5088 800F6C88 00006494 */  lhu        $a0, 0x0($v1)
    /* 508C 800F6C8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5090 800F6C90 21104400 */  addu       $v0, $v0, $a0
    /* 5094 800F6C94 00004390 */  lbu        $v1, 0x0($v0)
    /* 5098 800F6C98 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 509C 800F6C9C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 50A0 800F6CA0 0800E003 */  jr         $ra
    /* 50A4 800F6CA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6C68
