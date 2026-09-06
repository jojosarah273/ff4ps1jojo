nonmatching func_800F95D8, 0x34

glabel func_800F95D8
    /* 79D8 800F95D8 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 79DC 800F95DC 6400858F */  lw         $a1, %gp_rel(D_8019ED60)($gp)
    /* 79E0 800F95E0 00004494 */  lhu        $a0, 0x0($v0)
    /* 79E4 800F95E4 0D80023C */  lui        $v0, %hi(D_800D0000)
    /* 79E8 800F95E8 01008424 */  addiu      $a0, $a0, 0x1
    /* 79EC 800F95EC FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 79F0 800F95F0 21108200 */  addu       $v0, $a0, $v0
    /* 79F4 800F95F4 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 79F8 800F95F8 00000000 */  nop
    /* 79FC 800F95FC 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 7A00 800F9600 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 7A04 800F9604 0800E003 */  jr         $ra
    /* 7A08 800F9608 000044A4 */   sh        $a0, 0x0($v0)
endlabel func_800F95D8
