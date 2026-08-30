nonmatching func_800F4844, 0x3C

glabel func_800F4844
    /* 2C44 800F4844 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C48 800F4848 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C4C 800F484C 0FCF030C */  jal        func_800F3C3C
    /* 2C50 800F4850 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2C54 800F4854 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2C58 800F4858 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2C5C 800F485C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2C60 800F4860 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2C64 800F4864 21104400 */  addu       $v0, $v0, $a0
    /* 2C68 800F4868 00004490 */  lbu        $a0, 0x0($v0)
    /* 2C6C 800F486C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2C70 800F4870 24186400 */  and        $v1, $v1, $a0
    /* 2C74 800F4874 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2C78 800F4878 0800E003 */  jr         $ra
    /* 2C7C 800F487C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4844
