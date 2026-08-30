nonmatching func_800F710C, 0x20

glabel func_800F710C
    /* 550C 800F710C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 5510 800F7110 00008290 */  lbu        $v0, 0x0($a0)
    /* 5514 800F7114 00000000 */  nop
    /* 5518 800F7118 000062A0 */  sb         $v0, 0x0($v1)
    /* 551C 800F711C 6000858F */  lw         $a1, %gp_rel(D_8019ED5C)($gp)
    /* 5520 800F7120 01008290 */  lbu        $v0, 0x1($a0)
    /* 5524 800F7124 0800E003 */  jr         $ra
    /* 5528 800F7128 0100A2A0 */   sb        $v0, 0x1($a1)
endlabel func_800F710C
