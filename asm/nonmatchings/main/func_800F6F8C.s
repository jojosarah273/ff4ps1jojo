nonmatching func_800F6F8C, 0x30

glabel func_800F6F8C
    /* 538C 800F6F8C 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 5390 800F6F90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5394 800F6F94 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5398 800F6F98 00004590 */  lbu        $a1, 0x0($v0)
    /* 539C 800F6F9C 31CF030C */  jal        func_800F3CC4
    /* 53A0 800F6FA0 00000000 */   nop
    /* 53A4 800F6FA4 00004390 */  lbu        $v1, 0x0($v0)
    /* 53A8 800F6FA8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 53AC 800F6FAC 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 53B0 800F6FB0 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 53B4 800F6FB4 0800E003 */  jr         $ra
    /* 53B8 800F6FB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6F8C
