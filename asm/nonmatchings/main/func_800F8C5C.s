nonmatching func_800F8C5C, 0x28

glabel func_800F8C5C
    /* 705C 800F8C5C 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 7060 800F8C60 00000000 */  nop
    /* 7064 800F8C64 00004390 */  lbu        $v1, 0x0($v0)
    /* 7068 800F8C68 00000000 */  nop
    /* 706C 800F8C6C 000083A0 */  sb         $v1, 0x0($a0)
    /* 7070 800F8C70 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 7074 800F8C74 00000000 */  nop
    /* 7078 800F8C78 01004390 */  lbu        $v1, 0x1($v0)
    /* 707C 800F8C7C 0800E003 */  jr         $ra
    /* 7080 800F8C80 010083A0 */   sb        $v1, 0x1($a0)
endlabel func_800F8C5C
