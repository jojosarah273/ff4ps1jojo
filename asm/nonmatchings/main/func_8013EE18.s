nonmatching func_8013EE18, 0x160

glabel func_8013EE18
    /* 4D218 8013EE18 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* 4D21C 8013EE1C 21200000 */  addu       $a0, $zero, $zero
    /* 4D220 8013EE20 2800BFAF */  sw         $ra, 0x28($sp)
    /* 4D224 8013EE24 2400B5AF */  sw         $s5, 0x24($sp)
    /* 4D228 8013EE28 2000B4AF */  sw         $s4, 0x20($sp)
    /* 4D22C 8013EE2C 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 4D230 8013EE30 1800B2AF */  sw         $s2, 0x18($sp)
    /* 4D234 8013EE34 1400B1AF */  sw         $s1, 0x14($sp)
    /* 4D238 8013EE38 0FCF030C */  jal        func_800F3C3C
    /* 4D23C 8013EE3C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4D240 8013EE40 00200424 */  addiu      $a0, $zero, 0x2000
    /* 4D244 8013EE44 C1CE030C */  jal        func_800F3B04
    /* 4D248 8013EE48 21A04000 */   addu      $s4, $v0, $zero
    /* 4D24C 8013EE4C 00800434 */  ori        $a0, $zero, 0x8000
    /* 4D250 8013EE50 C1CE030C */  jal        func_800F3B04
    /* 4D254 8013EE54 21904000 */   addu      $s2, $v0, $zero
    /* 4D258 8013EE58 21884000 */  addu       $s1, $v0, $zero
    /* 4D25C 8013EE5C 21800000 */  addu       $s0, $zero, $zero
    /* 4D260 8013EE60 80000424 */  addiu      $a0, $zero, 0x80
    /* 4D264 8013EE64 08000524 */  addiu      $a1, $zero, 0x8
  .L8013EE68:
    /* 4D268 8013EE68 21101202 */  addu       $v0, $s0, $s2
    /* 4D26C 8013EE6C 01000326 */  addiu      $v1, $s0, 0x1
    /* 4D270 8013EE70 FFFF7030 */  andi       $s0, $v1, 0xFFFF
    /* 4D274 8013EE74 FCFF0516 */  bne        $s0, $a1, .L8013EE68
    /* 4D278 8013EE78 EB1544A0 */   sb        $a0, 0x15EB($v0)
    /* 4D27C 8013EE7C 33732292 */  lbu        $v0, 0x7333($s1)
    /* 4D280 8013EE80 FF000324 */  addiu      $v1, $zero, 0xFF
    /* 4D284 8013EE84 21105100 */  addu       $v0, $v0, $s1
    /* 4D288 8013EE88 23714490 */  lbu        $a0, 0x7123($v0)
    /* 4D28C 8013EE8C 1A80073C */  lui        $a3, %hi(D_8019ED40)
    /* 4D290 8013EE90 40EDE78C */  lw         $a3, %lo(D_8019ED40)($a3)
    /* 4D294 8013EE94 0E008314 */  bne        $a0, $v1, .L8013EED0
    /* 4D298 8013EE98 21800000 */   addu      $s0, $zero, $zero
    /* 4D29C 8013EE9C 08000624 */  addiu      $a2, $zero, 0x8
    /* 4D2A0 8013EEA0 FF000524 */  addiu      $a1, $zero, 0xFF
    /* 4D2A4 8013EEA4 01000226 */  addiu      $v0, $s0, 0x1
  .L8013EEA8:
    /* 4D2A8 8013EEA8 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 4D2AC 8013EEAC 08000612 */  beq        $s0, $a2, .L8013EED0
    /* 4D2B0 8013EEB0 21181102 */   addu      $v1, $s0, $s1
    /* 4D2B4 8013EEB4 33736290 */  lbu        $v0, 0x7333($v1)
    /* 4D2B8 8013EEB8 00000000 */  nop
    /* 4D2BC 8013EEBC 21105100 */  addu       $v0, $v0, $s1
    /* 4D2C0 8013EEC0 23714490 */  lbu        $a0, 0x7123($v0)
    /* 4D2C4 8013EEC4 00000000 */  nop
    /* 4D2C8 8013EEC8 F7FF8510 */  beq        $a0, $a1, .L8013EEA8
    /* 4D2CC 8013EECC 01000226 */   addiu     $v0, $s0, 0x1
  .L8013EED0:
    /* 4D2D0 8013EED0 21101102 */  addu       $v0, $s0, $s1
    /* 4D2D4 8013EED4 21800000 */  addu       $s0, $zero, $zero
    /* 4D2D8 8013EED8 33734390 */  lbu        $v1, 0x7333($v0)
    /* 4D2DC 8013EEDC FF001524 */  addiu      $s5, $zero, 0xFF
    /* 4D2E0 8013EEE0 B1FC040C */  jal        func_8013F2C4
    /* 4D2E4 8013EEE4 0000E3A0 */   sb        $v1, 0x0($a3)
    /* 4D2E8 8013EEE8 00008292 */  lbu        $v0, 0x0($s4)
    /* 4D2EC 8013EEEC 08001324 */  addiu      $s3, $zero, 0x8
    /* 4D2F0 8013EEF0 020082A2 */  sb         $v0, 0x2($s4)
  .L8013EEF4:
    /* 4D2F4 8013EEF4 21101102 */  addu       $v0, $s0, $s1
    /* 4D2F8 8013EEF8 23714390 */  lbu        $v1, 0x7123($v0)
    /* 4D2FC 8013EEFC 00000000 */  nop
    /* 4D300 8013EF00 11007510 */  beq        $v1, $s5, .L8013EF48
    /* 4D304 8013EF04 01000226 */   addiu     $v0, $s0, 0x1
    /* 4D308 8013EF08 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 4D30C 8013EF0C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 4D310 8013EF10 B1FC040C */  jal        func_8013F2C4
    /* 4D314 8013EF14 000050A0 */   sb        $s0, 0x0($v0)
    /* 4D318 8013EF18 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 4D31C 8013EF1C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 4D320 8013EF20 00000000 */  nop
    /* 4D324 8013EF24 00004390 */  lbu        $v1, 0x0($v0)
    /* 4D328 8013EF28 00000000 */  nop
    /* 4D32C 8013EF2C FFFF6424 */  addiu      $a0, $v1, -0x1
    /* 4D330 8013EF30 0200822C */  sltiu      $v0, $a0, 0x2
    /* 4D334 8013EF34 04004014 */  bnez       $v0, .L8013EF48
    /* 4D338 8013EF38 01000226 */   addiu     $v0, $s0, 0x1
    /* 4D33C 8013EF3C 21101202 */  addu       $v0, $s0, $s2
    /* 4D340 8013EF40 EB1540A0 */  sb         $zero, 0x15EB($v0)
    /* 4D344 8013EF44 01000226 */  addiu      $v0, $s0, 0x1
  .L8013EF48:
    /* 4D348 8013EF48 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 4D34C 8013EF4C E9FF1316 */  bne        $s0, $s3, .L8013EEF4
    /* 4D350 8013EF50 00000000 */   nop
    /* 4D354 8013EF54 2800BF8F */  lw         $ra, 0x28($sp)
    /* 4D358 8013EF58 2400B58F */  lw         $s5, 0x24($sp)
    /* 4D35C 8013EF5C 2000B48F */  lw         $s4, 0x20($sp)
    /* 4D360 8013EF60 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 4D364 8013EF64 1800B28F */  lw         $s2, 0x18($sp)
    /* 4D368 8013EF68 1400B18F */  lw         $s1, 0x14($sp)
    /* 4D36C 8013EF6C 1000B08F */  lw         $s0, 0x10($sp)
    /* 4D370 8013EF70 0800E003 */  jr         $ra
    /* 4D374 8013EF74 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_8013EE18
