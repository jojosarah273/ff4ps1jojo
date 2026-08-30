nonmatching func_800F4738, 0x68

glabel func_800F4738
    /* 2B38 800F4738 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2B3C 800F473C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2B40 800F4740 0FCF030C */  jal        func_800F3C3C
    /* 2B44 800F4744 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2B48 800F4748 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 2B4C 800F474C 00000000 */  nop
    /* 2B50 800F4750 00006490 */  lbu        $a0, 0x0($v1)
    /* 2B54 800F4754 00000000 */  nop
    /* 2B58 800F4758 21104400 */  addu       $v0, $v0, $a0
    /* 2B5C 800F475C 00004494 */  lhu        $a0, 0x0($v0)
    /* 2B60 800F4760 C1CE030C */  jal        func_800F3B04
    /* 2B64 800F4764 00000000 */   nop
    /* 2B68 800F4768 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2B6C 800F476C 00004490 */  lbu        $a0, 0x0($v0)
    /* 2B70 800F4770 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2B74 800F4774 00000000 */  nop
    /* 2B78 800F4778 24186400 */  and        $v1, $v1, $a0
    /* 2B7C 800F477C 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2B80 800F4780 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2B84 800F4784 01004490 */  lbu        $a0, 0x1($v0)
    /* 2B88 800F4788 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2B8C 800F478C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2B90 800F4790 24186400 */  and        $v1, $v1, $a0
    /* 2B94 800F4794 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2B98 800F4798 0800E003 */  jr         $ra
    /* 2B9C 800F479C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4738
