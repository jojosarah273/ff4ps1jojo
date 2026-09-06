nonmatching func_800F902C, 0x30

glabel func_800F902C
    /* 742C 800F902C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7430 800F9030 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7434 800F9034 0FCF030C */  jal        func_800F3C3C
    /* 7438 800F9038 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 743C 800F903C 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 7440 800F9040 00000000 */  nop
    /* 7444 800F9044 00006494 */  lhu        $a0, 0x0($v1)
    /* 7448 800F9048 1000BF8F */  lw         $ra, 0x10($sp)
    /* 744C 800F904C 21104400 */  addu       $v0, $v0, $a0
    /* 7450 800F9050 000040A0 */  sb         $zero, 0x0($v0)
    /* 7454 800F9054 0800E003 */  jr         $ra
    /* 7458 800F9058 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F902C
