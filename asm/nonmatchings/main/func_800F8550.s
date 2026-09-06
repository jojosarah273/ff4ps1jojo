nonmatching func_800F8550, 0x48

glabel func_800F8550
    /* 6950 800F8550 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6954 800F8554 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6958 800F8558 0FCF030C */  jal        func_800F3C3C
    /* 695C 800F855C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6960 800F8560 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 6964 800F8564 00000000 */  nop
    /* 6968 800F8568 00006494 */  lhu        $a0, 0x0($v1)
    /* 696C 800F856C 00000000 */  nop
    /* 6970 800F8570 21104400 */  addu       $v0, $v0, $a0
    /* 6974 800F8574 00004494 */  lhu        $a0, 0x0($v0)
    /* 6978 800F8578 C1CE030C */  jal        func_800F3B04
    /* 697C 800F857C 00000000 */   nop
    /* 6980 800F8580 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6984 800F8584 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6988 800F8588 1000BF8F */  lw         $ra, 0x10($sp)
    /* 698C 800F858C 000043A0 */  sb         $v1, 0x0($v0)
    /* 6990 800F8590 0800E003 */  jr         $ra
    /* 6994 800F8594 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8550
