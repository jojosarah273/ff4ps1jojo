nonmatching func_800F47A0, 0x68

glabel func_800F47A0
    /* 2BA0 800F47A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2BA4 800F47A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2BA8 800F47A8 0FCF030C */  jal        func_800F3C3C
    /* 2BAC 800F47AC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2BB0 800F47B0 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2BB4 800F47B4 00000000 */  nop
    /* 2BB8 800F47B8 00006494 */  lhu        $a0, 0x0($v1)
    /* 2BBC 800F47BC 00000000 */  nop
    /* 2BC0 800F47C0 21104400 */  addu       $v0, $v0, $a0
    /* 2BC4 800F47C4 00004494 */  lhu        $a0, 0x0($v0)
    /* 2BC8 800F47C8 C1CE030C */  jal        func_800F3B04
    /* 2BCC 800F47CC 00000000 */   nop
    /* 2BD0 800F47D0 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2BD4 800F47D4 00004490 */  lbu        $a0, 0x0($v0)
    /* 2BD8 800F47D8 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2BDC 800F47DC 00000000 */  nop
    /* 2BE0 800F47E0 24186400 */  and        $v1, $v1, $a0
    /* 2BE4 800F47E4 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2BE8 800F47E8 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2BEC 800F47EC 01004490 */  lbu        $a0, 0x1($v0)
    /* 2BF0 800F47F0 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2BF4 800F47F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2BF8 800F47F8 24186400 */  and        $v1, $v1, $a0
    /* 2BFC 800F47FC 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2C00 800F4800 0800E003 */  jr         $ra
    /* 2C04 800F4804 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F47A0
