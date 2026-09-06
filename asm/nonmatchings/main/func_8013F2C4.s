nonmatching func_8013F2C4, 0x90

glabel func_8013F2C4
    /* 4D6C4 8013F2C4 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 4D6C8 8013F2C8 21200000 */  addu       $a0, $zero, $zero
    /* 4D6CC 8013F2CC 1800BFAF */  sw         $ra, 0x18($sp)
    /* 4D6D0 8013F2D0 1400B1AF */  sw         $s1, 0x14($sp)
    /* 4D6D4 8013F2D4 0FCF030C */  jal        func_800F3C3C
    /* 4D6D8 8013F2D8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4D6DC 8013F2DC 00200424 */  addiu      $a0, $zero, 0x2000
    /* 4D6E0 8013F2E0 C1CE030C */  jal        func_800F3B04
    /* 4D6E4 8013F2E4 21884000 */   addu      $s1, $v0, $zero
    /* 4D6E8 8013F2E8 00800434 */  ori        $a0, $zero, 0x8000
    /* 4D6EC 8013F2EC C1CE030C */  jal        func_800F3B04
    /* 4D6F0 8013F2F0 21804000 */   addu      $s0, $v0, $zero
    /* 4D6F4 8013F2F4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4D6F8 8013F2F8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4D6FC 8013F2FC 00000000 */  nop
    /* 4D700 8013F300 00006490 */  lbu        $a0, 0x0($v1)
    /* 4D704 8013F304 00000000 */  nop
    /* 4D708 8013F308 21809000 */  addu       $s0, $a0, $s0
    /* 4D70C 8013F30C 40200400 */  sll        $a0, $a0, 1
    /* 4D710 8013F310 A5090392 */  lbu        $v1, 0x9A5($s0)
    /* 4D714 8013F314 21208200 */  addu       $a0, $a0, $v0
    /* 4D718 8013F318 02190300 */  srl        $v1, $v1, 4
    /* 4D71C 8013F31C 000023A2 */  sb         $v1, 0x0($s1)
    /* 4D720 8013F320 A1729090 */  lbu        $s0, 0x72A1($a0)
    /* 4D724 8013F324 04D5030C */  jal        func_800F5410
    /* 4D728 8013F328 00000000 */   nop
    /* 4D72C 8013F32C 00002292 */  lbu        $v0, 0x0($s1)
    /* 4D730 8013F330 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4D734 8013F334 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4D738 8013F338 1800BF8F */  lw         $ra, 0x18($sp)
    /* 4D73C 8013F33C 1400B18F */  lw         $s1, 0x14($sp)
    /* 4D740 8013F340 21800202 */  addu       $s0, $s0, $v0
    /* 4D744 8013F344 000070A0 */  sb         $s0, 0x0($v1)
    /* 4D748 8013F348 1000B08F */  lw         $s0, 0x10($sp)
    /* 4D74C 8013F34C 0800E003 */  jr         $ra
    /* 4D750 8013F350 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8013F2C4
