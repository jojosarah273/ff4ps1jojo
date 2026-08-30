nonmatching func_8014E424, 0x338

glabel func_8014E424
    /* 5C824 8014E424 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5C828 8014E428 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5C82C 8014E42C 5DD5030C */  jal        func_800F5574
    /* 5C830 8014E430 03000424 */   addiu     $a0, $zero, 0x3
    /* 5C834 8014E434 F5D4030C */  jal        func_800F53D4
    /* 5C838 8014E438 00000000 */   nop
    /* 5C83C 8014E43C C3004014 */  bnez       $v0, .L8014E74C
    /* 5C840 8014E440 00000000 */   nop
    /* 5C844 8014E444 5DD5030C */  jal        func_800F5574
    /* 5C848 8014E448 04000424 */   addiu     $a0, $zero, 0x4
    /* 5C84C 8014E44C F5D4030C */  jal        func_800F53D4
    /* 5C850 8014E450 00000000 */   nop
    /* 5C854 8014E454 BD004014 */  bnez       $v0, .L8014E74C
    /* 5C858 8014E458 00000000 */   nop
    /* 5C85C 8014E45C 5DD5030C */  jal        func_800F5574
    /* 5C860 8014E460 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C864 8014E464 F5D4030C */  jal        func_800F53D4
    /* 5C868 8014E468 00000000 */   nop
    /* 5C86C 8014E46C 05004010 */  beqz       $v0, .L8014E484
    /* 5C870 8014E470 00000000 */   nop
    /* 5C874 8014E474 26CF010C */  jal        func_80073C98
    /* 5C878 8014E478 00000000 */   nop
    /* 5C87C 8014E47C D3390508 */  j          .L8014E74C
    /* 5C880 8014E480 00000000 */   nop
  .L8014E484:
    /* 5C884 8014E484 59D9030C */  jal        func_800F6564
    /* 5C888 8014E488 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5C88C 8014E48C 5DD5030C */  jal        func_800F5574
    /* 5C890 8014E490 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C894 8014E494 F5D4030C */  jal        func_800F53D4
    /* 5C898 8014E498 00000000 */   nop
    /* 5C89C 8014E49C 29004010 */  beqz       $v0, .L8014E544
    /* 5C8A0 8014E4A0 00000000 */   nop
    /* 5C8A4 8014E4A4 77DC030C */  jal        func_800F71DC
    /* 5C8A8 8014E4A8 21200000 */   addu      $a0, $zero, $zero
    /* 5C8AC 8014E4AC 53D9030C */  jal        func_800F654C
    /* 5C8B0 8014E4B0 20000424 */   addiu     $a0, $zero, 0x20
    /* 5C8B4 8014E4B4 93E0030C */  jal        func_800F824C
    /* 5C8B8 8014E4B8 21200000 */   addu      $a0, $zero, $zero
  .L8014E4BC:
    /* 5C8BC 8014E4BC 53D9030C */  jal        func_800F654C
    /* 5C8C0 8014E4C0 20000424 */   addiu     $a0, $zero, 0x20
    /* 5C8C4 8014E4C4 613A050C */  jal        func_8014E984
    /* 5C8C8 8014E4C8 00000000 */   nop
    /* 5C8CC 8014E4CC 04D5030C */  jal        func_800F5410
    /* 5C8D0 8014E4D0 00000000 */   nop
    /* 5C8D4 8014E4D4 02D0030C */  jal        func_800F4008
    /* 5C8D8 8014E4D8 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 5C8DC 8014E4DC DAE1030C */  jal        func_800F8768
    /* 5C8E0 8014E4E0 68F20434 */   ori       $a0, $zero, 0xF268
    /* 5C8E4 8014E4E4 8CD9030C */  jal        func_800F6630
    /* 5C8E8 8014E4E8 21200000 */   addu      $a0, $zero, $zero
    /* 5C8EC 8014E4EC DAE1030C */  jal        func_800F8768
    /* 5C8F0 8014E4F0 69F20434 */   ori       $a0, $zero, 0xF269
    /* 5C8F4 8014E4F4 04D5030C */  jal        func_800F5410
    /* 5C8F8 8014E4F8 00000000 */   nop
    /* 5C8FC 8014E4FC 02D0030C */  jal        func_800F4008
    /* 5C900 8014E500 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5C904 8014E504 93E0030C */  jal        func_800F824C
    /* 5C908 8014E508 21200000 */   addu      $a0, $zero, $zero
    /* 5C90C 8014E50C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5C910 8014E510 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5C914 8014E514 00000000 */  nop
    /* 5C918 8014E518 00006294 */  lhu        $v0, 0x0($v1)
    /* 5C91C 8014E51C 10000424 */  addiu      $a0, $zero, 0x10
    /* 5C920 8014E520 02004224 */  addiu      $v0, $v0, 0x2
    /* 5C924 8014E524 56D6030C */  jal        func_800F5958
    /* 5C928 8014E528 000062A4 */   sh        $v0, 0x0($v1)
    /* 5C92C 8014E52C F5D4030C */  jal        func_800F53D4
    /* 5C930 8014E530 00000000 */   nop
    /* 5C934 8014E534 E1FF4010 */  beqz       $v0, .L8014E4BC
    /* 5C938 8014E538 00000000 */   nop
    /* 5C93C 8014E53C D3390508 */  j          .L8014E74C
    /* 5C940 8014E540 00000000 */   nop
  .L8014E544:
    /* 5C944 8014E544 5DD5030C */  jal        func_800F5574
    /* 5C948 8014E548 03000424 */   addiu     $a0, $zero, 0x3
    /* 5C94C 8014E54C F5D4030C */  jal        func_800F53D4
    /* 5C950 8014E550 00000000 */   nop
    /* 5C954 8014E554 2F004010 */  beqz       $v0, .L8014E614
    /* 5C958 8014E558 00000000 */   nop
    /* 5C95C 8014E55C C7E5030C */  jal        func_800F971C
    /* 5C960 8014E560 00000000 */   nop
    /* 5C964 8014E564 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5C968 8014E568 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5C96C 8014E56C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5C970 8014E570 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5C974 8014E574 00004394 */  lhu        $v1, 0x0($v0)
    /* 5C978 8014E578 20000424 */  addiu      $a0, $zero, 0x20
    /* 5C97C 8014E57C 53D9030C */  jal        func_800F654C
    /* 5C980 8014E580 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5C984 8014E584 93E0030C */  jal        func_800F824C
    /* 5C988 8014E588 21200000 */   addu      $a0, $zero, $zero
  .L8014E58C:
    /* 5C98C 8014E58C 53D9030C */  jal        func_800F654C
    /* 5C990 8014E590 90000424 */   addiu     $a0, $zero, 0x90
    /* 5C994 8014E594 613A050C */  jal        func_8014E984
    /* 5C998 8014E598 00000000 */   nop
    /* 5C99C 8014E59C 04D5030C */  jal        func_800F5410
    /* 5C9A0 8014E5A0 00000000 */   nop
    /* 5C9A4 8014E5A4 02D0030C */  jal        func_800F4008
    /* 5C9A8 8014E5A8 18000424 */   addiu     $a0, $zero, 0x18
    /* 5C9AC 8014E5AC DAE1030C */  jal        func_800F8768
    /* 5C9B0 8014E5B0 68F20434 */   ori       $a0, $zero, 0xF268
    /* 5C9B4 8014E5B4 8CD9030C */  jal        func_800F6630
    /* 5C9B8 8014E5B8 21200000 */   addu      $a0, $zero, $zero
    /* 5C9BC 8014E5BC DAE1030C */  jal        func_800F8768
    /* 5C9C0 8014E5C0 69F20434 */   ori       $a0, $zero, 0xF269
    /* 5C9C4 8014E5C4 04D5030C */  jal        func_800F5410
    /* 5C9C8 8014E5C8 00000000 */   nop
    /* 5C9CC 8014E5CC 02D0030C */  jal        func_800F4008
    /* 5C9D0 8014E5D0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5C9D4 8014E5D4 93E0030C */  jal        func_800F824C
    /* 5C9D8 8014E5D8 21200000 */   addu      $a0, $zero, $zero
    /* 5C9DC 8014E5DC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5C9E0 8014E5E0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5C9E4 8014E5E4 00000000 */  nop
    /* 5C9E8 8014E5E8 00006294 */  lhu        $v0, 0x0($v1)
    /* 5C9EC 8014E5EC 10000424 */  addiu      $a0, $zero, 0x10
    /* 5C9F0 8014E5F0 02004224 */  addiu      $v0, $v0, 0x2
    /* 5C9F4 8014E5F4 56D6030C */  jal        func_800F5958
    /* 5C9F8 8014E5F8 000062A4 */   sh        $v0, 0x0($v1)
    /* 5C9FC 8014E5FC F5D4030C */  jal        func_800F53D4
    /* 5CA00 8014E600 00000000 */   nop
    /* 5CA04 8014E604 E1FF4010 */  beqz       $v0, .L8014E58C
    /* 5CA08 8014E608 00000000 */   nop
    /* 5CA0C 8014E60C D3390508 */  j          .L8014E74C
    /* 5CA10 8014E610 00000000 */   nop
  .L8014E614:
    /* 5CA14 8014E614 C7E5030C */  jal        func_800F971C
    /* 5CA18 8014E618 00000000 */   nop
    /* 5CA1C 8014E61C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5CA20 8014E620 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5CA24 8014E624 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5CA28 8014E628 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5CA2C 8014E62C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5CA30 8014E630 79F20434 */  ori        $a0, $zero, 0xF279
    /* 5CA34 8014E634 59D9030C */  jal        func_800F6564
    /* 5CA38 8014E638 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5CA3C 8014E63C 0DD9030C */  jal        func_800F6434
    /* 5CA40 8014E640 02020424 */   addiu     $a0, $zero, 0x202
    /* 5CA44 8014E644 23004014 */  bnez       $v0, .L8014E6D4
    /* 5CA48 8014E648 00000000 */   nop
  .L8014E64C:
    /* 5CA4C 8014E64C 53D9030C */  jal        func_800F654C
    /* 5CA50 8014E650 08000424 */   addiu     $a0, $zero, 0x8
    /* 5CA54 8014E654 613A050C */  jal        func_8014E984
    /* 5CA58 8014E658 00000000 */   nop
    /* 5CA5C 8014E65C 20D5030C */  jal        func_800F5480
    /* 5CA60 8014E660 00000000 */   nop
    /* 5CA64 8014E664 16E0030C */  jal        func_800F8058
    /* 5CA68 8014E668 04000424 */   addiu     $a0, $zero, 0x4
    /* 5CA6C 8014E66C DAE1030C */  jal        func_800F8768
    /* 5CA70 8014E670 68F20434 */   ori       $a0, $zero, 0xF268
    /* 5CA74 8014E674 53D9030C */  jal        func_800F654C
    /* 5CA78 8014E678 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5CA7C 8014E67C 613A050C */  jal        func_8014E984
    /* 5CA80 8014E680 00000000 */   nop
    /* 5CA84 8014E684 20D5030C */  jal        func_800F5480
    /* 5CA88 8014E688 00000000 */   nop
    /* 5CA8C 8014E68C 16E0030C */  jal        func_800F8058
    /* 5CA90 8014E690 06000424 */   addiu     $a0, $zero, 0x6
    /* 5CA94 8014E694 DAE1030C */  jal        func_800F8768
    /* 5CA98 8014E698 69F20434 */   ori       $a0, $zero, 0xF269
    /* 5CA9C 8014E69C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5CAA0 8014E6A0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5CAA4 8014E6A4 00000000 */  nop
    /* 5CAA8 8014E6A8 00006294 */  lhu        $v0, 0x0($v1)
    /* 5CAAC 8014E6AC 0A000424 */  addiu      $a0, $zero, 0xA
    /* 5CAB0 8014E6B0 02004224 */  addiu      $v0, $v0, 0x2
    /* 5CAB4 8014E6B4 56D6030C */  jal        func_800F5958
    /* 5CAB8 8014E6B8 000062A4 */   sh        $v0, 0x0($v1)
    /* 5CABC 8014E6BC F5D4030C */  jal        func_800F53D4
    /* 5CAC0 8014E6C0 00000000 */   nop
    /* 5CAC4 8014E6C4 E1FF4010 */  beqz       $v0, .L8014E64C
    /* 5CAC8 8014E6C8 00000000 */   nop
    /* 5CACC 8014E6CC D3390508 */  j          .L8014E74C
    /* 5CAD0 8014E6D0 00000000 */   nop
  .L8014E6D4:
    /* 5CAD4 8014E6D4 DADA030C */  jal        func_800F6B68
    /* 5CAD8 8014E6D8 A1F20434 */   ori       $a0, $zero, 0xF2A1
    /* 5CADC 8014E6DC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5CAE0 8014E6E0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5CAE4 8014E6E4 00000000 */  nop
    /* 5CAE8 8014E6E8 00006290 */  lbu        $v0, 0x0($v1)
    /* 5CAEC 8014E6EC 21200000 */  addu       $a0, $zero, $zero
    /* 5CAF0 8014E6F0 80100200 */  sll        $v0, $v0, 2
    /* 5CAF4 8014E6F4 93E0030C */  jal        func_800F824C
    /* 5CAF8 8014E6F8 000062A0 */   sb        $v0, 0x0($v1)
    /* 5CAFC 8014E6FC 50D4030C */  jal        func_800F5140
    /* 5CB00 8014E700 00000000 */   nop
    /* 5CB04 8014E704 613A050C */  jal        func_8014E984
    /* 5CB08 8014E708 00000000 */   nop
    /* 5CB0C 8014E70C 20D5030C */  jal        func_800F5480
    /* 5CB10 8014E710 00000000 */   nop
    /* 5CB14 8014E714 0FCF030C */  jal        func_800F3C3C
    /* 5CB18 8014E718 21200000 */   addu      $a0, $zero, $zero
    /* 5CB1C 8014E71C D2DF030C */  jal        func_800F7F48
    /* 5CB20 8014E720 21204000 */   addu      $a0, $v0, $zero
    /* 5CB24 8014E724 DAE1030C */  jal        func_800F8768
    /* 5CB28 8014E728 68F20434 */   ori       $a0, $zero, 0xF268
    /* 5CB2C 8014E72C D9D8030C */  jal        func_800F6364
    /* 5CB30 8014E730 00000000 */   nop
    /* 5CB34 8014E734 56D6030C */  jal        func_800F5958
    /* 5CB38 8014E738 10000424 */   addiu     $a0, $zero, 0x10
    /* 5CB3C 8014E73C F5D4030C */  jal        func_800F53D4
    /* 5CB40 8014E740 00000000 */   nop
    /* 5CB44 8014E744 E3FF4010 */  beqz       $v0, .L8014E6D4
    /* 5CB48 8014E748 00000000 */   nop
  .L8014E74C:
    /* 5CB4C 8014E74C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5CB50 8014E750 00000000 */  nop
    /* 5CB54 8014E754 0800E003 */  jr         $ra
    /* 5CB58 8014E758 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014E424
