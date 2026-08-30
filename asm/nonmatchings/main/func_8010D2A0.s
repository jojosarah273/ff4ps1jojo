nonmatching func_8010D2A0, 0xAC

glabel func_8010D2A0
    /* 1B6A0 8010D2A0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 1B6A4 8010D2A4 21200000 */  addu       $a0, $zero, $zero
    /* 1B6A8 8010D2A8 1800BFAF */  sw         $ra, 0x18($sp)
    /* 1B6AC 8010D2AC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 1B6B0 8010D2B0 0FCF030C */  jal        func_800F3C3C
    /* 1B6B4 8010D2B4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 1B6B8 8010D2B8 7F00043C */  lui        $a0, (0x7F4C00 >> 16)
    /* 1B6BC 8010D2BC 004C8434 */  ori        $a0, $a0, (0x7F4C00 & 0xFFFF)
    /* 1B6C0 8010D2C0 21884000 */  addu       $s1, $v0, $zero
    /* 1B6C4 8010D2C4 E7CE030C */  jal        func_800F3B9C
    /* 1B6C8 8010D2C8 21280000 */   addu      $a1, $zero, $zero
    /* 1B6CC 8010D2CC CCE4030C */  jal        func_800F9330
    /* 1B6D0 8010D2D0 21804000 */   addu      $s0, $v0, $zero
    /* 1B6D4 8010D2D4 5335040C */  jal        func_8010D54C
    /* 1B6D8 8010D2D8 00000000 */   nop
    /* 1B6DC 8010D2DC 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 1B6E0 8010D2E0 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 1B6E4 8010D2E4 3D002292 */  lbu        $v0, 0x3D($s1)
    /* 1B6E8 8010D2E8 00000000 */  nop
    /* 1B6EC 8010D2EC 000062A0 */  sb         $v0, 0x0($v1)
    /* 1B6F0 8010D2F0 1A80043C */  lui        $a0, %hi(D_8019ED5C)
    /* 1B6F4 8010D2F4 5CED848C */  lw         $a0, %lo(D_8019ED5C)($a0)
    /* 1B6F8 8010D2F8 3E002292 */  lbu        $v0, 0x3E($s1)
    /* 1B6FC 8010D2FC 00000000 */  nop
    /* 1B700 8010D300 010082A0 */  sb         $v0, 0x1($a0)
    /* 1B704 8010D304 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1B708 8010D308 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1B70C 8010D30C 00000000 */  nop
    /* 1B710 8010D310 000060A0 */  sb         $zero, 0x0($v1)
    /* 1B714 8010D314 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 1B718 8010D318 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 1B71C 8010D31C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1B720 8010D320 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1B724 8010D324 00004494 */  lhu        $a0, 0x0($v0)
    /* 1B728 8010D328 00006590 */  lbu        $a1, 0x0($v1)
    /* 1B72C 8010D32C 21800402 */  addu       $s0, $s0, $a0
    /* 1B730 8010D330 68E5030C */  jal        func_800F95A0
    /* 1B734 8010D334 000005A2 */   sb        $a1, 0x0($s0)
    /* 1B738 8010D338 1800BF8F */  lw         $ra, 0x18($sp)
    /* 1B73C 8010D33C 1400B18F */  lw         $s1, 0x14($sp)
    /* 1B740 8010D340 1000B08F */  lw         $s0, 0x10($sp)
    /* 1B744 8010D344 0800E003 */  jr         $ra
    /* 1B748 8010D348 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8010D2A0
