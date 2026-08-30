nonmatching func_800F8598, 0x54

glabel func_800F8598
    /* 6998 800F8598 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 699C 800F859C FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 69A0 800F85A0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 69A4 800F85A4 0FCF030C */  jal        func_800F3C3C
    /* 69A8 800F85A8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 69AC 800F85AC 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 69B0 800F85B0 00000000 */  nop
    /* 69B4 800F85B4 00006490 */  lbu        $a0, 0x0($v1)
    /* 69B8 800F85B8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 69BC 800F85BC 21104400 */  addu       $v0, $v0, $a0
    /* 69C0 800F85C0 00004494 */  lhu        $a0, 0x0($v0)
    /* 69C4 800F85C4 C1CE030C */  jal        func_800F3B04
    /* 69C8 800F85C8 C0031036 */   ori       $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 69CC 800F85CC 08000492 */  lbu        $a0, 0x8($s0)
    /* 69D0 800F85D0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 69D4 800F85D4 000044A0 */  sb         $a0, 0x0($v0)
    /* 69D8 800F85D8 09000392 */  lbu        $v1, 0x9($s0)
    /* 69DC 800F85DC 1000B08F */  lw         $s0, 0x10($sp)
    /* 69E0 800F85E0 010043A0 */  sb         $v1, 0x1($v0)
    /* 69E4 800F85E4 0800E003 */  jr         $ra
    /* 69E8 800F85E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8598
