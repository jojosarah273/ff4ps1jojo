nonmatching func_800F7EE8, 0x30

glabel func_800F7EE8
    /* 62E8 800F7EE8 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 62EC 800F7EEC 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 62F0 800F7EF0 00006290 */  lbu        $v0, 0x0($v1)
    /* 62F4 800F7EF4 0000A490 */  lbu        $a0, 0x0($a1)
    /* 62F8 800F7EF8 01004230 */  andi       $v0, $v0, 0x1
    /* 62FC 800F7EFC 00120200 */  sll        $v0, $v0, 8
    /* 6300 800F7F00 21208200 */  addu       $a0, $a0, $v0
    /* 6304 800F7F04 42180400 */  srl        $v1, $a0, 1
    /* 6308 800F7F08 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 630C 800F7F0C 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 6310 800F7F10 0800E003 */  jr         $ra
    /* 6314 800F7F14 000044AC */   sw        $a0, 0x0($v0)
endlabel func_800F7EE8
