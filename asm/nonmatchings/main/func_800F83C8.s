nonmatching func_800F83C8, 0x48

glabel func_800F83C8
    /* 67C8 800F83C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 67CC 800F83CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 67D0 800F83D0 ADCE030C */  jal        func_800F3AB4
    /* 67D4 800F83D4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 67D8 800F83D8 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 67DC 800F83DC 00000000 */  nop
    /* 67E0 800F83E0 00006590 */  lbu        $a1, 0x0($v1)
    /* 67E4 800F83E4 E7CE030C */  jal        func_800F3B9C
    /* 67E8 800F83E8 21204000 */   addu      $a0, $v0, $zero
    /* 67EC 800F83EC 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 67F0 800F83F0 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 67F4 800F83F4 C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 67F8 800F83F8 00006490 */  lbu        $a0, 0x0($v1)
    /* 67FC 800F83FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6800 800F8400 21104400 */  addu       $v0, $v0, $a0
    /* 6804 800F8404 000045A0 */  sb         $a1, 0x0($v0)
    /* 6808 800F8408 0800E003 */  jr         $ra
    /* 680C 800F840C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F83C8
