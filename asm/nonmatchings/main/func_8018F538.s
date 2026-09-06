nonmatching func_8018F538, 0x90

glabel func_8018F538
    /* 9D938 8018F538 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9D93C 8018F53C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9D940 8018F540 04001024 */  addiu      $s0, $zero, 0x4
    /* 9D944 8018F544 1400BFAF */  sw         $ra, 0x14($sp)
  .L8018F548:
    /* 9D948 8018F548 723D060C */  jal        func_8018F5C8
    /* 9D94C 8018F54C 00000000 */   nop
    /* 9D950 8018F550 01000324 */  addiu      $v1, $zero, 0x1
    /* 9D954 8018F554 10004314 */  bne        $v0, $v1, .L8018F598
    /* 9D958 8018F558 01000224 */   addiu     $v0, $zero, 0x1
    /* 9D95C 8018F55C 1980033C */  lui        $v1, %hi(func_8018F604)
    /* 9D960 8018F560 04F66324 */  addiu      $v1, $v1, %lo(func_8018F604)
    /* 9D964 8018F564 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9D968 8018F568 ECB923AC */  sw         $v1, %lo(D_8019B9EC)($at)
    /* 9D96C 8018F56C 1980033C */  lui        $v1, %hi(func_8018F62C)
    /* 9D970 8018F570 2CF66324 */  addiu      $v1, $v1, %lo(func_8018F62C)
    /* 9D974 8018F574 1A80013C */  lui        $at, %hi(D_8019B9F0)
    /* 9D978 8018F578 F0B923AC */  sw         $v1, %lo(D_8019B9F0)($at)
    /* 9D97C 8018F57C 1980033C */  lui        $v1, %hi(func_8018F654)
    /* 9D980 8018F580 54F66324 */  addiu      $v1, $v1, %lo(func_8018F654)
    /* 9D984 8018F584 1A80013C */  lui        $at, %hi(D_8019B9C4)
    /* 9D988 8018F588 C4B923AC */  sw         $v1, %lo(D_8019B9C4)($at)
    /* 9D98C 8018F58C 1A80013C */  lui        $at, %hi(D_8019B9C8)
    /* 9D990 8018F590 6E3D0608 */  j          .L8018F5B8
    /* 9D994 8018F594 C8B920AC */   sw        $zero, %lo(D_8019B9C8)($at)
  .L8018F598:
    /* 9D998 8018F598 FFFF1026 */  addiu      $s0, $s0, -0x1
    /* 9D99C 8018F59C FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 9D9A0 8018F5A0 E9FF0216 */  bne        $s0, $v0, .L8018F548
    /* 9D9A4 8018F5A4 00000000 */   nop
    /* 9D9A8 8018F5A8 0F80043C */  lui        $a0, %hi(D_800F3210)
    /* 9D9AC 8018F5AC 323C060C */  jal        func_8018F0C8
    /* 9D9B0 8018F5B0 10328424 */   addiu     $a0, $a0, %lo(D_800F3210)
    /* 9D9B4 8018F5B4 21100000 */  addu       $v0, $zero, $zero
  .L8018F5B8:
    /* 9D9B8 8018F5B8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9D9BC 8018F5BC 1000B08F */  lw         $s0, 0x10($sp)
    /* 9D9C0 8018F5C0 0800E003 */  jr         $ra
    /* 9D9C4 8018F5C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018F538
