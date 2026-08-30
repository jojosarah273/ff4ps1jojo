nonmatching func_8011C2C8, 0x4A0

glabel func_8011C2C8
    /* 2A6C8 8011C2C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2A6CC 8011C2CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2A6D0 8011C2D0 8CD9030C */  jal        func_800F6630
    /* 2A6D4 8011C2D4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2A6D8 8011C2D8 0DD9030C */  jal        func_800F6434
    /* 2A6DC 8011C2DC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2A6E0 8011C2E0 1D014010 */  beqz       $v0, .L8011C758
    /* 2A6E4 8011C2E4 00000000 */   nop
    /* 2A6E8 8011C2E8 92D0030C */  jal        func_800F4248
    /* 2A6EC 8011C2EC 01000424 */   addiu     $a0, $zero, 0x1
    /* 2A6F0 8011C2F0 48D0030C */  jal        func_800F4120
    /* 2A6F4 8011C2F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A6F8 8011C2F8 88004010 */  beqz       $v0, .L8011C51C
    /* 2A6FC 8011C2FC 00000000 */   nop
    /* 2A700 8011C300 8CD9030C */  jal        func_800F6630
    /* 2A704 8011C304 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2A708 8011C308 92D0030C */  jal        func_800F4248
    /* 2A70C 8011C30C 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A710 8011C310 48D0030C */  jal        func_800F4120
    /* 2A714 8011C314 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A718 8011C318 0B004014 */  bnez       $v0, .L8011C348
    /* 2A71C 8011C31C 00000000 */   nop
    /* 2A720 8011C320 59D9030C */  jal        func_800F6564
    /* 2A724 8011C324 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2A728 8011C328 04D5030C */  jal        func_800F5410
    /* 2A72C 8011C32C 00000000 */   nop
    /* 2A730 8011C330 02D0030C */  jal        func_800F4008
    /* 2A734 8011C334 21000424 */   addiu     $a0, $zero, 0x21
    /* 2A738 8011C338 93E0030C */  jal        func_800F824C
    /* 2A73C 8011C33C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A740 8011C340 DA700408 */  j          .L8011C368
    /* 2A744 8011C344 00000000 */   nop
  .L8011C348:
    /* 2A748 8011C348 59D9030C */  jal        func_800F6564
    /* 2A74C 8011C34C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2A750 8011C350 20D5030C */  jal        func_800F5480
    /* 2A754 8011C354 00000000 */   nop
    /* 2A758 8011C358 16E0030C */  jal        func_800F8058
    /* 2A75C 8011C35C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2A760 8011C360 93E0030C */  jal        func_800F824C
    /* 2A764 8011C364 3D000424 */   addiu     $a0, $zero, 0x3D
  .L8011C368:
    /* 2A768 8011C368 59D9030C */  jal        func_800F6564
    /* 2A76C 8011C36C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2A770 8011C370 20D5030C */  jal        func_800F5480
    /* 2A774 8011C374 00000000 */   nop
    /* 2A778 8011C378 16E0030C */  jal        func_800F8058
    /* 2A77C 8011C37C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2A780 8011C380 92D0030C */  jal        func_800F4248
    /* 2A784 8011C384 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2A788 8011C388 93E0030C */  jal        func_800F824C
    /* 2A78C 8011C38C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2A790 8011C390 9CDC030C */  jal        func_800F7270
    /* 2A794 8011C394 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A798 8011C398 5BE3030C */  jal        func_800F8D6C
    /* 2A79C 8011C39C 40000424 */   addiu     $a0, $zero, 0x40
    /* 2A7A0 8011C3A0 40DD030C */  jal        func_800F7500
    /* 2A7A4 8011C3A4 21200000 */   addu      $a0, $zero, $zero
  .L8011C3A8:
    /* 2A7A8 8011C3A8 9CDC030C */  jal        func_800F7270
    /* 2A7AC 8011C3AC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A7B0 8011C3B0 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2A7B4 8011C3B4 1ADB030C */  jal        func_800F6C68
    /* 2A7B8 8011C3B8 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2A7BC 8011C3BC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2A7C0 8011C3C0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2A7C4 8011C3C4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2A7C8 8011C3C8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2A7CC 8011C3CC 00004394 */  lhu        $v1, 0x0($v0)
    /* 2A7D0 8011C3D0 DB0A0424 */  addiu      $a0, $zero, 0xADB
    /* 2A7D4 8011C3D4 58E2030C */  jal        func_800F8960
    /* 2A7D8 8011C3D8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2A7DC 8011C3DC 58E2030C */  jal        func_800F8960
    /* 2A7E0 8011C3E0 DC0A0424 */   addiu     $a0, $zero, 0xADC
    /* 2A7E4 8011C3E4 58E2030C */  jal        func_800F8960
    /* 2A7E8 8011C3E8 5B0B0424 */   addiu     $a0, $zero, 0xB5B
    /* 2A7EC 8011C3EC 58E2030C */  jal        func_800F8960
    /* 2A7F0 8011C3F0 5C0B0424 */   addiu     $a0, $zero, 0xB5C
    /* 2A7F4 8011C3F4 8CD9030C */  jal        func_800F6630
    /* 2A7F8 8011C3F8 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2A7FC 8011C3FC 7AD8030C */  jal        func_800F61E8
    /* 2A800 8011C400 00000000 */   nop
    /* 2A804 8011C404 92D0030C */  jal        func_800F4248
    /* 2A808 8011C408 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2A80C 8011C40C 93E0030C */  jal        func_800F824C
    /* 2A810 8011C410 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2A814 8011C414 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2A818 8011C418 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2A81C 8011C41C 00000000 */  nop
    /* 2A820 8011C420 00006294 */  lhu        $v0, 0x0($v1)
    /* 2A824 8011C424 80000424 */  addiu      $a0, $zero, 0x80
    /* 2A828 8011C428 02004224 */  addiu      $v0, $v0, 0x2
    /* 2A82C 8011C42C A4D6030C */  jal        func_800F5A90
    /* 2A830 8011C430 000062A4 */   sh        $v0, 0x0($v1)
    /* 2A834 8011C434 F5D4030C */  jal        func_800F53D4
    /* 2A838 8011C438 00000000 */   nop
    /* 2A83C 8011C43C DAFF4010 */  beqz       $v0, .L8011C3A8
    /* 2A840 8011C440 00000000 */   nop
    /* 2A844 8011C444 EEE3030C */  jal        func_800F8FB8
    /* 2A848 8011C448 98000424 */   addiu     $a0, $zero, 0x98
    /* 2A84C 8011C44C EEE3030C */  jal        func_800F8FB8
    /* 2A850 8011C450 96000424 */   addiu     $a0, $zero, 0x96
    /* 2A854 8011C454 EEE3030C */  jal        func_800F8FB8
    /* 2A858 8011C458 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 2A85C 8011C45C EEE3030C */  jal        func_800F8FB8
    /* 2A860 8011C460 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 2A864 8011C464 8CD9030C */  jal        func_800F6630
    /* 2A868 8011C468 40000424 */   addiu     $a0, $zero, 0x40
    /* 2A86C 8011C46C 50D4030C */  jal        func_800F5140
    /* 2A870 8011C470 00000000 */   nop
    /* 2A874 8011C474 92D0030C */  jal        func_800F4248
    /* 2A878 8011C478 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2A87C 8011C47C 93E0030C */  jal        func_800F824C
    /* 2A880 8011C480 99000424 */   addiu     $a0, $zero, 0x99
    /* 2A884 8011C484 93E0030C */  jal        func_800F824C
    /* 2A888 8011C488 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2A88C 8011C48C 7AD8030C */  jal        func_800F61E8
    /* 2A890 8011C490 00000000 */   nop
    /* 2A894 8011C494 93E0030C */  jal        func_800F824C
    /* 2A898 8011C498 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 2A89C 8011C49C 93E0030C */  jal        func_800F824C
    /* 2A8A0 8011C4A0 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 2A8A4 8011C4A4 59D9030C */  jal        func_800F6564
    /* 2A8A8 8011C4A8 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2A8AC 8011C4AC 20D5030C */  jal        func_800F5480
    /* 2A8B0 8011C4B0 00000000 */   nop
    /* 2A8B4 8011C4B4 16E0030C */  jal        func_800F8058
    /* 2A8B8 8011C4B8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2A8BC 8011C4BC 92D0030C */  jal        func_800F4248
    /* 2A8C0 8011C4C0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2A8C4 8011C4C4 93E0030C */  jal        func_800F824C
    /* 2A8C8 8011C4C8 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2A8CC 8011C4CC 93E0030C */  jal        func_800F824C
    /* 2A8D0 8011C4D0 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 2A8D4 8011C4D4 50D4030C */  jal        func_800F5140
    /* 2A8D8 8011C4D8 00000000 */   nop
    /* 2A8DC 8011C4DC 93E0030C */  jal        func_800F824C
    /* 2A8E0 8011C4E0 97000424 */   addiu     $a0, $zero, 0x97
    /* 2A8E4 8011C4E4 53D9030C */  jal        func_800F654C
    /* 2A8E8 8011C4E8 80000424 */   addiu     $a0, $zero, 0x80
    /* 2A8EC 8011C4EC 20D5030C */  jal        func_800F5480
    /* 2A8F0 8011C4F0 00000000 */   nop
    /* 2A8F4 8011C4F4 0FCF030C */  jal        func_800F3C3C
    /* 2A8F8 8011C4F8 97000424 */   addiu     $a0, $zero, 0x97
    /* 2A8FC 8011C4FC D2DF030C */  jal        func_800F7F48
    /* 2A900 8011C500 21204000 */   addu      $a0, $v0, $zero
    /* 2A904 8011C504 93E0030C */  jal        func_800F824C
    /* 2A908 8011C508 95000424 */   addiu     $a0, $zero, 0x95
    /* 2A90C 8011C50C AFD8030C */  jal        func_800F62BC
    /* 2A910 8011C510 94000424 */   addiu     $a0, $zero, 0x94
    /* 2A914 8011C514 D6710408 */  j          .L8011C758
    /* 2A918 8011C518 00000000 */   nop
  .L8011C51C:
    /* 2A91C 8011C51C 8CD9030C */  jal        func_800F6630
    /* 2A920 8011C520 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2A924 8011C524 92D0030C */  jal        func_800F4248
    /* 2A928 8011C528 02000424 */   addiu     $a0, $zero, 0x2
    /* 2A92C 8011C52C 48D0030C */  jal        func_800F4120
    /* 2A930 8011C530 02020424 */   addiu     $a0, $zero, 0x202
    /* 2A934 8011C534 0F004014 */  bnez       $v0, .L8011C574
    /* 2A938 8011C538 00000000 */   nop
    /* 2A93C 8011C53C 59D9030C */  jal        func_800F6564
    /* 2A940 8011C540 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2A944 8011C544 20D5030C */  jal        func_800F5480
    /* 2A948 8011C548 00000000 */   nop
    /* 2A94C 8011C54C 16E0030C */  jal        func_800F8058
    /* 2A950 8011C550 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2A954 8011C554 93E0030C */  jal        func_800F824C
    /* 2A958 8011C558 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A95C 8011C55C 92D0030C */  jal        func_800F4248
    /* 2A960 8011C560 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2A964 8011C564 93E0030C */  jal        func_800F824C
    /* 2A968 8011C568 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2A96C 8011C56C 69710408 */  j          .L8011C5A4
    /* 2A970 8011C570 00000000 */   nop
  .L8011C574:
    /* 2A974 8011C574 59D9030C */  jal        func_800F6564
    /* 2A978 8011C578 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2A97C 8011C57C 04D5030C */  jal        func_800F5410
    /* 2A980 8011C580 00000000 */   nop
    /* 2A984 8011C584 02D0030C */  jal        func_800F4008
    /* 2A988 8011C588 20000424 */   addiu     $a0, $zero, 0x20
    /* 2A98C 8011C58C 93E0030C */  jal        func_800F824C
    /* 2A990 8011C590 06000424 */   addiu     $a0, $zero, 0x6
    /* 2A994 8011C594 92D0030C */  jal        func_800F4248
    /* 2A998 8011C598 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2A99C 8011C59C 93E0030C */  jal        func_800F824C
    /* 2A9A0 8011C5A0 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8011C5A4:
    /* 2A9A4 8011C5A4 59D9030C */  jal        func_800F6564
    /* 2A9A8 8011C5A8 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2A9AC 8011C5AC 20D5030C */  jal        func_800F5480
    /* 2A9B0 8011C5B0 00000000 */   nop
    /* 2A9B4 8011C5B4 16E0030C */  jal        func_800F8058
    /* 2A9B8 8011C5B8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2A9BC 8011C5BC 93E0030C */  jal        func_800F824C
    /* 2A9C0 8011C5C0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A9C4 8011C5C4 9CDC030C */  jal        func_800F7270
    /* 2A9C8 8011C5C8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A9CC 8011C5CC 5BE3030C */  jal        func_800F8D6C
    /* 2A9D0 8011C5D0 40000424 */   addiu     $a0, $zero, 0x40
    /* 2A9D4 8011C5D4 40DD030C */  jal        func_800F7500
    /* 2A9D8 8011C5D8 21200000 */   addu      $a0, $zero, $zero
  .L8011C5DC:
    /* 2A9DC 8011C5DC 9CDC030C */  jal        func_800F7270
    /* 2A9E0 8011C5E0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2A9E4 8011C5E4 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2A9E8 8011C5E8 1ADB030C */  jal        func_800F6C68
    /* 2A9EC 8011C5EC 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2A9F0 8011C5F0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2A9F4 8011C5F4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2A9F8 8011C5F8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2A9FC 8011C5FC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2AA00 8011C600 00004394 */  lhu        $v1, 0x0($v0)
    /* 2AA04 8011C604 DB0A0424 */  addiu      $a0, $zero, 0xADB
    /* 2AA08 8011C608 58E2030C */  jal        func_800F8960
    /* 2AA0C 8011C60C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2AA10 8011C610 58E2030C */  jal        func_800F8960
    /* 2AA14 8011C614 DC0A0424 */   addiu     $a0, $zero, 0xADC
    /* 2AA18 8011C618 58E2030C */  jal        func_800F8960
    /* 2AA1C 8011C61C 5B0B0424 */   addiu     $a0, $zero, 0xB5B
    /* 2AA20 8011C620 58E2030C */  jal        func_800F8960
    /* 2AA24 8011C624 5C0B0424 */   addiu     $a0, $zero, 0xB5C
    /* 2AA28 8011C628 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2AA2C 8011C62C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2AA30 8011C630 00000000 */  nop
    /* 2AA34 8011C634 00006294 */  lhu        $v0, 0x0($v1)
    /* 2AA38 8011C638 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2AA3C 8011C63C 02004224 */  addiu      $v0, $v0, 0x2
    /* 2AA40 8011C640 AFD8030C */  jal        func_800F62BC
    /* 2AA44 8011C644 000062A4 */   sh        $v0, 0x0($v1)
    /* 2AA48 8011C648 A4D6030C */  jal        func_800F5A90
    /* 2AA4C 8011C64C 80000424 */   addiu     $a0, $zero, 0x80
    /* 2AA50 8011C650 F5D4030C */  jal        func_800F53D4
    /* 2AA54 8011C654 00000000 */   nop
    /* 2AA58 8011C658 E0FF4010 */  beqz       $v0, .L8011C5DC
    /* 2AA5C 8011C65C 00000000 */   nop
    /* 2AA60 8011C660 EEE3030C */  jal        func_800F8FB8
    /* 2AA64 8011C664 97000424 */   addiu     $a0, $zero, 0x97
    /* 2AA68 8011C668 EEE3030C */  jal        func_800F8FB8
    /* 2AA6C 8011C66C 98000424 */   addiu     $a0, $zero, 0x98
    /* 2AA70 8011C670 53D9030C */  jal        func_800F654C
    /* 2AA74 8011C674 80000424 */   addiu     $a0, $zero, 0x80
    /* 2AA78 8011C678 93E0030C */  jal        func_800F824C
    /* 2AA7C 8011C67C 95000424 */   addiu     $a0, $zero, 0x95
    /* 2AA80 8011C680 EEE3030C */  jal        func_800F8FB8
    /* 2AA84 8011C684 96000424 */   addiu     $a0, $zero, 0x96
    /* 2AA88 8011C688 EEE3030C */  jal        func_800F8FB8
    /* 2AA8C 8011C68C 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2AA90 8011C690 53D9030C */  jal        func_800F654C
    /* 2AA94 8011C694 80000424 */   addiu     $a0, $zero, 0x80
    /* 2AA98 8011C698 93E0030C */  jal        func_800F824C
    /* 2AA9C 8011C69C 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 2AAA0 8011C6A0 8CD9030C */  jal        func_800F6630
    /* 2AAA4 8011C6A4 06000424 */   addiu     $a0, $zero, 0x6
    /* 2AAA8 8011C6A8 92D0030C */  jal        func_800F4248
    /* 2AAAC 8011C6AC 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2AAB0 8011C6B0 93E0030C */  jal        func_800F824C
    /* 2AAB4 8011C6B4 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AAB8 8011C6B8 93E0030C */  jal        func_800F824C
    /* 2AABC 8011C6BC 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 2AAC0 8011C6C0 93E0030C */  jal        func_800F824C
    /* 2AAC4 8011C6C4 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 2AAC8 8011C6C8 93E0030C */  jal        func_800F824C
    /* 2AACC 8011C6CC A0000424 */   addiu     $a0, $zero, 0xA0
    /* 2AAD0 8011C6D0 59D9030C */  jal        func_800F6564
    /* 2AAD4 8011C6D4 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2AAD8 8011C6D8 20D5030C */  jal        func_800F5480
    /* 2AADC 8011C6DC 00000000 */   nop
    /* 2AAE0 8011C6E0 16E0030C */  jal        func_800F8058
    /* 2AAE4 8011C6E4 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2AAE8 8011C6E8 92D0030C */  jal        func_800F4248
    /* 2AAEC 8011C6EC 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2AAF0 8011C6F0 50D4030C */  jal        func_800F5140
    /* 2AAF4 8011C6F4 00000000 */   nop
    /* 2AAF8 8011C6F8 93E0030C */  jal        func_800F824C
    /* 2AAFC 8011C6FC 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AB00 8011C700 04D5030C */  jal        func_800F5410
    /* 2AB04 8011C704 00000000 */   nop
    /* 2AB08 8011C708 02D0030C */  jal        func_800F4008
    /* 2AB0C 8011C70C 80000424 */   addiu     $a0, $zero, 0x80
    /* 2AB10 8011C710 93E0030C */  jal        func_800F824C
    /* 2AB14 8011C714 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 2AB18 8011C718 8CD9030C */  jal        func_800F6630
    /* 2AB1C 8011C71C 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AB20 8011C720 93E0030C */  jal        func_800F824C
    /* 2AB24 8011C724 97000424 */   addiu     $a0, $zero, 0x97
    /* 2AB28 8011C728 53D9030C */  jal        func_800F654C
    /* 2AB2C 8011C72C 80000424 */   addiu     $a0, $zero, 0x80
    /* 2AB30 8011C730 20D5030C */  jal        func_800F5480
    /* 2AB34 8011C734 00000000 */   nop
    /* 2AB38 8011C738 0FCF030C */  jal        func_800F3C3C
    /* 2AB3C 8011C73C 97000424 */   addiu     $a0, $zero, 0x97
    /* 2AB40 8011C740 D2DF030C */  jal        func_800F7F48
    /* 2AB44 8011C744 21204000 */   addu      $a0, $v0, $zero
    /* 2AB48 8011C748 93E0030C */  jal        func_800F824C
    /* 2AB4C 8011C74C 95000424 */   addiu     $a0, $zero, 0x95
    /* 2AB50 8011C750 AFD8030C */  jal        func_800F62BC
    /* 2AB54 8011C754 94000424 */   addiu     $a0, $zero, 0x94
  .L8011C758:
    /* 2AB58 8011C758 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2AB5C 8011C75C 00000000 */  nop
    /* 2AB60 8011C760 0800E003 */  jr         $ra
    /* 2AB64 8011C764 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011C2C8
