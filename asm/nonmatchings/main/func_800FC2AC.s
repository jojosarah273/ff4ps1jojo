nonmatching func_800FC2AC, 0x29C

glabel func_800FC2AC
    /* A6AC 800FC2AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A6B0 800FC2B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* A6B4 800FC2B4 84DC030C */  jal        func_800F7210
    /* A6B8 800FC2B8 00180424 */   addiu     $a0, $zero, 0x1800
    /* A6BC 800FC2BC 56D6030C */  jal        func_800F5958
    /* A6C0 800FC2C0 B7010424 */   addiu     $a0, $zero, 0x1B7
    /* A6C4 800FC2C4 F0D4030C */  jal        func_800F53C0
    /* A6C8 800FC2C8 00000000 */   nop
    /* A6CC 800FC2CC 0B004010 */  beqz       $v0, .L800FC2FC
    /* A6D0 800FC2D0 00000000 */   nop
    /* A6D4 800FC2D4 56D6030C */  jal        func_800F5958
    /* A6D8 800FC2D8 B9010424 */   addiu     $a0, $zero, 0x1B9
    /* A6DC 800FC2DC F0D4030C */  jal        func_800F53C0
    /* A6E0 800FC2E0 00000000 */   nop
    /* A6E4 800FC2E4 05004014 */  bnez       $v0, .L800FC2FC
    /* A6E8 800FC2E8 00000000 */   nop
    /* A6EC 800FC2EC 53D9030C */  jal        func_800F654C
    /* A6F0 800FC2F0 10000424 */   addiu     $a0, $zero, 0x10
    /* A6F4 800FC2F4 62E0030C */  jal        func_800F8188
    /* A6F8 800FC2F8 02180424 */   addiu     $a0, $zero, 0x1802
  .L800FC2FC:
    /* A6FC 800FC2FC 59D9030C */  jal        func_800F6564
    /* A700 800FC300 00170424 */   addiu     $a0, $zero, 0x1700
    /* A704 800FC304 5DD5030C */  jal        func_800F5574
    /* A708 800FC308 03000424 */   addiu     $a0, $zero, 0x3
    /* A70C 800FC30C F5D4030C */  jal        func_800F53D4
    /* A710 800FC310 00000000 */   nop
    /* A714 800FC314 2A004010 */  beqz       $v0, .L800FC3C0
    /* A718 800FC318 00000000 */   nop
    /* A71C 800FC31C 59D9030C */  jal        func_800F6564
    /* A720 800FC320 01170424 */   addiu     $a0, $zero, 0x1701
    /* A724 800FC324 0DD9030C */  jal        func_800F6434
    /* A728 800FC328 02000424 */   addiu     $a0, $zero, 0x2
    /* A72C 800FC32C 24004014 */  bnez       $v0, .L800FC3C0
    /* A730 800FC330 00000000 */   nop
    /* A734 800FC334 59D9030C */  jal        func_800F6564
    /* A738 800FC338 02170424 */   addiu     $a0, $zero, 0x1702
    /* A73C 800FC33C 5DD5030C */  jal        func_800F5574
    /* A740 800FC340 5A000424 */   addiu     $a0, $zero, 0x5A
    /* A744 800FC344 F0D4030C */  jal        func_800F53C0
    /* A748 800FC348 00000000 */   nop
    /* A74C 800FC34C 07004010 */  beqz       $v0, .L800FC36C
    /* A750 800FC350 00000000 */   nop
    /* A754 800FC354 5DD5030C */  jal        func_800F5574
    /* A758 800FC358 5D000424 */   addiu     $a0, $zero, 0x5D
    /* A75C 800FC35C F0D4030C */  jal        func_800F53C0
    /* A760 800FC360 00000000 */   nop
    /* A764 800FC364 0D004010 */  beqz       $v0, .L800FC39C
    /* A768 800FC368 00000000 */   nop
  .L800FC36C:
    /* A76C 800FC36C 5DD5030C */  jal        func_800F5574
    /* A770 800FC370 67000424 */   addiu     $a0, $zero, 0x67
    /* A774 800FC374 F0D4030C */  jal        func_800F53C0
    /* A778 800FC378 00000000 */   nop
    /* A77C 800FC37C 10004010 */  beqz       $v0, .L800FC3C0
    /* A780 800FC380 00000000 */   nop
    /* A784 800FC384 5DD5030C */  jal        func_800F5574
    /* A788 800FC388 7F000424 */   addiu     $a0, $zero, 0x7F
    /* A78C 800FC38C F0D4030C */  jal        func_800F53C0
    /* A790 800FC390 00000000 */   nop
    /* A794 800FC394 0A004014 */  bnez       $v0, .L800FC3C0
    /* A798 800FC398 00000000 */   nop
  .L800FC39C:
    /* A79C 800FC39C 59D9030C */  jal        func_800F6564
    /* A7A0 800FC3A0 01180424 */   addiu     $a0, $zero, 0x1801
    /* A7A4 800FC3A4 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* A7A8 800FC3A8 00000000 */  nop
    /* A7AC 800FC3AC 00006290 */  lbu        $v0, 0x0($v1)
    /* A7B0 800FC3B0 01180424 */  addiu      $a0, $zero, 0x1801
    /* A7B4 800FC3B4 80004234 */  ori        $v0, $v0, 0x80
    /* A7B8 800FC3B8 62E0030C */  jal        func_800F8188
    /* A7BC 800FC3BC 000062A0 */   sb        $v0, 0x0($v1)
  .L800FC3C0:
    /* A7C0 800FC3C0 FEEC030C */  jal        func_800FB3F8
    /* A7C4 800FC3C4 00000000 */   nop
    /* A7C8 800FC3C8 B6E4030C */  jal        func_800F92D8
    /* A7CC 800FC3CC 00000000 */   nop
    /* A7D0 800FC3D0 2ED5030C */  jal        func_800F54B8
    /* A7D4 800FC3D4 00000000 */   nop
    /* A7D8 800FC3D8 1342050C */  jal        func_8015084C
    /* A7DC 800FC3DC 00000000 */   nop
    /* A7E0 800FC3E0 52F1030C */  jal        func_800FC548
    /* A7E4 800FC3E4 00000000 */   nop
    /* A7E8 800FC3E8 4EE5030C */  jal        func_800F9538
    /* A7EC 800FC3EC 00000000 */   nop
    /* A7F0 800FC3F0 59D9030C */  jal        func_800F6564
    /* A7F4 800FC3F4 03180424 */   addiu     $a0, $zero, 0x1803
    /* A7F8 800FC3F8 0DD9030C */  jal        func_800F6434
    /* A7FC 800FC3FC 80800434 */   ori       $a0, $zero, 0x8080
    /* A800 800FC400 0C004014 */  bnez       $v0, .L800FC434
    /* A804 800FC404 00000000 */   nop
    /* A808 800FC408 B4D8050C */  jal        func_801762D0
    /* A80C 800FC40C 00000000 */   nop
    /* A810 800FC410 5000838F */  lw         $v1, %gp_rel(D_8019ED4C)($gp)
    /* A814 800FC414 01000224 */  addiu      $v0, $zero, 0x1
    /* A818 800FC418 0D80013C */  lui        $at, %hi(D_800D2126)
    /* A81C 800FC41C 262122A0 */  sb         $v0, %lo(D_800D2126)($at)
    /* A820 800FC420 FF020224 */  addiu      $v0, $zero, 0x2FF
    /* A824 800FC424 C01E060C */  jal        func_80187B00
    /* A828 800FC428 000062A4 */   sh        $v0, 0x0($v1)
    /* A82C 800FC42C 4EF10308 */  j          .L800FC538
    /* A830 800FC430 01000224 */   addiu     $v0, $zero, 0x1
  .L800FC434:
    /* A834 800FC434 8CD9030C */  jal        func_800F6630
    /* A838 800FC438 C6000424 */   addiu     $a0, $zero, 0xC6
    /* A83C 800FC43C 0DD9030C */  jal        func_800F6434
    /* A840 800FC440 02000424 */   addiu     $a0, $zero, 0x2
    /* A844 800FC444 07004014 */  bnez       $v0, .L800FC464
    /* A848 800FC448 00000000 */   nop
    /* A84C 800FC44C 62E0030C */  jal        func_800F8188
    /* A850 800FC450 04180424 */   addiu     $a0, $zero, 0x1804
    /* A854 800FC454 EEE3030C */  jal        func_800F8FB8
    /* A858 800FC458 C6000424 */   addiu     $a0, $zero, 0xC6
    /* A85C 800FC45C 3BF10308 */  j          .L800FC4EC
    /* A860 800FC460 00000000 */   nop
  .L800FC464:
    /* A864 800FC464 59D9030C */  jal        func_800F6564
    /* A868 800FC468 04180424 */   addiu     $a0, $zero, 0x1804
    /* A86C 800FC46C C1CE030C */  jal        func_800F3B04
    /* A870 800FC470 05180424 */   addiu     $a0, $zero, 0x1805
    /* A874 800FC474 31DE030C */  jal        func_800F78C4
    /* A878 800FC478 21204000 */   addu      $a0, $v0, $zero
    /* A87C 800FC47C C1CE030C */  jal        func_800F3B04
    /* A880 800FC480 06180424 */   addiu     $a0, $zero, 0x1806
    /* A884 800FC484 31DE030C */  jal        func_800F78C4
    /* A888 800FC488 21204000 */   addu      $a0, $v0, $zero
    /* A88C 800FC48C C1CE030C */  jal        func_800F3B04
    /* A890 800FC490 07180424 */   addiu     $a0, $zero, 0x1807
    /* A894 800FC494 31DE030C */  jal        func_800F78C4
    /* A898 800FC498 21204000 */   addu      $a0, $v0, $zero
    /* A89C 800FC49C C1CE030C */  jal        func_800F3B04
    /* A8A0 800FC4A0 08180424 */   addiu     $a0, $zero, 0x1808
    /* A8A4 800FC4A4 31DE030C */  jal        func_800F78C4
    /* A8A8 800FC4A8 21204000 */   addu      $a0, $v0, $zero
    /* A8AC 800FC4AC C1CE030C */  jal        func_800F3B04
    /* A8B0 800FC4B0 09180424 */   addiu     $a0, $zero, 0x1809
    /* A8B4 800FC4B4 31DE030C */  jal        func_800F78C4
    /* A8B8 800FC4B8 21204000 */   addu      $a0, $v0, $zero
    /* A8BC 800FC4BC C1CE030C */  jal        func_800F3B04
    /* A8C0 800FC4C0 0A180424 */   addiu     $a0, $zero, 0x180A
    /* A8C4 800FC4C4 31DE030C */  jal        func_800F78C4
    /* A8C8 800FC4C8 21204000 */   addu      $a0, $v0, $zero
    /* A8CC 800FC4CC C1CE030C */  jal        func_800F3B04
    /* A8D0 800FC4D0 0B180424 */   addiu     $a0, $zero, 0x180B
    /* A8D4 800FC4D4 31DE030C */  jal        func_800F78C4
    /* A8D8 800FC4D8 21204000 */   addu      $a0, $v0, $zero
    /* A8DC 800FC4DC 46DE030C */  jal        func_800F7918
    /* A8E0 800FC4E0 02000424 */   addiu     $a0, $zero, 0x2
    /* A8E4 800FC4E4 05004014 */  bnez       $v0, .L800FC4FC
    /* A8E8 800FC4E8 00000000 */   nop
  .L800FC4EC:
    /* A8EC 800FC4EC D77A040C */  jal        func_8011EB5C
    /* A8F0 800FC4F0 00000000 */   nop
    /* A8F4 800FC4F4 52F1030C */  jal        func_800FC548
    /* A8F8 800FC4F8 00000000 */   nop
  .L800FC4FC:
    /* A8FC 800FC4FC 53D9030C */  jal        func_800F654C
    /* A900 800FC500 80000424 */   addiu     $a0, $zero, 0x80
    /* A904 800FC504 62E0030C */  jal        func_800F8188
    /* A908 800FC508 00210424 */   addiu     $a0, $zero, 0x2100
    /* A90C 800FC50C 59D9030C */  jal        func_800F6564
    /* A910 800FC510 00170424 */   addiu     $a0, $zero, 0x1700
    /* A914 800FC514 5DD5030C */  jal        func_800F5574
    /* A918 800FC518 03000424 */   addiu     $a0, $zero, 0x3
    /* A91C 800FC51C F5D4030C */  jal        func_800F53D4
    /* A920 800FC520 00000000 */   nop
    /* A924 800FC524 04004010 */  beqz       $v0, .L800FC538
    /* A928 800FC528 21100000 */   addu      $v0, $zero, $zero
    /* A92C 800FC52C 9D32040C */  jal        func_8010CA74
    /* A930 800FC530 00000000 */   nop
    /* A934 800FC534 21100000 */  addu       $v0, $zero, $zero
  .L800FC538:
    /* A938 800FC538 1000BF8F */  lw         $ra, 0x10($sp)
    /* A93C 800FC53C 00000000 */  nop
    /* A940 800FC540 0800E003 */  jr         $ra
    /* A944 800FC544 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC2AC
