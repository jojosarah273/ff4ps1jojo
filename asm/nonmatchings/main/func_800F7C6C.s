nonmatching func_800F7C6C, 0x2C

glabel func_800F7C6C
    /* 606C 800F7C6C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 6070 800F7C70 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 6074 800F7C74 0000A490 */  lbu        $a0, 0x0($a1)
    /* 6078 800F7C78 00006290 */  lbu        $v0, 0x0($v1)
    /* 607C 800F7C7C 40200400 */  sll        $a0, $a0, 1
    /* 6080 800F7C80 01004230 */  andi       $v0, $v0, 0x1
    /* 6084 800F7C84 21208200 */  addu       $a0, $a0, $v0
    /* 6088 800F7C88 0000A4A0 */  sb         $a0, 0x0($a1)
    /* 608C 800F7C8C 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 6090 800F7C90 0800E003 */  jr         $ra
    /* 6094 800F7C94 000044AC */   sw        $a0, 0x0($v0)
endlabel func_800F7C6C
