nonmatching func_800F54B8, 0x1C

glabel func_800F54B8
    /* 38B8 800F54B8 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 38BC 800F54BC 00000000 */  nop
    /* 38C0 800F54C0 00006290 */  lbu        $v0, 0x0($v1)
    /* 38C4 800F54C4 00000000 */  nop
    /* 38C8 800F54C8 04004234 */  ori        $v0, $v0, 0x4
    /* 38CC 800F54CC 0800E003 */  jr         $ra
    /* 38D0 800F54D0 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F54B8
