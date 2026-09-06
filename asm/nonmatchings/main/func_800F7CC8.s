nonmatching func_800F7CC8, 0x44

glabel func_800F7CC8
    /* 60C8 800F7CC8 6C00828F */  lw         $v0, %gp_rel(D_8019ED68)($gp)
    /* 60CC 800F7CCC 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 60D0 800F7CD0 00004390 */  lbu        $v1, 0x0($v0)
    /* 60D4 800F7CD4 00008290 */  lbu        $v0, 0x0($a0)
    /* 60D8 800F7CD8 01006330 */  andi       $v1, $v1, 0x1
    /* 60DC 800F7CDC 001A0300 */  sll        $v1, $v1, 8
    /* 60E0 800F7CE0 21104300 */  addu       $v0, $v0, $v1
    /* 60E4 800F7CE4 0000A2AC */  sw         $v0, 0x0($a1)
    /* 60E8 800F7CE8 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 60EC 800F7CEC 00000000 */  nop
    /* 60F0 800F7CF0 0000628C */  lw         $v0, 0x0($v1)
    /* 60F4 800F7CF4 00000000 */  nop
    /* 60F8 800F7CF8 C22F0200 */  srl        $a1, $v0, 31
    /* 60FC 800F7CFC 21104500 */  addu       $v0, $v0, $a1
    /* 6100 800F7D00 43100200 */  sra        $v0, $v0, 1
    /* 6104 800F7D04 0800E003 */  jr         $ra
    /* 6108 800F7D08 000082A0 */   sb        $v0, 0x0($a0)
endlabel func_800F7CC8
