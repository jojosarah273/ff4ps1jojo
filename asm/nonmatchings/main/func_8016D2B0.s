nonmatching func_8016D2B0, 0x98

glabel func_8016D2B0
    /* 7B6B0 8016D2B0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 7B6B4 8016D2B4 21200000 */  addu       $a0, $zero, $zero
    /* 7B6B8 8016D2B8 1800BFAF */  sw         $ra, 0x18($sp)
    /* 7B6BC 8016D2BC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 7B6C0 8016D2C0 0FCF030C */  jal        func_800F3C3C
    /* 7B6C4 8016D2C4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 7B6C8 8016D2C8 00200424 */  addiu      $a0, $zero, 0x2000
    /* 7B6CC 8016D2CC C1CE030C */  jal        func_800F3B04
    /* 7B6D0 8016D2D0 21884000 */   addu      $s1, $v0, $zero
    /* 7B6D4 8016D2D4 CCE4030C */  jal        func_800F9330
    /* 7B6D8 8016D2D8 21804000 */   addu      $s0, $v0, $zero
    /* 7B6DC 8016D2DC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7B6E0 8016D2E0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7B6E4 8016D2E4 00000000 */  nop
    /* 7B6E8 8016D2E8 00004594 */  lhu        $a1, 0x0($v0)
    /* 7B6EC 8016D2EC 00000000 */  nop
    /* 7B6F0 8016D2F0 2128B000 */  addu       $a1, $a1, $s0
    /* 7B6F4 8016D2F4 8000A290 */  lbu        $v0, 0x80($a1)
    /* 7B6F8 8016D2F8 00000000 */  nop
    /* 7B6FC 8016D2FC 180022A2 */  sb         $v0, 0x18($s1)
    /* 7B700 8016D300 8100A390 */  lbu        $v1, 0x81($a1)
    /* 7B704 8016D304 00000000 */  nop
    /* 7B708 8016D308 190023A2 */  sb         $v1, 0x19($s1)
    /* 7B70C 8016D30C 0100A490 */  lbu        $a0, 0x1($a1)
    /* 7B710 8016D310 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7B714 8016D314 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7B718 8016D318 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7B71C 8016D31C 00220400 */  sll        $a0, $a0, 8
    /* 7B720 8016D320 25104400 */  or         $v0, $v0, $a0
    /* 7B724 8016D324 F8B4050C */  jal        func_8016D3E0
    /* 7B728 8016D328 000062A4 */   sh        $v0, 0x0($v1)
    /* 7B72C 8016D32C 68E5030C */  jal        func_800F95A0
    /* 7B730 8016D330 00000000 */   nop
    /* 7B734 8016D334 1800BF8F */  lw         $ra, 0x18($sp)
    /* 7B738 8016D338 1400B18F */  lw         $s1, 0x14($sp)
    /* 7B73C 8016D33C 1000B08F */  lw         $s0, 0x10($sp)
    /* 7B740 8016D340 0800E003 */  jr         $ra
    /* 7B744 8016D344 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8016D2B0
