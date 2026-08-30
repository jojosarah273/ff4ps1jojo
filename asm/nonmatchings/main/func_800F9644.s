nonmatching func_800F9644, 0x1C

glabel func_800F9644
    /* 7A44 800F9644 6C00828F */  lw         $v0, %gp_rel(D_8019ED68)($gp)
    /* 7A48 800F9648 00000000 */  nop
    /* 7A4C 800F964C 00004390 */  lbu        $v1, 0x0($v0)
    /* 7A50 800F9650 27200400 */  nor        $a0, $zero, $a0
    /* 7A54 800F9654 24186400 */  and        $v1, $v1, $a0
    /* 7A58 800F9658 0800E003 */  jr         $ra
    /* 7A5C 800F965C 000043A0 */   sb        $v1, 0x0($v0)
endlabel func_800F9644
