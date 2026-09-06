nonmatching func_800F7A40, 0x28

glabel func_800F7A40
    /* 5E40 800F7A40 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 5E44 800F7A44 00008590 */  lbu        $a1, 0x0($a0)
    /* 5E48 800F7A48 00006290 */  lbu        $v0, 0x0($v1)
    /* 5E4C 800F7A4C 40280500 */  sll        $a1, $a1, 1
    /* 5E50 800F7A50 01004230 */  andi       $v0, $v0, 0x1
    /* 5E54 800F7A54 2128A200 */  addu       $a1, $a1, $v0
    /* 5E58 800F7A58 000085A0 */  sb         $a1, 0x0($a0)
    /* 5E5C 800F7A5C 5400828F */  lw         $v0, %gp_rel(D_8019ED50)($gp)
    /* 5E60 800F7A60 0800E003 */  jr         $ra
    /* 5E64 800F7A64 000045AC */   sw        $a1, 0x0($v0)
endlabel func_800F7A40
