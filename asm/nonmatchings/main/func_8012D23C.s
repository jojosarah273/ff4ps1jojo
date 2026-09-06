nonmatching func_8012D23C, 0x930

glabel func_8012D23C
    /* 3B63C 8012D23C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 3B640 8012D240 271B0424 */  addiu      $a0, $zero, 0x1B27
    /* 3B644 8012D244 1800BFAF */  sw         $ra, 0x18($sp)
    /* 3B648 8012D248 1400B1AF */  sw         $s1, 0x14($sp)
    /* 3B64C 8012D24C DDE3030C */  jal        func_800F8F74
    /* 3B650 8012D250 1000B0AF */   sw        $s0, 0x10($sp)
    /* 3B654 8012D254 FD8B040C */  jal        func_80122FF4
    /* 3B658 8012D258 00000000 */   nop
    /* 3B65C 8012D25C 8CD9030C */  jal        func_800F6630
    /* 3B660 8012D260 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3B664 8012D264 0DD9030C */  jal        func_800F6434
    /* 3B668 8012D268 80800434 */   ori       $a0, $zero, 0x8080
    /* 3B66C 8012D26C 3A024010 */  beqz       $v0, .L8012DB58
    /* 3B670 8012D270 00000000 */   nop
    /* 3B674 8012D274 8CD9030C */  jal        func_800F6630
    /* 3B678 8012D278 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3B67C 8012D27C AB93040C */  jal        func_80124EAC
    /* 3B680 8012D280 00000000 */   nop
    /* 3B684 8012D284 5BE3030C */  jal        func_800F8D6C
    /* 3B688 8012D288 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B68C 8012D28C 8CDB030C */  jal        func_800F6E30
    /* 3B690 8012D290 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B694 8012D294 92D0030C */  jal        func_800F4248
    /* 3B698 8012D298 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3B69C 8012D29C 48D0030C */  jal        func_800F4120
    /* 3B6A0 8012D2A0 02020424 */   addiu     $a0, $zero, 0x202
    /* 3B6A4 8012D2A4 2C024010 */  beqz       $v0, .L8012DB58
    /* 3B6A8 8012D2A8 00000000 */   nop
    /* 3B6AC 8012D2AC BC99040C */  jal        func_801266F0
    /* 3B6B0 8012D2B0 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 3B6B4 8012D2B4 E899040C */  jal        func_801267A0
    /* 3B6B8 8012D2B8 90911126 */   addiu     $s1, $s0, %lo(D_80199190)
    /* 3B6BC 8012D2BC 6E90040C */  jal        func_801241B8
    /* 3B6C0 8012D2C0 00000000 */   nop
    /* 3B6C4 8012D2C4 2A90040C */  jal        func_801240A8
    /* 3B6C8 8012D2C8 00000000 */   nop
    /* 3B6CC 8012D2CC 3490040C */  jal        func_801240D0
    /* 3B6D0 8012D2D0 00000000 */   nop
    /* 3B6D4 8012D2D4 A17D040C */  jal        func_8011F684
    /* 3B6D8 8012D2D8 00000000 */   nop
    /* 3B6DC 8012D2DC C37B040C */  jal        func_8011EF0C
    /* 3B6E0 8012D2E0 00000000 */   nop
    /* 3B6E4 8012D2E4 53D9030C */  jal        func_800F654C
    /* 3B6E8 8012D2E8 0C000424 */   addiu     $a0, $zero, 0xC
    /* 3B6EC 8012D2EC 93E0030C */  jal        func_800F824C
    /* 3B6F0 8012D2F0 C2000424 */   addiu     $a0, $zero, 0xC2
    /* 3B6F4 8012D2F4 53D9030C */  jal        func_800F654C
    /* 3B6F8 8012D2F8 04000424 */   addiu     $a0, $zero, 0x4
    /* 3B6FC 8012D2FC 93E0030C */  jal        func_800F824C
    /* 3B700 8012D300 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 3B704 8012D304 93E0030C */  jal        func_800F824C
    /* 3B708 8012D308 A5000424 */   addiu     $a0, $zero, 0xA5
    /* 3B70C 8012D30C C783040C */  jal        func_80120F1C
    /* 3B710 8012D310 00000000 */   nop
    /* 3B714 8012D314 40DD030C */  jal        func_800F7500
    /* 3B718 8012D318 70020424 */   addiu     $a0, $zero, 0x270
    /* 3B71C 8012D31C 53D9030C */  jal        func_800F654C
    /* 3B720 8012D320 05000424 */   addiu     $a0, $zero, 0x5
    /* 3B724 8012D324 FED8030C */  jal        func_800F63F8
    /* 3B728 8012D328 00000000 */   nop
    /* 3B72C 8012D32C 04D5030C */  jal        func_800F5410
    /* 3B730 8012D330 00000000 */   nop
    /* 3B734 8012D334 A988040C */  jal        func_801222A4
    /* 3B738 8012D338 00000000 */   nop
    /* 3B73C 8012D33C 0E002496 */  lhu        $a0, 0xE($s1)
    /* 3B740 8012D340 40DD030C */  jal        func_800F7500
    /* 3B744 8012D344 00000000 */   nop
    /* 3B748 8012D348 5C002496 */  lhu        $a0, 0x5C($s1)
    /* 3B74C 8012D34C 77DC030C */  jal        func_800F71DC
    /* 3B750 8012D350 00000000 */   nop
    /* 3B754 8012D354 4984040C */  jal        func_80121124
    /* 3B758 8012D358 00000000 */   nop
    /* 3B75C 8012D35C 1699040C */  jal        func_80126458
    /* 3B760 8012D360 00000000 */   nop
    /* 3B764 8012D364 53D9030C */  jal        func_800F654C
    /* 3B768 8012D368 30000424 */   addiu     $a0, $zero, 0x30
    /* 3B76C 8012D36C 93E0030C */  jal        func_800F824C
    /* 3B770 8012D370 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 3B774 8012D374 8CD9030C */  jal        func_800F6630
    /* 3B778 8012D378 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3B77C 8012D37C 40DD030C */  jal        func_800F7500
    /* 3B780 8012D380 98080424 */   addiu     $a0, $zero, 0x898
    /* 3B784 8012D384 C191040C */  jal        func_80124704
    /* 3B788 8012D388 00000000 */   nop
    /* 3B78C 8012D38C 2B84040C */  jal        func_801210AC
    /* 3B790 8012D390 00000000 */   nop
    /* 3B794 8012D394 5C002496 */  lhu        $a0, 0x5C($s1)
    /* 3B798 8012D398 40DD030C */  jal        func_800F7500
    /* 3B79C 8012D39C 00000000 */   nop
    /* 3B7A0 8012D3A0 CC7B040C */  jal        func_8011EF30
    /* 3B7A4 8012D3A4 00000000 */   nop
    /* 3B7A8 8012D3A8 5E002496 */  lhu        $a0, 0x5E($s1)
    /* 3B7AC 8012D3AC 40DD030C */  jal        func_800F7500
    /* 3B7B0 8012D3B0 00000000 */   nop
    /* 3B7B4 8012D3B4 E97E040C */  jal        func_8011FBA4
    /* 3B7B8 8012D3B8 00000000 */   nop
    /* 3B7BC 8012D3BC FC98040C */  jal        func_801263F0
    /* 3B7C0 8012D3C0 00000000 */   nop
    /* 3B7C4 8012D3C4 C37B040C */  jal        func_8011EF0C
    /* 3B7C8 8012D3C8 00000000 */   nop
    /* 3B7CC 8012D3CC A97D040C */  jal        func_8011F6A4
    /* 3B7D0 8012D3D0 00000000 */   nop
    /* 3B7D4 8012D3D4 EF83040C */  jal        func_80120FBC
    /* 3B7D8 8012D3D8 00000000 */   nop
    /* 3B7DC 8012D3DC E7B6040C */  jal        func_8012DB9C
    /* 3B7E0 8012D3E0 00000000 */   nop
    /* 3B7E4 8012D3E4 8CDB030C */  jal        func_800F6E30
    /* 3B7E8 8012D3E8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B7EC 8012D3EC 92D0030C */  jal        func_800F4248
    /* 3B7F0 8012D3F0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3B7F4 8012D3F4 40DD030C */  jal        func_800F7500
    /* 3B7F8 8012D3F8 84000424 */   addiu     $a0, $zero, 0x84
    /* 3B7FC 8012D3FC 8382040C */  jal        func_80120A0C
    /* 3B800 8012D400 00000000 */   nop
    /* 3B804 8012D404 40DD030C */  jal        func_800F7500
    /* 3B808 8012D408 88000424 */   addiu     $a0, $zero, 0x88
    /* 3B80C 8012D40C 9CDC030C */  jal        func_800F7270
    /* 3B810 8012D410 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B814 8012D414 C88C040C */  jal        func_80123320
    /* 3B818 8012D418 00000000 */   nop
    /* 3B81C 8012D41C 40DD030C */  jal        func_800F7500
    /* 3B820 8012D420 02000424 */   addiu     $a0, $zero, 0x2
    /* 3B824 8012D424 B6D9030C */  jal        func_800F66D8
    /* 3B828 8012D428 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B82C 8012D42C 40DD030C */  jal        func_800F7500
    /* 3B830 8012D430 5C010424 */   addiu     $a0, $zero, 0x15C
    /* 3B834 8012D434 B781040C */  jal        func_801206DC
    /* 3B838 8012D438 00000000 */   nop
    /* 3B83C 8012D43C 40DD030C */  jal        func_800F7500
    /* 3B840 8012D440 14000424 */   addiu     $a0, $zero, 0x14
    /* 3B844 8012D444 B6D9030C */  jal        func_800F66D8
    /* 3B848 8012D448 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B84C 8012D44C 40DD030C */  jal        func_800F7500
    /* 3B850 8012D450 12040424 */   addiu     $a0, $zero, 0x412
    /* 3B854 8012D454 B781040C */  jal        func_801206DC
    /* 3B858 8012D458 00000000 */   nop
    /* 3B85C 8012D45C 40DD030C */  jal        func_800F7500
    /* 3B860 8012D460 15000424 */   addiu     $a0, $zero, 0x15
    /* 3B864 8012D464 B6D9030C */  jal        func_800F66D8
    /* 3B868 8012D468 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B86C 8012D46C 40DD030C */  jal        func_800F7500
    /* 3B870 8012D470 92040424 */   addiu     $a0, $zero, 0x492
    /* 3B874 8012D474 B781040C */  jal        func_801206DC
    /* 3B878 8012D478 00000000 */   nop
    /* 3B87C 8012D47C 40DD030C */  jal        func_800F7500
    /* 3B880 8012D480 16000424 */   addiu     $a0, $zero, 0x16
    /* 3B884 8012D484 B6D9030C */  jal        func_800F66D8
    /* 3B888 8012D488 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B88C 8012D48C 40DD030C */  jal        func_800F7500
    /* 3B890 8012D490 12050424 */   addiu     $a0, $zero, 0x512
    /* 3B894 8012D494 B781040C */  jal        func_801206DC
    /* 3B898 8012D498 00000000 */   nop
    /* 3B89C 8012D49C 40DD030C */  jal        func_800F7500
    /* 3B8A0 8012D4A0 17000424 */   addiu     $a0, $zero, 0x17
    /* 3B8A4 8012D4A4 B6D9030C */  jal        func_800F66D8
    /* 3B8A8 8012D4A8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B8AC 8012D4AC 40DD030C */  jal        func_800F7500
    /* 3B8B0 8012D4B0 92050424 */   addiu     $a0, $zero, 0x592
    /* 3B8B4 8012D4B4 B781040C */  jal        func_801206DC
    /* 3B8B8 8012D4B8 00000000 */   nop
    /* 3B8BC 8012D4BC 40DD030C */  jal        func_800F7500
    /* 3B8C0 8012D4C0 18000424 */   addiu     $a0, $zero, 0x18
    /* 3B8C4 8012D4C4 B6D9030C */  jal        func_800F66D8
    /* 3B8C8 8012D4C8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B8CC 8012D4CC 40DD030C */  jal        func_800F7500
    /* 3B8D0 8012D4D0 12060424 */   addiu     $a0, $zero, 0x612
    /* 3B8D4 8012D4D4 B781040C */  jal        func_801206DC
    /* 3B8D8 8012D4D8 00000000 */   nop
    /* 3B8DC 8012D4DC 40DD030C */  jal        func_800F7500
    /* 3B8E0 8012D4E0 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 3B8E4 8012D4E4 B6D9030C */  jal        func_800F66D8
    /* 3B8E8 8012D4E8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B8EC 8012D4EC 40DD030C */  jal        func_800F7500
    /* 3B8F0 8012D4F0 AA030424 */   addiu     $a0, $zero, 0x3AA
    /* 3B8F4 8012D4F4 B781040C */  jal        func_801206DC
    /* 3B8F8 8012D4F8 00000000 */   nop
    /* 3B8FC 8012D4FC 40DD030C */  jal        func_800F7500
    /* 3B900 8012D500 28000424 */   addiu     $a0, $zero, 0x28
    /* 3B904 8012D504 B6D9030C */  jal        func_800F66D8
    /* 3B908 8012D508 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B90C 8012D50C 40DD030C */  jal        func_800F7500
    /* 3B910 8012D510 AA040424 */   addiu     $a0, $zero, 0x4AA
    /* 3B914 8012D514 B781040C */  jal        func_801206DC
    /* 3B918 8012D518 00000000 */   nop
    /* 3B91C 8012D51C 40DD030C */  jal        func_800F7500
    /* 3B920 8012D520 22000424 */   addiu     $a0, $zero, 0x22
    /* 3B924 8012D524 B6D9030C */  jal        func_800F66D8
    /* 3B928 8012D528 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B92C 8012D52C 40DD030C */  jal        func_800F7500
    /* 3B930 8012D530 AA050424 */   addiu     $a0, $zero, 0x5AA
    /* 3B934 8012D534 B781040C */  jal        func_801206DC
    /* 3B938 8012D538 00000000 */   nop
    /* 3B93C 8012D53C 40DD030C */  jal        func_800F7500
    /* 3B940 8012D540 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 3B944 8012D544 B6D9030C */  jal        func_800F66D8
    /* 3B948 8012D548 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B94C 8012D54C 40DD030C */  jal        func_800F7500
    /* 3B950 8012D550 34040424 */   addiu     $a0, $zero, 0x434
    /* 3B954 8012D554 B781040C */  jal        func_801206DC
    /* 3B958 8012D558 00000000 */   nop
    /* 3B95C 8012D55C 40DD030C */  jal        func_800F7500
    /* 3B960 8012D560 29000424 */   addiu     $a0, $zero, 0x29
    /* 3B964 8012D564 B6D9030C */  jal        func_800F66D8
    /* 3B968 8012D568 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B96C 8012D56C 40DD030C */  jal        func_800F7500
    /* 3B970 8012D570 34050424 */   addiu     $a0, $zero, 0x534
    /* 3B974 8012D574 B781040C */  jal        func_801206DC
    /* 3B978 8012D578 00000000 */   nop
    /* 3B97C 8012D57C 40DD030C */  jal        func_800F7500
    /* 3B980 8012D580 23000424 */   addiu     $a0, $zero, 0x23
    /* 3B984 8012D584 B6D9030C */  jal        func_800F66D8
    /* 3B988 8012D588 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B98C 8012D58C 40DD030C */  jal        func_800F7500
    /* 3B990 8012D590 34060424 */   addiu     $a0, $zero, 0x634
    /* 3B994 8012D594 B781040C */  jal        func_801206DC
    /* 3B998 8012D598 00000000 */   nop
    /* 3B99C 8012D59C 40DD030C */  jal        func_800F7500
    /* 3B9A0 8012D5A0 37000424 */   addiu     $a0, $zero, 0x37
    /* 3B9A4 8012D5A4 B6D9030C */  jal        func_800F66D8
    /* 3B9A8 8012D5A8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B9AC 8012D5AC 93E0030C */  jal        func_800F824C
    /* 3B9B0 8012D5B0 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B9B4 8012D5B4 EFD8030C */  jal        func_800F63BC
    /* 3B9B8 8012D5B8 00000000 */   nop
    /* 3B9BC 8012D5BC B6D9030C */  jal        func_800F66D8
    /* 3B9C0 8012D5C0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B9C4 8012D5C4 93E0030C */  jal        func_800F824C
    /* 3B9C8 8012D5C8 46000424 */   addiu     $a0, $zero, 0x46
    /* 3B9CC 8012D5CC EFD8030C */  jal        func_800F63BC
    /* 3B9D0 8012D5D0 00000000 */   nop
    /* 3B9D4 8012D5D4 B6D9030C */  jal        func_800F66D8
    /* 3B9D8 8012D5D8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3B9DC 8012D5DC 9CDC030C */  jal        func_800F7270
    /* 3B9E0 8012D5E0 45000424 */   addiu     $a0, $zero, 0x45
    /* 3B9E4 8012D5E4 40DD030C */  jal        func_800F7500
    /* 3B9E8 8012D5E8 26020424 */   addiu     $a0, $zero, 0x226
    /* 3B9EC 8012D5EC 4293040C */  jal        func_80124D08
    /* 3B9F0 8012D5F0 00000000 */   nop
    /* 3B9F4 8012D5F4 91E5030C */  jal        func_800F9644
    /* 3B9F8 8012D5F8 20000424 */   addiu     $a0, $zero, 0x20
    /* 3B9FC 8012D5FC 40DD030C */  jal        func_800F7500
    /* 3BA00 8012D600 07000424 */   addiu     $a0, $zero, 0x7
    /* 3BA04 8012D604 D9D9030C */  jal        func_800F6764
    /* 3BA08 8012D608 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BA0C 8012D60C 40DD030C */  jal        func_800F7500
    /* 3BA10 8012D610 88020424 */   addiu     $a0, $zero, 0x288
    /* 3BA14 8012D614 3282040C */  jal        func_801208C8
    /* 3BA18 8012D618 00000000 */   nop
    /* 3BA1C 8012D61C 40DD030C */  jal        func_800F7500
    /* 3BA20 8012D620 09000424 */   addiu     $a0, $zero, 0x9
    /* 3BA24 8012D624 D9D9030C */  jal        func_800F6764
    /* 3BA28 8012D628 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BA2C 8012D62C 40DD030C */  jal        func_800F7500
    /* 3BA30 8012D630 92020424 */   addiu     $a0, $zero, 0x292
    /* 3BA34 8012D634 3282040C */  jal        func_801208C8
    /* 3BA38 8012D638 00000000 */   nop
    /* 3BA3C 8012D63C 40DD030C */  jal        func_800F7500
    /* 3BA40 8012D640 0B000424 */   addiu     $a0, $zero, 0xB
    /* 3BA44 8012D644 D9D9030C */  jal        func_800F6764
    /* 3BA48 8012D648 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BA4C 8012D64C 40DD030C */  jal        func_800F7500
    /* 3BA50 8012D650 08030424 */   addiu     $a0, $zero, 0x308
    /* 3BA54 8012D654 3282040C */  jal        func_801208C8
    /* 3BA58 8012D658 00000000 */   nop
    /* 3BA5C 8012D65C 40DD030C */  jal        func_800F7500
    /* 3BA60 8012D660 0D000424 */   addiu     $a0, $zero, 0xD
    /* 3BA64 8012D664 D9D9030C */  jal        func_800F6764
    /* 3BA68 8012D668 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BA6C 8012D66C 40DD030C */  jal        func_800F7500
    /* 3BA70 8012D670 12030424 */   addiu     $a0, $zero, 0x312
    /* 3BA74 8012D674 3282040C */  jal        func_801208C8
    /* 3BA78 8012D678 00000000 */   nop
    /* 3BA7C 8012D67C 98E5030C */  jal        func_800F9660
    /* 3BA80 8012D680 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BA84 8012D684 C7E5030C */  jal        func_800F971C
    /* 3BA88 8012D688 00000000 */   nop
    /* 3BA8C 8012D68C 52CF030C */  jal        func_800F3D48
    /* 3BA90 8012D690 00000000 */   nop
    /* 3BA94 8012D694 40DD030C */  jal        func_800F7500
    /* 3BA98 8012D698 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3BA9C 8012D69C B6D9030C */  jal        func_800F66D8
    /* 3BAA0 8012D6A0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BAA4 8012D6A4 40DD030C */  jal        func_800F7500
    /* 3BAA8 8012D6A8 B2030424 */   addiu     $a0, $zero, 0x3B2
    /* 3BAAC 8012D6AC DD81040C */  jal        func_80120774
    /* 3BAB0 8012D6B0 00000000 */   nop
    /* 3BAB4 8012D6B4 40DD030C */  jal        func_800F7500
    /* 3BAB8 8012D6B8 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 3BABC 8012D6BC B6D9030C */  jal        func_800F66D8
    /* 3BAC0 8012D6C0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BAC4 8012D6C4 40DD030C */  jal        func_800F7500
    /* 3BAC8 8012D6C8 B2040424 */   addiu     $a0, $zero, 0x4B2
    /* 3BACC 8012D6CC DD81040C */  jal        func_80120774
    /* 3BAD0 8012D6D0 00000000 */   nop
    /* 3BAD4 8012D6D4 40DD030C */  jal        func_800F7500
    /* 3BAD8 8012D6D8 24000424 */   addiu     $a0, $zero, 0x24
    /* 3BADC 8012D6DC B6D9030C */  jal        func_800F66D8
    /* 3BAE0 8012D6E0 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BAE4 8012D6E4 40DD030C */  jal        func_800F7500
    /* 3BAE8 8012D6E8 B2050424 */   addiu     $a0, $zero, 0x5B2
    /* 3BAEC 8012D6EC DD81040C */  jal        func_80120774
    /* 3BAF0 8012D6F0 00000000 */   nop
    /* 3BAF4 8012D6F4 8CDB030C */  jal        func_800F6E30
    /* 3BAF8 8012D6F8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BAFC 8012D6FC 92D0030C */  jal        func_800F4248
    /* 3BB00 8012D700 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 3BB04 8012D704 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3BB08 8012D708 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3BB0C 8012D70C 00000000 */  nop
    /* 3BB10 8012D710 00006290 */  lbu        $v0, 0x0($v1)
    /* 3BB14 8012D714 45000424 */  addiu      $a0, $zero, 0x45
    /* 3BB18 8012D718 C2100200 */  srl        $v0, $v0, 3
    /* 3BB1C 8012D71C 93E0030C */  jal        func_800F824C
    /* 3BB20 8012D720 000062A0 */   sb        $v0, 0x0($v1)
    /* 3BB24 8012D724 EEE3030C */  jal        func_800F8FB8
    /* 3BB28 8012D728 46000424 */   addiu     $a0, $zero, 0x46
    /* 3BB2C 8012D72C 91E5030C */  jal        func_800F9644
    /* 3BB30 8012D730 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BB34 8012D734 E0002496 */  lhu        $a0, 0xE0($s1)
    /* 3BB38 8012D738 56D9030C */  jal        func_800F6558
    /* 3BB3C 8012D73C 00000000 */   nop
    /* 3BB40 8012D740 04D5030C */  jal        func_800F5410
    /* 3BB44 8012D744 00000000 */   nop
    /* 3BB48 8012D748 0FCF030C */  jal        func_800F3C3C
    /* 3BB4C 8012D74C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BB50 8012D750 E5CF030C */  jal        func_800F3F94
    /* 3BB54 8012D754 21204000 */   addu      $a0, $v0, $zero
    /* 3BB58 8012D758 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3BB5C 8012D75C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3BB60 8012D760 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3BB64 8012D764 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3BB68 8012D768 00004394 */  lhu        $v1, 0x0($v0)
    /* 3BB6C 8012D76C 20000424 */  addiu      $a0, $zero, 0x20
    /* 3BB70 8012D770 98E5030C */  jal        func_800F9660
    /* 3BB74 8012D774 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3BB78 8012D778 77DC030C */  jal        func_800F71DC
    /* 3BB7C 8012D77C 86010424 */   addiu     $a0, $zero, 0x186
    /* 3BB80 8012D780 357E040C */  jal        func_8011F8D4
    /* 3BB84 8012D784 00000000 */   nop
    /* 3BB88 8012D788 40DD030C */  jal        func_800F7500
    /* 3BB8C 8012D78C 01000424 */   addiu     $a0, $zero, 0x1
    /* 3BB90 8012D790 B6D9030C */  jal        func_800F66D8
    /* 3BB94 8012D794 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BB98 8012D798 40DD030C */  jal        func_800F7500
    /* 3BB9C 8012D79C 06010424 */   addiu     $a0, $zero, 0x106
    /* 3BBA0 8012D7A0 7293040C */  jal        func_80124DC8
    /* 3BBA4 8012D7A4 00000000 */   nop
    /* 3BBA8 8012D7A8 20B7040C */  jal        func_8012DC80
    /* 3BBAC 8012D7AC 00000000 */   nop
    /* 3BBB0 8012D7B0 40DD030C */  jal        func_800F7500
    /* 3BBB4 8012D7B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3BBB8 8012D7B8 B6D9030C */  jal        func_800F66D8
    /* 3BBBC 8012D7BC 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BBC0 8012D7C0 5DD5030C */  jal        func_800F5574
    /* 3BBC4 8012D7C4 63000424 */   addiu     $a0, $zero, 0x63
    /* 3BBC8 8012D7C8 F5D4030C */  jal        func_800F53D4
    /* 3BBCC 8012D7CC 00000000 */   nop
    /* 3BBD0 8012D7D0 AD004014 */  bnez       $v0, .L8012DA88
    /* 3BBD4 8012D7D4 00000000 */   nop
    /* 3BBD8 8012D7D8 62002496 */  lhu        $a0, 0x62($s1)
    /* 3BBDC 8012D7DC 40DD030C */  jal        func_800F7500
    /* 3BBE0 8012D7E0 00000000 */   nop
    /* 3BBE4 8012D7E4 E97E040C */  jal        func_8011FBA4
    /* 3BBE8 8012D7E8 00000000 */   nop
    /* 3BBEC 8012D7EC 40DD030C */  jal        func_800F7500
    /* 3BBF0 8012D7F0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 3BBF4 8012D7F4 B6D9030C */  jal        func_800F66D8
    /* 3BBF8 8012D7F8 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BBFC 8012D7FC 93E0030C */  jal        func_800F824C
    /* 3BC00 8012D800 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BC04 8012D804 EFD8030C */  jal        func_800F63BC
    /* 3BC08 8012D808 00000000 */   nop
    /* 3BC0C 8012D80C B6D9030C */  jal        func_800F66D8
    /* 3BC10 8012D810 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BC14 8012D814 93E0030C */  jal        func_800F824C
    /* 3BC18 8012D818 46000424 */   addiu     $a0, $zero, 0x46
    /* 3BC1C 8012D81C EFD8030C */  jal        func_800F63BC
    /* 3BC20 8012D820 00000000 */   nop
    /* 3BC24 8012D824 B6D9030C */  jal        func_800F66D8
    /* 3BC28 8012D828 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BC2C 8012D82C 93E0030C */  jal        func_800F824C
    /* 3BC30 8012D830 47000424 */   addiu     $a0, $zero, 0x47
    /* 3BC34 8012D834 8CDB030C */  jal        func_800F6E30
    /* 3BC38 8012D838 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BC3C 8012D83C 92D0030C */  jal        func_800F4248
    /* 3BC40 8012D840 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3BC44 8012D844 33D7030C */  jal        func_800F5CCC
    /* 3BC48 8012D848 00000000 */   nop
    /* 3BC4C 8012D84C 50D4030C */  jal        func_800F5140
    /* 3BC50 8012D850 00000000 */   nop
    /* 3BC54 8012D854 3489040C */  jal        func_801224D0
    /* 3BC58 8012D858 00000000 */   nop
    /* 3BC5C 8012D85C 91E5030C */  jal        func_800F9644
    /* 3BC60 8012D860 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BC64 8012D864 0F00043C */  lui        $a0, (0xFB500 >> 16)
    /* 3BC68 8012D868 3DDB030C */  jal        func_800F6CF4
    /* 3BC6C 8012D86C 00B58434 */   ori       $a0, $a0, (0xFB500 & 0xFFFF)
    /* 3BC70 8012D870 9DE0030C */  jal        func_800F8274
    /* 3BC74 8012D874 48000424 */   addiu     $a0, $zero, 0x48
    /* 3BC78 8012D878 98E5030C */  jal        func_800F9660
    /* 3BC7C 8012D87C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BC80 8012D880 40DD030C */  jal        func_800F7500
    /* 3BC84 8012D884 02000424 */   addiu     $a0, $zero, 0x2
    /* 3BC88 8012D888 B6D9030C */  jal        func_800F66D8
    /* 3BC8C 8012D88C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BC90 8012D890 5DD5030C */  jal        func_800F5574
    /* 3BC94 8012D894 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BC98 8012D898 F0D4030C */  jal        func_800F53C0
    /* 3BC9C 8012D89C 00000000 */   nop
    /* 3BCA0 8012D8A0 03004010 */  beqz       $v0, .L8012D8B0
    /* 3BCA4 8012D8A4 00000000 */   nop
    /* 3BCA8 8012D8A8 53D9030C */  jal        func_800F654C
    /* 3BCAC 8012D8AC 45000424 */   addiu     $a0, $zero, 0x45
  .L8012D8B0:
    /* 3BCB0 8012D8B0 33D7030C */  jal        func_800F5CCC
    /* 3BCB4 8012D8B4 00000000 */   nop
    /* 3BCB8 8012D8B8 93E0030C */  jal        func_800F824C
    /* 3BCBC 8012D8BC 43000424 */   addiu     $a0, $zero, 0x43
    /* 3BCC0 8012D8C0 91E5030C */  jal        func_800F9644
    /* 3BCC4 8012D8C4 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BCC8 8012D8C8 96D9030C */  jal        func_800F6658
    /* 3BCCC 8012D8CC 43000424 */   addiu     $a0, $zero, 0x43
    /* 3BCD0 8012D8D0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3BCD4 8012D8D4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3BCD8 8012D8D8 00000000 */  nop
    /* 3BCDC 8012D8DC 00006294 */  lhu        $v0, 0x0($v1)
    /* 3BCE0 8012D8E0 00000000 */  nop
    /* 3BCE4 8012D8E4 40100200 */  sll        $v0, $v0, 1
    /* 3BCE8 8012D8E8 5BD4030C */  jal        func_800F516C
    /* 3BCEC 8012D8EC 000062A4 */   sh        $v0, 0x0($v1)
    /* 3BCF0 8012D8F0 14D4030C */  jal        func_800F5050
    /* 3BCF4 8012D8F4 00000000 */   nop
    /* 3BCF8 8012D8F8 0FCF030C */  jal        func_800F3C3C
    /* 3BCFC 8012D8FC 43000424 */   addiu     $a0, $zero, 0x43
    /* 3BD00 8012D900 E5CF030C */  jal        func_800F3F94
    /* 3BD04 8012D904 21204000 */   addu      $a0, $v0, $zero
    /* 3BD08 8012D908 0FCF030C */  jal        func_800F3C3C
    /* 3BD0C 8012D90C 48000424 */   addiu     $a0, $zero, 0x48
    /* 3BD10 8012D910 E5CF030C */  jal        func_800F3F94
    /* 3BD14 8012D914 21204000 */   addu      $a0, $v0, $zero
    /* 3BD18 8012D918 19D0030C */  jal        func_800F4064
    /* 3BD1C 8012D91C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3BD20 8012D920 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3BD24 8012D924 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3BD28 8012D928 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3BD2C 8012D92C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3BD30 8012D930 00004394 */  lhu        $v1, 0x0($v0)
    /* 3BD34 8012D934 20000424 */  addiu      $a0, $zero, 0x20
    /* 3BD38 8012D938 98E5030C */  jal        func_800F9660
    /* 3BD3C 8012D93C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3BD40 8012D940 1ADB030C */  jal        func_800F6C68
    /* 3BD44 8012D944 0F00043C */   lui       $a0, (0xF0000 >> 16)
    /* 3BD48 8012D948 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3BD4C 8012D94C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3BD50 8012D950 00000000 */  nop
    /* 3BD54 8012D954 00006290 */  lbu        $v0, 0x0($v1)
    /* 3BD58 8012D958 4B000424 */  addiu      $a0, $zero, 0x4B
    /* 3BD5C 8012D95C 42110200 */  srl        $v0, $v0, 5
    /* 3BD60 8012D960 93E0030C */  jal        func_800F824C
    /* 3BD64 8012D964 000062A0 */   sb        $v0, 0x0($v1)
    /* 3BD68 8012D968 D9D8030C */  jal        func_800F6364
    /* 3BD6C 8012D96C 00000000 */   nop
    /* 3BD70 8012D970 91E5030C */  jal        func_800F9644
    /* 3BD74 8012D974 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BD78 8012D978 3DDB030C */  jal        func_800F6CF4
    /* 3BD7C 8012D97C 0F00043C */   lui       $a0, (0xF0000 >> 16)
    /* 3BD80 8012D980 04D5030C */  jal        func_800F5410
    /* 3BD84 8012D984 00000000 */   nop
    /* 3BD88 8012D988 0FCF030C */  jal        func_800F3C3C
    /* 3BD8C 8012D98C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BD90 8012D990 E5CF030C */  jal        func_800F3F94
    /* 3BD94 8012D994 21204000 */   addu      $a0, $v0, $zero
    /* 3BD98 8012D998 9DE0030C */  jal        func_800F8274
    /* 3BD9C 8012D99C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BDA0 8012D9A0 98E5030C */  jal        func_800F9660
    /* 3BDA4 8012D9A4 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BDA8 8012D9A8 8CD9030C */  jal        func_800F6630
    /* 3BDAC 8012D9AC 47000424 */   addiu     $a0, $zero, 0x47
    /* 3BDB0 8012D9B0 0FCF030C */  jal        func_800F3C3C
    /* 3BDB4 8012D9B4 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 3BDB8 8012D9B8 CECF030C */  jal        func_800F3F38
    /* 3BDBC 8012D9BC 21204000 */   addu      $a0, $v0, $zero
    /* 3BDC0 8012D9C0 93E0030C */  jal        func_800F824C
    /* 3BDC4 8012D9C4 47000424 */   addiu     $a0, $zero, 0x47
    /* 3BDC8 8012D9C8 40DD030C */  jal        func_800F7500
    /* 3BDCC 8012D9CC 37000424 */   addiu     $a0, $zero, 0x37
    /* 3BDD0 8012D9D0 91E5030C */  jal        func_800F9644
    /* 3BDD4 8012D9D4 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BDD8 8012D9D8 96D9030C */  jal        func_800F6658
    /* 3BDDC 8012D9DC 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BDE0 8012D9E0 20D5030C */  jal        func_800F5480
    /* 3BDE4 8012D9E4 00000000 */   nop
    /* 3BDE8 8012D9E8 9CCE030C */  jal        func_800F3A70
    /* 3BDEC 8012D9EC 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BDF0 8012D9F0 C1CE030C */  jal        func_800F3B04
    /* 3BDF4 8012D9F4 21204000 */   addu      $a0, $v0, $zero
    /* 3BDF8 8012D9F8 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3BDFC 8012D9FC 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3BE00 8012DA00 00000000 */  nop
    /* 3BE04 8012DA04 00006494 */  lhu        $a0, 0x0($v1)
    /* 3BE08 8012DA08 F3DF030C */  jal        func_800F7FCC
    /* 3BE0C 8012DA0C 21204400 */   addu      $a0, $v0, $a0
    /* 3BE10 8012DA10 9DE0030C */  jal        func_800F8274
    /* 3BE14 8012DA14 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BE18 8012DA18 98E5030C */  jal        func_800F9660
    /* 3BE1C 8012DA1C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3BE20 8012DA20 EFD8030C */  jal        func_800F63BC
    /* 3BE24 8012DA24 00000000 */   nop
    /* 3BE28 8012DA28 EFD8030C */  jal        func_800F63BC
    /* 3BE2C 8012DA2C 00000000 */   nop
    /* 3BE30 8012DA30 8CD9030C */  jal        func_800F6630
    /* 3BE34 8012DA34 47000424 */   addiu     $a0, $zero, 0x47
    /* 3BE38 8012DA38 9CCE030C */  jal        func_800F3A70
    /* 3BE3C 8012DA3C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3BE40 8012DA40 C1CE030C */  jal        func_800F3B04
    /* 3BE44 8012DA44 21204000 */   addu      $a0, $v0, $zero
    /* 3BE48 8012DA48 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3BE4C 8012DA4C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3BE50 8012DA50 00000000 */  nop
    /* 3BE54 8012DA54 00006494 */  lhu        $a0, 0x0($v1)
    /* 3BE58 8012DA58 D2DF030C */  jal        func_800F7F48
    /* 3BE5C 8012DA5C 21204400 */   addu      $a0, $v0, $a0
    /* 3BE60 8012DA60 93E0030C */  jal        func_800F824C
    /* 3BE64 8012DA64 47000424 */   addiu     $a0, $zero, 0x47
    /* 3BE68 8012DA68 40DD030C */  jal        func_800F7500
    /* 3BE6C 8012DA6C E6020424 */   addiu     $a0, $zero, 0x2E6
    /* 3BE70 8012DA70 8CD9030C */  jal        func_800F6630
    /* 3BE74 8012DA74 47000424 */   addiu     $a0, $zero, 0x47
    /* 3BE78 8012DA78 9CDC030C */  jal        func_800F7270
    /* 3BE7C 8012DA7C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3BE80 8012DA80 4293040C */  jal        func_80124D08
    /* 3BE84 8012DA84 00000000 */   nop
  .L8012DA88:
    /* 3BE88 8012DA88 DB82040C */  jal        func_80120B6C
    /* 3BE8C 8012DA8C 90911026 */   addiu     $s0, $s0, %lo(D_80199190)
    /* 3BE90 8012DA90 0C9A040C */  jal        func_80126830
    /* 3BE94 8012DA94 00000000 */   nop
    /* 3BE98 8012DA98 3490040C */  jal        func_801240D0
    /* 3BE9C 8012DA9C 00000000 */   nop
    /* 3BEA0 8012DAA0 2A90040C */  jal        func_801240A8
    /* 3BEA4 8012DAA4 00000000 */   nop
    /* 3BEA8 8012DAA8 D07F040C */  jal        func_8011FF40
    /* 3BEAC 8012DAAC 00000000 */   nop
    /* 3BEB0 8012DAB0 2983040C */  jal        func_80120CA4
    /* 3BEB4 8012DAB4 00000000 */   nop
    /* 3BEB8 8012DAB8 FC98040C */  jal        func_801263F0
    /* 3BEBC 8012DABC 00000000 */   nop
    /* 3BEC0 8012DAC0 C37B040C */  jal        func_8011EF0C
    /* 3BEC4 8012DAC4 00000000 */   nop
    /* 3BEC8 8012DAC8 6E90040C */  jal        func_801241B8
    /* 3BECC 8012DACC 00000000 */   nop
    /* 3BED0 8012DAD0 A17D040C */  jal        func_8011F684
    /* 3BED4 8012DAD4 00000000 */   nop
    /* 3BED8 8012DAD8 53D9030C */  jal        func_800F654C
    /* 3BEDC 8012DADC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 3BEE0 8012DAE0 93E0030C */  jal        func_800F824C
    /* 3BEE4 8012DAE4 C2000424 */   addiu     $a0, $zero, 0xC2
    /* 3BEE8 8012DAE8 53D9030C */  jal        func_800F654C
    /* 3BEEC 8012DAEC 84000424 */   addiu     $a0, $zero, 0x84
    /* 3BEF0 8012DAF0 93E0030C */  jal        func_800F824C
    /* 3BEF4 8012DAF4 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 3BEF8 8012DAF8 93E0030C */  jal        func_800F824C
    /* 3BEFC 8012DAFC A5000424 */   addiu     $a0, $zero, 0xA5
    /* 3BF00 8012DB00 C783040C */  jal        func_80120F1C
    /* 3BF04 8012DB04 00000000 */   nop
    /* 3BF08 8012DB08 5C000496 */  lhu        $a0, 0x5C($s0)
    /* 3BF0C 8012DB0C 40DD030C */  jal        func_800F7500
    /* 3BF10 8012DB10 00000000 */   nop
    /* 3BF14 8012DB14 0E000496 */  lhu        $a0, 0xE($s0)
    /* 3BF18 8012DB18 77DC030C */  jal        func_800F71DC
    /* 3BF1C 8012DB1C 00000000 */   nop
    /* 3BF20 8012DB20 4984040C */  jal        func_80121124
    /* 3BF24 8012DB24 00000000 */   nop
    /* 3BF28 8012DB28 DDE3030C */  jal        func_800F8F74
    /* 3BF2C 8012DB2C C21B0424 */   addiu     $a0, $zero, 0x1BC2
    /* 3BF30 8012DB30 A78A040C */  jal        func_80122A9C
    /* 3BF34 8012DB34 00000000 */   nop
    /* 3BF38 8012DB38 898A040C */  jal        func_80122A24
    /* 3BF3C 8012DB3C 00000000 */   nop
    /* 3BF40 8012DB40 A17D040C */  jal        func_8011F684
    /* 3BF44 8012DB44 00000000 */   nop
    /* 3BF48 8012DB48 2983040C */  jal        func_80120CA4
    /* 3BF4C 8012DB4C 00000000 */   nop
    /* 3BF50 8012DB50 BC99040C */  jal        func_801266F0
    /* 3BF54 8012DB54 00000000 */   nop
  .L8012DB58:
    /* 3BF58 8012DB58 1800BF8F */  lw         $ra, 0x18($sp)
    /* 3BF5C 8012DB5C 1400B18F */  lw         $s1, 0x14($sp)
    /* 3BF60 8012DB60 1000B08F */  lw         $s0, 0x10($sp)
    /* 3BF64 8012DB64 0800E003 */  jr         $ra
    /* 3BF68 8012DB68 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8012D23C
