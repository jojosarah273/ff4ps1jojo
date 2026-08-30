nonmatching func_800F7F18, 0x30

glabel func_800F7F18
    /* 6318 800F7F18 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 631C 800F7F1C 4800858F */  lw         $a1, %gp_rel(D_8019ED44)($gp)
    /* 6320 800F7F20 00006290 */  lbu        $v0, 0x0($v1)
    /* 6324 800F7F24 0000A494 */  lhu        $a0, 0x0($a1)
    /* 6328 800F7F28 01004230 */  andi       $v0, $v0, 0x1
    /* 632C 800F7F2C 00140200 */  sll        $v0, $v0, 16
    /* 6330 800F7F30 21208200 */  addu       $a0, $a0, $v0
    /* 6334 800F7F34 42180400 */  srl        $v1, $a0, 1
    /* 6338 800F7F38 0000A3A4 */  sh         $v1, 0x0($a1)
    /* 633C 800F7F3C 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 6340 800F7F40 0800E003 */  jr         $ra
    /* 6344 800F7F44 000044AC */   sw        $a0, 0x0($v0)
endlabel func_800F7F18
