nonmatching func_800F8C98, 0x28

glabel func_800F8C98
    /* 7098 800F8C98 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 709C 800F8C9C 00000000 */  nop
    /* 70A0 800F8CA0 00004390 */  lbu        $v1, 0x0($v0)
    /* 70A4 800F8CA4 00000000 */  nop
    /* 70A8 800F8CA8 000083A0 */  sb         $v1, 0x0($a0)
    /* 70AC 800F8CAC 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 70B0 800F8CB0 00000000 */  nop
    /* 70B4 800F8CB4 01004390 */  lbu        $v1, 0x1($v0)
    /* 70B8 800F8CB8 0800E003 */  jr         $ra
    /* 70BC 800F8CBC 010083A0 */   sb        $v1, 0x1($a0)
endlabel func_800F8C98
