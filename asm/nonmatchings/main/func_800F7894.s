nonmatching func_800F7894, 0x30

glabel func_800F7894
    /* 5C94 800F7894 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 5C98 800F7898 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 5C9C 800F789C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5CA0 800F78A0 00000000 */  nop
    /* 5CA4 800F78A4 000082AC */  sw         $v0, 0x0($a0)
    /* 5CA8 800F78A8 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 5CAC 800F78AC 00000000 */  nop
    /* 5CB0 800F78B0 00006294 */  lhu        $v0, 0x0($v1)
    /* 5CB4 800F78B4 00000000 */  nop
    /* 5CB8 800F78B8 42100200 */  srl        $v0, $v0, 1
    /* 5CBC 800F78BC 0800E003 */  jr         $ra
    /* 5CC0 800F78C0 000062A4 */   sh        $v0, 0x0($v1)
endlabel func_800F7894
