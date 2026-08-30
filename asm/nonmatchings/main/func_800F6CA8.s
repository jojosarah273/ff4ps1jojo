nonmatching func_800F6CA8, 0x4C

glabel func_800F6CA8
    /* 50A8 800F6CA8 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 50AC 800F6CAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50B0 800F6CB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 50B4 800F6CB4 00004590 */  lbu        $a1, 0x0($v0)
    /* 50B8 800F6CB8 E7CE030C */  jal        func_800F3B9C
    /* 50BC 800F6CBC 00000000 */   nop
    /* 50C0 800F6CC0 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 50C4 800F6CC4 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 50C8 800F6CC8 00006590 */  lbu        $a1, 0x0($v1)
    /* 50CC 800F6CCC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50D0 800F6CD0 21104500 */  addu       $v0, $v0, $a1
    /* 50D4 800F6CD4 00004690 */  lbu        $a2, 0x0($v0)
    /* 50D8 800F6CD8 C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 50DC 800F6CDC 080086A0 */  sb         $a2, 0x8($a0)
    /* 50E0 800F6CE0 01004390 */  lbu        $v1, 0x1($v0)
    /* 50E4 800F6CE4 00000000 */  nop
    /* 50E8 800F6CE8 090083A0 */  sb         $v1, 0x9($a0)
    /* 50EC 800F6CEC 0800E003 */  jr         $ra
    /* 50F0 800F6CF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6CA8
