nonmatching func_8018D3C8, 0x464

glabel func_8018D3C8
    /* 9B7C8 8018D3C8 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* 9B7CC 8018D3CC 2000B4AF */  sw         $s4, 0x20($sp)
    /* 9B7D0 8018D3D0 FFFF1424 */  addiu      $s4, $zero, -0x1
    /* 9B7D4 8018D3D4 21200000 */  addu       $a0, $zero, $zero
    /* 9B7D8 8018D3D8 2C00BFAF */  sw         $ra, 0x2C($sp)
    /* 9B7DC 8018D3DC 2800B6AF */  sw         $s6, 0x28($sp)
    /* 9B7E0 8018D3E0 2400B5AF */  sw         $s5, 0x24($sp)
    /* 9B7E4 8018D3E4 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 9B7E8 8018D3E8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 9B7EC 8018D3EC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9B7F0 8018D3F0 B238060C */  jal        func_8018E2C8
    /* 9B7F4 8018D3F4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 9B7F8 8018D3F8 1A80023C */  lui        $v0, %hi(D_8019B584)
    /* 9B7FC 8018D3FC 84B5428C */  lw         $v0, %lo(D_8019B584)($v0)
    /* 9B800 8018D400 40000324 */  addiu      $v1, $zero, 0x40
    /* 9B804 8018D404 F0004230 */  andi       $v0, $v0, 0xF0
    /* 9B808 8018D408 03004314 */  bne        $v0, $v1, .L8018D418
    /* 9B80C 8018D40C 21980000 */   addu      $s3, $zero, $zero
    /* 9B810 8018D410 07350608 */  j          .L8018D41C
    /* 9B814 8018D414 42000224 */   addiu     $v0, $zero, 0x42
  .L8018D418:
    /* 9B818 8018D418 33000224 */  addiu      $v0, $zero, 0x33
  .L8018D41C:
    /* 9B81C 8018D41C 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9B820 8018D420 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9B824 8018D424 1A80023C */  lui        $v0, %hi(D_8019B5A0)
    /* 9B828 8018D428 A0B5428C */  lw         $v0, %lo(D_8019B5A0)($v0)
    /* 9B82C 8018D42C 00000000 */  nop
    /* 9B830 8018D430 24004010 */  beqz       $v0, .L8018D4C4
    /* 9B834 8018D434 00000000 */   nop
    /* 9B838 8018D438 21800000 */  addu       $s0, $zero, $zero
    /* 9B83C 8018D43C 01001624 */  addiu      $s6, $zero, 0x1
    /* 9B840 8018D440 1F80153C */  lui        $s5, %hi(D_801F67D8)
    /* 9B844 8018D444 D867B526 */  addiu      $s5, $s5, %lo(D_801F67D8)
    /* 9B848 8018D448 07001224 */  addiu      $s2, $zero, 0x7
  .L8018D44C:
    /* 9B84C 8018D44C 1A80023C */  lui        $v0, %hi(D_8019B5A0)
    /* 9B850 8018D450 A0B5428C */  lw         $v0, %lo(D_8019B5A0)($v0)
    /* 9B854 8018D454 04181602 */  sllv       $v1, $s6, $s0
    /* 9B858 8018D458 24104300 */  and        $v0, $v0, $v1
    /* 9B85C 8018D45C 15004010 */  beqz       $v0, .L8018D4B4
    /* 9B860 8018D460 00111000 */   sll       $v0, $s0, 4
    /* 9B864 8018D464 21105500 */  addu       $v0, $v0, $s5
    /* 9B868 8018D468 0400518C */  lw         $s1, 0x4($v0)
    /* 9B86C 8018D46C 0800428C */  lw         $v0, 0x8($v0)
    /* 9B870 8018D470 1F80033C */  lui        $v1, %hi(D_801F695C)
    /* 9B874 8018D474 5C69638C */  lw         $v1, %lo(D_801F695C)($v1)
    /* 9B878 8018D478 21105100 */  addu       $v0, $v0, $s1
    /* 9B87C 8018D47C 05006014 */  bnez       $v1, .L8018D494
    /* 9B880 8018D480 F8FF4524 */   addiu     $a1, $v0, -0x8
    /* 9B884 8018D484 1F80023C */  lui        $v0, %hi(D_801F6958)
    /* 9B888 8018D488 5869428C */  lw         $v0, %lo(D_801F6958)($v0)
    /* 9B88C 8018D48C 00000000 */  nop
    /* 9B890 8018D490 2128A200 */  addu       $a1, $a1, $v0
  .L8018D494:
    /* 9B894 8018D494 21204002 */  addu       $a0, $s2, $zero
    /* 9B898 8018D498 B12A060C */  jal        func_8018AAC4
    /* 9B89C 8018D49C 01000624 */   addiu     $a2, $zero, 0x1
    /* 9B8A0 8018D4A0 2A107102 */  slt        $v0, $s3, $s1
    /* 9B8A4 8018D4A4 03004010 */  beqz       $v0, .L8018D4B4
    /* 9B8A8 8018D4A8 00000000 */   nop
    /* 9B8AC 8018D4AC 21982002 */  addu       $s3, $s1, $zero
    /* 9B8B0 8018D4B0 21A00002 */  addu       $s4, $s0, $zero
  .L8018D4B4:
    /* 9B8B4 8018D4B4 01001026 */  addiu      $s0, $s0, 0x1
    /* 9B8B8 8018D4B8 1800022A */  slti       $v0, $s0, 0x18
    /* 9B8BC 8018D4BC E3FF4014 */  bnez       $v0, .L8018D44C
    /* 9B8C0 8018D4C0 08005226 */   addiu     $s2, $s2, 0x8
  .L8018D4C4:
    /* 9B8C4 8018D4C4 1A80023C */  lui        $v0, %hi(D_8019B588)
    /* 9B8C8 8018D4C8 88B5428C */  lw         $v0, %lo(D_8019B588)($v0)
    /* 9B8CC 8018D4CC 00000000 */  nop
    /* 9B8D0 8018D4D0 44004014 */  bnez       $v0, .L8018D5E4
    /* 9B8D4 8018D4D4 0900622A */   slti      $v0, $s3, 0x9
    /* 9B8D8 8018D4D8 2B004010 */  beqz       $v0, .L8018D588
    /* 9B8DC 8018D4DC F8FF7326 */   addiu     $s3, $s3, -0x8
    /* 9B8E0 8018D4E0 B238060C */  jal        func_8018E2C8
    /* 9B8E4 8018D4E4 21200000 */   addu      $a0, $zero, $zero
    /* 9B8E8 8018D4E8 1F80043C */  lui        $a0, %hi(D_801F67B4)
    /* 9B8EC 8018D4EC B467848C */  lw         $a0, %lo(D_801F67B4)($a0)
    /* 9B8F0 8018D4F0 43000224 */  addiu      $v0, $zero, 0x43
    /* 9B8F4 8018D4F4 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9B8F8 8018D4F8 1239060C */  jal        func_8018E448
    /* 9B8FC 8018D4FC 84B522AC */   sw        $v0, %lo(D_8019B584)($at)
    /* 9B900 8018D500 1F80043C */  lui        $a0, %hi(D_801F67B0)
    /* 9B904 8018D504 B067848C */  lw         $a0, %lo(D_801F67B0)($a0)
    /* 9B908 8018D508 2E39060C */  jal        func_8018E4B8
    /* 9B90C 8018D50C 00000000 */   nop
    /* 9B910 8018D510 1F80023C */  lui        $v0, %hi(D_801F67D4)
    /* 9B914 8018D514 D467428C */  lw         $v0, %lo(D_801F67D4)($v0)
    /* 9B918 8018D518 00000000 */  nop
    /* 9B91C 8018D51C 03004010 */  beqz       $v0, .L8018D52C
    /* 9B920 8018D520 00000000 */   nop
    /* 9B924 8018D524 FA2A060C */  jal        func_8018ABE8
    /* 9B928 8018D528 01000424 */   addiu     $a0, $zero, 0x1
  .L8018D52C:
    /* 9B92C 8018D52C 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9B930 8018D530 AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9B934 8018D534 00000000 */  nop
    /* 9B938 8018D538 0C004010 */  beqz       $v0, .L8018D56C
    /* 9B93C 8018D53C 10000224 */   addiu     $v0, $zero, 0x10
    /* 9B940 8018D540 1A80043C */  lui        $a0, %hi(D_8019B5A0)
    /* 9B944 8018D544 A0B5848C */  lw         $a0, %lo(D_8019B5A0)($a0)
    /* 9B948 8018D548 00000000 */  nop
    /* 9B94C 8018D54C 07008010 */  beqz       $a0, .L8018D56C
    /* 9B950 8018D550 00000000 */   nop
    /* 9B954 8018D554 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9B958 8018D558 AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9B95C 8018D55C 00000000 */  nop
    /* 9B960 8018D560 09F84000 */  jalr       $v0
    /* 9B964 8018D564 08000524 */   addiu     $a1, $zero, 0x8
    /* 9B968 8018D568 10000224 */  addiu      $v0, $zero, 0x10
  .L8018D56C:
    /* 9B96C 8018D56C 1A80013C */  lui        $at, %hi(D_8019B5A0)
    /* 9B970 8018D570 A0B520AC */  sw         $zero, %lo(D_8019B5A0)($at)
    /* 9B974 8018D574 1A80013C */  lui        $at, %hi(D_8019B5A4)
    /* 9B978 8018D578 A4B520AC */  sw         $zero, %lo(D_8019B5A4)($at)
    /* 9B97C 8018D57C 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9B980 8018D580 01360608 */  j          .L8018D804
    /* 9B984 8018D584 84B522AC */   sw        $v0, %lo(D_8019B584)($at)
  .L8018D588:
    /* 9B988 8018D588 1980043C */  lui        $a0, %hi(func_8018E00C)
    /* 9B98C 8018D58C 1239060C */  jal        func_8018E448
    /* 9B990 8018D590 0CE08424 */   addiu     $a0, $a0, %lo(func_8018E00C)
    /* 9B994 8018D594 00111400 */  sll        $v0, $s4, 4
    /* 9B998 8018D598 1F80013C */  lui        $at, %hi(D_801F67E0)
    /* 9B99C 8018D59C 21082200 */  addu       $at, $at, $v0
    /* 9B9A0 8018D5A0 E067228C */  lw         $v0, %lo(D_801F67E0)($at)
    /* 9B9A4 8018D5A4 1F80033C */  lui        $v1, %hi(D_801F695C)
    /* 9B9A8 8018D5A8 5C69638C */  lw         $v1, %lo(D_801F695C)($v1)
    /* 9B9AC 8018D5AC 21205300 */  addu       $a0, $v0, $s3
    /* 9B9B0 8018D5B0 1F80013C */  lui        $at, %hi(D_801F67A0)
    /* 9B9B4 8018D5B4 07006014 */  bnez       $v1, .L8018D5D4
    /* 9B9B8 8018D5B8 A06724AC */   sw        $a0, %lo(D_801F67A0)($at)
    /* 9B9BC 8018D5BC 1F80023C */  lui        $v0, %hi(D_801F6958)
    /* 9B9C0 8018D5C0 5869428C */  lw         $v0, %lo(D_801F6958)($v0)
    /* 9B9C4 8018D5C4 00000000 */  nop
    /* 9B9C8 8018D5C8 21108200 */  addu       $v0, $a0, $v0
    /* 9B9CC 8018D5CC 1F80013C */  lui        $at, %hi(D_801F67A0)
    /* 9B9D0 8018D5D0 A06722AC */  sw         $v0, %lo(D_801F67A0)($at)
  .L8018D5D4:
    /* 9B9D4 8018D5D4 1F80043C */  lui        $a0, %hi(D_801F67A0)
    /* 9B9D8 8018D5D8 A067848C */  lw         $a0, %lo(D_801F67A0)($a0)
    /* 9B9DC 8018D5DC 0239060C */  jal        func_8018E408
    /* 9B9E0 8018D5E0 00000000 */   nop
  .L8018D5E4:
    /* 9B9E4 8018D5E4 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9B9E8 8018D5E8 AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9B9EC 8018D5EC 00000000 */  nop
    /* 9B9F0 8018D5F0 0B004010 */  beqz       $v0, .L8018D620
    /* 9B9F4 8018D5F4 00000000 */   nop
    /* 9B9F8 8018D5F8 1A80043C */  lui        $a0, %hi(D_8019B5A4)
    /* 9B9FC 8018D5FC A4B5848C */  lw         $a0, %lo(D_8019B5A4)($a0)
    /* 9BA00 8018D600 00000000 */  nop
    /* 9BA04 8018D604 06008010 */  beqz       $a0, .L8018D620
    /* 9BA08 8018D608 00000000 */   nop
    /* 9BA0C 8018D60C 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9BA10 8018D610 AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9BA14 8018D614 00000000 */  nop
    /* 9BA18 8018D618 09F84000 */  jalr       $v0
    /* 9BA1C 8018D61C 06000524 */   addiu     $a1, $zero, 0x6
  .L8018D620:
    /* 9BA20 8018D620 1A80053C */  lui        $a1, %hi(D_8019B588)
    /* 9BA24 8018D624 88B5A58C */  lw         $a1, %lo(D_8019B588)($a1)
    /* 9BA28 8018D628 00000000 */  nop
    /* 9BA2C 8018D62C 0700A014 */  bnez       $a1, .L8018D64C
    /* 9BA30 8018D630 41000224 */   addiu     $v0, $zero, 0x41
    /* 9BA34 8018D634 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9BA38 8018D638 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9BA3C 8018D63C B238060C */  jal        func_8018E2C8
    /* 9BA40 8018D640 01000424 */   addiu     $a0, $zero, 0x1
    /* 9BA44 8018D644 01360608 */  j          .L8018D804
    /* 9BA48 8018D648 00000000 */   nop
  .L8018D64C:
    /* 9BA4C 8018D64C 1A80023C */  lui        $v0, %hi(D_8019B5A0)
    /* 9BA50 8018D650 A0B5428C */  lw         $v0, %lo(D_8019B5A0)($v0)
    /* 9BA54 8018D654 1F80033C */  lui        $v1, %hi(D_801F67B8)
    /* 9BA58 8018D658 B867638C */  lw         $v1, %lo(D_801F67B8)($v1)
    /* 9BA5C 8018D65C 1F80043C */  lui        $a0, %hi(D_801F695C)
    /* 9BA60 8018D660 5C69848C */  lw         $a0, %lo(D_801F695C)($a0)
    /* 9BA64 8018D664 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9BA68 8018D668 8CB525AC */  sw         $a1, %lo(D_8019B58C)($at)
    /* 9BA6C 8018D66C 1A80013C */  lui        $at, %hi(D_8019B5A4)
    /* 9BA70 8018D670 A4B522AC */  sw         $v0, %lo(D_8019B5A4)($at)
    /* 9BA74 8018D674 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9BA78 8018D678 21008014 */  bnez       $a0, .L8018D700
    /* 9BA7C 8018D67C BC6723AC */   sw        $v1, %lo(D_801F67BC)($at)
    /* 9BA80 8018D680 1A80033C */  lui        $v1, %hi(D_8019B594)
    /* 9BA84 8018D684 94B5638C */  lw         $v1, %lo(D_8019B594)($v1)
    /* 9BA88 8018D688 00000000 */  nop
    /* 9BA8C 8018D68C 50006010 */  beqz       $v1, .L8018D7D0
    /* 9BA90 8018D690 00000000 */   nop
    /* 9BA94 8018D694 1F80023C */  lui        $v0, %hi(D_801F6960)
    /* 9BA98 8018D698 6069428C */  lw         $v0, %lo(D_801F6960)($v0)
    /* 9BA9C 8018D69C 00000000 */  nop
    /* 9BAA0 8018D6A0 4B004014 */  bnez       $v0, .L8018D7D0
    /* 9BAA4 8018D6A4 21800000 */   addu      $s0, $zero, $zero
    /* 9BAA8 8018D6A8 01000624 */  addiu      $a2, $zero, 0x1
    /* 9BAAC 8018D6AC 2510A300 */  or         $v0, $a1, $v1
    /* 9BAB0 8018D6B0 21204000 */  addu       $a0, $v0, $zero
    /* 9BAB4 8018D6B4 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9BAB8 8018D6B8 8CB524AC */  sw         $a0, %lo(D_8019B58C)($at)
    /* 9BABC 8018D6BC 1A80013C */  lui        $at, %hi(D_8019B59C)
    /* 9BAC0 8018D6C0 9CB523AC */  sw         $v1, %lo(D_8019B59C)($at)
    /* 9BAC4 8018D6C4 1A80013C */  lui        $at, %hi(D_8019B598)
    /* 9BAC8 8018D6C8 98B523AC */  sw         $v1, %lo(D_8019B598)($at)
    /* 9BACC 8018D6CC 1A80013C */  lui        $at, %hi(D_8019B594)
    /* 9BAD0 8018D6D0 94B520AC */  sw         $zero, %lo(D_8019B594)($at)
    /* 9BAD4 8018D6D4 04100602 */  sllv       $v0, $a2, $s0
  .L8018D6D8:
    /* 9BAD8 8018D6D8 24108200 */  and        $v0, $a0, $v0
    /* 9BADC 8018D6DC 05004014 */  bnez       $v0, .L8018D6F4
    /* 9BAE0 8018D6E0 00000000 */   nop
    /* 9BAE4 8018D6E4 01001026 */  addiu      $s0, $s0, 0x1
    /* 9BAE8 8018D6E8 1800022A */  slti       $v0, $s0, 0x18
    /* 9BAEC 8018D6EC FAFF4014 */  bnez       $v0, .L8018D6D8
    /* 9BAF0 8018D6F0 04100602 */   sllv      $v0, $a2, $s0
  .L8018D6F4:
    /* 9BAF4 8018D6F4 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9BAF8 8018D6F8 F4350608 */  j          .L8018D7D0
    /* 9BAFC 8018D6FC BC6730AC */   sw        $s0, %lo(D_801F67BC)($at)
  .L8018D700:
    /* 9BB00 8018D700 1A80033C */  lui        $v1, %hi(D_8019B590)
    /* 9BB04 8018D704 90B5638C */  lw         $v1, %lo(D_8019B590)($v1)
    /* 9BB08 8018D708 00000000 */  nop
    /* 9BB0C 8018D70C 30006010 */  beqz       $v1, .L8018D7D0
    /* 9BB10 8018D710 00000000 */   nop
    /* 9BB14 8018D714 1A80053C */  lui        $a1, %hi(D_8019B59C)
    /* 9BB18 8018D718 9CB5A58C */  lw         $a1, %lo(D_8019B59C)($a1)
    /* 9BB1C 8018D71C 00000000 */  nop
    /* 9BB20 8018D720 2B00A010 */  beqz       $a1, .L8018D7D0
    /* 9BB24 8018D724 00000000 */   nop
    /* 9BB28 8018D728 1F80023C */  lui        $v0, %hi(D_801F6964)
    /* 9BB2C 8018D72C 6469428C */  lw         $v0, %lo(D_801F6964)($v0)
    /* 9BB30 8018D730 00000000 */  nop
    /* 9BB34 8018D734 26004014 */  bnez       $v0, .L8018D7D0
    /* 9BB38 8018D738 24886500 */   and       $s1, $v1, $a1
    /* 9BB3C 8018D73C 01000424 */  addiu      $a0, $zero, 0x1
    /* 9BB40 8018D740 8231060C */  jal        func_8018C608
    /* 9BB44 8018D744 21282002 */   addu      $a1, $s1, $zero
    /* 9BB48 8018D748 1A80023C */  lui        $v0, %hi(D_8019B100)
    /* 9BB4C 8018D74C 00B1428C */  lw         $v0, %lo(D_8019B100)($v0)
    /* 9BB50 8018D750 00000000 */  nop
    /* 9BB54 8018D754 01004230 */  andi       $v0, $v0, 0x1
    /* 9BB58 8018D758 04004010 */  beqz       $v0, .L8018D76C
    /* 9BB5C 8018D75C 21800000 */   addu      $s0, $zero, $zero
    /* 9BB60 8018D760 3238060C */  jal        func_8018E0C8
    /* 9BB64 8018D764 01000424 */   addiu     $a0, $zero, 0x1
    /* 9BB68 8018D768 21800000 */  addu       $s0, $zero, $zero
  .L8018D76C:
    /* 9BB6C 8018D76C 1A80023C */  lui        $v0, %hi(D_8019B588)
    /* 9BB70 8018D770 88B5428C */  lw         $v0, %lo(D_8019B588)($v0)
    /* 9BB74 8018D774 01000424 */  addiu      $a0, $zero, 0x1
    /* 9BB78 8018D778 1A80013C */  lui        $at, %hi(D_8019B59C)
    /* 9BB7C 8018D77C 9CB520AC */  sw         $zero, %lo(D_8019B59C)($at)
    /* 9BB80 8018D780 1A80013C */  lui        $at, %hi(D_8019B590)
    /* 9BB84 8018D784 90B520AC */  sw         $zero, %lo(D_8019B590)($at)
    /* 9BB88 8018D788 25105100 */  or         $v0, $v0, $s1
    /* 9BB8C 8018D78C 21184000 */  addu       $v1, $v0, $zero
    /* 9BB90 8018D790 1A80013C */  lui        $at, %hi(D_8019B588)
    /* 9BB94 8018D794 88B523AC */  sw         $v1, %lo(D_8019B588)($at)
    /* 9BB98 8018D798 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9BB9C 8018D79C 8CB523AC */  sw         $v1, %lo(D_8019B58C)($at)
    /* 9BBA0 8018D7A0 04100402 */  sllv       $v0, $a0, $s0
  .L8018D7A4:
    /* 9BBA4 8018D7A4 24106200 */  and        $v0, $v1, $v0
    /* 9BBA8 8018D7A8 05004014 */  bnez       $v0, .L8018D7C0
    /* 9BBAC 8018D7AC 00000000 */   nop
    /* 9BBB0 8018D7B0 01001026 */  addiu      $s0, $s0, 0x1
    /* 9BBB4 8018D7B4 1800022A */  slti       $v0, $s0, 0x18
    /* 9BBB8 8018D7B8 FAFF4014 */  bnez       $v0, .L8018D7A4
    /* 9BBBC 8018D7BC 04100402 */   sllv      $v0, $a0, $s0
  .L8018D7C0:
    /* 9BBC0 8018D7C0 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9BBC4 8018D7C4 BC6730AC */  sw         $s0, %lo(D_801F67BC)($at)
    /* 9BBC8 8018D7C8 1F80013C */  lui        $at, %hi(D_801F67B8)
    /* 9BBCC 8018D7CC B86730AC */  sw         $s0, %lo(D_801F67B8)($at)
  .L8018D7D0:
    /* 9BBD0 8018D7D0 1F80043C */  lui        $a0, %hi(D_801F67BC)
    /* 9BBD4 8018D7D4 BC67848C */  lw         $a0, %lo(D_801F67BC)($a0)
    /* 9BBD8 8018D7D8 1A80013C */  lui        $at, %hi(D_8019B5A0)
    /* 9BBDC 8018D7DC 6B34060C */  jal        func_8018D1AC
    /* 9BBE0 8018D7E0 A0B520AC */   sw        $zero, %lo(D_8019B5A0)($at)
    /* 9BBE4 8018D7E4 0C00458C */  lw         $a1, 0xC($v0)
    /* 9BBE8 8018D7E8 1F80063C */  lui        $a2, %hi(D_801F6958)
    /* 9BBEC 8018D7EC 5869C68C */  lw         $a2, %lo(D_801F6958)($a2)
    /* 9BBF0 8018D7F0 31000224 */  addiu      $v0, $zero, 0x31
    /* 9BBF4 8018D7F4 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9BBF8 8018D7F8 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9BBFC 8018D7FC D729060C */  jal        func_8018A75C
    /* 9BC00 8018D800 03000424 */   addiu     $a0, $zero, 0x3
  .L8018D804:
    /* 9BC04 8018D804 2C00BF8F */  lw         $ra, 0x2C($sp)
    /* 9BC08 8018D808 2800B68F */  lw         $s6, 0x28($sp)
    /* 9BC0C 8018D80C 2400B58F */  lw         $s5, 0x24($sp)
    /* 9BC10 8018D810 2000B48F */  lw         $s4, 0x20($sp)
    /* 9BC14 8018D814 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 9BC18 8018D818 1800B28F */  lw         $s2, 0x18($sp)
    /* 9BC1C 8018D81C 1400B18F */  lw         $s1, 0x14($sp)
    /* 9BC20 8018D820 1000B08F */  lw         $s0, 0x10($sp)
    /* 9BC24 8018D824 0800E003 */  jr         $ra
    /* 9BC28 8018D828 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_8018D3C8
