nonmatching func_8011D218, 0x440

glabel func_8011D218
    /* 2B618 8011D218 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2B61C 8011D21C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2B620 8011D220 91E5030C */  jal        func_800F9644
    /* 2B624 8011D224 20000424 */   addiu     $a0, $zero, 0x20
    /* 2B628 8011D228 63D9030C */  jal        func_800F658C
    /* 2B62C 8011D22C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2B630 8011D230 99D0030C */  jal        func_800F4264
    /* 2B634 8011D234 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2B638 8011D238 20D5030C */  jal        func_800F5480
    /* 2B63C 8011D23C 00000000 */   nop
    /* 2B640 8011D240 34E0030C */  jal        func_800F80D0
    /* 2B644 8011D244 07000424 */   addiu     $a0, $zero, 0x7
    /* 2B648 8011D248 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2B64C 8011D24C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2B650 8011D250 00000000 */  nop
    /* 2B654 8011D254 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B658 8011D258 FF070424 */  addiu      $a0, $zero, 0x7FF
    /* 2B65C 8011D25C 00110200 */  sll        $v0, $v0, 4
    /* 2B660 8011D260 99D0030C */  jal        func_800F4264
    /* 2B664 8011D264 000062A4 */   sh        $v0, 0x0($v1)
    /* 2B668 8011D268 9DE0030C */  jal        func_800F8274
    /* 2B66C 8011D26C 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 2B670 8011D270 63D9030C */  jal        func_800F658C
    /* 2B674 8011D274 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2B678 8011D278 99D0030C */  jal        func_800F4264
    /* 2B67C 8011D27C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2B680 8011D280 20D5030C */  jal        func_800F5480
    /* 2B684 8011D284 00000000 */   nop
    /* 2B688 8011D288 34E0030C */  jal        func_800F80D0
    /* 2B68C 8011D28C 07000424 */   addiu     $a0, $zero, 0x7
    /* 2B690 8011D290 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2B694 8011D294 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2B698 8011D298 00000000 */  nop
    /* 2B69C 8011D29C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B6A0 8011D2A0 FF070424 */  addiu      $a0, $zero, 0x7FF
    /* 2B6A4 8011D2A4 00110200 */  sll        $v0, $v0, 4
    /* 2B6A8 8011D2A8 99D0030C */  jal        func_800F4264
    /* 2B6AC 8011D2AC 000062A4 */   sh        $v0, 0x0($v1)
    /* 2B6B0 8011D2B0 9DE0030C */  jal        func_800F8274
    /* 2B6B4 8011D2B4 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2B6B8 8011D2B8 56D9030C */  jal        func_800F6558
    /* 2B6BC 8011D2BC 21200000 */   addu      $a0, $zero, $zero
    /* 2B6C0 8011D2C0 98E5030C */  jal        func_800F9660
    /* 2B6C4 8011D2C4 20000424 */   addiu     $a0, $zero, 0x20
    /* 2B6C8 8011D2C8 53D9030C */  jal        func_800F654C
    /* 2B6CC 8011D2CC 40000424 */   addiu     $a0, $zero, 0x40
    /* 2B6D0 8011D2D0 93E0030C */  jal        func_800F824C
    /* 2B6D4 8011D2D4 07000424 */   addiu     $a0, $zero, 0x7
    /* 2B6D8 8011D2D8 59D9030C */  jal        func_800F6564
    /* 2B6DC 8011D2DC 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2B6E0 8011D2E0 62E0030C */  jal        func_800F8188
    /* 2B6E4 8011D2E4 0A070424 */   addiu     $a0, $zero, 0x70A
  .L8011D2E8:
    /* 2B6E8 8011D2E8 9077040C */  jal        func_8011DE40
    /* 2B6EC 8011D2EC 00000000 */   nop
    /* 2B6F0 8011D2F0 90D8030C */  jal        func_800F6240
    /* 2B6F4 8011D2F4 0A070424 */   addiu     $a0, $zero, 0x70A
    /* 2B6F8 8011D2F8 68D7030C */  jal        func_800F5DA0
    /* 2B6FC 8011D2FC 07000424 */   addiu     $a0, $zero, 0x7
    /* 2B700 8011D300 E3D6030C */  jal        func_800F5B8C
    /* 2B704 8011D304 02020424 */   addiu     $a0, $zero, 0x202
    /* 2B708 8011D308 F7FF4014 */  bnez       $v0, .L8011D2E8
    /* 2B70C 8011D30C 00000000 */   nop
    /* 2B710 8011D310 53D9030C */  jal        func_800F654C
    /* 2B714 8011D314 40000424 */   addiu     $a0, $zero, 0x40
    /* 2B718 8011D318 93E0030C */  jal        func_800F824C
    /* 2B71C 8011D31C 07000424 */   addiu     $a0, $zero, 0x7
    /* 2B720 8011D320 59D9030C */  jal        func_800F6564
    /* 2B724 8011D324 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2B728 8011D328 20D5030C */  jal        func_800F5480
    /* 2B72C 8011D32C 00000000 */   nop
    /* 2B730 8011D330 16E0030C */  jal        func_800F8058
    /* 2B734 8011D334 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2B738 8011D338 93E0030C */  jal        func_800F824C
    /* 2B73C 8011D33C 08000424 */   addiu     $a0, $zero, 0x8
  .L8011D340:
    /* 2B740 8011D340 8CD9030C */  jal        func_800F6630
    /* 2B744 8011D344 08000424 */   addiu     $a0, $zero, 0x8
    /* 2B748 8011D348 92D0030C */  jal        func_800F4248
    /* 2B74C 8011D34C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2B750 8011D350 93E0030C */  jal        func_800F824C
    /* 2B754 8011D354 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2B758 8011D358 59D9030C */  jal        func_800F6564
    /* 2B75C 8011D35C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2B760 8011D360 20D5030C */  jal        func_800F5480
    /* 2B764 8011D364 00000000 */   nop
    /* 2B768 8011D368 16E0030C */  jal        func_800F8058
    /* 2B76C 8011D36C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2B770 8011D370 93E0030C */  jal        func_800F824C
    /* 2B774 8011D374 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2B778 8011D378 9CDC030C */  jal        func_800F7270
    /* 2B77C 8011D37C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2B780 8011D380 40DD030C */  jal        func_800F7500
    /* 2B784 8011D384 21200000 */   addu      $a0, $zero, $zero
  .L8011D388:
    /* 2B788 8011D388 9CDC030C */  jal        func_800F7270
    /* 2B78C 8011D38C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2B790 8011D390 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2B794 8011D394 1ADB030C */  jal        func_800F6C68
    /* 2B798 8011D398 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2B79C 8011D39C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2B7A0 8011D3A0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2B7A4 8011D3A4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2B7A8 8011D3A8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2B7AC 8011D3AC 00004394 */  lhu        $v1, 0x0($v0)
    /* 2B7B0 8011D3B0 DB0A0424 */  addiu      $a0, $zero, 0xADB
    /* 2B7B4 8011D3B4 58E2030C */  jal        func_800F8960
    /* 2B7B8 8011D3B8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2B7BC 8011D3BC 58E2030C */  jal        func_800F8960
    /* 2B7C0 8011D3C0 DC0A0424 */   addiu     $a0, $zero, 0xADC
    /* 2B7C4 8011D3C4 58E2030C */  jal        func_800F8960
    /* 2B7C8 8011D3C8 5B0B0424 */   addiu     $a0, $zero, 0xB5B
    /* 2B7CC 8011D3CC 58E2030C */  jal        func_800F8960
    /* 2B7D0 8011D3D0 5C0B0424 */   addiu     $a0, $zero, 0xB5C
    /* 2B7D4 8011D3D4 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2B7D8 8011D3D8 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2B7DC 8011D3DC 00000000 */  nop
    /* 2B7E0 8011D3E0 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B7E4 8011D3E4 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2B7E8 8011D3E8 02004224 */  addiu      $v0, $v0, 0x2
    /* 2B7EC 8011D3EC AFD8030C */  jal        func_800F62BC
    /* 2B7F0 8011D3F0 000062A4 */   sh        $v0, 0x0($v1)
    /* 2B7F4 8011D3F4 A4D6030C */  jal        func_800F5A90
    /* 2B7F8 8011D3F8 80000424 */   addiu     $a0, $zero, 0x80
    /* 2B7FC 8011D3FC F5D4030C */  jal        func_800F53D4
    /* 2B800 8011D400 00000000 */   nop
    /* 2B804 8011D404 E0FF4010 */  beqz       $v0, .L8011D388
    /* 2B808 8011D408 00000000 */   nop
    /* 2B80C 8011D40C EEE3030C */  jal        func_800F8FB8
    /* 2B810 8011D410 97000424 */   addiu     $a0, $zero, 0x97
    /* 2B814 8011D414 EEE3030C */  jal        func_800F8FB8
    /* 2B818 8011D418 98000424 */   addiu     $a0, $zero, 0x98
    /* 2B81C 8011D41C 53D9030C */  jal        func_800F654C
    /* 2B820 8011D420 80000424 */   addiu     $a0, $zero, 0x80
    /* 2B824 8011D424 93E0030C */  jal        func_800F824C
    /* 2B828 8011D428 95000424 */   addiu     $a0, $zero, 0x95
    /* 2B82C 8011D42C EEE3030C */  jal        func_800F8FB8
    /* 2B830 8011D430 96000424 */   addiu     $a0, $zero, 0x96
    /* 2B834 8011D434 EEE3030C */  jal        func_800F8FB8
    /* 2B838 8011D438 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2B83C 8011D43C 53D9030C */  jal        func_800F654C
    /* 2B840 8011D440 80000424 */   addiu     $a0, $zero, 0x80
    /* 2B844 8011D444 93E0030C */  jal        func_800F824C
    /* 2B848 8011D448 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 2B84C 8011D44C 8CD9030C */  jal        func_800F6630
    /* 2B850 8011D450 08000424 */   addiu     $a0, $zero, 0x8
    /* 2B854 8011D454 92D0030C */  jal        func_800F4248
    /* 2B858 8011D458 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2B85C 8011D45C 93E0030C */  jal        func_800F824C
    /* 2B860 8011D460 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2B864 8011D464 93E0030C */  jal        func_800F824C
    /* 2B868 8011D468 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 2B86C 8011D46C 93E0030C */  jal        func_800F824C
    /* 2B870 8011D470 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 2B874 8011D474 93E0030C */  jal        func_800F824C
    /* 2B878 8011D478 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 2B87C 8011D47C 59D9030C */  jal        func_800F6564
    /* 2B880 8011D480 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2B884 8011D484 20D5030C */  jal        func_800F5480
    /* 2B888 8011D488 00000000 */   nop
    /* 2B88C 8011D48C 16E0030C */  jal        func_800F8058
    /* 2B890 8011D490 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2B894 8011D494 92D0030C */  jal        func_800F4248
    /* 2B898 8011D498 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2B89C 8011D49C 50D4030C */  jal        func_800F5140
    /* 2B8A0 8011D4A0 00000000 */   nop
    /* 2B8A4 8011D4A4 93E0030C */  jal        func_800F824C
    /* 2B8A8 8011D4A8 99000424 */   addiu     $a0, $zero, 0x99
    /* 2B8AC 8011D4AC 04D5030C */  jal        func_800F5410
    /* 2B8B0 8011D4B0 00000000 */   nop
    /* 2B8B4 8011D4B4 02D0030C */  jal        func_800F4008
    /* 2B8B8 8011D4B8 80000424 */   addiu     $a0, $zero, 0x80
    /* 2B8BC 8011D4BC 93E0030C */  jal        func_800F824C
    /* 2B8C0 8011D4C0 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 2B8C4 8011D4C4 8CD9030C */  jal        func_800F6630
    /* 2B8C8 8011D4C8 99000424 */   addiu     $a0, $zero, 0x99
    /* 2B8CC 8011D4CC 93E0030C */  jal        func_800F824C
    /* 2B8D0 8011D4D0 97000424 */   addiu     $a0, $zero, 0x97
    /* 2B8D4 8011D4D4 53D9030C */  jal        func_800F654C
    /* 2B8D8 8011D4D8 80000424 */   addiu     $a0, $zero, 0x80
    /* 2B8DC 8011D4DC 20D5030C */  jal        func_800F5480
    /* 2B8E0 8011D4E0 00000000 */   nop
    /* 2B8E4 8011D4E4 0FCF030C */  jal        func_800F3C3C
    /* 2B8E8 8011D4E8 97000424 */   addiu     $a0, $zero, 0x97
    /* 2B8EC 8011D4EC D2DF030C */  jal        func_800F7F48
    /* 2B8F0 8011D4F0 21204000 */   addu      $a0, $v0, $zero
    /* 2B8F4 8011D4F4 93E0030C */  jal        func_800F824C
    /* 2B8F8 8011D4F8 95000424 */   addiu     $a0, $zero, 0x95
    /* 2B8FC 8011D4FC DDE3030C */  jal        func_800F8F74
    /* 2B900 8011D500 15210424 */   addiu     $a0, $zero, 0x2115
    /* 2B904 8011D504 21F3030C */  jal        func_800FCC84
    /* 2B908 8011D508 00000000 */   nop
    /* 2B90C 8011D50C DDE3030C */  jal        func_800F8F74
    /* 2B910 8011D510 00430424 */   addiu     $a0, $zero, 0x4300
    /* 2B914 8011D514 9CDC030C */  jal        func_800F7270
    /* 2B918 8011D518 99000424 */   addiu     $a0, $zero, 0x99
    /* 2B91C 8011D51C 40E3030C */  jal        func_800F8D00
    /* 2B920 8011D520 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2B924 8011D524 77DC030C */  jal        func_800F71DC
    /* 2B928 8011D528 DB0A0424 */   addiu     $a0, $zero, 0xADB
    /* 2B92C 8011D52C 40E3030C */  jal        func_800F8D00
    /* 2B930 8011D530 02430424 */   addiu     $a0, $zero, 0x4302
    /* 2B934 8011D534 9CDC030C */  jal        func_800F7270
    /* 2B938 8011D538 95000424 */   addiu     $a0, $zero, 0x95
    /* 2B93C 8011D53C 40E3030C */  jal        func_800F8D00
    /* 2B940 8011D540 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2B944 8011D544 2FF3030C */  jal        func_800FCCBC
    /* 2B948 8011D548 00000000 */   nop
    /* 2B94C 8011D54C 9CDC030C */  jal        func_800F7270
    /* 2B950 8011D550 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2B954 8011D554 40E3030C */  jal        func_800F8D00
    /* 2B958 8011D558 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2B95C 8011D55C DDE3030C */  jal        func_800F8F74
    /* 2B960 8011D560 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 2B964 8011D564 9CDC030C */  jal        func_800F7270
    /* 2B968 8011D568 97000424 */   addiu     $a0, $zero, 0x97
    /* 2B96C 8011D56C 5CDC030C */  jal        func_800F7170
    /* 2B970 8011D570 02000424 */   addiu     $a0, $zero, 0x2
    /* 2B974 8011D574 05004014 */  bnez       $v0, .L8011D58C
    /* 2B978 8011D578 00000000 */   nop
    /* 2B97C 8011D57C 40E3030C */  jal        func_800F8D00
    /* 2B980 8011D580 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2B984 8011D584 2FF3030C */  jal        func_800FCCBC
    /* 2B988 8011D588 00000000 */   nop
  .L8011D58C:
    /* 2B98C 8011D58C 9CDC030C */  jal        func_800F7270
    /* 2B990 8011D590 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 2B994 8011D594 40E3030C */  jal        func_800F8D00
    /* 2B998 8011D598 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2B99C 8011D59C DDE3030C */  jal        func_800F8F74
    /* 2B9A0 8011D5A0 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 2B9A4 8011D5A4 77DC030C */  jal        func_800F71DC
    /* 2B9A8 8011D5A8 5B0B0424 */   addiu     $a0, $zero, 0xB5B
    /* 2B9AC 8011D5AC 40E3030C */  jal        func_800F8D00
    /* 2B9B0 8011D5B0 02430424 */   addiu     $a0, $zero, 0x4302
    /* 2B9B4 8011D5B4 9CDC030C */  jal        func_800F7270
    /* 2B9B8 8011D5B8 95000424 */   addiu     $a0, $zero, 0x95
    /* 2B9BC 8011D5BC 40E3030C */  jal        func_800F8D00
    /* 2B9C0 8011D5C0 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2B9C4 8011D5C4 2FF3030C */  jal        func_800FCCBC
    /* 2B9C8 8011D5C8 00000000 */   nop
    /* 2B9CC 8011D5CC 9CDC030C */  jal        func_800F7270
    /* 2B9D0 8011D5D0 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 2B9D4 8011D5D4 40E3030C */  jal        func_800F8D00
    /* 2B9D8 8011D5D8 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2B9DC 8011D5DC DDE3030C */  jal        func_800F8F74
    /* 2B9E0 8011D5E0 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 2B9E4 8011D5E4 9CDC030C */  jal        func_800F7270
    /* 2B9E8 8011D5E8 97000424 */   addiu     $a0, $zero, 0x97
    /* 2B9EC 8011D5EC 5CDC030C */  jal        func_800F7170
    /* 2B9F0 8011D5F0 02000424 */   addiu     $a0, $zero, 0x2
    /* 2B9F4 8011D5F4 05004014 */  bnez       $v0, .L8011D60C
    /* 2B9F8 8011D5F8 00000000 */   nop
    /* 2B9FC 8011D5FC 40E3030C */  jal        func_800F8D00
    /* 2BA00 8011D600 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2BA04 8011D604 2FF3030C */  jal        func_800FCCBC
    /* 2BA08 8011D608 00000000 */   nop
  .L8011D60C:
    /* 2BA0C 8011D60C AFD8030C */  jal        func_800F62BC
    /* 2BA10 8011D610 08000424 */   addiu     $a0, $zero, 0x8
    /* 2BA14 8011D614 68D7030C */  jal        func_800F5DA0
    /* 2BA18 8011D618 07000424 */   addiu     $a0, $zero, 0x7
    /* 2BA1C 8011D61C E3D6030C */  jal        func_800F5B8C
    /* 2BA20 8011D620 02000424 */   addiu     $a0, $zero, 0x2
    /* 2BA24 8011D624 46FF4010 */  beqz       $v0, .L8011D340
    /* 2BA28 8011D628 00020524 */   addiu     $a1, $zero, 0x200
    /* 2BA2C 8011D62C 1D80043C */  lui        $a0, %hi(D_801CFD68)
    /* 2BA30 8011D630 68FD8424 */  addiu      $a0, $a0, %lo(D_801CFD68)
    /* 2BA34 8011D634 21300000 */  addu       $a2, $zero, $zero
    /* 2BA38 8011D638 6AFE050C */  jal        func_8017F9A8
    /* 2BA3C 8011D63C 21380000 */   addu      $a3, $zero, $zero
    /* 2BA40 8011D640 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2BA44 8011D644 00110224 */  addiu      $v0, $zero, 0x1100
    /* 2BA48 8011D648 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 2BA4C 8011D64C 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* 2BA50 8011D650 0800E003 */  jr         $ra
    /* 2BA54 8011D654 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011D218
