nonmatching func_800F67B0, 0x4C

glabel func_800F67B0
    /* 4BB0 800F67B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4BB4 800F67B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4BB8 800F67B8 ADCE030C */  jal        func_800F3AB4
    /* 4BBC 800F67BC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4BC0 800F67C0 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4BC4 800F67C4 00000000 */  nop
    /* 4BC8 800F67C8 00006590 */  lbu        $a1, 0x0($v1)
    /* 4BCC 800F67CC E7CE030C */  jal        func_800F3B9C
    /* 4BD0 800F67D0 21204000 */   addu      $a0, $v0, $zero
    /* 4BD4 800F67D4 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4BD8 800F67D8 00000000 */  nop
    /* 4BDC 800F67DC 00006490 */  lbu        $a0, 0x0($v1)
    /* 4BE0 800F67E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4BE4 800F67E4 21104400 */  addu       $v0, $v0, $a0
    /* 4BE8 800F67E8 00004390 */  lbu        $v1, 0x0($v0)
    /* 4BEC 800F67EC 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4BF0 800F67F0 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4BF4 800F67F4 0800E003 */  jr         $ra
    /* 4BF8 800F67F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F67B0
