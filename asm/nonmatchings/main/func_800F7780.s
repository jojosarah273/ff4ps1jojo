nonmatching func_800F7780, 0x4C

glabel func_800F7780
    /* 5B80 800F7780 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 5B84 800F7784 00008290 */  lbu        $v0, 0x0($a0)
    /* 5B88 800F7788 00000000 */  nop
    /* 5B8C 800F778C 000062AC */  sw         $v0, 0x0($v1)
    /* 5B90 800F7790 5400868F */  lw         $a2, %gp_rel(D_8019ED50)($gp)
    /* 5B94 800F7794 01008290 */  lbu        $v0, 0x1($a0)
    /* 5B98 800F7798 0000C38C */  lw         $v1, 0x0($a2)
    /* 5B9C 800F779C 00120200 */  sll        $v0, $v0, 8
    /* 5BA0 800F77A0 25186200 */  or         $v1, $v1, $v0
    /* 5BA4 800F77A4 0000C3AC */  sw         $v1, 0x0($a2)
    /* 5BA8 800F77A8 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 5BAC 800F77AC 00000000 */  nop
    /* 5BB0 800F77B0 0000A294 */  lhu        $v0, 0x0($a1)
    /* 5BB4 800F77B4 00000000 */  nop
    /* 5BB8 800F77B8 42100200 */  srl        $v0, $v0, 1
    /* 5BBC 800F77BC 000082A0 */  sb         $v0, 0x0($a0)
    /* 5BC0 800F77C0 02120200 */  srl        $v0, $v0, 8
    /* 5BC4 800F77C4 0800E003 */  jr         $ra
    /* 5BC8 800F77C8 010082A0 */   sb        $v0, 0x1($a0)
endlabel func_800F7780
