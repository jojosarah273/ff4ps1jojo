nonmatching func_8015F3E0, 0x1C0

glabel func_8015F3E0
    /* 6D7E0 8015F3E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D7E4 8015F3E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D7E8 8015F3E8 AB82050C */  jal        func_80160AAC
    /* 6D7EC 8015F3EC 00000000 */   nop
    /* 6D7F0 8015F3F0 59D9030C */  jal        func_800F6564
    /* 6D7F4 8015F3F4 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D7F8 8015F3F8 0DD9030C */  jal        func_800F6434
    /* 6D7FC 8015F3FC 80800434 */   ori       $a0, $zero, 0x8080
    /* 6D800 8015F400 09004014 */  bnez       $v0, .L8015F428
    /* 6D804 8015F404 00000000 */   nop
    /* 6D808 8015F408 92D0030C */  jal        func_800F4248
    /* 6D80C 8015F40C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6D810 8015F410 62E0030C */  jal        func_800F8188
    /* 6D814 8015F414 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6D818 8015F418 2394010C */  jal        func_8006508C
    /* 6D81C 8015F41C 00000000 */   nop
    /* 6D820 8015F420 647D0508 */  j          .L8015F590
    /* 6D824 8015F424 00000000 */   nop
  .L8015F428:
    /* 6D828 8015F428 59D9030C */  jal        func_800F6564
    /* 6D82C 8015F42C 2C270424 */   addiu     $a0, $zero, 0x272C
    /* 6D830 8015F430 A0D0030C */  jal        func_800F4280
    /* 6D834 8015F434 A4280424 */   addiu     $a0, $zero, 0x28A4
    /* 6D838 8015F438 48D0030C */  jal        func_800F4120
    /* 6D83C 8015F43C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6D840 8015F440 05004014 */  bnez       $v0, .L8015F458
    /* 6D844 8015F444 00000000 */   nop
    /* 6D848 8015F448 3182050C */  jal        func_801608C4
    /* 6D84C 8015F44C 00000000 */   nop
    /* 6D850 8015F450 647D0508 */  j          .L8015F590
    /* 6D854 8015F454 00000000 */   nop
  .L8015F458:
    /* 6D858 8015F458 59D9030C */  jal        func_800F6564
    /* 6D85C 8015F45C 04270424 */   addiu     $a0, $zero, 0x2704
    /* 6D860 8015F460 92D0030C */  jal        func_800F4248
    /* 6D864 8015F464 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 6D868 8015F468 93E0030C */  jal        func_800F824C
    /* 6D86C 8015F46C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6D870 8015F470 59D9030C */  jal        func_800F6564
    /* 6D874 8015F474 04270424 */   addiu     $a0, $zero, 0x2704
    /* 6D878 8015F478 92D0030C */  jal        func_800F4248
    /* 6D87C 8015F47C 03000424 */   addiu     $a0, $zero, 0x3
    /* 6D880 8015F480 04D5030C */  jal        func_800F5410
    /* 6D884 8015F484 00000000 */   nop
    /* 6D888 8015F488 02D0030C */  jal        func_800F4008
    /* 6D88C 8015F48C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6D890 8015F490 5DD5030C */  jal        func_800F5574
    /* 6D894 8015F494 04000424 */   addiu     $a0, $zero, 0x4
    /* 6D898 8015F498 F0D4030C */  jal        func_800F53C0
    /* 6D89C 8015F49C 00000000 */   nop
    /* 6D8A0 8015F4A0 09004010 */  beqz       $v0, .L8015F4C8
    /* 6D8A4 8015F4A4 00000000 */   nop
    /* 6D8A8 8015F4A8 8CD9030C */  jal        func_800F6630
    /* 6D8AC 8015F4AC AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6D8B0 8015F4B0 62E0030C */  jal        func_800F8188
    /* 6D8B4 8015F4B4 04270424 */   addiu     $a0, $zero, 0x2704
    /* 6D8B8 8015F4B8 3395010C */  jal        func_800654CC
    /* 6D8BC 8015F4BC 00000000 */   nop
    /* 6D8C0 8015F4C0 647D0508 */  j          .L8015F590
    /* 6D8C4 8015F4C4 00000000 */   nop
  .L8015F4C8:
    /* 6D8C8 8015F4C8 0FCF030C */  jal        func_800F3C3C
    /* 6D8CC 8015F4CC AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6D8D0 8015F4D0 31DE030C */  jal        func_800F78C4
    /* 6D8D4 8015F4D4 21204000 */   addu      $a0, $v0, $zero
    /* 6D8D8 8015F4D8 62E0030C */  jal        func_800F8188
    /* 6D8DC 8015F4DC 04270424 */   addiu     $a0, $zero, 0x2704
    /* 6D8E0 8015F4E0 53D9030C */  jal        func_800F654C
    /* 6D8E4 8015F4E4 07000424 */   addiu     $a0, $zero, 0x7
    /* 6D8E8 8015F4E8 93E0030C */  jal        func_800F824C
    /* 6D8EC 8015F4EC D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6D8F0 8015F4F0 8CD9030C */  jal        func_800F6630
    /* 6D8F4 8015F4F4 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6D8F8 8015F4F8 DD68050C */  jal        func_8015A374
    /* 6D8FC 8015F4FC 00000000 */   nop
    /* 6D900 8015F500 53D9030C */  jal        func_800F654C
    /* 6D904 8015F504 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6D908 8015F508 DD4C050C */  jal        func_80153374
    /* 6D90C 8015F50C 00000000 */   nop
    /* 6D910 8015F510 53D9030C */  jal        func_800F654C
    /* 6D914 8015F514 40000424 */   addiu     $a0, $zero, 0x40
    /* 6D918 8015F518 DAE1030C */  jal        func_800F8768
    /* 6D91C 8015F51C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6D920 8015F520 8CD9030C */  jal        func_800F6630
    /* 6D924 8015F524 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6D928 8015F528 50D4030C */  jal        func_800F5140
    /* 6D92C 8015F52C 00000000 */   nop
    /* 6D930 8015F530 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D934 8015F534 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D938 8015F538 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D93C 8015F53C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D940 8015F540 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D944 8015F544 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6D948 8015F548 DADA030C */  jal        func_800F6B68
    /* 6D94C 8015F54C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6D950 8015F550 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6D954 8015F554 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6D958 8015F558 00000000 */  nop
    /* 6D95C 8015F55C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6D960 8015F560 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6D964 8015F564 08004234 */  ori        $v0, $v0, 0x8
    /* 6D968 8015F568 DAE1030C */  jal        func_800F8768
    /* 6D96C 8015F56C 000062A0 */   sb        $v0, 0x0($v1)
    /* 6D970 8015F570 8CD9030C */  jal        func_800F6630
    /* 6D974 8015F574 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 6D978 8015F578 DAE1030C */  jal        func_800F8768
    /* 6D97C 8015F57C 442B0424 */   addiu     $a0, $zero, 0x2B44
    /* 6D980 8015F580 8CD9030C */  jal        func_800F6630
    /* 6D984 8015F584 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 6D988 8015F588 DAE1030C */  jal        func_800F8768
    /* 6D98C 8015F58C 452B0424 */   addiu     $a0, $zero, 0x2B45
  .L8015F590:
    /* 6D990 8015F590 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D994 8015F594 00000000 */  nop
    /* 6D998 8015F598 0800E003 */  jr         $ra
    /* 6D99C 8015F59C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F3E0
