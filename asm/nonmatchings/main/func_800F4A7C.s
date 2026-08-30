nonmatching func_800F4A7C, 0x44

glabel func_800F4A7C
    /* 2E7C 800F4A7C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 2E80 800F4A80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2E84 800F4A84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2E88 800F4A88 00004594 */  lhu        $a1, 0x0($v0)
    /* 2E8C 800F4A8C E7CE030C */  jal        func_800F3B9C
    /* 2E90 800F4A90 00000000 */   nop
    /* 2E94 800F4A94 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2E98 800F4A98 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2E9C 800F4A9C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2EA0 800F4AA0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2EA4 800F4AA4 21104400 */  addu       $v0, $v0, $a0
    /* 2EA8 800F4AA8 00004490 */  lbu        $a0, 0x0($v0)
    /* 2EAC 800F4AAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2EB0 800F4AB0 24186400 */  and        $v1, $v1, $a0
    /* 2EB4 800F4AB4 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2EB8 800F4AB8 0800E003 */  jr         $ra
    /* 2EBC 800F4ABC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4A7C
