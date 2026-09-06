nonmatching func_800F67FC, 0x4C

glabel func_800F67FC
    /* 4BFC 800F67FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C00 800F6800 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C04 800F6804 ADCE030C */  jal        func_800F3AB4
    /* 4C08 800F6808 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4C0C 800F680C 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 4C10 800F6810 00000000 */  nop
    /* 4C14 800F6814 00006594 */  lhu        $a1, 0x0($v1)
    /* 4C18 800F6818 E7CE030C */  jal        func_800F3B9C
    /* 4C1C 800F681C 21204000 */   addu      $a0, $v0, $zero
    /* 4C20 800F6820 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 4C24 800F6824 00000000 */  nop
    /* 4C28 800F6828 00006494 */  lhu        $a0, 0x0($v1)
    /* 4C2C 800F682C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4C30 800F6830 21104400 */  addu       $v0, $v0, $a0
    /* 4C34 800F6834 00004390 */  lbu        $v1, 0x0($v0)
    /* 4C38 800F6838 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4C3C 800F683C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4C40 800F6840 0800E003 */  jr         $ra
    /* 4C44 800F6844 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F67FC
