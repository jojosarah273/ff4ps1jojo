nonmatching func_80192614, 0x104

glabel func_80192614
    /* A0A14 80192614 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* A0A18 80192618 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A0A1C 8019261C 21988000 */  addu       $s3, $a0, $zero
    /* A0A20 80192620 2000B4AF */  sw         $s4, 0x20($sp)
    /* A0A24 80192624 21A0A000 */  addu       $s4, $a1, $zero
    /* A0A28 80192628 1400B1AF */  sw         $s1, 0x14($sp)
    /* A0A2C 8019262C 1A80113C */  lui        $s1, %hi(D_8019BDB0)
    /* A0A30 80192630 B0BD3126 */  addiu      $s1, $s1, %lo(D_8019BDB0)
    /* A0A34 80192634 1800B2AF */  sw         $s2, 0x18($sp)
    /* A0A38 80192638 08003226 */  addiu      $s2, $s1, 0x8
    /* A0A3C 8019263C 2400BFAF */  sw         $ra, 0x24($sp)
    /* A0A40 80192640 1000B0AF */  sw         $s0, 0x10($sp)
  .L80192644:
    /* A0A44 80192644 3A4A060C */  jal        func_801928E8
    /* A0A48 80192648 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A0A4C 8019264C 0000238E */  lw         $v1, 0x0($s1)
    /* A0A50 80192650 00000000 */  nop
    /* A0A54 80192654 B0046324 */  addiu      $v1, $v1, 0x4B0
    /* A0A58 80192658 2A186200 */  slt        $v1, $v1, $v0
    /* A0A5C 8019265C 13006014 */  bnez       $v1, .L801926AC
    /* A0A60 80192660 FFFF1024 */   addiu     $s0, $zero, -0x1
    /* A0A64 80192664 F8FF228E */  lw         $v0, -0x8($s1)
    /* A0A68 80192668 00000000 */  nop
    /* A0A6C 8019266C 09004004 */  bltz       $v0, .L80192694
    /* A0A70 80192670 00000000 */   nop
    /* A0A74 80192674 3A4A060C */  jal        func_801928E8
    /* A0A78 80192678 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A0A7C 8019267C FCFF238E */  lw         $v1, -0x4($s1)
    /* A0A80 80192680 00000000 */  nop
    /* A0A84 80192684 3C006324 */  addiu      $v1, $v1, 0x3C
    /* A0A88 80192688 2A186200 */  slt        $v1, $v1, $v0
    /* A0A8C 8019268C 06006010 */  beqz       $v1, .L801926A8
    /* A0A90 80192690 00000000 */   nop
  .L80192694:
    /* A0A94 80192694 3C48060C */  jal        func_801920F0
    /* A0A98 80192698 01000424 */   addiu     $a0, $zero, 0x1
    /* A0A9C 8019269C E4FF308E */  lw         $s0, -0x1C($s1)
    /* A0AA0 801926A0 AB490608 */  j          .L801926AC
    /* A0AA4 801926A4 00000000 */   nop
  .L801926A8:
    /* A0AA8 801926A8 F8FF308E */  lw         $s0, -0x8($s1)
  .L801926AC:
    /* A0AAC 801926AC 09006016 */  bnez       $s3, .L801926D4
    /* A0AB0 801926B0 01000424 */   addiu     $a0, $zero, 0x1
    /* A0AB4 801926B4 0000428E */  lw         $v0, 0x0($s2)
    /* A0AB8 801926B8 00000000 */  nop
    /* A0ABC 801926BC 03004010 */  beqz       $v0, .L801926CC
    /* A0AC0 801926C0 00000000 */   nop
    /* A0AC4 801926C4 DFFF0012 */  beqz       $s0, .L80192644
    /* A0AC8 801926C8 00000000 */   nop
  .L801926CC:
    /* A0ACC 801926CC DDFF001E */  bgtz       $s0, .L80192644
    /* A0AD0 801926D0 01000424 */   addiu     $a0, $zero, 0x1
  .L801926D4:
    /* A0AD4 801926D4 0646060C */  jal        func_80191818
    /* A0AD8 801926D8 21288002 */   addu      $a1, $s4, $zero
    /* A0ADC 801926DC 0000428E */  lw         $v0, 0x0($s2)
    /* A0AE0 801926E0 00000000 */  nop
    /* A0AE4 801926E4 04004010 */  beqz       $v0, .L801926F8
    /* A0AE8 801926E8 21100002 */   addu      $v0, $s0, $zero
    /* A0AEC 801926EC 02000016 */  bnez       $s0, .L801926F8
    /* A0AF0 801926F0 01001024 */   addiu     $s0, $zero, 0x1
    /* A0AF4 801926F4 21100002 */  addu       $v0, $s0, $zero
  .L801926F8:
    /* A0AF8 801926F8 2400BF8F */  lw         $ra, 0x24($sp)
    /* A0AFC 801926FC 2000B48F */  lw         $s4, 0x20($sp)
    /* A0B00 80192700 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A0B04 80192704 1800B28F */  lw         $s2, 0x18($sp)
    /* A0B08 80192708 1400B18F */  lw         $s1, 0x14($sp)
    /* A0B0C 8019270C 1000B08F */  lw         $s0, 0x10($sp)
    /* A0B10 80192710 0800E003 */  jr         $ra
    /* A0B14 80192714 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80192614
