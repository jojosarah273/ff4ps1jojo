nonmatching func_800F4F28, 0x24

glabel func_800F4F28
    /* 3328 800F4F28 00008290 */  lbu        $v0, 0x0($a0)
    /* 332C 800F4F2C 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 3330 800F4F30 40100200 */  sll        $v0, $v0, 1
    /* 3334 800F4F34 0000A2AC */  sw         $v0, 0x0($a1)
    /* 3338 800F4F38 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 333C 800F4F3C 00000000 */  nop
    /* 3340 800F4F40 00006290 */  lbu        $v0, 0x0($v1)
    /* 3344 800F4F44 0800E003 */  jr         $ra
    /* 3348 800F4F48 000082A0 */   sb        $v0, 0x0($a0)
endlabel func_800F4F28
