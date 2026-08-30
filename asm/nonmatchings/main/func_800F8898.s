nonmatching func_800F8898, 0x4C

glabel func_800F8898
    /* 6C98 800F8898 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 6C9C 800F889C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CA0 800F88A0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6CA4 800F88A4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6CA8 800F88A8 00004590 */  lbu        $a1, 0x0($v0)
    /* 6CAC 800F88AC E7CE030C */  jal        func_800F3B9C
    /* 6CB0 800F88B0 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 6CB4 800F88B4 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6CB8 800F88B8 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 6CBC 800F88BC 08000592 */  lbu        $a1, 0x8($s0)
    /* 6CC0 800F88C0 00006490 */  lbu        $a0, 0x0($v1)
    /* 6CC4 800F88C4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6CC8 800F88C8 21104400 */  addu       $v0, $v0, $a0
    /* 6CCC 800F88CC 000045A0 */  sb         $a1, 0x0($v0)
    /* 6CD0 800F88D0 09000392 */  lbu        $v1, 0x9($s0)
    /* 6CD4 800F88D4 1000B08F */  lw         $s0, 0x10($sp)
    /* 6CD8 800F88D8 010043A0 */  sb         $v1, 0x1($v0)
    /* 6CDC 800F88DC 0800E003 */  jr         $ra
    /* 6CE0 800F88E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8898
