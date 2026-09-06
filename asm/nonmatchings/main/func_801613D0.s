nonmatching func_801613D0, 0x200

glabel func_801613D0
    /* 6F7D0 801613D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F7D4 801613D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F7D8 801613D8 53D9030C */  jal        func_800F654C
    /* 6F7DC 801613DC C1000424 */   addiu     $a0, $zero, 0xC1
    /* 6F7E0 801613E0 62E0030C */  jal        func_800F8188
    /* 6F7E4 801613E4 C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 6F7E8 801613E8 C7E5030C */  jal        func_800F971C
    /* 6F7EC 801613EC 00000000 */   nop
    /* 6F7F0 801613F0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6F7F4 801613F4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6F7F8 801613F8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6F7FC 801613FC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6F800 80161400 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F804 80161404 00000000 */  nop
    /* 6F808 80161408 000082A4 */  sh         $v0, 0x0($a0)
    /* 6F80C 8016140C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6F810 80161410 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6F814 80161414 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6F818 80161418 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6F81C 8016141C 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F820 80161420 00000000 */  nop
    /* 6F824 80161424 000082A4 */  sh         $v0, 0x0($a0)
  .L80161428:
    /* 6F828 80161428 DADA030C */  jal        func_800F6B68
    /* 6F82C 8016142C 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6F830 80161430 5DD5030C */  jal        func_800F5574
    /* 6F834 80161434 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6F838 80161438 F5D4030C */  jal        func_800F53D4
    /* 6F83C 8016143C 00000000 */   nop
    /* 6F840 80161440 19004014 */  bnez       $v0, .L801614A8
    /* 6F844 80161444 00000000 */   nop
    /* 6F848 80161448 EFD8030C */  jal        func_800F63BC
    /* 6F84C 8016144C 00000000 */   nop
    /* 6F850 80161450 D9D8030C */  jal        func_800F6364
    /* 6F854 80161454 00000000 */   nop
    /* 6F858 80161458 D9D8030C */  jal        func_800F6364
    /* 6F85C 8016145C 00000000 */   nop
    /* 6F860 80161460 D9D8030C */  jal        func_800F6364
    /* 6F864 80161464 00000000 */   nop
    /* 6F868 80161468 D9D8030C */  jal        func_800F6364
    /* 6F86C 8016146C 00000000 */   nop
    /* 6F870 80161470 56D6030C */  jal        func_800F5958
    /* 6F874 80161474 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6F878 80161478 F5D4030C */  jal        func_800F53D4
    /* 6F87C 8016147C 00000000 */   nop
    /* 6F880 80161480 E9FF4010 */  beqz       $v0, .L80161428
    /* 6F884 80161484 00000000 */   nop
  .L80161488:
    /* 6F888 80161488 A74C050C */  jal        func_8015329C
    /* 6F88C 8016148C 00000000 */   nop
    /* 6F890 80161490 53D9030C */  jal        func_800F654C
    /* 6F894 80161494 0F000424 */   addiu     $a0, $zero, 0xF
    /* 6F898 80161498 62E0030C */  jal        func_800F8188
    /* 6F89C 8016149C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 6F8A0 801614A0 68850508 */  j          .L801615A0
    /* 6F8A4 801614A4 00000000 */   nop
  .L801614A8:
    /* 6F8A8 801614A8 DADA030C */  jal        func_800F6B68
    /* 6F8AC 801614AC 1A320424 */   addiu     $a0, $zero, 0x321A
    /* 6F8B0 801614B0 92D0030C */  jal        func_800F4248
    /* 6F8B4 801614B4 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6F8B8 801614B8 DAE1030C */  jal        func_800F8768
    /* 6F8BC 801614BC 1A320424 */   addiu     $a0, $zero, 0x321A
    /* 6F8C0 801614C0 DADA030C */  jal        func_800F6B68
    /* 6F8C4 801614C4 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F8C8 801614C8 5DD5030C */  jal        func_800F5574
    /* 6F8CC 801614CC 01000424 */   addiu     $a0, $zero, 0x1
    /* 6F8D0 801614D0 F0D4030C */  jal        func_800F53C0
    /* 6F8D4 801614D4 00000000 */   nop
    /* 6F8D8 801614D8 EBFF4010 */  beqz       $v0, .L80161488
    /* 6F8DC 801614DC 00000000 */   nop
    /* 6F8E0 801614E0 20D5030C */  jal        func_800F5480
    /* 6F8E4 801614E4 00000000 */   nop
    /* 6F8E8 801614E8 DADA030C */  jal        func_800F6B68
    /* 6F8EC 801614EC 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F8F0 801614F0 16E0030C */  jal        func_800F8058
    /* 6F8F4 801614F4 01000424 */   addiu     $a0, $zero, 0x1
    /* 6F8F8 801614F8 DAE1030C */  jal        func_800F8768
    /* 6F8FC 801614FC 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F900 80161500 F5D4030C */  jal        func_800F53D4
    /* 6F904 80161504 00000000 */   nop
    /* 6F908 80161508 09004010 */  beqz       $v0, .L80161530
    /* 6F90C 8016150C 00000000 */   nop
    /* 6F910 80161510 3BE4030C */  jal        func_800F90EC
    /* 6F914 80161514 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F918 80161518 3BE4030C */  jal        func_800F90EC
    /* 6F91C 8016151C 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6F920 80161520 53D9030C */  jal        func_800F654C
    /* 6F924 80161524 80000424 */   addiu     $a0, $zero, 0x80
    /* 6F928 80161528 DAE1030C */  jal        func_800F8768
    /* 6F92C 8016152C 1A320424 */   addiu     $a0, $zero, 0x321A
  .L80161530:
    /* 6F930 80161530 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 6F934 80161534 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 6F938 80161538 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 6F93C 8016153C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 6F940 80161540 00004390 */  lbu        $v1, 0x0($v0)
    /* 6F944 80161544 01000424 */  addiu      $a0, $zero, 0x1
    /* 6F948 80161548 93E0030C */  jal        func_800F824C
    /* 6F94C 8016154C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 6F950 80161550 53D9030C */  jal        func_800F654C
    /* 6F954 80161554 06000424 */   addiu     $a0, $zero, 0x6
    /* 6F958 80161558 0E43050C */  jal        func_80150C38
    /* 6F95C 8016155C 00000000 */   nop
    /* 6F960 80161560 53D9030C */  jal        func_800F654C
    /* 6F964 80161564 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 6F968 80161568 62E0030C */  jal        func_800F8188
    /* 6F96C 8016156C D4260424 */   addiu     $a0, $zero, 0x26D4
    /* 6F970 80161570 53D9030C */  jal        func_800F654C
    /* 6F974 80161574 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6F978 80161578 62E0030C */  jal        func_800F8188
    /* 6F97C 8016157C D2260424 */   addiu     $a0, $zero, 0x26D2
    /* 6F980 80161580 90D8030C */  jal        func_800F6240
    /* 6F984 80161584 2A350424 */   addiu     $a0, $zero, 0x352A
    /* 6F988 80161588 C28A010C */  jal        func_80062B08
    /* 6F98C 8016158C 00000000 */   nop
    /* 6F990 80161590 53D9030C */  jal        func_800F654C
    /* 6F994 80161594 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6F998 80161598 62E0030C */  jal        func_800F8188
    /* 6F99C 8016159C C5330424 */   addiu     $a0, $zero, 0x33C5
  .L801615A0:
    /* 6F9A0 801615A0 53D9030C */  jal        func_800F654C
    /* 6F9A4 801615A4 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6F9A8 801615A8 62E0030C */  jal        func_800F8188
    /* 6F9AC 801615AC C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 6F9B0 801615B0 53D9030C */  jal        func_800F654C
    /* 6F9B4 801615B4 10000424 */   addiu     $a0, $zero, 0x10
    /* 6F9B8 801615B8 62E0030C */  jal        func_800F8188
    /* 6F9BC 801615BC C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 6F9C0 801615C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F9C4 801615C4 00000000 */  nop
    /* 6F9C8 801615C8 0800E003 */  jr         $ra
    /* 6F9CC 801615CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801613D0
