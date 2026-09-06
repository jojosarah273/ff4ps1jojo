nonmatching func_800F8674, 0x34

glabel func_800F8674
    /* 6A74 800F8674 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6A78 800F8678 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6A7C 800F867C 0FCF030C */  jal        func_800F3C3C
    /* 6A80 800F8680 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6A84 800F8684 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 6A88 800F8688 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 6A8C 800F868C C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 6A90 800F8690 00006494 */  lhu        $a0, 0x0($v1)
    /* 6A94 800F8694 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6A98 800F8698 21104400 */  addu       $v0, $v0, $a0
    /* 6A9C 800F869C 000045A0 */  sb         $a1, 0x0($v0)
    /* 6AA0 800F86A0 0800E003 */  jr         $ra
    /* 6AA4 800F86A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8674
