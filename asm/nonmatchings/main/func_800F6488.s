nonmatching func_800F6488, 0x20

glabel func_800F6488
    /* 4888 800F6488 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 488C 800F648C 00008290 */  lbu        $v0, 0x0($a0)
    /* 4890 800F6490 00000000 */  nop
    /* 4894 800F6494 000062A0 */  sb         $v0, 0x0($v1)
    /* 4898 800F6498 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 489C 800F649C 01008290 */  lbu        $v0, 0x1($a0)
    /* 48A0 800F64A0 0800E003 */  jr         $ra
    /* 48A4 800F64A4 0100A2A0 */   sb        $v0, 0x1($a1)
endlabel func_800F6488
