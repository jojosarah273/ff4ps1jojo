nonmatching func_800F49E8, 0x50

glabel func_800F49E8
    /* 2DE8 800F49E8 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 2DEC 800F49EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DF0 800F49F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DF4 800F49F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 2DF8 800F49F8 C1CE030C */  jal        func_800F3B04
    /* 2DFC 800F49FC 21208300 */   addu      $a0, $a0, $v1
    /* 2E00 800F4A00 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2E04 800F4A04 00004490 */  lbu        $a0, 0x0($v0)
    /* 2E08 800F4A08 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2E0C 800F4A0C 00000000 */  nop
    /* 2E10 800F4A10 24186400 */  and        $v1, $v1, $a0
    /* 2E14 800F4A14 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2E18 800F4A18 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2E1C 800F4A1C 01004490 */  lbu        $a0, 0x1($v0)
    /* 2E20 800F4A20 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2E24 800F4A24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E28 800F4A28 24186400 */  and        $v1, $v1, $a0
    /* 2E2C 800F4A2C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2E30 800F4A30 0800E003 */  jr         $ra
    /* 2E34 800F4A34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F49E8
