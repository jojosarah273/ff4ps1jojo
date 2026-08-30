nonmatching func_8014F2CC, 0x4DC

glabel func_8014F2CC
    /* 5D6CC 8014F2CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D6D0 8014F2D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D6D4 8014F2D4 8CD9030C */  jal        func_800F6630
    /* 5D6D8 8014F2D8 18000424 */   addiu     $a0, $zero, 0x18
    /* 5D6DC 8014F2DC 50D4030C */  jal        func_800F5140
    /* 5D6E0 8014F2E0 00000000 */   nop
    /* 5D6E4 8014F2E4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5D6E8 8014F2E8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5D6EC 8014F2EC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5D6F0 8014F2F0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5D6F4 8014F2F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 5D6F8 8014F2F8 51F20434 */  ori        $a0, $zero, 0xF251
    /* 5D6FC 8014F2FC DADA030C */  jal        func_800F6B68
    /* 5D700 8014F300 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5D704 8014F304 04D5030C */  jal        func_800F5410
    /* 5D708 8014F308 00000000 */   nop
    /* 5D70C 8014F30C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5D710 8014F310 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5D714 8014F314 00000000 */  nop
    /* 5D718 8014F318 00004394 */  lhu        $v1, 0x0($v0)
    /* 5D71C 8014F31C 68F20434 */  ori        $a0, $zero, 0xF268
    /* 5D720 8014F320 C1CE030C */  jal        func_800F3B04
    /* 5D724 8014F324 21206400 */   addu      $a0, $v1, $a0
    /* 5D728 8014F328 CECF030C */  jal        func_800F3F38
    /* 5D72C 8014F32C 21204000 */   addu      $a0, $v0, $zero
    /* 5D730 8014F330 93E0030C */  jal        func_800F824C
    /* 5D734 8014F334 12000424 */   addiu     $a0, $zero, 0x12
    /* 5D738 8014F338 DADA030C */  jal        func_800F6B68
    /* 5D73C 8014F33C 52F20434 */   ori       $a0, $zero, 0xF252
    /* 5D740 8014F340 04D5030C */  jal        func_800F5410
    /* 5D744 8014F344 00000000 */   nop
    /* 5D748 8014F348 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5D74C 8014F34C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5D750 8014F350 00000000 */  nop
    /* 5D754 8014F354 00004394 */  lhu        $v1, 0x0($v0)
    /* 5D758 8014F358 69F20434 */  ori        $a0, $zero, 0xF269
    /* 5D75C 8014F35C C1CE030C */  jal        func_800F3B04
    /* 5D760 8014F360 21206400 */   addu      $a0, $v1, $a0
    /* 5D764 8014F364 CECF030C */  jal        func_800F3F38
    /* 5D768 8014F368 21204000 */   addu      $a0, $v0, $zero
    /* 5D76C 8014F36C 93E0030C */  jal        func_800F824C
    /* 5D770 8014F370 13000424 */   addiu     $a0, $zero, 0x13
    /* 5D774 8014F374 77DC030C */  jal        func_800F71DC
    /* 5D778 8014F378 21200000 */   addu      $a0, $zero, $zero
  .L8014F37C:
    /* 5D77C 8014F37C 59D9030C */  jal        func_800F6564
    /* 5D780 8014F380 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 5D784 8014F384 0DD9030C */  jal        func_800F6434
    /* 5D788 8014F388 02000424 */   addiu     $a0, $zero, 0x2
    /* 5D78C 8014F38C 87004014 */  bnez       $v0, .L8014F5AC
    /* 5D790 8014F390 00000000 */   nop
    /* 5D794 8014F394 DADA030C */  jal        func_800F6B68
    /* 5D798 8014F398 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5D79C 8014F39C 04D5030C */  jal        func_800F5410
    /* 5D7A0 8014F3A0 00000000 */   nop
    /* 5D7A4 8014F3A4 02D0030C */  jal        func_800F4008
    /* 5D7A8 8014F3A8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5D7AC 8014F3AC 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 5D7B0 8014F3B0 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 5D7B4 8014F3B4 00000000 */  nop
    /* 5D7B8 8014F3B8 00006290 */  lbu        $v0, 0x0($v1)
    /* 5D7BC 8014F3BC 00000000 */  nop
    /* 5D7C0 8014F3C0 FD004230 */  andi       $v0, $v0, 0xFD
    /* 5D7C4 8014F3C4 000062A0 */  sb         $v0, 0x0($v1)
    /* 5D7C8 8014F3C8 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 5D7CC 8014F3CC 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 5D7D0 8014F3D0 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5D7D4 8014F3D4 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5D7D8 8014F3D8 00008290 */  lbu        $v0, 0x0($a0)
    /* 5D7DC 8014F3DC 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5D7E0 8014F3E0 02004014 */  bnez       $v0, .L8014F3EC
    /* 5D7E4 8014F3E4 00000000 */   nop
    /* 5D7E8 8014F3E8 02006334 */  ori        $v1, $v1, 0x2
  .L8014F3EC:
    /* 5D7EC 8014F3EC FFD4030C */  jal        func_800F53FC
    /* 5D7F0 8014F3F0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5D7F4 8014F3F4 1D004010 */  beqz       $v0, .L8014F46C
    /* 5D7F8 8014F3F8 00000000 */   nop
    /* 5D7FC 8014F3FC 04D5030C */  jal        func_800F5410
    /* 5D800 8014F400 00000000 */   nop
    /* 5D804 8014F404 0FCF030C */  jal        func_800F3C3C
    /* 5D808 8014F408 12000424 */   addiu     $a0, $zero, 0x12
    /* 5D80C 8014F40C CECF030C */  jal        func_800F3F38
    /* 5D810 8014F410 21204000 */   addu      $a0, $v0, $zero
    /* 5D814 8014F414 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 5D818 8014F418 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 5D81C 8014F41C 00000000 */  nop
    /* 5D820 8014F420 00006290 */  lbu        $v0, 0x0($v1)
    /* 5D824 8014F424 00000000 */  nop
    /* 5D828 8014F428 FD004230 */  andi       $v0, $v0, 0xFD
    /* 5D82C 8014F42C 000062A0 */  sb         $v0, 0x0($v1)
    /* 5D830 8014F430 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 5D834 8014F434 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 5D838 8014F438 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5D83C 8014F43C 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5D840 8014F440 00008290 */  lbu        $v0, 0x0($a0)
    /* 5D844 8014F444 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5D848 8014F448 02004014 */  bnez       $v0, .L8014F454
    /* 5D84C 8014F44C 00000000 */   nop
    /* 5D850 8014F450 02006334 */  ori        $v1, $v1, 0x2
  .L8014F454:
    /* 5D854 8014F454 F0D4030C */  jal        func_800F53C0
    /* 5D858 8014F458 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5D85C 8014F45C 39004010 */  beqz       $v0, .L8014F544
    /* 5D860 8014F460 00000000 */   nop
    /* 5D864 8014F464 353D0508 */  j          .L8014F4D4
    /* 5D868 8014F468 00000000 */   nop
  .L8014F46C:
    /* 5D86C 8014F46C 04D5030C */  jal        func_800F5410
    /* 5D870 8014F470 00000000 */   nop
    /* 5D874 8014F474 0FCF030C */  jal        func_800F3C3C
    /* 5D878 8014F478 12000424 */   addiu     $a0, $zero, 0x12
    /* 5D87C 8014F47C CECF030C */  jal        func_800F3F38
    /* 5D880 8014F480 21204000 */   addu      $a0, $v0, $zero
    /* 5D884 8014F484 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 5D888 8014F488 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 5D88C 8014F48C 00000000 */  nop
    /* 5D890 8014F490 00006290 */  lbu        $v0, 0x0($v1)
    /* 5D894 8014F494 00000000 */  nop
    /* 5D898 8014F498 FD004230 */  andi       $v0, $v0, 0xFD
    /* 5D89C 8014F49C 000062A0 */  sb         $v0, 0x0($v1)
    /* 5D8A0 8014F4A0 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 5D8A4 8014F4A4 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 5D8A8 8014F4A8 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5D8AC 8014F4AC 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5D8B0 8014F4B0 00008290 */  lbu        $v0, 0x0($a0)
    /* 5D8B4 8014F4B4 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5D8B8 8014F4B8 02004014 */  bnez       $v0, .L8014F4C4
    /* 5D8BC 8014F4BC 00000000 */   nop
    /* 5D8C0 8014F4C0 02006334 */  ori        $v1, $v1, 0x2
  .L8014F4C4:
    /* 5D8C4 8014F4C4 F0D4030C */  jal        func_800F53C0
    /* 5D8C8 8014F4C8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5D8CC 8014F4CC 1D004014 */  bnez       $v0, .L8014F544
    /* 5D8D0 8014F4D0 00000000 */   nop
  .L8014F4D4:
    /* 5D8D4 8014F4D4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5D8D8 8014F4D8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5D8DC 8014F4DC 00000000 */  nop
    /* 5D8E0 8014F4E0 00006290 */  lbu        $v0, 0x0($v1)
    /* 5D8E4 8014F4E4 00030424 */  addiu      $a0, $zero, 0x300
    /* 5D8E8 8014F4E8 27100200 */  nor        $v0, $zero, $v0
    /* 5D8EC 8014F4EC 58E2030C */  jal        func_800F8960
    /* 5D8F0 8014F4F0 000062A0 */   sb        $v0, 0x0($v1)
    /* 5D8F4 8014F4F4 DADA030C */  jal        func_800F6B68
    /* 5D8F8 8014F4F8 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5D8FC 8014F4FC 04D5030C */  jal        func_800F5410
    /* 5D900 8014F500 00000000 */   nop
    /* 5D904 8014F504 0FCF030C */  jal        func_800F3C3C
    /* 5D908 8014F508 13000424 */   addiu     $a0, $zero, 0x13
    /* 5D90C 8014F50C CECF030C */  jal        func_800F3F38
    /* 5D910 8014F510 21204000 */   addu      $a0, $v0, $zero
    /* 5D914 8014F514 5DD5030C */  jal        func_800F5574
    /* 5D918 8014F518 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 5D91C 8014F51C F0D4030C */  jal        func_800F53C0
    /* 5D920 8014F520 00000000 */   nop
    /* 5D924 8014F524 0F004010 */  beqz       $v0, .L8014F564
    /* 5D928 8014F528 00000000 */   nop
    /* 5D92C 8014F52C 5DD5030C */  jal        func_800F5574
    /* 5D930 8014F530 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 5D934 8014F534 F0D4030C */  jal        func_800F53C0
    /* 5D938 8014F538 00000000 */   nop
    /* 5D93C 8014F53C 09004014 */  bnez       $v0, .L8014F564
    /* 5D940 8014F540 00000000 */   nop
  .L8014F544:
    /* 5D944 8014F544 53D9030C */  jal        func_800F654C
    /* 5D948 8014F548 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5D94C 8014F54C 58E2030C */  jal        func_800F8960
    /* 5D950 8014F550 00030424 */   addiu     $a0, $zero, 0x300
    /* 5D954 8014F554 58E2030C */  jal        func_800F8960
    /* 5D958 8014F558 01030424 */   addiu     $a0, $zero, 0x301
    /* 5D95C 8014F55C 5B3D0508 */  j          .L8014F56C
    /* 5D960 8014F560 00000000 */   nop
  .L8014F564:
    /* 5D964 8014F564 58E2030C */  jal        func_800F8960
    /* 5D968 8014F568 01030424 */   addiu     $a0, $zero, 0x301
  .L8014F56C:
    /* 5D96C 8014F56C DADA030C */  jal        func_800F6B68
    /* 5D970 8014F570 E8EB0434 */   ori       $a0, $zero, 0xEBE8
    /* 5D974 8014F574 58E2030C */  jal        func_800F8960
    /* 5D978 8014F578 02030424 */   addiu     $a0, $zero, 0x302
    /* 5D97C 8014F57C DADA030C */  jal        func_800F6B68
    /* 5D980 8014F580 E9EB0434 */   ori       $a0, $zero, 0xEBE9
    /* 5D984 8014F584 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5D988 8014F588 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5D98C 8014F58C 00000000 */  nop
    /* 5D990 8014F590 00006290 */  lbu        $v0, 0x0($v1)
    /* 5D994 8014F594 03030424 */  addiu      $a0, $zero, 0x303
    /* 5D998 8014F598 40004238 */  xori       $v0, $v0, 0x40
    /* 5D99C 8014F59C 58E2030C */  jal        func_800F8960
    /* 5D9A0 8014F5A0 000062A0 */   sb        $v0, 0x0($v1)
    /* 5D9A4 8014F5A4 CF3D0508 */  j          .L8014F73C
    /* 5D9A8 8014F5A8 00000000 */   nop
  .L8014F5AC:
    /* 5D9AC 8014F5AC DADA030C */  jal        func_800F6B68
    /* 5D9B0 8014F5B0 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5D9B4 8014F5B4 0DD9030C */  jal        func_800F6434
    /* 5D9B8 8014F5B8 80800434 */   ori       $a0, $zero, 0x8080
    /* 5D9BC 8014F5BC 1D004014 */  bnez       $v0, .L8014F634
    /* 5D9C0 8014F5C0 00000000 */   nop
    /* 5D9C4 8014F5C4 04D5030C */  jal        func_800F5410
    /* 5D9C8 8014F5C8 00000000 */   nop
    /* 5D9CC 8014F5CC 0FCF030C */  jal        func_800F3C3C
    /* 5D9D0 8014F5D0 12000424 */   addiu     $a0, $zero, 0x12
    /* 5D9D4 8014F5D4 CECF030C */  jal        func_800F3F38
    /* 5D9D8 8014F5D8 21204000 */   addu      $a0, $v0, $zero
    /* 5D9DC 8014F5DC 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 5D9E0 8014F5E0 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 5D9E4 8014F5E4 00000000 */  nop
    /* 5D9E8 8014F5E8 00006290 */  lbu        $v0, 0x0($v1)
    /* 5D9EC 8014F5EC 00000000 */  nop
    /* 5D9F0 8014F5F0 FD004230 */  andi       $v0, $v0, 0xFD
    /* 5D9F4 8014F5F4 000062A0 */  sb         $v0, 0x0($v1)
    /* 5D9F8 8014F5F8 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 5D9FC 8014F5FC 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 5DA00 8014F600 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5DA04 8014F604 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5DA08 8014F608 00008290 */  lbu        $v0, 0x0($a0)
    /* 5DA0C 8014F60C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5DA10 8014F610 02004014 */  bnez       $v0, .L8014F61C
    /* 5DA14 8014F614 00000000 */   nop
    /* 5DA18 8014F618 02006334 */  ori        $v1, $v1, 0x2
  .L8014F61C:
    /* 5DA1C 8014F61C F0D4030C */  jal        func_800F53C0
    /* 5DA20 8014F620 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5DA24 8014F624 33004010 */  beqz       $v0, .L8014F6F4
    /* 5DA28 8014F628 00000000 */   nop
    /* 5DA2C 8014F62C A73D0508 */  j          .L8014F69C
    /* 5DA30 8014F630 00000000 */   nop
  .L8014F634:
    /* 5DA34 8014F634 04D5030C */  jal        func_800F5410
    /* 5DA38 8014F638 00000000 */   nop
    /* 5DA3C 8014F63C 0FCF030C */  jal        func_800F3C3C
    /* 5DA40 8014F640 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DA44 8014F644 CECF030C */  jal        func_800F3F38
    /* 5DA48 8014F648 21204000 */   addu      $a0, $v0, $zero
    /* 5DA4C 8014F64C 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 5DA50 8014F650 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 5DA54 8014F654 00000000 */  nop
    /* 5DA58 8014F658 00006290 */  lbu        $v0, 0x0($v1)
    /* 5DA5C 8014F65C 00000000 */  nop
    /* 5DA60 8014F660 FD004230 */  andi       $v0, $v0, 0xFD
    /* 5DA64 8014F664 000062A0 */  sb         $v0, 0x0($v1)
    /* 5DA68 8014F668 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 5DA6C 8014F66C 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 5DA70 8014F670 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5DA74 8014F674 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5DA78 8014F678 00008290 */  lbu        $v0, 0x0($a0)
    /* 5DA7C 8014F67C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5DA80 8014F680 02004014 */  bnez       $v0, .L8014F68C
    /* 5DA84 8014F684 00000000 */   nop
    /* 5DA88 8014F688 02006334 */  ori        $v1, $v1, 0x2
  .L8014F68C:
    /* 5DA8C 8014F68C F0D4030C */  jal        func_800F53C0
    /* 5DA90 8014F690 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5DA94 8014F694 17004014 */  bnez       $v0, .L8014F6F4
    /* 5DA98 8014F698 00000000 */   nop
  .L8014F69C:
    /* 5DA9C 8014F69C 58E2030C */  jal        func_800F8960
    /* 5DAA0 8014F6A0 00030424 */   addiu     $a0, $zero, 0x300
    /* 5DAA4 8014F6A4 DADA030C */  jal        func_800F6B68
    /* 5DAA8 8014F6A8 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5DAAC 8014F6AC 04D5030C */  jal        func_800F5410
    /* 5DAB0 8014F6B0 00000000 */   nop
    /* 5DAB4 8014F6B4 0FCF030C */  jal        func_800F3C3C
    /* 5DAB8 8014F6B8 13000424 */   addiu     $a0, $zero, 0x13
    /* 5DABC 8014F6BC CECF030C */  jal        func_800F3F38
    /* 5DAC0 8014F6C0 21204000 */   addu      $a0, $v0, $zero
    /* 5DAC4 8014F6C4 5DD5030C */  jal        func_800F5574
    /* 5DAC8 8014F6C8 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 5DACC 8014F6CC F0D4030C */  jal        func_800F53C0
    /* 5DAD0 8014F6D0 00000000 */   nop
    /* 5DAD4 8014F6D4 0F004010 */  beqz       $v0, .L8014F714
    /* 5DAD8 8014F6D8 00000000 */   nop
    /* 5DADC 8014F6DC 5DD5030C */  jal        func_800F5574
    /* 5DAE0 8014F6E0 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 5DAE4 8014F6E4 F0D4030C */  jal        func_800F53C0
    /* 5DAE8 8014F6E8 00000000 */   nop
    /* 5DAEC 8014F6EC 09004014 */  bnez       $v0, .L8014F714
    /* 5DAF0 8014F6F0 00000000 */   nop
  .L8014F6F4:
    /* 5DAF4 8014F6F4 53D9030C */  jal        func_800F654C
    /* 5DAF8 8014F6F8 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5DAFC 8014F6FC 58E2030C */  jal        func_800F8960
    /* 5DB00 8014F700 00030424 */   addiu     $a0, $zero, 0x300
    /* 5DB04 8014F704 58E2030C */  jal        func_800F8960
    /* 5DB08 8014F708 01030424 */   addiu     $a0, $zero, 0x301
    /* 5DB0C 8014F70C C73D0508 */  j          .L8014F71C
    /* 5DB10 8014F710 00000000 */   nop
  .L8014F714:
    /* 5DB14 8014F714 58E2030C */  jal        func_800F8960
    /* 5DB18 8014F718 01030424 */   addiu     $a0, $zero, 0x301
  .L8014F71C:
    /* 5DB1C 8014F71C DADA030C */  jal        func_800F6B68
    /* 5DB20 8014F720 E8EB0434 */   ori       $a0, $zero, 0xEBE8
    /* 5DB24 8014F724 58E2030C */  jal        func_800F8960
    /* 5DB28 8014F728 02030424 */   addiu     $a0, $zero, 0x302
    /* 5DB2C 8014F72C DADA030C */  jal        func_800F6B68
    /* 5DB30 8014F730 E9EB0434 */   ori       $a0, $zero, 0xEBE9
    /* 5DB34 8014F734 58E2030C */  jal        func_800F8960
    /* 5DB38 8014F738 03030424 */   addiu     $a0, $zero, 0x303
  .L8014F73C:
    /* 5DB3C 8014F73C 90D8030C */  jal        func_800F6240
    /* 5DB40 8014F740 50F20434 */   ori       $a0, $zero, 0xF250
    /* 5DB44 8014F744 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5DB48 8014F748 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5DB4C 8014F74C 00000000 */  nop
    /* 5DB50 8014F750 00006294 */  lhu        $v0, 0x0($v1)
    /* 5DB54 8014F754 00000000 */  nop
    /* 5DB58 8014F758 04004224 */  addiu      $v0, $v0, 0x4
    /* 5DB5C 8014F75C 000062A4 */  sh         $v0, 0x0($v1)
    /* 5DB60 8014F760 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 5DB64 8014F764 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 5DB68 8014F768 00000000 */  nop
    /* 5DB6C 8014F76C 0000A294 */  lhu        $v0, 0x0($a1)
    /* 5DB70 8014F770 0E000424 */  addiu      $a0, $zero, 0xE
    /* 5DB74 8014F774 04004224 */  addiu      $v0, $v0, 0x4
    /* 5DB78 8014F778 0FCF030C */  jal        func_800F3C3C
    /* 5DB7C 8014F77C 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 5DB80 8014F780 ABD5030C */  jal        func_800F56AC
    /* 5DB84 8014F784 21204000 */   addu      $a0, $v0, $zero
    /* 5DB88 8014F788 F5D4030C */  jal        func_800F53D4
    /* 5DB8C 8014F78C 00000000 */   nop
    /* 5DB90 8014F790 FAFE4010 */  beqz       $v0, .L8014F37C
    /* 5DB94 8014F794 00000000 */   nop
    /* 5DB98 8014F798 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5DB9C 8014F79C 00000000 */  nop
    /* 5DBA0 8014F7A0 0800E003 */  jr         $ra
    /* 5DBA4 8014F7A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014F2CC
