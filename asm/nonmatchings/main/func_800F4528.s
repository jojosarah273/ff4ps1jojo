nonmatching func_800F4528, 0x50

glabel func_800F4528
    /* 2928 800F4528 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 292C 800F452C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2930 800F4530 ADCE030C */  jal        func_800F3AB4
    /* 2934 800F4534 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2938 800F4538 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 293C 800F453C 00000000 */  nop
    /* 2940 800F4540 00006590 */  lbu        $a1, 0x0($v1)
    /* 2944 800F4544 E7CE030C */  jal        func_800F3B9C
    /* 2948 800F4548 21204000 */   addu      $a0, $v0, $zero
    /* 294C 800F454C 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 2950 800F4550 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2954 800F4554 00006490 */  lbu        $a0, 0x0($v1)
    /* 2958 800F4558 0000A390 */  lbu        $v1, 0x0($a1)
    /* 295C 800F455C 21104400 */  addu       $v0, $v0, $a0
    /* 2960 800F4560 00004490 */  lbu        $a0, 0x0($v0)
    /* 2964 800F4564 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2968 800F4568 24186400 */  and        $v1, $v1, $a0
    /* 296C 800F456C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2970 800F4570 0800E003 */  jr         $ra
    /* 2974 800F4574 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4528
