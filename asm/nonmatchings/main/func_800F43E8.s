nonmatching func_800F43E8, 0x44

glabel func_800F43E8
    /* 27E8 800F43E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27EC 800F43EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27F0 800F43F0 9CCE030C */  jal        func_800F3A70
    /* 27F4 800F43F4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 27F8 800F43F8 C1CE030C */  jal        func_800F3B04
    /* 27FC 800F43FC 21204000 */   addu      $a0, $v0, $zero
    /* 2800 800F4400 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 2804 800F4404 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2808 800F4408 00006490 */  lbu        $a0, 0x0($v1)
    /* 280C 800F440C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2810 800F4410 21104400 */  addu       $v0, $v0, $a0
    /* 2814 800F4414 00004490 */  lbu        $a0, 0x0($v0)
    /* 2818 800F4418 1000BF8F */  lw         $ra, 0x10($sp)
    /* 281C 800F441C 24186400 */  and        $v1, $v1, $a0
    /* 2820 800F4420 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2824 800F4424 0800E003 */  jr         $ra
    /* 2828 800F4428 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F43E8
