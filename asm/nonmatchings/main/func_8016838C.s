nonmatching func_8016838C, 0x74

glabel func_8016838C
    /* 7678C 8016838C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 76790 80168390 00700424 */  addiu      $a0, $zero, 0x7000
    /* 76794 80168394 1400BFAF */  sw         $ra, 0x14($sp)
    /* 76798 80168398 C1CE030C */  jal        func_800F3B04
    /* 7679C 8016839C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 767A0 801683A0 00800434 */  ori        $a0, $zero, 0x8000
    /* 767A4 801683A4 C1CE030C */  jal        func_800F3B04
    /* 767A8 801683A8 21804000 */   addu      $s0, $v0, $zero
    /* 767AC 801683AC 21384000 */  addu       $a3, $v0, $zero
    /* 767B0 801683B0 21180000 */  addu       $v1, $zero, $zero
    /* 767B4 801683B4 80000824 */  addiu      $t0, $zero, 0x80
  .L801683B8:
    /* 767B8 801683B8 21206700 */  addu       $a0, $v1, $a3
    /* 767BC 801683BC 21287000 */  addu       $a1, $v1, $s0
    /* 767C0 801683C0 01006324 */  addiu      $v1, $v1, 0x1
    /* 767C4 801683C4 320C8690 */  lbu        $a2, 0xC32($a0)
    /* 767C8 801683C8 120EA290 */  lbu        $v0, 0xE12($a1)
    /* 767CC 801683CC FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 767D0 801683D0 320C82A0 */  sb         $v0, 0xC32($a0)
    /* 767D4 801683D4 F8FF6814 */  bne        $v1, $t0, .L801683B8
    /* 767D8 801683D8 120EA6A0 */   sb        $a2, 0xE12($a1)
    /* 767DC 801683DC 1A80023C */  lui        $v0, %hi(D_8019EEB0)
    /* 767E0 801683E0 B0EE4294 */  lhu        $v0, %lo(D_8019EEB0)($v0)
    /* 767E4 801683E4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 767E8 801683E8 1000B08F */  lw         $s0, 0x10($sp)
    /* 767EC 801683EC 01004238 */  xori       $v0, $v0, 0x1
    /* 767F0 801683F0 1A80013C */  lui        $at, %hi(D_8019EEB0)
    /* 767F4 801683F4 B0EE22A4 */  sh         $v0, %lo(D_8019EEB0)($at)
    /* 767F8 801683F8 0800E003 */  jr         $ra
    /* 767FC 801683FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016838C
