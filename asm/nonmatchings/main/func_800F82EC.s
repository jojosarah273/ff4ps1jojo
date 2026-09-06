nonmatching func_800F82EC, 0x3C

glabel func_800F82EC
    /* 66EC 800F82EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 66F0 800F82F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 66F4 800F82F4 9CCE030C */  jal        func_800F3A70
    /* 66F8 800F82F8 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 66FC 800F82FC C1CE030C */  jal        func_800F3B04
    /* 6700 800F8300 21204000 */   addu      $a0, $v0, $zero
    /* 6704 800F8304 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 6708 800F8308 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 670C 800F830C C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 6710 800F8310 00006494 */  lhu        $a0, 0x0($v1)
    /* 6714 800F8314 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6718 800F8318 21104400 */  addu       $v0, $v0, $a0
    /* 671C 800F831C 000045A0 */  sb         $a1, 0x0($v0)
    /* 6720 800F8320 0800E003 */  jr         $ra
    /* 6724 800F8324 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F82EC
