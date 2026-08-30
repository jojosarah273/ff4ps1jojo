nonmatching func_800FF1C0, 0x38C

glabel func_800FF1C0
    /* D5C0 800FF1C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D5C4 800FF1C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* D5C8 800FF1C8 53D9030C */  jal        func_800F654C
    /* D5CC 800FF1CC 03000424 */   addiu     $a0, $zero, 0x3
    /* D5D0 800FF1D0 62E0030C */  jal        func_800F8188
    /* D5D4 800FF1D4 05170424 */   addiu     $a0, $zero, 0x1705
    /* D5D8 800FF1D8 53D9030C */  jal        func_800F654C
    /* D5DC 800FF1DC 1F000424 */   addiu     $a0, $zero, 0x1F
    /* D5E0 800FF1E0 93E0030C */  jal        func_800F824C
    /* D5E4 800FF1E4 79000424 */   addiu     $a0, $zero, 0x79
  .L800FF1E8:
    /* D5E8 800FF1E8 F6F9030C */  jal        func_800FE7D8
    /* D5EC 800FF1EC 00000000 */   nop
    /* D5F0 800FF1F0 8CD9030C */  jal        func_800F6630
    /* D5F4 800FF1F4 79000424 */   addiu     $a0, $zero, 0x79
    /* D5F8 800FF1F8 93E0030C */  jal        func_800F824C
    /* D5FC 800FF1FC AD000424 */   addiu     $a0, $zero, 0xAD
    /* D600 800FF200 59D9030C */  jal        func_800F6564
    /* D604 800FF204 04170424 */   addiu     $a0, $zero, 0x1704
    /* D608 800FF208 5DD5030C */  jal        func_800F5574
    /* D60C 800FF20C 04000424 */   addiu     $a0, $zero, 0x4
    /* D610 800FF210 F5D4030C */  jal        func_800F53D4
    /* D614 800FF214 00000000 */   nop
    /* D618 800FF218 07004010 */  beqz       $v0, .L800FF238
    /* D61C 800FF21C 00000000 */   nop
    /* D620 800FF220 68D7030C */  jal        func_800F5DA0
    /* D624 800FF224 B7000424 */   addiu     $a0, $zero, 0xB7
    /* D628 800FF228 8CD9030C */  jal        func_800F6630
    /* D62C 800FF22C B7000424 */   addiu     $a0, $zero, 0xB7
    /* D630 800FF230 92FC0308 */  j          .L800FF248
    /* D634 800FF234 00000000 */   nop
  .L800FF238:
    /* D638 800FF238 68D7030C */  jal        func_800F5DA0
    /* D63C 800FF23C B8000424 */   addiu     $a0, $zero, 0xB8
    /* D640 800FF240 8CD9030C */  jal        func_800F6630
    /* D644 800FF244 B8000424 */   addiu     $a0, $zero, 0xB8
  .L800FF248:
    /* D648 800FF248 67D5050C */  jal        func_8017559C
    /* D64C 800FF24C 00000000 */   nop
    /* D650 800FF250 1CFA030C */  jal        func_800FE870
    /* D654 800FF254 00000000 */   nop
    /* D658 800FF258 EACA050C */  jal        func_80172BA8
    /* D65C 800FF25C 00000000 */   nop
    /* D660 800FF260 02CC050C */  jal        func_80173008
    /* D664 800FF264 00000000 */   nop
    /* D668 800FF268 68D7030C */  jal        func_800F5DA0
    /* D66C 800FF26C 79000424 */   addiu     $a0, $zero, 0x79
    /* D670 800FF270 8CD9030C */  jal        func_800F6630
    /* D674 800FF274 79000424 */   addiu     $a0, $zero, 0x79
    /* D678 800FF278 5DD5030C */  jal        func_800F5574
    /* D67C 800FF27C 10000424 */   addiu     $a0, $zero, 0x10
    /* D680 800FF280 F0D4030C */  jal        func_800F53C0
    /* D684 800FF284 00000000 */   nop
    /* D688 800FF288 D7FF4014 */  bnez       $v0, .L800FF1E8
    /* D68C 800FF28C 01000224 */   addiu     $v0, $zero, 0x1
    /* D690 800FF290 1A80013C */  lui        $at, %hi(D_8019EE02)
    /* D694 800FF294 02EE22A4 */  sh         $v0, %lo(D_8019EE02)($at)
    /* D698 800FF298 53D9030C */  jal        func_800F654C
    /* D69C 800FF29C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* D6A0 800FF2A0 93E0030C */  jal        func_800F824C
    /* D6A4 800FF2A4 79000424 */   addiu     $a0, $zero, 0x79
  .L800FF2A8:
    /* D6A8 800FF2A8 53D9030C */  jal        func_800F654C
    /* D6AC 800FF2AC 1F000424 */   addiu     $a0, $zero, 0x1F
    /* D6B0 800FF2B0 20D5030C */  jal        func_800F5480
    /* D6B4 800FF2B4 00000000 */   nop
    /* D6B8 800FF2B8 0FCF030C */  jal        func_800F3C3C
    /* D6BC 800FF2BC 79000424 */   addiu     $a0, $zero, 0x79
    /* D6C0 800FF2C0 D2DF030C */  jal        func_800F7F48
    /* D6C4 800FF2C4 21204000 */   addu      $a0, $v0, $zero
    /* D6C8 800FF2C8 A4E5030C */  jal        func_800F9690
    /* D6CC 800FF2CC 00000000 */   nop
    /* D6D0 800FF2D0 1400043C */  lui        $a0, (0x14FAB6 >> 16)
    /* D6D4 800FF2D4 1ADB030C */  jal        func_800F6C68
    /* D6D8 800FF2D8 B6FA8434 */   ori       $a0, $a0, (0x14FAB6 & 0xFFFF)
    /* D6DC 800FF2DC 62E0030C */  jal        func_800F8188
    /* D6E0 800FF2E0 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* D6E4 800FF2E4 8CD9030C */  jal        func_800F6630
    /* D6E8 800FF2E8 79000424 */   addiu     $a0, $zero, 0x79
    /* D6EC 800FF2EC 93E0030C */  jal        func_800F824C
    /* D6F0 800FF2F0 AD000424 */   addiu     $a0, $zero, 0xAD
    /* D6F4 800FF2F4 ECF9030C */  jal        func_800FE7B0
    /* D6F8 800FF2F8 00000000 */   nop
    /* D6FC 800FF2FC DDE3030C */  jal        func_800F8F74
    /* D700 800FF300 0C420424 */   addiu     $a0, $zero, 0x420C
    /* D704 800FF304 75F9030C */  jal        func_800FE5D4
    /* D708 800FF308 00000000 */   nop
    /* D70C 800FF30C B9F9030C */  jal        func_800FE6E4
    /* D710 800FF310 00000000 */   nop
    /* D714 800FF314 C00F040C */  jal        func_80103F00
    /* D718 800FF318 00000000 */   nop
    /* D71C 800FF31C EACA050C */  jal        func_80172BA8
    /* D720 800FF320 00000000 */   nop
    /* D724 800FF324 02CC050C */  jal        func_80173008
    /* D728 800FF328 00000000 */   nop
    /* D72C 800FF32C 68D7030C */  jal        func_800F5DA0
    /* D730 800FF330 79000424 */   addiu     $a0, $zero, 0x79
    /* D734 800FF334 8CD9030C */  jal        func_800F6630
    /* D738 800FF338 79000424 */   addiu     $a0, $zero, 0x79
    /* D73C 800FF33C 0DD9030C */  jal        func_800F6434
    /* D740 800FF340 80800434 */   ori       $a0, $zero, 0x8080
    /* D744 800FF344 D8FF4014 */  bnez       $v0, .L800FF2A8
    /* D748 800FF348 00000000 */   nop
    /* D74C 800FF34C 1A80013C */  lui        $at, %hi(D_8019EE02)
    /* D750 800FF350 02EE20A4 */  sh         $zero, %lo(D_8019EE02)($at)
    /* D754 800FF354 53D9030C */  jal        func_800F654C
    /* D758 800FF358 71000424 */   addiu     $a0, $zero, 0x71
    /* D75C 800FF35C 62E0030C */  jal        func_800F8188
    /* D760 800FF360 06170424 */   addiu     $a0, $zero, 0x1706
    /* D764 800FF364 53D9030C */  jal        func_800F654C
    /* D768 800FF368 10000424 */   addiu     $a0, $zero, 0x10
    /* D76C 800FF36C 62E0030C */  jal        func_800F8188
    /* D770 800FF370 07170424 */   addiu     $a0, $zero, 0x1707
    /* D774 800FF374 53D9030C */  jal        func_800F654C
    /* D778 800FF378 01000424 */   addiu     $a0, $zero, 0x1
    /* D77C 800FF37C 62E0030C */  jal        func_800F8188
    /* D780 800FF380 00170424 */   addiu     $a0, $zero, 0x1700
    /* D784 800FF384 62E0030C */  jal        func_800F8188
    /* D788 800FF388 01170424 */   addiu     $a0, $zero, 0x1701
    /* D78C 800FF38C 59D9030C */  jal        func_800F6564
    /* D790 800FF390 04170424 */   addiu     $a0, $zero, 0x1704
    /* D794 800FF394 5DD5030C */  jal        func_800F5574
    /* D798 800FF398 04000424 */   addiu     $a0, $zero, 0x4
    /* D79C 800FF39C F5D4030C */  jal        func_800F53D4
    /* D7A0 800FF3A0 00000000 */   nop
    /* D7A4 800FF3A4 11004010 */  beqz       $v0, .L800FF3EC
    /* D7A8 800FF3A8 00000000 */   nop
    /* D7AC 800FF3AC 53D9030C */  jal        func_800F654C
    /* D7B0 800FF3B0 01000424 */   addiu     $a0, $zero, 0x1
    /* D7B4 800FF3B4 62E0030C */  jal        func_800F8188
    /* D7B8 800FF3B8 1F170424 */   addiu     $a0, $zero, 0x171F
    /* D7BC 800FF3BC 59D9030C */  jal        func_800F6564
    /* D7C0 800FF3C0 D0060424 */   addiu     $a0, $zero, 0x6D0
    /* D7C4 800FF3C4 0DD9030C */  jal        func_800F6434
    /* D7C8 800FF3C8 02000424 */   addiu     $a0, $zero, 0x2
    /* D7CC 800FF3CC 0B004014 */  bnez       $v0, .L800FF3FC
    /* D7D0 800FF3D0 00000000 */   nop
    /* D7D4 800FF3D4 53D9030C */  jal        func_800F654C
    /* D7D8 800FF3D8 01000424 */   addiu     $a0, $zero, 0x1
    /* D7DC 800FF3DC 62E0030C */  jal        func_800F8188
    /* D7E0 800FF3E0 1B170424 */   addiu     $a0, $zero, 0x171B
    /* D7E4 800FF3E4 FFFC0308 */  j          .L800FF3FC
    /* D7E8 800FF3E8 00000000 */   nop
  .L800FF3EC:
    /* D7EC 800FF3EC 53D9030C */  jal        func_800F654C
    /* D7F0 800FF3F0 01000424 */   addiu     $a0, $zero, 0x1
    /* D7F4 800FF3F4 62E0030C */  jal        func_800F8188
    /* D7F8 800FF3F8 23170424 */   addiu     $a0, $zero, 0x1723
  .L800FF3FC:
    /* D7FC 800FF3FC 58EC030C */  jal        func_800FB160
    /* D800 800FF400 00000000 */   nop
    /* D804 800FF404 53D9030C */  jal        func_800F654C
    /* D808 800FF408 10000424 */   addiu     $a0, $zero, 0x10
    /* D80C 800FF40C 67D5050C */  jal        func_8017559C
    /* D810 800FF410 00000000 */   nop
    /* D814 800FF414 53D9030C */  jal        func_800F654C
    /* D818 800FF418 03000424 */   addiu     $a0, $zero, 0x3
    /* D81C 800FF41C 62E0030C */  jal        func_800F8188
    /* D820 800FF420 05170424 */   addiu     $a0, $zero, 0x1705
    /* D824 800FF424 53D9030C */  jal        func_800F654C
    /* D828 800FF428 81000424 */   addiu     $a0, $zero, 0x81
    /* D82C 800FF42C 62E0030C */  jal        func_800F8188
    /* D830 800FF430 00420424 */   addiu     $a0, $zero, 0x4200
    /* D834 800FF434 53D9030C */  jal        func_800F654C
    /* D838 800FF438 21200000 */   addu      $a0, $zero, $zero
    /* D83C 800FF43C 62E0030C */  jal        func_800F8188
    /* D840 800FF440 00210424 */   addiu     $a0, $zero, 0x2100
    /* D844 800FF444 53D9030C */  jal        func_800F654C
    /* D848 800FF448 20000424 */   addiu     $a0, $zero, 0x20
    /* D84C 800FF44C 93E0030C */  jal        func_800F824C
    /* D850 800FF450 AD000424 */   addiu     $a0, $zero, 0xAD
    /* D854 800FF454 53D9030C */  jal        func_800F654C
    /* D858 800FF458 2F000424 */   addiu     $a0, $zero, 0x2F
    /* D85C 800FF45C 93E0030C */  jal        func_800F824C
    /* D860 800FF460 79000424 */   addiu     $a0, $zero, 0x79
  .L800FF464:
    /* D864 800FF464 F6F9030C */  jal        func_800FE7D8
    /* D868 800FF468 00000000 */   nop
    /* D86C 800FF46C 53D9030C */  jal        func_800F654C
    /* D870 800FF470 2F000424 */   addiu     $a0, $zero, 0x2F
    /* D874 800FF474 20D5030C */  jal        func_800F5480
    /* D878 800FF478 00000000 */   nop
    /* D87C 800FF47C 0FCF030C */  jal        func_800F3C3C
    /* D880 800FF480 79000424 */   addiu     $a0, $zero, 0x79
    /* D884 800FF484 D2DF030C */  jal        func_800F7F48
    /* D888 800FF488 21204000 */   addu      $a0, $v0, $zero
    /* D88C 800FF48C 5DD5030C */  jal        func_800F5574
    /* D890 800FF490 10000424 */   addiu     $a0, $zero, 0x10
    /* D894 800FF494 F0D4030C */  jal        func_800F53C0
    /* D898 800FF498 00000000 */   nop
    /* D89C 800FF49C 03004014 */  bnez       $v0, .L800FF4AC
    /* D8A0 800FF4A0 00000000 */   nop
    /* D8A4 800FF4A4 62E0030C */  jal        func_800F8188
    /* D8A8 800FF4A8 00210424 */   addiu     $a0, $zero, 0x2100
  .L800FF4AC:
    /* D8AC 800FF4AC 8CD9030C */  jal        func_800F6630
    /* D8B0 800FF4B0 79000424 */   addiu     $a0, $zero, 0x79
    /* D8B4 800FF4B4 A4E5030C */  jal        func_800F9690
    /* D8B8 800FF4B8 00000000 */   nop
    /* D8BC 800FF4BC 59D9030C */  jal        func_800F6564
    /* D8C0 800FF4C0 04170424 */   addiu     $a0, $zero, 0x1704
    /* D8C4 800FF4C4 5DD5030C */  jal        func_800F5574
    /* D8C8 800FF4C8 04000424 */   addiu     $a0, $zero, 0x4
    /* D8CC 800FF4CC F5D4030C */  jal        func_800F53D4
    /* D8D0 800FF4D0 00000000 */   nop
    /* D8D4 800FF4D4 07004010 */  beqz       $v0, .L800FF4F4
    /* D8D8 800FF4D8 1400043C */   lui       $a0, (0x14FA86 >> 16)
    /* D8DC 800FF4DC 1ADB030C */  jal        func_800F6C68
    /* D8E0 800FF4E0 86FA8434 */   ori       $a0, $a0, (0x14FA86 & 0xFFFF)
    /* D8E4 800FF4E4 93E0030C */  jal        func_800F824C
    /* D8E8 800FF4E8 B7000424 */   addiu     $a0, $zero, 0xB7
    /* D8EC 800FF4EC 41FD0308 */  j          .L800FF504
    /* D8F0 800FF4F0 00000000 */   nop
  .L800FF4F4:
    /* D8F4 800FF4F4 1ADB030C */  jal        func_800F6C68
    /* D8F8 800FF4F8 86FA8434 */   ori       $a0, $a0, (0x14FA86 & 0xFFFF)
    /* D8FC 800FF4FC 93E0030C */  jal        func_800F824C
    /* D900 800FF500 B8000424 */   addiu     $a0, $zero, 0xB8
  .L800FF504:
    /* D904 800FF504 EACA050C */  jal        func_80172BA8
    /* D908 800FF508 00000000 */   nop
    /* D90C 800FF50C 02CC050C */  jal        func_80173008
    /* D910 800FF510 00000000 */   nop
    /* D914 800FF514 68D7030C */  jal        func_800F5DA0
    /* D918 800FF518 79000424 */   addiu     $a0, $zero, 0x79
    /* D91C 800FF51C 8CD9030C */  jal        func_800F6630
    /* D920 800FF520 79000424 */   addiu     $a0, $zero, 0x79
    /* D924 800FF524 5DD5030C */  jal        func_800F5574
    /* D928 800FF528 FF000424 */   addiu     $a0, $zero, 0xFF
    /* D92C 800FF52C F5D4030C */  jal        func_800F53D4
    /* D930 800FF530 00000000 */   nop
    /* D934 800FF534 CBFF4010 */  beqz       $v0, .L800FF464
    /* D938 800FF538 00000000 */   nop
    /* D93C 800FF53C 1000BF8F */  lw         $ra, 0x10($sp)
    /* D940 800FF540 00000000 */  nop
    /* D944 800FF544 0800E003 */  jr         $ra
    /* D948 800FF548 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF1C0
