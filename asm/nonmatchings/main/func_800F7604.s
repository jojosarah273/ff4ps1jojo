nonmatching func_800F7604, 0x48

glabel func_800F7604
    /* 5A04 800F7604 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A08 800F7608 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A0C 800F760C 0FCF030C */  jal        func_800F3C3C
    /* 5A10 800F7610 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 5A14 800F7614 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 5A18 800F7618 6400858F */  lw         $a1, %gp_rel(D_8019ED60)($gp)
    /* 5A1C 800F761C 00006494 */  lhu        $a0, 0x0($v1)
    /* 5A20 800F7620 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5A24 800F7624 21104400 */  addu       $v0, $v0, $a0
    /* 5A28 800F7628 00004390 */  lbu        $v1, 0x0($v0)
    /* 5A2C 800F762C 00000000 */  nop
    /* 5A30 800F7630 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 5A34 800F7634 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 5A38 800F7638 01004390 */  lbu        $v1, 0x1($v0)
    /* 5A3C 800F763C 00000000 */  nop
    /* 5A40 800F7640 010083A0 */  sb         $v1, 0x1($a0)
    /* 5A44 800F7644 0800E003 */  jr         $ra
    /* 5A48 800F7648 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F7604
