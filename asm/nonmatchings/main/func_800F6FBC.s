nonmatching func_800F6FBC, 0x30

glabel func_800F6FBC
    /* 53BC 800F6FBC 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 53C0 800F6FC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 53C4 800F6FC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 53C8 800F6FC8 00004594 */  lhu        $a1, 0x0($v0)
    /* 53CC 800F6FCC 31CF030C */  jal        func_800F3CC4
    /* 53D0 800F6FD0 00000000 */   nop
    /* 53D4 800F6FD4 00004390 */  lbu        $v1, 0x0($v0)
    /* 53D8 800F6FD8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 53DC 800F6FDC 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 53E0 800F6FE0 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 53E4 800F6FE4 0800E003 */  jr         $ra
    /* 53E8 800F6FE8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6FBC
