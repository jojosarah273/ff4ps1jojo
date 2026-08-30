nonmatching func_800F45C8, 0x68

glabel func_800F45C8
    /* 29C8 800F45C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29CC 800F45CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29D0 800F45D0 ADCE030C */  jal        func_800F3AB4
    /* 29D4 800F45D4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 29D8 800F45D8 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 29DC 800F45DC 00000000 */  nop
    /* 29E0 800F45E0 00006590 */  lbu        $a1, 0x0($v1)
    /* 29E4 800F45E4 E7CE030C */  jal        func_800F3B9C
    /* 29E8 800F45E8 21204000 */   addu      $a0, $v0, $zero
    /* 29EC 800F45EC 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 29F0 800F45F0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 29F4 800F45F4 00006490 */  lbu        $a0, 0x0($v1)
    /* 29F8 800F45F8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 29FC 800F45FC 21104400 */  addu       $v0, $v0, $a0
    /* 2A00 800F4600 00004490 */  lbu        $a0, 0x0($v0)
    /* 2A04 800F4604 00000000 */  nop
    /* 2A08 800F4608 24186400 */  and        $v1, $v1, $a0
    /* 2A0C 800F460C 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2A10 800F4610 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2A14 800F4614 01004490 */  lbu        $a0, 0x1($v0)
    /* 2A18 800F4618 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2A1C 800F461C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2A20 800F4620 24186400 */  and        $v1, $v1, $a0
    /* 2A24 800F4624 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2A28 800F4628 0800E003 */  jr         $ra
    /* 2A2C 800F462C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F45C8
