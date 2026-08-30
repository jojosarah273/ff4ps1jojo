nonmatching func_800F42F8, 0x30

glabel func_800F42F8
    /* 26F8 800F42F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 26FC 800F42FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2700 800F4300 E7CE030C */  jal        func_800F3B9C
    /* 2704 800F4304 21280000 */   addu      $a1, $zero, $zero
    /* 2708 800F4308 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 270C 800F430C 00004590 */  lbu        $a1, 0x0($v0)
    /* 2710 800F4310 00006490 */  lbu        $a0, 0x0($v1)
    /* 2714 800F4314 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2718 800F4318 24208500 */  and        $a0, $a0, $a1
    /* 271C 800F431C 000064A0 */  sb         $a0, 0x0($v1)
    /* 2720 800F4320 0800E003 */  jr         $ra
    /* 2724 800F4324 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F42F8
