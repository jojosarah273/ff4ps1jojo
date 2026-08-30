nonmatching func_800F8410, 0x48

glabel func_800F8410
    /* 6810 800F8410 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6814 800F8414 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6818 800F8418 ADCE030C */  jal        func_800F3AB4
    /* 681C 800F841C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6820 800F8420 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 6824 800F8424 00000000 */  nop
    /* 6828 800F8428 00006594 */  lhu        $a1, 0x0($v1)
    /* 682C 800F842C E7CE030C */  jal        func_800F3B9C
    /* 6830 800F8430 21204000 */   addu      $a0, $v0, $zero
    /* 6834 800F8434 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 6838 800F8438 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 683C 800F843C C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 6840 800F8440 00006494 */  lhu        $a0, 0x0($v1)
    /* 6844 800F8444 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6848 800F8448 21104400 */  addu       $v0, $v0, $a0
    /* 684C 800F844C 000045A0 */  sb         $a1, 0x0($v0)
    /* 6850 800F8450 0800E003 */  jr         $ra
    /* 6854 800F8454 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8410
