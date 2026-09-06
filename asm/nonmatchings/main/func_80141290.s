nonmatching func_80141290, 0xA4

glabel func_80141290
    /* 4F690 80141290 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F694 80141294 21200000 */  addu       $a0, $zero, $zero
    /* 4F698 80141298 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4F69C 8014129C 0FCF030C */  jal        func_800F3C3C
    /* 4F6A0 801412A0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4F6A4 801412A4 21200000 */  addu       $a0, $zero, $zero
    /* 4F6A8 801412A8 9CCE030C */  jal        func_800F3A70
    /* 4F6AC 801412AC 21804000 */   addu      $s0, $v0, $zero
    /* 4F6B0 801412B0 C1CE030C */  jal        func_800F3B04
    /* 4F6B4 801412B4 21204000 */   addu      $a0, $v0, $zero
    /* 4F6B8 801412B8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4F6BC 801412BC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4F6C0 801412C0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4F6C4 801412C4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4F6C8 801412C8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4F6CC 801412CC 00008394 */  lhu        $v1, 0x0($a0)
    /* 4F6D0 801412D0 0000A790 */  lbu        $a3, 0x0($a1)
    /* 4F6D4 801412D4 21304300 */  addu       $a2, $v0, $v1
    /* 4F6D8 801412D8 0100E424 */  addiu      $a0, $a3, 0x1
    /* 4F6DC 801412DC 01006324 */  addiu      $v1, $v1, 0x1
    /* 4F6E0 801412E0 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 4F6E4 801412E4 0000C4A0 */  sb         $a0, 0x0($a2)
    /* 4F6E8 801412E8 21204300 */  addu       $a0, $v0, $v1
    /* 4F6EC 801412EC 01006324 */  addiu      $v1, $v1, 0x1
    /* 4F6F0 801412F0 02000592 */  lbu        $a1, 0x2($s0)
    /* 4F6F4 801412F4 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 4F6F8 801412F8 000085A0 */  sb         $a1, 0x0($a0)
    /* 4F6FC 801412FC 21204300 */  addu       $a0, $v0, $v1
    /* 4F700 80141300 01006324 */  addiu      $v1, $v1, 0x1
    /* 4F704 80141304 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 4F708 80141308 000087A0 */  sb         $a3, 0x0($a0)
    /* 4F70C 8014130C 02000492 */  lbu        $a0, 0x2($s0)
    /* 4F710 80141310 1000B08F */  lw         $s0, 0x10($sp)
    /* 4F714 80141314 21104300 */  addu       $v0, $v0, $v1
    /* 4F718 80141318 000044A0 */  sb         $a0, 0x0($v0)
    /* 4F71C 8014131C 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 4F720 80141320 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 4F724 80141324 0200E724 */  addiu      $a3, $a3, 0x2
    /* 4F728 80141328 000047A0 */  sb         $a3, 0x0($v0)
    /* 4F72C 8014132C 0800E003 */  jr         $ra
    /* 4F730 80141330 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141290
