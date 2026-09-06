nonmatching func_8016D348, 0x98

glabel func_8016D348
    /* 7B748 8016D348 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 7B74C 8016D34C 21200000 */  addu       $a0, $zero, $zero
    /* 7B750 8016D350 1800BFAF */  sw         $ra, 0x18($sp)
    /* 7B754 8016D354 1400B1AF */  sw         $s1, 0x14($sp)
    /* 7B758 8016D358 0FCF030C */  jal        func_800F3C3C
    /* 7B75C 8016D35C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 7B760 8016D360 00200424 */  addiu      $a0, $zero, 0x2000
    /* 7B764 8016D364 C1CE030C */  jal        func_800F3B04
    /* 7B768 8016D368 21884000 */   addu      $s1, $v0, $zero
    /* 7B76C 8016D36C CCE4030C */  jal        func_800F9330
    /* 7B770 8016D370 21804000 */   addu      $s0, $v0, $zero
    /* 7B774 8016D374 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7B778 8016D378 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7B77C 8016D37C 00000000 */  nop
    /* 7B780 8016D380 00004594 */  lhu        $a1, 0x0($v0)
    /* 7B784 8016D384 00000000 */  nop
    /* 7B788 8016D388 2128B000 */  addu       $a1, $a1, $s0
    /* 7B78C 8016D38C C000A290 */  lbu        $v0, 0xC0($a1)
    /* 7B790 8016D390 00000000 */  nop
    /* 7B794 8016D394 180022A2 */  sb         $v0, 0x18($s1)
    /* 7B798 8016D398 C100A390 */  lbu        $v1, 0xC1($a1)
    /* 7B79C 8016D39C 00000000 */  nop
    /* 7B7A0 8016D3A0 190023A2 */  sb         $v1, 0x19($s1)
    /* 7B7A4 8016D3A4 4100A490 */  lbu        $a0, 0x41($a1)
    /* 7B7A8 8016D3A8 4000A290 */  lbu        $v0, 0x40($a1)
    /* 7B7AC 8016D3AC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7B7B0 8016D3B0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7B7B4 8016D3B4 00220400 */  sll        $a0, $a0, 8
    /* 7B7B8 8016D3B8 25104400 */  or         $v0, $v0, $a0
    /* 7B7BC 8016D3BC F8B4050C */  jal        func_8016D3E0
    /* 7B7C0 8016D3C0 000062A4 */   sh        $v0, 0x0($v1)
    /* 7B7C4 8016D3C4 68E5030C */  jal        func_800F95A0
    /* 7B7C8 8016D3C8 00000000 */   nop
    /* 7B7CC 8016D3CC 1800BF8F */  lw         $ra, 0x18($sp)
    /* 7B7D0 8016D3D0 1400B18F */  lw         $s1, 0x14($sp)
    /* 7B7D4 8016D3D4 1000B08F */  lw         $s0, 0x10($sp)
    /* 7B7D8 8016D3D8 0800E003 */  jr         $ra
    /* 7B7DC 8016D3DC 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8016D348
