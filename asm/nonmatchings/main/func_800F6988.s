nonmatching func_800F6988, 0x5C

glabel func_800F6988
    /* 4D88 800F6988 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4D8C 800F698C FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 4D90 800F6990 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4D94 800F6994 0FCF030C */  jal        func_800F3C3C
    /* 4D98 800F6998 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4D9C 800F699C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 4DA0 800F69A0 00000000 */  nop
    /* 4DA4 800F69A4 00006490 */  lbu        $a0, 0x0($v1)
    /* 4DA8 800F69A8 00000000 */  nop
    /* 4DAC 800F69AC 21104400 */  addu       $v0, $v0, $a0
    /* 4DB0 800F69B0 00004494 */  lhu        $a0, 0x0($v0)
    /* 4DB4 800F69B4 C1CE030C */  jal        func_800F3B04
    /* 4DB8 800F69B8 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 4DBC 800F69BC 00004490 */  lbu        $a0, 0x0($v0)
    /* 4DC0 800F69C0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4DC4 800F69C4 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 4DC8 800F69C8 080004A2 */  sb         $a0, 0x8($s0)
    /* 4DCC 800F69CC 01004390 */  lbu        $v1, 0x1($v0)
    /* 4DD0 800F69D0 00000000 */  nop
    /* 4DD4 800F69D4 090003A2 */  sb         $v1, 0x9($s0)
    /* 4DD8 800F69D8 1000B08F */  lw         $s0, 0x10($sp)
    /* 4DDC 800F69DC 0800E003 */  jr         $ra
    /* 4DE0 800F69E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6988
