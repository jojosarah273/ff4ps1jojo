nonmatching func_800F5410, 0x1C

glabel func_800F5410
    /* 3810 800F5410 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 3814 800F5414 00000000 */  nop
    /* 3818 800F5418 00006290 */  lbu        $v0, 0x0($v1)
    /* 381C 800F541C 00000000 */  nop
    /* 3820 800F5420 FE004230 */  andi       $v0, $v0, 0xFE
    /* 3824 800F5424 0800E003 */  jr         $ra
    /* 3828 800F5428 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F5410
