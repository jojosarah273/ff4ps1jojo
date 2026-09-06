nonmatching func_800F8C08, 0x40

glabel func_800F8C08
    /* 7008 800F8C08 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 700C 800F8C0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7010 800F8C10 1000B0AF */  sw         $s0, 0x10($sp)
    /* 7014 800F8C14 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 7018 800F8C18 1400BFAF */  sw         $ra, 0x14($sp)
    /* 701C 800F8C1C 00004594 */  lhu        $a1, 0x0($v0)
    /* 7020 800F8C20 31CF030C */  jal        func_800F3CC4
    /* 7024 800F8C24 C0031036 */   ori       $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 7028 800F8C28 08000492 */  lbu        $a0, 0x8($s0)
    /* 702C 800F8C2C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 7030 800F8C30 000044A0 */  sb         $a0, 0x0($v0)
    /* 7034 800F8C34 09000392 */  lbu        $v1, 0x9($s0)
    /* 7038 800F8C38 1000B08F */  lw         $s0, 0x10($sp)
    /* 703C 800F8C3C 010043A0 */  sb         $v1, 0x1($v0)
    /* 7040 800F8C40 0800E003 */  jr         $ra
    /* 7044 800F8C44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8C08
