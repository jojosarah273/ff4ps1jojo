nonmatching func_800F4C88, 0x38

glabel func_800F4C88
    /* 3088 800F4C88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 308C 800F4C8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3090 800F4C90 9CCE030C */  jal        func_800F3A70
    /* 3094 800F4C94 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 3098 800F4C98 C1CE030C */  jal        func_800F3B04
    /* 309C 800F4C9C 21204000 */   addu      $a0, $v0, $zero
    /* 30A0 800F4CA0 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 30A4 800F4CA4 00004590 */  lbu        $a1, 0x0($v0)
    /* 30A8 800F4CA8 00006490 */  lbu        $a0, 0x0($v1)
    /* 30AC 800F4CAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30B0 800F4CB0 24208500 */  and        $a0, $a0, $a1
    /* 30B4 800F4CB4 000064A0 */  sb         $a0, 0x0($v1)
    /* 30B8 800F4CB8 0800E003 */  jr         $ra
    /* 30BC 800F4CBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4C88
