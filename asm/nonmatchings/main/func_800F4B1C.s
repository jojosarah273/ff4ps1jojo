nonmatching func_800F4B1C, 0x5C

glabel func_800F4B1C
    /* 2F1C 800F4B1C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 2F20 800F4B20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F24 800F4B24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F28 800F4B28 00004594 */  lhu        $a1, 0x0($v0)
    /* 2F2C 800F4B2C E7CE030C */  jal        func_800F3B9C
    /* 2F30 800F4B30 00000000 */   nop
    /* 2F34 800F4B34 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2F38 800F4B38 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2F3C 800F4B3C 00006494 */  lhu        $a0, 0x0($v1)
    /* 2F40 800F4B40 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2F44 800F4B44 21104400 */  addu       $v0, $v0, $a0
    /* 2F48 800F4B48 00004490 */  lbu        $a0, 0x0($v0)
    /* 2F4C 800F4B4C 00000000 */  nop
    /* 2F50 800F4B50 24186400 */  and        $v1, $v1, $a0
    /* 2F54 800F4B54 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2F58 800F4B58 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2F5C 800F4B5C 01004490 */  lbu        $a0, 0x1($v0)
    /* 2F60 800F4B60 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2F64 800F4B64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F68 800F4B68 24186400 */  and        $v1, $v1, $a0
    /* 2F6C 800F4B6C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2F70 800F4B70 0800E003 */  jr         $ra
    /* 2F74 800F4B74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4B1C
