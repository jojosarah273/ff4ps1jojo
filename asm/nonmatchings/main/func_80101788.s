nonmatching func_80101788, 0xC8C

glabel func_80101788
    /* FB88 80101788 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* FB8C 8010178C 1000BFAF */  sw         $ra, 0x10($sp)
    /* FB90 80101790 8CD9030C */  jal        func_800F6630
    /* FB94 80101794 02000424 */   addiu     $a0, $zero, 0x2
    /* FB98 80101798 92D0030C */  jal        func_800F4248
    /* FB9C 8010179C 80000424 */   addiu     $a0, $zero, 0x80
    /* FBA0 801017A0 48D0030C */  jal        func_800F4120
    /* FBA4 801017A4 02000424 */   addiu     $a0, $zero, 0x2
    /* FBA8 801017A8 16034014 */  bnez       $v0, .L80102404
    /* FBAC 801017AC 00000000 */   nop
    /* FBB0 801017B0 8CD9030C */  jal        func_800F6630
    /* FBB4 801017B4 54000424 */   addiu     $a0, $zero, 0x54
    /* FBB8 801017B8 0DD9030C */  jal        func_800F6434
    /* FBBC 801017BC 02000424 */   addiu     $a0, $zero, 0x2
    /* FBC0 801017C0 10034010 */  beqz       $v0, .L80102404
    /* FBC4 801017C4 00000000 */   nop
    /* FBC8 801017C8 AFD8030C */  jal        func_800F62BC
    /* FBCC 801017CC 54000424 */   addiu     $a0, $zero, 0x54
    /* FBD0 801017D0 53D9030C */  jal        func_800F654C
    /* FBD4 801017D4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* FBD8 801017D8 AD6D040C */  jal        func_8011B6B4
    /* FBDC 801017DC 00000000 */   nop
    /* FBE0 801017E0 5DD5030C */  jal        func_800F5574
    /* FBE4 801017E4 21200000 */   addu      $a0, $zero, $zero
    /* FBE8 801017E8 F5D4030C */  jal        func_800F53D4
    /* FBEC 801017EC 00000000 */   nop
    /* FBF0 801017F0 0B004010 */  beqz       $v0, .L80101820
    /* FBF4 801017F4 00000000 */   nop
    /* FBF8 801017F8 53D9030C */  jal        func_800F654C
    /* FBFC 801017FC 30000424 */   addiu     $a0, $zero, 0x30
    /* FC00 80101800 AD6D040C */  jal        func_8011B6B4
    /* FC04 80101804 00000000 */   nop
    /* FC08 80101808 5DD5030C */  jal        func_800F5574
    /* FC0C 8010180C 21200000 */   addu      $a0, $zero, $zero
    /* FC10 80101810 F5D4030C */  jal        func_800F53D4
    /* FC14 80101814 00000000 */   nop
    /* FC18 80101818 57004014 */  bnez       $v0, .L80101978
    /* FC1C 8010181C 00000000 */   nop
  .L80101820:
    /* FC20 80101820 59D9030C */  jal        func_800F6564
    /* FC24 80101824 04170424 */   addiu     $a0, $zero, 0x1704
    /* FC28 80101828 5DD5030C */  jal        func_800F5574
    /* FC2C 8010182C 04000424 */   addiu     $a0, $zero, 0x4
    /* FC30 80101830 F5D4030C */  jal        func_800F53D4
    /* FC34 80101834 00000000 */   nop
    /* FC38 80101838 07004014 */  bnez       $v0, .L80101858
    /* FC3C 8010183C 00000000 */   nop
    /* FC40 80101840 5DD5030C */  jal        func_800F5574
    /* FC44 80101844 05000424 */   addiu     $a0, $zero, 0x5
    /* FC48 80101848 F5D4030C */  jal        func_800F53D4
    /* FC4C 8010184C 00000000 */   nop
    /* FC50 80101850 49004010 */  beqz       $v0, .L80101978
    /* FC54 80101854 00000000 */   nop
  .L80101858:
    /* FC58 80101858 59D9030C */  jal        func_800F6564
    /* FC5C 8010185C 00170424 */   addiu     $a0, $zero, 0x1700
    /* FC60 80101860 0DD9030C */  jal        func_800F6434
    /* FC64 80101864 02020424 */   addiu     $a0, $zero, 0x202
    /* FC68 80101868 19004014 */  bnez       $v0, .L801018D0
    /* FC6C 8010186C 00000000 */   nop
    /* FC70 80101870 59D9030C */  jal        func_800F6564
    /* FC74 80101874 06170424 */   addiu     $a0, $zero, 0x1706
    /* FC78 80101878 5DD5030C */  jal        func_800F5574
    /* FC7C 8010187C 69000424 */   addiu     $a0, $zero, 0x69
    /* FC80 80101880 F0D4030C */  jal        func_800F53C0
    /* FC84 80101884 00000000 */   nop
    /* FC88 80101888 3B004010 */  beqz       $v0, .L80101978
    /* FC8C 8010188C 00000000 */   nop
    /* FC90 80101890 5DD5030C */  jal        func_800F5574
    /* FC94 80101894 6C000424 */   addiu     $a0, $zero, 0x6C
    /* FC98 80101898 F0D4030C */  jal        func_800F53C0
    /* FC9C 8010189C 00000000 */   nop
    /* FCA0 801018A0 35004014 */  bnez       $v0, .L80101978
    /* FCA4 801018A4 00000000 */   nop
    /* FCA8 801018A8 59D9030C */  jal        func_800F6564
    /* FCAC 801018AC 07170424 */   addiu     $a0, $zero, 0x1707
    /* FCB0 801018B0 5DD5030C */  jal        func_800F5574
    /* FCB4 801018B4 D3000424 */   addiu     $a0, $zero, 0xD3
    /* FCB8 801018B8 F0D4030C */  jal        func_800F53C0
    /* FCBC 801018BC 00000000 */   nop
    /* FCC0 801018C0 2D004010 */  beqz       $v0, .L80101978
    /* FCC4 801018C4 D6000424 */   addiu     $a0, $zero, 0xD6
    /* FCC8 801018C8 52060408 */  j          .L80101948
    /* FCCC 801018CC 00000000 */   nop
  .L801018D0:
    /* FCD0 801018D0 59D9030C */  jal        func_800F6564
    /* FCD4 801018D4 00170424 */   addiu     $a0, $zero, 0x1700
    /* FCD8 801018D8 5DD5030C */  jal        func_800F5574
    /* FCDC 801018DC 01000424 */   addiu     $a0, $zero, 0x1
    /* FCE0 801018E0 F5D4030C */  jal        func_800F53D4
    /* FCE4 801018E4 00000000 */   nop
    /* FCE8 801018E8 23004010 */  beqz       $v0, .L80101978
    /* FCEC 801018EC 00000000 */   nop
    /* FCF0 801018F0 59D9030C */  jal        func_800F6564
    /* FCF4 801018F4 06170424 */   addiu     $a0, $zero, 0x1706
    /* FCF8 801018F8 5DD5030C */  jal        func_800F5574
    /* FCFC 801018FC 70000424 */   addiu     $a0, $zero, 0x70
    /* FD00 80101900 F0D4030C */  jal        func_800F53C0
    /* FD04 80101904 00000000 */   nop
    /* FD08 80101908 1B004010 */  beqz       $v0, .L80101978
    /* FD0C 8010190C 00000000 */   nop
    /* FD10 80101910 5DD5030C */  jal        func_800F5574
    /* FD14 80101914 73000424 */   addiu     $a0, $zero, 0x73
    /* FD18 80101918 F0D4030C */  jal        func_800F53C0
    /* FD1C 8010191C 00000000 */   nop
    /* FD20 80101920 15004014 */  bnez       $v0, .L80101978
    /* FD24 80101924 00000000 */   nop
    /* FD28 80101928 59D9030C */  jal        func_800F6564
    /* FD2C 8010192C 07170424 */   addiu     $a0, $zero, 0x1707
    /* FD30 80101930 5DD5030C */  jal        func_800F5574
    /* FD34 80101934 0F000424 */   addiu     $a0, $zero, 0xF
    /* FD38 80101938 F0D4030C */  jal        func_800F53C0
    /* FD3C 8010193C 00000000 */   nop
    /* FD40 80101940 0D004010 */  beqz       $v0, .L80101978
    /* FD44 80101944 12000424 */   addiu     $a0, $zero, 0x12
  .L80101948:
    /* FD48 80101948 5DD5030C */  jal        func_800F5574
    /* FD4C 8010194C 00000000 */   nop
    /* FD50 80101950 F0D4030C */  jal        func_800F53C0
    /* FD54 80101954 00000000 */   nop
    /* FD58 80101958 07004014 */  bnez       $v0, .L80101978
    /* FD5C 8010195C 00000000 */   nop
    /* FD60 80101960 53D9030C */  jal        func_800F654C
    /* FD64 80101964 01000424 */   addiu     $a0, $zero, 0x1
    /* FD68 80101968 93E0030C */  jal        func_800F824C
    /* FD6C 8010196C CE000424 */   addiu     $a0, $zero, 0xCE
    /* FD70 80101970 01090408 */  j          .L80102404
    /* FD74 80101974 00000000 */   nop
  .L80101978:
    /* FD78 80101978 59D9030C */  jal        func_800F6564
    /* FD7C 8010197C 04170424 */   addiu     $a0, $zero, 0x1704
    /* FD80 80101980 0DD9030C */  jal        func_800F6434
    /* FD84 80101984 02000424 */   addiu     $a0, $zero, 0x2
    /* FD88 80101988 DB004014 */  bnez       $v0, .L80101CF8
    /* FD8C 8010198C 00000000 */   nop
    /* FD90 80101990 5DD5030C */  jal        func_800F5574
    /* FD94 80101994 01000424 */   addiu     $a0, $zero, 0x1
    /* FD98 80101998 F5D4030C */  jal        func_800F53D4
    /* FD9C 8010199C 00000000 */   nop
    /* FDA0 801019A0 D5014014 */  bnez       $v0, .L801020F8
    /* FDA4 801019A4 00000000 */   nop
    /* FDA8 801019A8 5DD5030C */  jal        func_800F5574
    /* FDAC 801019AC 02000424 */   addiu     $a0, $zero, 0x2
    /* FDB0 801019B0 F5D4030C */  jal        func_800F53D4
    /* FDB4 801019B4 00000000 */   nop
    /* FDB8 801019B8 93014014 */  bnez       $v0, .L80102008
    /* FDBC 801019BC 00000000 */   nop
    /* FDC0 801019C0 5DD5030C */  jal        func_800F5574
    /* FDC4 801019C4 03000424 */   addiu     $a0, $zero, 0x3
    /* FDC8 801019C8 F5D4030C */  jal        func_800F53D4
    /* FDCC 801019CC 00000000 */   nop
    /* FDD0 801019D0 2D004010 */  beqz       $v0, .L80101A88
    /* FDD4 801019D4 00000000 */   nop
    /* FDD8 801019D8 8CD9030C */  jal        func_800F6630
    /* FDDC 801019DC A1000424 */   addiu     $a0, $zero, 0xA1
    /* FDE0 801019E0 92D0030C */  jal        func_800F4248
    /* FDE4 801019E4 01000424 */   addiu     $a0, $zero, 0x1
    /* FDE8 801019E8 48D0030C */  jal        func_800F4120
    /* FDEC 801019EC 02020424 */   addiu     $a0, $zero, 0x202
    /* FDF0 801019F0 84024010 */  beqz       $v0, .L80102404
    /* FDF4 801019F4 00000000 */   nop
    /* FDF8 801019F8 EEE3030C */  jal        func_800F8FB8
    /* FDFC 801019FC 79000424 */   addiu     $a0, $zero, 0x79
  .L80101A00:
    /* FE00 80101A00 B60B040C */  jal        func_80102ED8
    /* FE04 80101A04 00000000 */   nop
    /* FE08 80101A08 68D7030C */  jal        func_800F5DA0
    /* FE0C 80101A0C B6000424 */   addiu     $a0, $zero, 0xB6
    /* FE10 80101A10 AFD8030C */  jal        func_800F62BC
    /* FE14 80101A14 79000424 */   addiu     $a0, $zero, 0x79
    /* FE18 80101A18 8CD9030C */  jal        func_800F6630
    /* FE1C 80101A1C 79000424 */   addiu     $a0, $zero, 0x79
    /* FE20 80101A20 5DD5030C */  jal        func_800F5574
    /* FE24 80101A24 04000424 */   addiu     $a0, $zero, 0x4
    /* FE28 80101A28 F5D4030C */  jal        func_800F53D4
    /* FE2C 80101A2C 00000000 */   nop
    /* FE30 80101A30 F3FF4010 */  beqz       $v0, .L80101A00
    /* FE34 80101A34 00000000 */   nop
    /* FE38 80101A38 DDE3030C */  jal        func_800F8F74
    /* FE3C 80101A3C 04170424 */   addiu     $a0, $zero, 0x1704
    /* FE40 80101A40 EEE3030C */  jal        func_800F8FB8
    /* FE44 80101A44 AC000424 */   addiu     $a0, $zero, 0xAC
    /* FE48 80101A48 EEE3030C */  jal        func_800F8FB8
    /* FE4C 80101A4C 7B000424 */   addiu     $a0, $zero, 0x7B
    /* FE50 80101A50 53D9030C */  jal        func_800F654C
    /* FE54 80101A54 02000424 */   addiu     $a0, $zero, 0x2
    /* FE58 80101A58 62E0030C */  jal        func_800F8188
    /* FE5C 80101A5C 05170424 */   addiu     $a0, $zero, 0x1705
    /* FE60 80101A60 59D9030C */  jal        func_800F6564
    /* FE64 80101A64 01170424 */   addiu     $a0, $zero, 0x1701
    /* FE68 80101A68 62E0030C */  jal        func_800F8188
    /* FE6C 80101A6C 1B170424 */   addiu     $a0, $zero, 0x171B
    /* FE70 80101A70 84DC030C */  jal        func_800F7210
    /* FE74 80101A74 06170424 */   addiu     $a0, $zero, 0x1706
    /* FE78 80101A78 40E3030C */  jal        func_800F8D00
    /* FE7C 80101A7C 19170424 */   addiu     $a0, $zero, 0x1719
    /* FE80 80101A80 38080408 */  j          .L801020E0
    /* FE84 80101A84 00000000 */   nop
  .L80101A88:
    /* FE88 80101A88 5DD5030C */  jal        func_800F5574
    /* FE8C 80101A8C 04000424 */   addiu     $a0, $zero, 0x4
    /* FE90 80101A90 F5D4030C */  jal        func_800F53D4
    /* FE94 80101A94 00000000 */   nop
    /* FE98 80101A98 05004010 */  beqz       $v0, .L80101AB0
    /* FE9C 80101A9C 00000000 */   nop
    /* FEA0 80101AA0 D510040C */  jal        func_80104354
    /* FEA4 80101AA4 00000000 */   nop
    /* FEA8 80101AA8 01090408 */  j          .L80102404
    /* FEAC 80101AAC 00000000 */   nop
  .L80101AB0:
    /* FEB0 80101AB0 5DD5030C */  jal        func_800F5574
    /* FEB4 80101AB4 05000424 */   addiu     $a0, $zero, 0x5
    /* FEB8 80101AB8 F5D4030C */  jal        func_800F53D4
    /* FEBC 80101ABC 00000000 */   nop
    /* FEC0 80101AC0 83004010 */  beqz       $v0, .L80101CD0
    /* FEC4 80101AC4 00000000 */   nop
    /* FEC8 80101AC8 53D9030C */  jal        func_800F654C
    /* FECC 80101ACC 30000424 */   addiu     $a0, $zero, 0x30
    /* FED0 80101AD0 93E0030C */  jal        func_800F824C
    /* FED4 80101AD4 79000424 */   addiu     $a0, $zero, 0x79
    /* FED8 80101AD8 EEE3030C */  jal        func_800F8FB8
    /* FEDC 80101ADC 7A000424 */   addiu     $a0, $zero, 0x7A
  .L80101AE0:
    /* FEE0 80101AE0 9E0B040C */  jal        func_80102E78
    /* FEE4 80101AE4 00000000 */   nop
    /* FEE8 80101AE8 8CD9030C */  jal        func_800F6630
    /* FEEC 80101AEC 79000424 */   addiu     $a0, $zero, 0x79
    /* FEF0 80101AF0 5DD5030C */  jal        func_800F5574
    /* FEF4 80101AF4 21000424 */   addiu     $a0, $zero, 0x21
    /* FEF8 80101AF8 F0D4030C */  jal        func_800F53C0
    /* FEFC 80101AFC 00000000 */   nop
    /* FF00 80101B00 61004014 */  bnez       $v0, .L80101C88
    /* FF04 80101B04 00000000 */   nop
    /* FF08 80101B08 8CD9030C */  jal        func_800F6630
    /* FF0C 80101B0C A2000424 */   addiu     $a0, $zero, 0xA2
    /* FF10 80101B10 92D0030C */  jal        func_800F4248
    /* FF14 80101B14 10000424 */   addiu     $a0, $zero, 0x10
    /* FF18 80101B18 48D0030C */  jal        func_800F4120
    /* FF1C 80101B1C 02020424 */   addiu     $a0, $zero, 0x202
    /* FF20 80101B20 33004010 */  beqz       $v0, .L80101BF0
    /* FF24 80101B24 00000000 */   nop
    /* FF28 80101B28 84DC030C */  jal        func_800F7210
    /* FF2C 80101B2C 19170424 */   addiu     $a0, $zero, 0x1719
    /* FF30 80101B30 C1CE030C */  jal        func_800F3B04
    /* FF34 80101B34 06170424 */   addiu     $a0, $zero, 0x1706
    /* FF38 80101B38 ABD5030C */  jal        func_800F56AC
    /* FF3C 80101B3C 21204000 */   addu      $a0, $v0, $zero
    /* FF40 80101B40 F5D4030C */  jal        func_800F53D4
    /* FF44 80101B44 00000000 */   nop
    /* FF48 80101B48 29004014 */  bnez       $v0, .L80101BF0
    /* FF4C 80101B4C 00000000 */   nop
    /* FF50 80101B50 59D9030C */  jal        func_800F6564
    /* FF54 80101B54 1F170424 */   addiu     $a0, $zero, 0x171F
    /* FF58 80101B58 C1CE030C */  jal        func_800F3B04
    /* FF5C 80101B5C 23170424 */   addiu     $a0, $zero, 0x1723
    /* FF60 80101B60 35D5030C */  jal        func_800F54D4
    /* FF64 80101B64 21204000 */   addu      $a0, $v0, $zero
    /* FF68 80101B68 F5D4030C */  jal        func_800F53D4
    /* FF6C 80101B6C 00000000 */   nop
    /* FF70 80101B70 0B004010 */  beqz       $v0, .L80101BA0
    /* FF74 80101B74 00000000 */   nop
    /* FF78 80101B78 84DC030C */  jal        func_800F7210
    /* FF7C 80101B7C 1D170424 */   addiu     $a0, $zero, 0x171D
    /* FF80 80101B80 C1CE030C */  jal        func_800F3B04
    /* FF84 80101B84 06170424 */   addiu     $a0, $zero, 0x1706
    /* FF88 80101B88 ABD5030C */  jal        func_800F56AC
    /* FF8C 80101B8C 21204000 */   addu      $a0, $v0, $zero
    /* FF90 80101B90 F5D4030C */  jal        func_800F53D4
    /* FF94 80101B94 00000000 */   nop
    /* FF98 80101B98 15004014 */  bnez       $v0, .L80101BF0
    /* FF9C 80101B9C 00000000 */   nop
  .L80101BA0:
    /* FFA0 80101BA0 59D9030C */  jal        func_800F6564
    /* FFA4 80101BA4 27170424 */   addiu     $a0, $zero, 0x1727
    /* FFA8 80101BA8 C1CE030C */  jal        func_800F3B04
    /* FFAC 80101BAC 23170424 */   addiu     $a0, $zero, 0x1723
    /* FFB0 80101BB0 35D5030C */  jal        func_800F54D4
    /* FFB4 80101BB4 21204000 */   addu      $a0, $v0, $zero
    /* FFB8 80101BB8 F5D4030C */  jal        func_800F53D4
    /* FFBC 80101BBC 00000000 */   nop
    /* FFC0 80101BC0 0F004010 */  beqz       $v0, .L80101C00
    /* FFC4 80101BC4 00000000 */   nop
    /* FFC8 80101BC8 84DC030C */  jal        func_800F7210
    /* FFCC 80101BCC 25170424 */   addiu     $a0, $zero, 0x1725
    /* FFD0 80101BD0 C1CE030C */  jal        func_800F3B04
    /* FFD4 80101BD4 06170424 */   addiu     $a0, $zero, 0x1706
    /* FFD8 80101BD8 ABD5030C */  jal        func_800F56AC
    /* FFDC 80101BDC 21204000 */   addu      $a0, $v0, $zero
    /* FFE0 80101BE0 F5D4030C */  jal        func_800F53D4
    /* FFE4 80101BE4 00000000 */   nop
    /* FFE8 80101BE8 05004010 */  beqz       $v0, .L80101C00
    /* FFEC 80101BEC 00000000 */   nop
  .L80101BF0:
    /* FFF0 80101BF0 380D040C */  jal        func_801034E0
    /* FFF4 80101BF4 00000000 */   nop
    /* FFF8 80101BF8 01090408 */  j          .L80102404
    /* FFFC 80101BFC 00000000 */   nop
  .L80101C00:
    /* 10000 80101C00 8CD9030C */  jal        func_800F6630
    /* 10004 80101C04 79000424 */   addiu     $a0, $zero, 0x79
    /* 10008 80101C08 19DE030C */  jal        func_800F7864
    /* 1000C 80101C0C 00000000 */   nop
    /* 10010 80101C10 62E0030C */  jal        func_800F8188
    /* 10014 80101C14 FD060424 */   addiu     $a0, $zero, 0x6FD
    /* 10018 80101C18 68D7030C */  jal        func_800F5DA0
    /* 1001C 80101C1C 79000424 */   addiu     $a0, $zero, 0x79
    /* 10020 80101C20 68D7030C */  jal        func_800F5DA0
    /* 10024 80101C24 79000424 */   addiu     $a0, $zero, 0x79
    /* 10028 80101C28 E3D6030C */  jal        func_800F5B8C
    /* 1002C 80101C2C 02020424 */   addiu     $a0, $zero, 0x202
    /* 10030 80101C30 ABFF4014 */  bnez       $v0, .L80101AE0
    /* 10034 80101C34 00000000 */   nop
    /* 10038 80101C38 DDE3030C */  jal        func_800F8F74
    /* 1003C 80101C3C 04170424 */   addiu     $a0, $zero, 0x1704
    /* 10040 80101C40 EEE3030C */  jal        func_800F8FB8
    /* 10044 80101C44 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 10048 80101C48 EEE3030C */  jal        func_800F8FB8
    /* 1004C 80101C4C 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 10050 80101C50 53D9030C */  jal        func_800F654C
    /* 10054 80101C54 02000424 */   addiu     $a0, $zero, 0x2
    /* 10058 80101C58 62E0030C */  jal        func_800F8188
    /* 1005C 80101C5C 05170424 */   addiu     $a0, $zero, 0x1705
    /* 10060 80101C60 84DC030C */  jal        func_800F7210
    /* 10064 80101C64 06170424 */   addiu     $a0, $zero, 0x1706
    /* 10068 80101C68 40E3030C */  jal        func_800F8D00
    /* 1006C 80101C6C 21170424 */   addiu     $a0, $zero, 0x1721
    /* 10070 80101C70 59D9030C */  jal        func_800F6564
    /* 10074 80101C74 01170424 */   addiu     $a0, $zero, 0x1701
    /* 10078 80101C78 62E0030C */  jal        func_800F8188
    /* 1007C 80101C7C 23170424 */   addiu     $a0, $zero, 0x1723
    /* 10080 80101C80 38080408 */  j          .L801020E0
    /* 10084 80101C84 00000000 */   nop
  .L80101C88:
    /* 10088 80101C88 68D7030C */  jal        func_800F5DA0
    /* 1008C 80101C8C B8000424 */   addiu     $a0, $zero, 0xB8
    /* 10090 80101C90 8CD9030C */  jal        func_800F6630
    /* 10094 80101C94 B8000424 */   addiu     $a0, $zero, 0xB8
    /* 10098 80101C98 04D5030C */  jal        func_800F5410
    /* 1009C 80101C9C 00000000 */   nop
    /* 100A0 80101CA0 02D0030C */  jal        func_800F4008
    /* 100A4 80101CA4 10000424 */   addiu     $a0, $zero, 0x10
    /* 100A8 80101CA8 93E0030C */  jal        func_800F824C
    /* 100AC 80101CAC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 100B0 80101CB0 8CD9030C */  jal        func_800F6630
    /* 100B4 80101CB4 B8000424 */   addiu     $a0, $zero, 0xB8
    /* 100B8 80101CB8 67D5050C */  jal        func_8017559C
    /* 100BC 80101CBC 00000000 */   nop
    /* 100C0 80101CC0 68D7030C */  jal        func_800F5DA0
    /* 100C4 80101CC4 79000424 */   addiu     $a0, $zero, 0x79
    /* 100C8 80101CC8 B8060408 */  j          .L80101AE0
    /* 100CC 80101CCC 00000000 */   nop
  .L80101CD0:
    /* 100D0 80101CD0 5DD5030C */  jal        func_800F5574
    /* 100D4 80101CD4 06000424 */   addiu     $a0, $zero, 0x6
    /* 100D8 80101CD8 F5D4030C */  jal        func_800F53D4
    /* 100DC 80101CDC 00000000 */   nop
    /* 100E0 80101CE0 C8014010 */  beqz       $v0, .L80102404
    /* 100E4 80101CE4 00000000 */   nop
    /* 100E8 80101CE8 2509040C */  jal        func_80102494
    /* 100EC 80101CEC 00000000 */   nop
    /* 100F0 80101CF0 01090408 */  j          .L80102404
    /* 100F4 80101CF4 00000000 */   nop
  .L80101CF8:
    /* 100F8 80101CF8 DDE3030C */  jal        func_800F8F74
    /* 100FC 80101CFC 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* 10100 80101D00 8CD9030C */  jal        func_800F6630
    /* 10104 80101D04 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 10108 80101D08 0DD9030C */  jal        func_800F6434
    /* 1010C 80101D0C 02000424 */   addiu     $a0, $zero, 0x2
    /* 10110 80101D10 BC014010 */  beqz       $v0, .L80102404
    /* 10114 80101D14 00000000 */   nop
    /* 10118 80101D18 59D9030C */  jal        func_800F6564
    /* 1011C 80101D1C 01170424 */   addiu     $a0, $zero, 0x1701
    /* 10120 80101D20 5DD5030C */  jal        func_800F5574
    /* 10124 80101D24 21200000 */   addu      $a0, $zero, $zero
    /* 10128 80101D28 F5D4030C */  jal        func_800F53D4
    /* 1012C 80101D2C 00000000 */   nop
    /* 10130 80101D30 15004010 */  beqz       $v0, .L80101D88
    /* 10134 80101D34 00000000 */   nop
    /* 10138 80101D38 59D9030C */  jal        func_800F6564
    /* 1013C 80101D3C 0F170424 */   addiu     $a0, $zero, 0x170F
    /* 10140 80101D40 0DD9030C */  jal        func_800F6434
    /* 10144 80101D44 02000424 */   addiu     $a0, $zero, 0x2
    /* 10148 80101D48 0F004014 */  bnez       $v0, .L80101D88
    /* 1014C 80101D4C 00000000 */   nop
    /* 10150 80101D50 84DC030C */  jal        func_800F7210
    /* 10154 80101D54 06170424 */   addiu     $a0, $zero, 0x1706
    /* 10158 80101D58 C1CE030C */  jal        func_800F3B04
    /* 1015C 80101D5C 10170424 */   addiu     $a0, $zero, 0x1710
    /* 10160 80101D60 ABD5030C */  jal        func_800F56AC
    /* 10164 80101D64 21204000 */   addu      $a0, $v0, $zero
    /* 10168 80101D68 F5D4030C */  jal        func_800F53D4
    /* 1016C 80101D6C 00000000 */   nop
    /* 10170 80101D70 05004010 */  beqz       $v0, .L80101D88
    /* 10174 80101D74 00000000 */   nop
    /* 10178 80101D78 CE0B040C */  jal        func_80102F38
    /* 1017C 80101D7C 00000000 */   nop
    /* 10180 80101D80 01090408 */  j          .L80102404
    /* 10184 80101D84 00000000 */   nop
  .L80101D88:
    /* 10188 80101D88 59D9030C */  jal        func_800F6564
    /* 1018C 80101D8C 01170424 */   addiu     $a0, $zero, 0x1701
    /* 10190 80101D90 5DD5030C */  jal        func_800F5574
    /* 10194 80101D94 21200000 */   addu      $a0, $zero, $zero
    /* 10198 80101D98 F5D4030C */  jal        func_800F53D4
    /* 1019C 80101D9C 00000000 */   nop
    /* 101A0 80101DA0 15004010 */  beqz       $v0, .L80101DF8
    /* 101A4 80101DA4 00000000 */   nop
    /* 101A8 80101DA8 59D9030C */  jal        func_800F6564
    /* 101AC 80101DAC 12170424 */   addiu     $a0, $zero, 0x1712
    /* 101B0 80101DB0 0DD9030C */  jal        func_800F6434
    /* 101B4 80101DB4 02000424 */   addiu     $a0, $zero, 0x2
    /* 101B8 80101DB8 0F004014 */  bnez       $v0, .L80101DF8
    /* 101BC 80101DBC 00000000 */   nop
    /* 101C0 80101DC0 84DC030C */  jal        func_800F7210
    /* 101C4 80101DC4 06170424 */   addiu     $a0, $zero, 0x1706
    /* 101C8 80101DC8 C1CE030C */  jal        func_800F3B04
    /* 101CC 80101DCC 13170424 */   addiu     $a0, $zero, 0x1713
    /* 101D0 80101DD0 ABD5030C */  jal        func_800F56AC
    /* 101D4 80101DD4 21204000 */   addu      $a0, $v0, $zero
    /* 101D8 80101DD8 F5D4030C */  jal        func_800F53D4
    /* 101DC 80101DDC 00000000 */   nop
    /* 101E0 80101DE0 05004010 */  beqz       $v0, .L80101DF8
    /* 101E4 80101DE4 00000000 */   nop
    /* 101E8 80101DE8 DC0B040C */  jal        func_80102F70
    /* 101EC 80101DEC 00000000 */   nop
    /* 101F0 80101DF0 01090408 */  j          .L80102404
    /* 101F4 80101DF4 00000000 */   nop
  .L80101DF8:
    /* 101F8 80101DF8 59D9030C */  jal        func_800F6564
    /* 101FC 80101DFC 01170424 */   addiu     $a0, $zero, 0x1701
    /* 10200 80101E00 C1CE030C */  jal        func_800F3B04
    /* 10204 80101E04 1B170424 */   addiu     $a0, $zero, 0x171B
    /* 10208 80101E08 35D5030C */  jal        func_800F54D4
    /* 1020C 80101E0C 21204000 */   addu      $a0, $v0, $zero
    /* 10210 80101E10 F5D4030C */  jal        func_800F53D4
    /* 10214 80101E14 00000000 */   nop
    /* 10218 80101E18 15004010 */  beqz       $v0, .L80101E70
    /* 1021C 80101E1C 00000000 */   nop
    /* 10220 80101E20 59D9030C */  jal        func_800F6564
    /* 10224 80101E24 18170424 */   addiu     $a0, $zero, 0x1718
    /* 10228 80101E28 0DD9030C */  jal        func_800F6434
    /* 1022C 80101E2C 02000424 */   addiu     $a0, $zero, 0x2
    /* 10230 80101E30 0F004014 */  bnez       $v0, .L80101E70
    /* 10234 80101E34 00000000 */   nop
    /* 10238 80101E38 84DC030C */  jal        func_800F7210
    /* 1023C 80101E3C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 10240 80101E40 C1CE030C */  jal        func_800F3B04
    /* 10244 80101E44 19170424 */   addiu     $a0, $zero, 0x1719
    /* 10248 80101E48 ABD5030C */  jal        func_800F56AC
    /* 1024C 80101E4C 21204000 */   addu      $a0, $v0, $zero
    /* 10250 80101E50 F5D4030C */  jal        func_800F53D4
    /* 10254 80101E54 00000000 */   nop
    /* 10258 80101E58 05004010 */  beqz       $v0, .L80101E70
    /* 1025C 80101E5C 00000000 */   nop
    /* 10260 80101E60 0C0C040C */  jal        func_80103030
    /* 10264 80101E64 00000000 */   nop
    /* 10268 80101E68 01090408 */  j          .L80102404
    /* 1026C 80101E6C 00000000 */   nop
  .L80101E70:
    /* 10270 80101E70 59D9030C */  jal        func_800F6564
    /* 10274 80101E74 01170424 */   addiu     $a0, $zero, 0x1701
    /* 10278 80101E78 C1CE030C */  jal        func_800F3B04
    /* 1027C 80101E7C 1F170424 */   addiu     $a0, $zero, 0x171F
    /* 10280 80101E80 35D5030C */  jal        func_800F54D4
    /* 10284 80101E84 21204000 */   addu      $a0, $v0, $zero
    /* 10288 80101E88 F5D4030C */  jal        func_800F53D4
    /* 1028C 80101E8C 00000000 */   nop
    /* 10290 80101E90 15004010 */  beqz       $v0, .L80101EE8
    /* 10294 80101E94 00000000 */   nop
    /* 10298 80101E98 59D9030C */  jal        func_800F6564
    /* 1029C 80101E9C 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 102A0 80101EA0 0DD9030C */  jal        func_800F6434
    /* 102A4 80101EA4 02000424 */   addiu     $a0, $zero, 0x2
    /* 102A8 80101EA8 0F004014 */  bnez       $v0, .L80101EE8
    /* 102AC 80101EAC 00000000 */   nop
    /* 102B0 80101EB0 84DC030C */  jal        func_800F7210
    /* 102B4 80101EB4 06170424 */   addiu     $a0, $zero, 0x1706
    /* 102B8 80101EB8 C1CE030C */  jal        func_800F3B04
    /* 102BC 80101EBC 1D170424 */   addiu     $a0, $zero, 0x171D
    /* 102C0 80101EC0 ABD5030C */  jal        func_800F56AC
    /* 102C4 80101EC4 21204000 */   addu      $a0, $v0, $zero
    /* 102C8 80101EC8 F5D4030C */  jal        func_800F53D4
    /* 102CC 80101ECC 00000000 */   nop
    /* 102D0 80101ED0 05004010 */  beqz       $v0, .L80101EE8
    /* 102D4 80101ED4 00000000 */   nop
    /* 102D8 80101ED8 7C0C040C */  jal        func_801031F0
    /* 102DC 80101EDC 00000000 */   nop
    /* 102E0 80101EE0 01090408 */  j          .L80102404
    /* 102E4 80101EE4 00000000 */   nop
  .L80101EE8:
    /* 102E8 80101EE8 59D9030C */  jal        func_800F6564
    /* 102EC 80101EEC 01170424 */   addiu     $a0, $zero, 0x1701
    /* 102F0 80101EF0 C1CE030C */  jal        func_800F3B04
    /* 102F4 80101EF4 23170424 */   addiu     $a0, $zero, 0x1723
    /* 102F8 80101EF8 35D5030C */  jal        func_800F54D4
    /* 102FC 80101EFC 21204000 */   addu      $a0, $v0, $zero
    /* 10300 80101F00 F5D4030C */  jal        func_800F53D4
    /* 10304 80101F04 00000000 */   nop
    /* 10308 80101F08 15004010 */  beqz       $v0, .L80101F60
    /* 1030C 80101F0C 00000000 */   nop
    /* 10310 80101F10 59D9030C */  jal        func_800F6564
    /* 10314 80101F14 20170424 */   addiu     $a0, $zero, 0x1720
    /* 10318 80101F18 0DD9030C */  jal        func_800F6434
    /* 1031C 80101F1C 02000424 */   addiu     $a0, $zero, 0x2
    /* 10320 80101F20 0F004014 */  bnez       $v0, .L80101F60
    /* 10324 80101F24 00000000 */   nop
    /* 10328 80101F28 84DC030C */  jal        func_800F7210
    /* 1032C 80101F2C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 10330 80101F30 C1CE030C */  jal        func_800F3B04
    /* 10334 80101F34 21170424 */   addiu     $a0, $zero, 0x1721
    /* 10338 80101F38 ABD5030C */  jal        func_800F56AC
    /* 1033C 80101F3C 21204000 */   addu      $a0, $v0, $zero
    /* 10340 80101F40 F5D4030C */  jal        func_800F53D4
    /* 10344 80101F44 00000000 */   nop
    /* 10348 80101F48 05004010 */  beqz       $v0, .L80101F60
    /* 1034C 80101F4C 00000000 */   nop
    /* 10350 80101F50 F80C040C */  jal        func_801033E0
    /* 10354 80101F54 00000000 */   nop
    /* 10358 80101F58 01090408 */  j          .L80102404
    /* 1035C 80101F5C 00000000 */   nop
  .L80101F60:
    /* 10360 80101F60 59D9030C */  jal        func_800F6564
    /* 10364 80101F64 01170424 */   addiu     $a0, $zero, 0x1701
    /* 10368 80101F68 C1CE030C */  jal        func_800F3B04
    /* 1036C 80101F6C 27170424 */   addiu     $a0, $zero, 0x1727
    /* 10370 80101F70 35D5030C */  jal        func_800F54D4
    /* 10374 80101F74 21204000 */   addu      $a0, $v0, $zero
    /* 10378 80101F78 F5D4030C */  jal        func_800F53D4
    /* 1037C 80101F7C 00000000 */   nop
    /* 10380 80101F80 20014010 */  beqz       $v0, .L80102404
    /* 10384 80101F84 00000000 */   nop
    /* 10388 80101F88 59D9030C */  jal        func_800F6564
    /* 1038C 80101F8C 24170424 */   addiu     $a0, $zero, 0x1724
    /* 10390 80101F90 0DD9030C */  jal        func_800F6434
    /* 10394 80101F94 02000424 */   addiu     $a0, $zero, 0x2
    /* 10398 80101F98 1A014014 */  bnez       $v0, .L80102404
    /* 1039C 80101F9C 00000000 */   nop
    /* 103A0 80101FA0 84DC030C */  jal        func_800F7210
    /* 103A4 80101FA4 06170424 */   addiu     $a0, $zero, 0x1706
    /* 103A8 80101FA8 C1CE030C */  jal        func_800F3B04
    /* 103AC 80101FAC 25170424 */   addiu     $a0, $zero, 0x1725
    /* 103B0 80101FB0 ABD5030C */  jal        func_800F56AC
    /* 103B4 80101FB4 21204000 */   addu      $a0, $v0, $zero
    /* 103B8 80101FB8 F5D4030C */  jal        func_800F53D4
    /* 103BC 80101FBC 00000000 */   nop
    /* 103C0 80101FC0 10014010 */  beqz       $v0, .L80102404
    /* 103C4 80101FC4 00000000 */   nop
    /* 103C8 80101FC8 53D9030C */  jal        func_800F654C
    /* 103CC 80101FCC 0E000424 */   addiu     $a0, $zero, 0xE
    /* 103D0 80101FD0 62E0030C */  jal        func_800F8188
    /* 103D4 80101FD4 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 103D8 80101FD8 53D9030C */  jal        func_800F654C
    /* 103DC 80101FDC 01000424 */   addiu     $a0, $zero, 0x1
    /* 103E0 80101FE0 62E0030C */  jal        func_800F8188
    /* 103E4 80101FE4 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 103E8 80101FE8 4AA4050C */  jal        func_80169128
    /* 103EC 80101FEC 00000000 */   nop
    /* 103F0 80101FF0 53D9030C */  jal        func_800F654C
    /* 103F4 80101FF4 54000424 */   addiu     $a0, $zero, 0x54
    /* 103F8 80101FF8 AB6B040C */  jal        func_8011AEAC
    /* 103FC 80101FFC 00000000 */   nop
    /* 10400 80102000 01090408 */  j          .L80102404
    /* 10404 80102004 00000000 */   nop
  .L80102008:
    /* 10408 80102008 EEE3030C */  jal        func_800F8FB8
    /* 1040C 8010200C 79000424 */   addiu     $a0, $zero, 0x79
  .L80102010:
    /* 10410 80102010 9E0B040C */  jal        func_80102E78
    /* 10414 80102014 00000000 */   nop
    /* 10418 80102018 68D7030C */  jal        func_800F5DA0
    /* 1041C 8010201C B5000424 */   addiu     $a0, $zero, 0xB5
    /* 10420 80102020 AFD8030C */  jal        func_800F62BC
    /* 10424 80102024 79000424 */   addiu     $a0, $zero, 0x79
    /* 10428 80102028 8CD9030C */  jal        func_800F6630
    /* 1042C 8010202C 79000424 */   addiu     $a0, $zero, 0x79
    /* 10430 80102030 5DD5030C */  jal        func_800F5574
    /* 10434 80102034 10000424 */   addiu     $a0, $zero, 0x10
    /* 10438 80102038 F5D4030C */  jal        func_800F53D4
    /* 1043C 8010203C 00000000 */   nop
    /* 10440 80102040 F3FF4010 */  beqz       $v0, .L80102010
    /* 10444 80102044 00000000 */   nop
    /* 10448 80102048 8CD9030C */  jal        func_800F6630
    /* 1044C 8010204C A1000424 */   addiu     $a0, $zero, 0xA1
    /* 10450 80102050 92D0030C */  jal        func_800F4248
    /* 10454 80102054 08000424 */   addiu     $a0, $zero, 0x8
    /* 10458 80102058 48D0030C */  jal        func_800F4120
    /* 1045C 8010205C 02020424 */   addiu     $a0, $zero, 0x202
    /* 10460 80102060 05004014 */  bnez       $v0, .L80102078
    /* 10464 80102064 00000000 */   nop
    /* 10468 80102068 0509040C */  jal        func_80102414
    /* 1046C 8010206C 00000000 */   nop
    /* 10470 80102070 01090408 */  j          .L80102404
    /* 10474 80102074 00000000 */   nop
  .L80102078:
    /* 10478 80102078 DDE3030C */  jal        func_800F8F74
    /* 1047C 8010207C 04170424 */   addiu     $a0, $zero, 0x1704
    /* 10480 80102080 EEE3030C */  jal        func_800F8FB8
    /* 10484 80102084 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 10488 80102088 EEE3030C */  jal        func_800F8FB8
    /* 1048C 8010208C 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 10490 80102090 53D9030C */  jal        func_800F654C
    /* 10494 80102094 02000424 */   addiu     $a0, $zero, 0x2
    /* 10498 80102098 62E0030C */  jal        func_800F8188
    /* 1049C 8010209C 05170424 */   addiu     $a0, $zero, 0x1705
    /* 104A0 801020A0 84DC030C */  jal        func_800F7210
    /* 104A4 801020A4 06170424 */   addiu     $a0, $zero, 0x1706
    /* 104A8 801020A8 40E3030C */  jal        func_800F8D00
    /* 104AC 801020AC 13170424 */   addiu     $a0, $zero, 0x1713
    /* 104B0 801020B0 59D9030C */  jal        func_800F6564
    /* 104B4 801020B4 15170424 */   addiu     $a0, $zero, 0x1715
    /* 104B8 801020B8 5DD5030C */  jal        func_800F5574
    /* 104BC 801020BC 02000424 */   addiu     $a0, $zero, 0x2
    /* 104C0 801020C0 F5D4030C */  jal        func_800F53D4
    /* 104C4 801020C4 00000000 */   nop
    /* 104C8 801020C8 05004010 */  beqz       $v0, .L801020E0
    /* 104CC 801020CC 00000000 */   nop
    /* 104D0 801020D0 DDE3030C */  jal        func_800F8F74
    /* 104D4 801020D4 15170424 */   addiu     $a0, $zero, 0x1715
    /* 104D8 801020D8 DDE3030C */  jal        func_800F8F74
    /* 104DC 801020DC 12170424 */   addiu     $a0, $zero, 0x1712
  .L801020E0:
    /* 104E0 801020E0 C6F5030C */  jal        func_800FD718
    /* 104E4 801020E4 00000000 */   nop
    /* 104E8 801020E8 90D8030C */  jal        func_800F6240
    /* 104EC 801020EC 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* 104F0 801020F0 01090408 */  j          .L80102404
    /* 104F4 801020F4 00000000 */   nop
  .L801020F8:
    /* 104F8 801020F8 8CD9030C */  jal        func_800F6630
    /* 104FC 801020FC A1000424 */   addiu     $a0, $zero, 0xA1
    /* 10500 80102100 92D0030C */  jal        func_800F4248
    /* 10504 80102104 01000424 */   addiu     $a0, $zero, 0x1
    /* 10508 80102108 48D0030C */  jal        func_800F4120
    /* 1050C 8010210C 02020424 */   addiu     $a0, $zero, 0x202
    /* 10510 80102110 BC004010 */  beqz       $v0, .L80102404
    /* 10514 80102114 00000000 */   nop
    /* 10518 80102118 AEF5030C */  jal        func_800FD6B8
    /* 1051C 8010211C 00000000 */   nop
    /* 10520 80102120 53D9030C */  jal        func_800F654C
    /* 10524 80102124 02000424 */   addiu     $a0, $zero, 0x2
    /* 10528 80102128 62E0030C */  jal        func_800F8188
    /* 1052C 8010212C 0F170424 */   addiu     $a0, $zero, 0x170F
    /* 10530 80102130 53D9030C */  jal        func_800F654C
    /* 10534 80102134 70000424 */   addiu     $a0, $zero, 0x70
    /* 10538 80102138 62E0030C */  jal        func_800F8188
    /* 1053C 8010213C 10170424 */   addiu     $a0, $zero, 0x1710
    /* 10540 80102140 62E0030C */  jal        func_800F8188
    /* 10544 80102144 11170424 */   addiu     $a0, $zero, 0x1711
    /* 10548 80102148 53D9030C */  jal        func_800F654C
    /* 1054C 8010214C 01000424 */   addiu     $a0, $zero, 0x1
    /* 10550 80102150 62E0030C */  jal        func_800F8188
    /* 10554 80102154 05170424 */   addiu     $a0, $zero, 0x1705
    /* 10558 80102158 53D9030C */  jal        func_800F654C
    /* 1055C 8010215C 02000424 */   addiu     $a0, $zero, 0x2
    /* 10560 80102160 93E0030C */  jal        func_800F824C
    /* 10564 80102164 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 10568 80102168 7536040C */  jal        func_8010D9D4
    /* 1056C 8010216C 00000000 */   nop
    /* 10570 80102170 19DE030C */  jal        func_800F7864
    /* 10574 80102174 00000000 */   nop
    /* 10578 80102178 CADD030C */  jal        func_800F7728
    /* 1057C 8010217C 01010424 */   addiu     $a0, $zero, 0x101
    /* 10580 80102180 10004014 */  bnez       $v0, .L801021C4
    /* 10584 80102184 00000000 */   nop
    /* 10588 80102188 53D9030C */  jal        func_800F654C
    /* 1058C 8010218C 03000424 */   addiu     $a0, $zero, 0x3
    /* 10590 80102190 62E0030C */  jal        func_800F8188
    /* 10594 80102194 05170424 */   addiu     $a0, $zero, 0x1705
    /* 10598 80102198 8CD9030C */  jal        func_800F6630
    /* 1059C 8010219C 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 105A0 801021A0 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 105A4 801021A4 00000000 */  nop
    /* 105A8 801021A8 00006290 */  lbu        $v0, 0x0($v1)
    /* 105AC 801021AC 00000000 */  nop
    /* 105B0 801021B0 27100200 */  nor        $v0, $zero, $v0
    /* 105B4 801021B4 7AD8030C */  jal        func_800F61E8
    /* 105B8 801021B8 000062A0 */   sb        $v0, 0x0($v1)
    /* 105BC 801021BC 93E0030C */  jal        func_800F824C
    /* 105C0 801021C0 2C000424 */   addiu     $a0, $zero, 0x2C
  .L801021C4:
    /* 105C4 801021C4 53D9030C */  jal        func_800F654C
    /* 105C8 801021C8 02000424 */   addiu     $a0, $zero, 0x2
    /* 105CC 801021CC 93E0030C */  jal        func_800F824C
    /* 105D0 801021D0 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 105D4 801021D4 7536040C */  jal        func_8010D9D4
    /* 105D8 801021D8 00000000 */   nop
    /* 105DC 801021DC 19DE030C */  jal        func_800F7864
    /* 105E0 801021E0 00000000 */   nop
    /* 105E4 801021E4 CADD030C */  jal        func_800F7728
    /* 105E8 801021E8 01010424 */   addiu     $a0, $zero, 0x101
    /* 105EC 801021EC 0C004014 */  bnez       $v0, .L80102220
    /* 105F0 801021F0 00000000 */   nop
    /* 105F4 801021F4 8CD9030C */  jal        func_800F6630
    /* 105F8 801021F8 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 105FC 801021FC 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 10600 80102200 00000000 */  nop
    /* 10604 80102204 00006290 */  lbu        $v0, 0x0($v1)
    /* 10608 80102208 00000000 */  nop
    /* 1060C 8010220C 27100200 */  nor        $v0, $zero, $v0
    /* 10610 80102210 7AD8030C */  jal        func_800F61E8
    /* 10614 80102214 000062A0 */   sb        $v0, 0x0($v1)
    /* 10618 80102218 93E0030C */  jal        func_800F824C
    /* 1061C 8010221C 2E000424 */   addiu     $a0, $zero, 0x2E
  .L80102220:
    /* 10620 80102220 DDE3030C */  jal        func_800F8F74
    /* 10624 80102224 04170424 */   addiu     $a0, $zero, 0x1704
  .L80102228:
    /* 10628 80102228 DEF9030C */  jal        func_800FE778
    /* 1062C 8010222C 00000000 */   nop
    /* 10630 80102230 7536040C */  jal        func_8010D9D4
    /* 10634 80102234 00000000 */   nop
    /* 10638 80102238 5DD5030C */  jal        func_800F5574
    /* 1063C 8010223C 10000424 */   addiu     $a0, $zero, 0x10
    /* 10640 80102240 F0D4030C */  jal        func_800F53C0
    /* 10644 80102244 00000000 */   nop
    /* 10648 80102248 0C004014 */  bnez       $v0, .L8010227C
    /* 1064C 8010224C 00000000 */   nop
    /* 10650 80102250 8CD9030C */  jal        func_800F6630
    /* 10654 80102254 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 10658 80102258 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 1065C 8010225C 00000000 */  nop
    /* 10660 80102260 00006290 */  lbu        $v0, 0x0($v1)
    /* 10664 80102264 00000000 */  nop
    /* 10668 80102268 27100200 */  nor        $v0, $zero, $v0
    /* 1066C 8010226C 7AD8030C */  jal        func_800F61E8
    /* 10670 80102270 000062A0 */   sb        $v0, 0x0($v1)
    /* 10674 80102274 93E0030C */  jal        func_800F824C
    /* 10678 80102278 2E000424 */   addiu     $a0, $zero, 0x2E
  .L8010227C:
    /* 1067C 8010227C 59D9030C */  jal        func_800F6564
    /* 10680 80102280 10170424 */   addiu     $a0, $zero, 0x1710
    /* 10684 80102284 04D5030C */  jal        func_800F5410
    /* 10688 80102288 00000000 */   nop
    /* 1068C 8010228C 0FCF030C */  jal        func_800F3C3C
    /* 10690 80102290 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 10694 80102294 CECF030C */  jal        func_800F3F38
    /* 10698 80102298 21204000 */   addu      $a0, $v0, $zero
    /* 1069C 8010229C 62E0030C */  jal        func_800F8188
    /* 106A0 801022A0 10170424 */   addiu     $a0, $zero, 0x1710
    /* 106A4 801022A4 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 106A8 801022A8 00000000 */  nop
    /* 106AC 801022AC 00006290 */  lbu        $v0, 0x0($v1)
    /* 106B0 801022B0 00000000 */  nop
    /* 106B4 801022B4 FD004230 */  andi       $v0, $v0, 0xFD
    /* 106B8 801022B8 000062A0 */  sb         $v0, 0x0($v1)
    /* 106BC 801022BC 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 106C0 801022C0 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 106C4 801022C4 00008290 */  lbu        $v0, 0x0($a0)
    /* 106C8 801022C8 0000A390 */  lbu        $v1, 0x0($a1)
    /* 106CC 801022CC 02004014 */  bnez       $v0, .L801022D8
    /* 106D0 801022D0 00000000 */   nop
    /* 106D4 801022D4 02006334 */  ori        $v1, $v1, 0x2
  .L801022D8:
    /* 106D8 801022D8 F5D4030C */  jal        func_800F53D4
    /* 106DC 801022DC 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 106E0 801022E0 34004014 */  bnez       $v0, .L801023B4
    /* 106E4 801022E4 00000000 */   nop
    /* 106E8 801022E8 5DD5030C */  jal        func_800F5574
    /* 106EC 801022EC F0000424 */   addiu     $a0, $zero, 0xF0
    /* 106F0 801022F0 F5D4030C */  jal        func_800F53D4
    /* 106F4 801022F4 00000000 */   nop
    /* 106F8 801022F8 2E004014 */  bnez       $v0, .L801023B4
    /* 106FC 801022FC 00000000 */   nop
    /* 10700 80102300 59D9030C */  jal        func_800F6564
    /* 10704 80102304 11170424 */   addiu     $a0, $zero, 0x1711
    /* 10708 80102308 04D5030C */  jal        func_800F5410
    /* 1070C 8010230C 00000000 */   nop
    /* 10710 80102310 0FCF030C */  jal        func_800F3C3C
    /* 10714 80102314 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 10718 80102318 CECF030C */  jal        func_800F3F38
    /* 1071C 8010231C 21204000 */   addu      $a0, $v0, $zero
    /* 10720 80102320 62E0030C */  jal        func_800F8188
    /* 10724 80102324 11170424 */   addiu     $a0, $zero, 0x1711
    /* 10728 80102328 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 1072C 8010232C 00000000 */  nop
    /* 10730 80102330 00006290 */  lbu        $v0, 0x0($v1)
    /* 10734 80102334 00000000 */  nop
    /* 10738 80102338 FD004230 */  andi       $v0, $v0, 0xFD
    /* 1073C 8010233C 000062A0 */  sb         $v0, 0x0($v1)
    /* 10740 80102340 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 10744 80102344 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 10748 80102348 00008290 */  lbu        $v0, 0x0($a0)
    /* 1074C 8010234C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 10750 80102350 02004014 */  bnez       $v0, .L8010235C
    /* 10754 80102354 00000000 */   nop
    /* 10758 80102358 02006334 */  ori        $v1, $v1, 0x2
  .L8010235C:
    /* 1075C 8010235C F5D4030C */  jal        func_800F53D4
    /* 10760 80102360 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 10764 80102364 13004014 */  bnez       $v0, .L801023B4
    /* 10768 80102368 00000000 */   nop
    /* 1076C 8010236C 5DD5030C */  jal        func_800F5574
    /* 10770 80102370 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 10774 80102374 F5D4030C */  jal        func_800F53D4
    /* 10778 80102378 00000000 */   nop
    /* 1077C 8010237C 0D004014 */  bnez       $v0, .L801023B4
    /* 10780 80102380 00000000 */   nop
    /* 10784 80102384 53D9030C */  jal        func_800F654C
    /* 10788 80102388 01000424 */   addiu     $a0, $zero, 0x1
    /* 1078C 8010238C 62E0030C */  jal        func_800F8188
    /* 10790 80102390 04170424 */   addiu     $a0, $zero, 0x1704
    /* 10794 80102394 82C5050C */  jal        func_80171608
    /* 10798 80102398 00000000 */   nop
    /* 1079C 8010239C DDE3030C */  jal        func_800F8F74
    /* 107A0 801023A0 04170424 */   addiu     $a0, $zero, 0x1704
    /* 107A4 801023A4 65C4050C */  jal        func_80171194
    /* 107A8 801023A8 00000000 */   nop
    /* 107AC 801023AC 8A080408 */  j          .L80102228
    /* 107B0 801023B0 00000000 */   nop
  .L801023B4:
    /* 107B4 801023B4 DEF9030C */  jal        func_800FE778
    /* 107B8 801023B8 00000000 */   nop
    /* 107BC 801023BC 1CFA030C */  jal        func_800FE870
    /* 107C0 801023C0 00000000 */   nop
    /* 107C4 801023C4 DDE3030C */  jal        func_800F8F74
    /* 107C8 801023C8 04170424 */   addiu     $a0, $zero, 0x1704
    /* 107CC 801023CC DDE3030C */  jal        func_800F8F74
    /* 107D0 801023D0 0F170424 */   addiu     $a0, $zero, 0x170F
    /* 107D4 801023D4 09FC030C */  jal        func_800FF024
    /* 107D8 801023D8 00000000 */   nop
    /* 107DC 801023DC DEF9030C */  jal        func_800FE778
    /* 107E0 801023E0 00000000 */   nop
    /* 107E4 801023E4 EEE3030C */  jal        func_800F8FB8
    /* 107E8 801023E8 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 107EC 801023EC EEE3030C */  jal        func_800F8FB8
    /* 107F0 801023F0 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 107F4 801023F4 90D8030C */  jal        func_800F6240
    /* 107F8 801023F8 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* 107FC 801023FC C6F5030C */  jal        func_800FD718
    /* 10800 80102400 00000000 */   nop
  .L80102404:
    /* 10804 80102404 1000BF8F */  lw         $ra, 0x10($sp)
    /* 10808 80102408 00000000 */  nop
    /* 1080C 8010240C 0800E003 */  jr         $ra
    /* 10810 80102410 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80101788
