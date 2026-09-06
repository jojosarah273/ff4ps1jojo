nonmatching func_800F76BC, 0x2C

glabel func_800F76BC
    /* 5ABC 800F76BC 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 5AC0 800F76C0 00008290 */  lbu        $v0, 0x0($a0)
    /* 5AC4 800F76C4 00000000 */  nop
    /* 5AC8 800F76C8 0000A2AC */  sw         $v0, 0x0($a1)
    /* 5ACC 800F76CC 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 5AD0 800F76D0 00000000 */  nop
    /* 5AD4 800F76D4 00006290 */  lbu        $v0, 0x0($v1)
    /* 5AD8 800F76D8 00000000 */  nop
    /* 5ADC 800F76DC 43100200 */  sra        $v0, $v0, 1
    /* 5AE0 800F76E0 0800E003 */  jr         $ra
    /* 5AE4 800F76E4 000082A0 */   sb        $v0, 0x0($a0)
endlabel func_800F76BC
