nonmatching func_800F7B40, 0x3C

glabel func_800F7B40
    /* 5F40 800F7B40 01008390 */  lbu        $v1, 0x1($a0)
    /* 5F44 800F7B44 00008690 */  lbu        $a2, 0x0($a0)
    /* 5F48 800F7B48 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5F4C 800F7B4C 001A0300 */  sll        $v1, $v1, 8
    /* 5F50 800F7B50 2530C300 */  or         $a2, $a2, $v1
    /* 5F54 800F7B54 0000A290 */  lbu        $v0, 0x0($a1)
    /* 5F58 800F7B58 40180600 */  sll        $v1, $a2, 1
    /* 5F5C 800F7B5C 01004230 */  andi       $v0, $v0, 0x1
    /* 5F60 800F7B60 21306200 */  addu       $a2, $v1, $v0
    /* 5F64 800F7B64 03120600 */  sra        $v0, $a2, 8
    /* 5F68 800F7B68 000086A0 */  sb         $a2, 0x0($a0)
    /* 5F6C 800F7B6C 010082A0 */  sb         $v0, 0x1($a0)
    /* 5F70 800F7B70 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 5F74 800F7B74 0800E003 */  jr         $ra
    /* 5F78 800F7B78 000066AC */   sw        $a2, 0x0($v1)
endlabel func_800F7B40
