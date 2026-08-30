nonmatching func_800F7C98, 0x30

glabel func_800F7C98
    /* 6098 800F7C98 4800858F */  lw         $a1, %gp_rel(D_8019ED44)($gp)
    /* 609C 800F7C9C 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 60A0 800F7CA0 0000A494 */  lhu        $a0, 0x0($a1)
    /* 60A4 800F7CA4 00006290 */  lbu        $v0, 0x0($v1)
    /* 60A8 800F7CA8 40200400 */  sll        $a0, $a0, 1
    /* 60AC 800F7CAC 01004230 */  andi       $v0, $v0, 0x1
    /* 60B0 800F7CB0 21208200 */  addu       $a0, $a0, $v0
    /* 60B4 800F7CB4 FF008330 */  andi       $v1, $a0, 0xFF
    /* 60B8 800F7CB8 0000A3A4 */  sh         $v1, 0x0($a1)
    /* 60BC 800F7CBC 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 60C0 800F7CC0 0800E003 */  jr         $ra
    /* 60C4 800F7CC4 000044AC */   sw        $a0, 0x0($v0)
endlabel func_800F7C98
