nonmatching func_800F48D4, 0x54

glabel func_800F48D4
    /* 2CD4 800F48D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CD8 800F48D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CDC 800F48DC 0FCF030C */  jal        func_800F3C3C
    /* 2CE0 800F48E0 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 2CE4 800F48E4 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2CE8 800F48E8 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 2CEC 800F48EC 00006494 */  lhu        $a0, 0x0($v1)
    /* 2CF0 800F48F0 0000C390 */  lbu        $v1, 0x0($a2)
    /* 2CF4 800F48F4 21104400 */  addu       $v0, $v0, $a0
    /* 2CF8 800F48F8 00004490 */  lbu        $a0, 0x0($v0)
    /* 2CFC 800F48FC 00000000 */  nop
    /* 2D00 800F4900 24186400 */  and        $v1, $v1, $a0
    /* 2D04 800F4904 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 2D08 800F4908 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2D0C 800F490C 01004490 */  lbu        $a0, 0x1($v0)
    /* 2D10 800F4910 0100A390 */  lbu        $v1, 0x1($a1)
    /* 2D14 800F4914 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D18 800F4918 24186400 */  and        $v1, $v1, $a0
    /* 2D1C 800F491C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 2D20 800F4920 0800E003 */  jr         $ra
    /* 2D24 800F4924 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F48D4
