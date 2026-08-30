nonmatching func_80101350, 0x438

glabel func_80101350
    /* F750 80101350 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* F754 80101354 1000BFAF */  sw         $ra, 0x10($sp)
    /* F758 80101358 EEE3030C */  jal        func_800F8FB8
    /* F75C 8010135C CD000424 */   addiu     $a0, $zero, 0xCD
    /* F760 80101360 8CD9030C */  jal        func_800F6630
    /* F764 80101364 AB000424 */   addiu     $a0, $zero, 0xAB
    /* F768 80101368 0DD9030C */  jal        func_800F6434
    /* F76C 8010136C 02020424 */   addiu     $a0, $zero, 0x202
    /* F770 80101370 03004014 */  bnez       $v0, .L80101380
    /* F774 80101374 00000000 */   nop
    /* F778 80101378 EEE3030C */  jal        func_800F8FB8
    /* F77C 8010137C 7B000424 */   addiu     $a0, $zero, 0x7B
  .L80101380:
    /* F780 80101380 8CD9030C */  jal        func_800F6630
    /* F784 80101384 AC000424 */   addiu     $a0, $zero, 0xAC
    /* F788 80101388 A4E5030C */  jal        func_800F9690
    /* F78C 8010138C 00000000 */   nop
    /* F790 80101390 8CD9030C */  jal        func_800F6630
    /* F794 80101394 7B000424 */   addiu     $a0, $zero, 0x7B
    /* F798 80101398 1A80043C */  lui        $a0, %hi(D_80198AE0)
    /* F79C 8010139C E08A8424 */  addiu      $a0, $a0, %lo(D_80198AE0)
    /* F7A0 801013A0 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* F7A4 801013A4 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* F7A8 801013A8 00006294 */  lhu        $v0, 0x0($v1)
    /* F7AC 801013AC 0000C390 */  lbu        $v1, 0x0($a2)
    /* F7B0 801013B0 21104400 */  addu       $v0, $v0, $a0
    /* F7B4 801013B4 00004590 */  lbu        $a1, 0x0($v0)
    /* F7B8 801013B8 02000424 */  addiu      $a0, $zero, 0x2
    /* F7BC 801013BC 24186500 */  and        $v1, $v1, $a1
    /* F7C0 801013C0 48D0030C */  jal        func_800F4120
    /* F7C4 801013C4 0000C3A0 */   sb        $v1, 0x0($a2)
    /* F7C8 801013C8 05004014 */  bnez       $v0, .L801013E0
    /* F7CC 801013CC 00000000 */   nop
    /* F7D0 801013D0 EEE3030C */  jal        func_800F8FB8
    /* F7D4 801013D4 D5000424 */   addiu     $a0, $zero, 0xD5
    /* F7D8 801013D8 DE050408 */  j          .L80101778
    /* F7DC 801013DC 00000000 */   nop
  .L801013E0:
    /* F7E0 801013E0 53D9030C */  jal        func_800F654C
    /* F7E4 801013E4 01000424 */   addiu     $a0, $zero, 0x1
    /* F7E8 801013E8 93E0030C */  jal        func_800F824C
    /* F7EC 801013EC D5000424 */   addiu     $a0, $zero, 0xD5
    /* F7F0 801013F0 0C0B040C */  jal        func_80102C30
    /* F7F4 801013F4 00000000 */   nop
    /* F7F8 801013F8 DDE3030C */  jal        func_800F8F74
    /* F7FC 801013FC 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* F800 80101400 59D9030C */  jal        func_800F6564
    /* F804 80101404 04170424 */   addiu     $a0, $zero, 0x1704
    /* F808 80101408 0DD9030C */  jal        func_800F6434
    /* F80C 8010140C 02020424 */   addiu     $a0, $zero, 0x202
    /* F810 80101410 03004014 */  bnez       $v0, .L80101420
    /* F814 80101414 00000000 */   nop
    /* F818 80101418 90D8030C */  jal        func_800F6240
    /* F81C 8010141C 021A0424 */   addiu     $a0, $zero, 0x1A02
  .L80101420:
    /* F820 80101420 59D9030C */  jal        func_800F6564
    /* F824 80101424 04170424 */   addiu     $a0, $zero, 0x1704
    /* F828 80101428 5DD5030C */  jal        func_800F5574
    /* F82C 8010142C 04000424 */   addiu     $a0, $zero, 0x4
    /* F830 80101430 F5D4030C */  jal        func_800F53D4
    /* F834 80101434 00000000 */   nop
    /* F838 80101438 21004010 */  beqz       $v0, .L801014C0
    /* F83C 8010143C 00000000 */   nop
    /* F840 80101440 59D9030C */  jal        func_800F6564
    /* F844 80101444 B7060424 */   addiu     $a0, $zero, 0x6B7
    /* F848 80101448 5DD5030C */  jal        func_800F5574
    /* F84C 8010144C 10000424 */   addiu     $a0, $zero, 0x10
    /* F850 80101450 F5D4030C */  jal        func_800F53D4
    /* F854 80101454 00000000 */   nop
    /* F858 80101458 19004010 */  beqz       $v0, .L801014C0
    /* F85C 8010145C 00000000 */   nop
    /* F860 80101460 59D9030C */  jal        func_800F6564
    /* F864 80101464 00170424 */   addiu     $a0, $zero, 0x1700
    /* F868 80101468 5DD5030C */  jal        func_800F5574
    /* F86C 8010146C 21200000 */   addu      $a0, $zero, $zero
    /* F870 80101470 F5D4030C */  jal        func_800F53D4
    /* F874 80101474 00000000 */   nop
    /* F878 80101478 05004010 */  beqz       $v0, .L80101490
    /* F87C 8010147C 00000000 */   nop
    /* F880 80101480 53D9030C */  jal        func_800F654C
    /* F884 80101484 2D000424 */   addiu     $a0, $zero, 0x2D
    /* F888 80101488 84050408 */  j          .L80101610
    /* F88C 8010148C 00000000 */   nop
  .L80101490:
    /* F890 80101490 59D9030C */  jal        func_800F6564
    /* F894 80101494 00170424 */   addiu     $a0, $zero, 0x1700
    /* F898 80101498 5DD5030C */  jal        func_800F5574
    /* F89C 8010149C 01000424 */   addiu     $a0, $zero, 0x1
    /* F8A0 801014A0 F5D4030C */  jal        func_800F53D4
    /* F8A4 801014A4 00000000 */   nop
    /* F8A8 801014A8 05004010 */  beqz       $v0, .L801014C0
    /* F8AC 801014AC 00000000 */   nop
    /* F8B0 801014B0 53D9030C */  jal        func_800F654C
    /* F8B4 801014B4 2F000424 */   addiu     $a0, $zero, 0x2F
    /* F8B8 801014B8 84050408 */  j          .L80101610
    /* F8BC 801014BC 00000000 */   nop
  .L801014C0:
    /* F8C0 801014C0 8CD9030C */  jal        func_800F6630
    /* F8C4 801014C4 A2000424 */   addiu     $a0, $zero, 0xA2
    /* F8C8 801014C8 0DD9030C */  jal        func_800F6434
    /* F8CC 801014CC 80000424 */   addiu     $a0, $zero, 0x80
    /* F8D0 801014D0 07004014 */  bnez       $v0, .L801014F0
    /* F8D4 801014D4 00000000 */   nop
    /* F8D8 801014D8 53D9030C */  jal        func_800F654C
    /* F8DC 801014DC 01000424 */   addiu     $a0, $zero, 0x1
    /* F8E0 801014E0 93E0030C */  jal        func_800F824C
    /* F8E4 801014E4 D6000424 */   addiu     $a0, $zero, 0xD6
    /* F8E8 801014E8 DE050408 */  j          .L80101778
    /* F8EC 801014EC 00000000 */   nop
  .L801014F0:
    /* F8F0 801014F0 59D9030C */  jal        func_800F6564
    /* F8F4 801014F4 04170424 */   addiu     $a0, $zero, 0x1704
    /* F8F8 801014F8 0DD9030C */  jal        func_800F6434
    /* F8FC 801014FC 02000424 */   addiu     $a0, $zero, 0x2
    /* F900 80101500 9D004010 */  beqz       $v0, .L80101778
    /* F904 80101504 00000000 */   nop
    /* F908 80101508 8CD9030C */  jal        func_800F6630
    /* F90C 8010150C D6000424 */   addiu     $a0, $zero, 0xD6
    /* F910 80101510 0DD9030C */  jal        func_800F6434
    /* F914 80101514 02020424 */   addiu     $a0, $zero, 0x202
    /* F918 80101518 97004010 */  beqz       $v0, .L80101778
    /* F91C 8010151C 00000000 */   nop
    /* F920 80101520 EEE3030C */  jal        func_800F8FB8
    /* F924 80101524 D6000424 */   addiu     $a0, $zero, 0xD6
    /* F928 80101528 59D9030C */  jal        func_800F6564
    /* F92C 8010152C 00170424 */   addiu     $a0, $zero, 0x1700
    /* F930 80101530 50D4030C */  jal        func_800F5140
    /* F934 80101534 00000000 */   nop
    /* F938 80101538 A4E5030C */  jal        func_800F9690
    /* F93C 8010153C 00000000 */   nop
    /* F940 80101540 1500043C */  lui        $a0, (0x158000 >> 16)
    /* F944 80101544 1ADB030C */  jal        func_800F6C68
    /* F948 80101548 00808434 */   ori       $a0, $a0, (0x158000 & 0xFFFF)
    /* F94C 8010154C 93E0030C */  jal        func_800F824C
    /* F950 80101550 3D000424 */   addiu     $a0, $zero, 0x3D
    /* F954 80101554 1500043C */  lui        $a0, (0x158001 >> 16)
    /* F958 80101558 1ADB030C */  jal        func_800F6C68
    /* F95C 8010155C 01808434 */   ori       $a0, $a0, (0x158001 & 0xFFFF)
    /* F960 80101560 93E0030C */  jal        func_800F824C
    /* F964 80101564 3E000424 */   addiu     $a0, $zero, 0x3E
    /* F968 80101568 9CDC030C */  jal        func_800F7270
    /* F96C 8010156C 3D000424 */   addiu     $a0, $zero, 0x3D
  .L80101570:
    /* F970 80101570 1500043C */  lui        $a0, (0x158006 >> 16)
    /* F974 80101574 1ADB030C */  jal        func_800F6C68
    /* F978 80101578 06808434 */   ori       $a0, $a0, (0x158006 & 0xFFFF)
    /* F97C 8010157C C1CE030C */  jal        func_800F3B04
    /* F980 80101580 06170424 */   addiu     $a0, $zero, 0x1706
    /* F984 80101584 35D5030C */  jal        func_800F54D4
    /* F988 80101588 21204000 */   addu      $a0, $v0, $zero
    /* F98C 8010158C F5D4030C */  jal        func_800F53D4
    /* F990 80101590 00000000 */   nop
    /* F994 80101594 0C004010 */  beqz       $v0, .L801015C8
    /* F998 80101598 00000000 */   nop
    /* F99C 8010159C 1500043C */  lui        $a0, (0x158007 >> 16)
    /* F9A0 801015A0 1ADB030C */  jal        func_800F6C68
    /* F9A4 801015A4 07808434 */   ori       $a0, $a0, (0x158007 & 0xFFFF)
    /* F9A8 801015A8 C1CE030C */  jal        func_800F3B04
    /* F9AC 801015AC 07170424 */   addiu     $a0, $zero, 0x1707
    /* F9B0 801015B0 35D5030C */  jal        func_800F54D4
    /* F9B4 801015B4 21204000 */   addu      $a0, $v0, $zero
    /* F9B8 801015B8 F5D4030C */  jal        func_800F53D4
    /* F9BC 801015BC 00000000 */   nop
    /* F9C0 801015C0 08004014 */  bnez       $v0, .L801015E4
    /* F9C4 801015C4 00000000 */   nop
  .L801015C8:
    /* F9C8 801015C8 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* F9CC 801015CC 00000000 */  nop
    /* F9D0 801015D0 00006294 */  lhu        $v0, 0x0($v1)
    /* F9D4 801015D4 00000000 */  nop
    /* F9D8 801015D8 05004224 */  addiu      $v0, $v0, 0x5
    /* F9DC 801015DC 5C050408 */  j          .L80101570
    /* F9E0 801015E0 000062A4 */   sh        $v0, 0x0($v1)
  .L801015E4:
    /* F9E4 801015E4 1500043C */  lui        $a0, (0x158008 >> 16)
    /* F9E8 801015E8 1ADB030C */  jal        func_800F6C68
    /* F9EC 801015EC 08808434 */   ori       $a0, $a0, (0x158008 & 0xFFFF)
    /* F9F0 801015F0 5DD5030C */  jal        func_800F5574
    /* F9F4 801015F4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* F9F8 801015F8 F5D4030C */  jal        func_800F53D4
    /* F9FC 801015FC 00000000 */   nop
    /* FA00 80101600 07004010 */  beqz       $v0, .L80101620
    /* FA04 80101604 1500043C */   lui       $a0, (0x158009 >> 16)
    /* FA08 80101608 1ADB030C */  jal        func_800F6C68
    /* FA0C 8010160C 09808434 */   ori       $a0, $a0, (0x158009 & 0xFFFF)
  .L80101610:
    /* FA10 80101610 AB6B040C */  jal        func_8011AEAC
    /* FA14 80101614 00000000 */   nop
    /* FA18 80101618 DE050408 */  j          .L80101778
    /* FA1C 8010161C 00000000 */   nop
  .L80101620:
    /* FA20 80101620 CCE4030C */  jal        func_800F9330
    /* FA24 80101624 00000000 */   nop
    /* FA28 80101628 84DC030C */  jal        func_800F7210
    /* FA2C 8010162C 2C170424 */   addiu     $a0, $zero, 0x172C
    /* FA30 80101630 59D9030C */  jal        func_800F6564
    /* FA34 80101634 00170424 */   addiu     $a0, $zero, 0x1700
    /* FA38 80101638 0DD9030C */  jal        func_800F6434
    /* FA3C 8010163C 02000424 */   addiu     $a0, $zero, 0x2
    /* FA40 80101640 03004014 */  bnez       $v0, .L80101650
    /* FA44 80101644 00000000 */   nop
    /* FA48 80101648 53D9030C */  jal        func_800F654C
    /* FA4C 8010164C 01000424 */   addiu     $a0, $zero, 0x1
  .L80101650:
    /* FA50 80101650 62E0030C */  jal        func_800F8188
    /* FA54 80101654 01170424 */   addiu     $a0, $zero, 0x1701
    /* FA58 80101658 59D9030C */  jal        func_800F6564
    /* FA5C 8010165C 00170424 */   addiu     $a0, $zero, 0x1700
    /* FA60 80101660 04D5030C */  jal        func_800F5410
    /* FA64 80101664 00000000 */   nop
    /* FA68 80101668 02D0030C */  jal        func_800F4008
    /* FA6C 8010166C FB000424 */   addiu     $a0, $zero, 0xFB
    /* FA70 80101670 DAE1030C */  jal        func_800F8768
    /* FA74 80101674 2E170424 */   addiu     $a0, $zero, 0x172E
    /* FA78 80101678 72D9030C */  jal        func_800F65C8
    /* FA7C 8010167C 06170424 */   addiu     $a0, $zero, 0x1706
    /* FA80 80101680 DAE1030C */  jal        func_800F8768
    /* FA84 80101684 2F170424 */   addiu     $a0, $zero, 0x172F
    /* FA88 80101688 59D9030C */  jal        func_800F6564
    /* FA8C 8010168C 07170424 */   addiu     $a0, $zero, 0x1707
    /* FA90 80101690 DAE1030C */  jal        func_800F8768
    /* FA94 80101694 30170424 */   addiu     $a0, $zero, 0x1730
    /* FA98 80101698 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* FA9C 8010169C 00000000 */  nop
    /* FAA0 801016A0 00006294 */  lhu        $v0, 0x0($v1)
    /* FAA4 801016A4 C0000424 */  addiu      $a0, $zero, 0xC0
    /* FAA8 801016A8 03004224 */  addiu      $v0, $v0, 0x3
    /* FAAC 801016AC 56D6030C */  jal        func_800F5958
    /* FAB0 801016B0 000062A4 */   sh        $v0, 0x0($v1)
    /* FAB4 801016B4 F0D4030C */  jal        func_800F53C0
    /* FAB8 801016B8 00000000 */   nop
    /* FABC 801016BC 03004010 */  beqz       $v0, .L801016CC
    /* FAC0 801016C0 00000000 */   nop
    /* FAC4 801016C4 77DC030C */  jal        func_800F71DC
    /* FAC8 801016C8 21200000 */   addu      $a0, $zero, $zero
  .L801016CC:
    /* FACC 801016CC 40E3030C */  jal        func_800F8D00
    /* FAD0 801016D0 2C170424 */   addiu     $a0, $zero, 0x172C
    /* FAD4 801016D4 68E5030C */  jal        func_800F95A0
    /* FAD8 801016D8 00000000 */   nop
    /* FADC 801016DC 1500043C */  lui        $a0, (0x158008 >> 16)
    /* FAE0 801016E0 1ADB030C */  jal        func_800F6C68
    /* FAE4 801016E4 08808434 */   ori       $a0, $a0, (0x158008 & 0xFFFF)
    /* FAE8 801016E8 62E0030C */  jal        func_800F8188
    /* FAEC 801016EC 02170424 */   addiu     $a0, $zero, 0x1702
    /* FAF0 801016F0 1500043C */  lui        $a0, (0x158009 >> 16)
    /* FAF4 801016F4 1ADB030C */  jal        func_800F6C68
    /* FAF8 801016F8 09808434 */   ori       $a0, $a0, (0x158009 & 0xFFFF)
    /* FAFC 801016FC 92D0030C */  jal        func_800F4248
    /* FB00 80101700 3F000424 */   addiu     $a0, $zero, 0x3F
    /* FB04 80101704 62E0030C */  jal        func_800F8188
    /* FB08 80101708 06170424 */   addiu     $a0, $zero, 0x1706
    /* FB0C 8010170C 1500043C */  lui        $a0, (0x15800A >> 16)
    /* FB10 80101710 1ADB030C */  jal        func_800F6C68
    /* FB14 80101714 0A808434 */   ori       $a0, $a0, (0x15800A & 0xFFFF)
    /* FB18 80101718 62E0030C */  jal        func_800F8188
    /* FB1C 8010171C 07170424 */   addiu     $a0, $zero, 0x1707
    /* FB20 80101720 1500043C */  lui        $a0, (0x158009 >> 16)
    /* FB24 80101724 1ADB030C */  jal        func_800F6C68
    /* FB28 80101728 09808434 */   ori       $a0, $a0, (0x158009 & 0xFFFF)
    /* FB2C 8010172C 92D0030C */  jal        func_800F4248
    /* FB30 80101730 C0000424 */   addiu     $a0, $zero, 0xC0
    /* FB34 80101734 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* FB38 80101738 00000000 */  nop
    /* FB3C 8010173C 00006290 */  lbu        $v0, 0x0($v1)
    /* FB40 80101740 05170424 */  addiu      $a0, $zero, 0x1705
    /* FB44 80101744 82110200 */  srl        $v0, $v0, 6
    /* FB48 80101748 62E0030C */  jal        func_800F8188
    /* FB4C 8010174C 000062A0 */   sb        $v0, 0x0($v1)
    /* FB50 80101750 AEF5030C */  jal        func_800FD6B8
    /* FB54 80101754 00000000 */   nop
    /* FB58 80101758 1DFB030C */  jal        func_800FEC74
    /* FB5C 8010175C 00000000 */   nop
    /* FB60 80101760 AFD8030C */  jal        func_800F62BC
    /* FB64 80101764 CD000424 */   addiu     $a0, $zero, 0xCD
    /* FB68 80101768 53D9030C */  jal        func_800F654C
    /* FB6C 8010176C 03000424 */   addiu     $a0, $zero, 0x3
    /* FB70 80101770 62E0030C */  jal        func_800F8188
    /* FB74 80101774 00170424 */   addiu     $a0, $zero, 0x1700
  .L80101778:
    /* FB78 80101778 1000BF8F */  lw         $ra, 0x10($sp)
    /* FB7C 8010177C 00000000 */  nop
    /* FB80 80101780 0800E003 */  jr         $ra
    /* FB84 80101784 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80101350
