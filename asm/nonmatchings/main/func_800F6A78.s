nonmatching func_800F6A78, 0x38

glabel func_800F6A78
    /* 4E78 800F6A78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E7C 800F6A7C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E80 800F6A80 0FCF030C */  jal        func_800F3C3C
    /* 4E84 800F6A84 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4E88 800F6A88 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 4E8C 800F6A8C 00000000 */  nop
    /* 4E90 800F6A90 00006494 */  lhu        $a0, 0x0($v1)
    /* 4E94 800F6A94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E98 800F6A98 21104400 */  addu       $v0, $v0, $a0
    /* 4E9C 800F6A9C 00004390 */  lbu        $v1, 0x0($v0)
    /* 4EA0 800F6AA0 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4EA4 800F6AA4 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4EA8 800F6AA8 0800E003 */  jr         $ra
    /* 4EAC 800F6AAC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6A78
