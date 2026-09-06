nonmatching func_800F46E8, 0x50

glabel func_800F46E8
    /* 2AE8 800F46E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2AEC 800F46EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2AF0 800F46F0 0FCF030C */  jal        func_800F3C3C
    /* 2AF4 800F46F4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2AF8 800F46F8 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2AFC 800F46FC 00000000 */  nop
    /* 2B00 800F4700 00006494 */  lhu        $a0, 0x0($v1)
    /* 2B04 800F4704 00000000 */  nop
    /* 2B08 800F4708 21104400 */  addu       $v0, $v0, $a0
    /* 2B0C 800F470C 00004494 */  lhu        $a0, 0x0($v0)
    /* 2B10 800F4710 C1CE030C */  jal        func_800F3B04
    /* 2B14 800F4714 00000000 */   nop
    /* 2B18 800F4718 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2B1C 800F471C 00004490 */  lbu        $a0, 0x0($v0)
    /* 2B20 800F4720 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2B24 800F4724 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2B28 800F4728 24186400 */  and        $v1, $v1, $a0
    /* 2B2C 800F472C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2B30 800F4730 0800E003 */  jr         $ra
    /* 2B34 800F4734 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F46E8
