nonmatching func_800F7DDC, 0x44

glabel func_800F7DDC
    /* 61DC 800F7DDC 00008690 */  lbu        $a2, 0x0($a0)
    /* 61E0 800F7DE0 01008290 */  lbu        $v0, 0x1($a0)
    /* 61E4 800F7DE4 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 61E8 800F7DE8 00120200 */  sll        $v0, $v0, 8
    /* 61EC 800F7DEC 0000A390 */  lbu        $v1, 0x0($a1)
    /* 61F0 800F7DF0 2530C200 */  or         $a2, $a2, $v0
    /* 61F4 800F7DF4 01006330 */  andi       $v1, $v1, 0x1
    /* 61F8 800F7DF8 001C0300 */  sll        $v1, $v1, 16
    /* 61FC 800F7DFC 2130C300 */  addu       $a2, $a2, $v1
    /* 6200 800F7E00 42100600 */  srl        $v0, $a2, 1
    /* 6204 800F7E04 FFFF4230 */  andi       $v0, $v0, 0xFFFF
    /* 6208 800F7E08 000082A0 */  sb         $v0, 0x0($a0)
    /* 620C 800F7E0C 02120200 */  srl        $v0, $v0, 8
    /* 6210 800F7E10 010082A0 */  sb         $v0, 0x1($a0)
    /* 6214 800F7E14 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 6218 800F7E18 0800E003 */  jr         $ra
    /* 621C 800F7E1C 000066AC */   sw        $a2, 0x0($v1)
endlabel func_800F7DDC
