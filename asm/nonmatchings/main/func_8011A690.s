nonmatching func_8011A690, 0x488

glabel func_8011A690
    /* 28A90 8011A690 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 28A94 8011A694 1000BFAF */  sw         $ra, 0x10($sp)
    /* 28A98 8011A698 DADA030C */  jal        func_800F6B68
    /* 28A9C 8011A69C D6090424 */   addiu     $a0, $zero, 0x9D6
    /* 28AA0 8011A6A0 5DD5030C */  jal        func_800F5574
    /* 28AA4 8011A6A4 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 28AA8 8011A6A8 F0D4030C */  jal        func_800F53C0
    /* 28AAC 8011A6AC 00000000 */   nop
    /* 28AB0 8011A6B0 3D004014 */  bnez       $v0, .L8011A7A8
    /* 28AB4 8011A6B4 00000000 */   nop
    /* 28AB8 8011A6B8 8C04040C */  jal        func_80101230
    /* 28ABC 8011A6BC 00000000 */   nop
    /* 28AC0 8011A6C0 DDE3030C */  jal        func_800F8F74
    /* 28AC4 8011A6C4 04170424 */   addiu     $a0, $zero, 0x1704
    /* 28AC8 8011A6C8 DADA030C */  jal        func_800F6B68
    /* 28ACC 8011A6CC D6090424 */   addiu     $a0, $zero, 0x9D6
    /* 28AD0 8011A6D0 62E0030C */  jal        func_800F8188
    /* 28AD4 8011A6D4 02170424 */   addiu     $a0, $zero, 0x1702
    /* 28AD8 8011A6D8 DADA030C */  jal        func_800F6B68
    /* 28ADC 8011A6DC D7090424 */   addiu     $a0, $zero, 0x9D7
    /* 28AE0 8011A6E0 92D0030C */  jal        func_800F4248
    /* 28AE4 8011A6E4 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 28AE8 8011A6E8 62E0030C */  jal        func_800F8188
    /* 28AEC 8011A6EC 06170424 */   addiu     $a0, $zero, 0x1706
    /* 28AF0 8011A6F0 DADA030C */  jal        func_800F6B68
    /* 28AF4 8011A6F4 D7090424 */   addiu     $a0, $zero, 0x9D7
    /* 28AF8 8011A6F8 92D0030C */  jal        func_800F4248
    /* 28AFC 8011A6FC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 28B00 8011A700 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 28B04 8011A704 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 28B08 8011A708 00000000 */  nop
    /* 28B0C 8011A70C 00006290 */  lbu        $v0, 0x0($v1)
    /* 28B10 8011A710 05170424 */  addiu      $a0, $zero, 0x1705
    /* 28B14 8011A714 82110200 */  srl        $v0, $v0, 6
    /* 28B18 8011A718 62E0030C */  jal        func_800F8188
    /* 28B1C 8011A71C 000062A0 */   sb        $v0, 0x0($v1)
    /* 28B20 8011A720 DADA030C */  jal        func_800F6B68
    /* 28B24 8011A724 D8090424 */   addiu     $a0, $zero, 0x9D8
    /* 28B28 8011A728 62E0030C */  jal        func_800F8188
    /* 28B2C 8011A72C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 28B30 8011A730 DADA030C */  jal        func_800F6B68
    /* 28B34 8011A734 D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28B38 8011A738 92D0030C */  jal        func_800F4248
    /* 28B3C 8011A73C 20000424 */   addiu     $a0, $zero, 0x20
    /* 28B40 8011A740 48D0030C */  jal        func_800F4120
    /* 28B44 8011A744 02000424 */   addiu     $a0, $zero, 0x2
    /* 28B48 8011A748 05004014 */  bnez       $v0, .L8011A760
    /* 28B4C 8011A74C 00000000 */   nop
    /* 28B50 8011A750 53D9030C */  jal        func_800F654C
    /* 28B54 8011A754 01000424 */   addiu     $a0, $zero, 0x1
    /* 28B58 8011A758 93E0030C */  jal        func_800F824C
    /* 28B5C 8011A75C CA000424 */   addiu     $a0, $zero, 0xCA
  .L8011A760:
    /* 28B60 8011A760 DADA030C */  jal        func_800F6B68
    /* 28B64 8011A764 D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28B68 8011A768 0DD9030C */  jal        func_800F6434
    /* 28B6C 8011A76C 80000424 */   addiu     $a0, $zero, 0x80
    /* 28B70 8011A770 05004014 */  bnez       $v0, .L8011A788
    /* 28B74 8011A774 00000000 */   nop
    /* 28B78 8011A778 53D9030C */  jal        func_800F654C
    /* 28B7C 8011A77C 21200000 */   addu      $a0, $zero, $zero
    /* 28B80 8011A780 E4690408 */  j          .L8011A790
    /* 28B84 8011A784 00000000 */   nop
  .L8011A788:
    /* 28B88 8011A788 53D9030C */  jal        func_800F654C
    /* 28B8C 8011A78C 01000424 */   addiu     $a0, $zero, 0x1
  .L8011A790:
    /* 28B90 8011A790 62E0030C */  jal        func_800F8188
    /* 28B94 8011A794 01170424 */   addiu     $a0, $zero, 0x1701
    /* 28B98 8011A798 53D9030C */  jal        func_800F654C
    /* 28B9C 8011A79C 03000424 */   addiu     $a0, $zero, 0x3
    /* 28BA0 8011A7A0 226A0408 */  j          .L8011A888
    /* 28BA4 8011A7A4 00000000 */   nop
  .L8011A7A8:
    /* 28BA8 8011A7A8 20D5030C */  jal        func_800F5480
    /* 28BAC 8011A7AC 00000000 */   nop
    /* 28BB0 8011A7B0 16E0030C */  jal        func_800F8058
    /* 28BB4 8011A7B4 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 28BB8 8011A7B8 80E4030C */  jal        func_800F9200
    /* 28BBC 8011A7BC 00000000 */   nop
    /* 28BC0 8011A7C0 DADA030C */  jal        func_800F6B68
    /* 28BC4 8011A7C4 D7090424 */   addiu     $a0, $zero, 0x9D7
    /* 28BC8 8011A7C8 62E0030C */  jal        func_800F8188
    /* 28BCC 8011A7CC 06170424 */   addiu     $a0, $zero, 0x1706
    /* 28BD0 8011A7D0 DADA030C */  jal        func_800F6B68
    /* 28BD4 8011A7D4 D8090424 */   addiu     $a0, $zero, 0x9D8
    /* 28BD8 8011A7D8 62E0030C */  jal        func_800F8188
    /* 28BDC 8011A7DC 07170424 */   addiu     $a0, $zero, 0x1707
    /* 28BE0 8011A7E0 DADA030C */  jal        func_800F6B68
    /* 28BE4 8011A7E4 D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28BE8 8011A7E8 92D0030C */  jal        func_800F4248
    /* 28BEC 8011A7EC 40000424 */   addiu     $a0, $zero, 0x40
    /* 28BF0 8011A7F0 93E0030C */  jal        func_800F824C
    /* 28BF4 8011A7F4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 28BF8 8011A7F8 DADA030C */  jal        func_800F6B68
    /* 28BFC 8011A7FC D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28C00 8011A800 92D0030C */  jal        func_800F4248
    /* 28C04 8011A804 20000424 */   addiu     $a0, $zero, 0x20
    /* 28C08 8011A808 48D0030C */  jal        func_800F4120
    /* 28C0C 8011A80C 02000424 */   addiu     $a0, $zero, 0x2
    /* 28C10 8011A810 05004014 */  bnez       $v0, .L8011A828
    /* 28C14 8011A814 00000000 */   nop
    /* 28C18 8011A818 53D9030C */  jal        func_800F654C
    /* 28C1C 8011A81C 01000424 */   addiu     $a0, $zero, 0x1
    /* 28C20 8011A820 93E0030C */  jal        func_800F824C
    /* 28C24 8011A824 CA000424 */   addiu     $a0, $zero, 0xCA
  .L8011A828:
    /* 28C28 8011A828 DADA030C */  jal        func_800F6B68
    /* 28C2C 8011A82C D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28C30 8011A830 92D0030C */  jal        func_800F4248
    /* 28C34 8011A834 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 28C38 8011A838 33D7030C */  jal        func_800F5CCC
    /* 28C3C 8011A83C 00000000 */   nop
    /* 28C40 8011A840 E3D6030C */  jal        func_800F5B8C
    /* 28C44 8011A844 02020424 */   addiu     $a0, $zero, 0x202
    /* 28C48 8011A848 09004014 */  bnez       $v0, .L8011A870
    /* 28C4C 8011A84C 00000000 */   nop
    /* 28C50 8011A850 59D9030C */  jal        func_800F6564
    /* 28C54 8011A854 2F170424 */   addiu     $a0, $zero, 0x172F
    /* 28C58 8011A858 62E0030C */  jal        func_800F8188
    /* 28C5C 8011A85C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 28C60 8011A860 59D9030C */  jal        func_800F6564
    /* 28C64 8011A864 30170424 */   addiu     $a0, $zero, 0x1730
    /* 28C68 8011A868 62E0030C */  jal        func_800F8188
    /* 28C6C 8011A86C 07170424 */   addiu     $a0, $zero, 0x1707
  .L8011A870:
    /* 28C70 8011A870 77DC030C */  jal        func_800F71DC
    /* 28C74 8011A874 21200000 */   addu      $a0, $zero, $zero
    /* 28C78 8011A878 40E3030C */  jal        func_800F8D00
    /* 28C7C 8011A87C 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 28C80 8011A880 F7E4030C */  jal        func_800F93DC
    /* 28C84 8011A884 00000000 */   nop
  .L8011A888:
    /* 28C88 8011A888 C66A040C */  jal        func_8011AB18
    /* 28C8C 8011A88C 00000000 */   nop
    /* 28C90 8011A890 59D9030C */  jal        func_800F6564
    /* 28C94 8011A894 00170424 */   addiu     $a0, $zero, 0x1700
    /* 28C98 8011A898 5DD5030C */  jal        func_800F5574
    /* 28C9C 8011A89C 03000424 */   addiu     $a0, $zero, 0x3
    /* 28CA0 8011A8A0 F5D4030C */  jal        func_800F53D4
    /* 28CA4 8011A8A4 00000000 */   nop
    /* 28CA8 8011A8A8 7D004014 */  bnez       $v0, .L8011AAA0
    /* 28CAC 8011A8AC 00000000 */   nop
    /* 28CB0 8011A8B0 9CDC030C */  jal        func_800F7270
    /* 28CB4 8011A8B4 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 28CB8 8011A8B8 DADA030C */  jal        func_800F6B68
    /* 28CBC 8011A8BC D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28CC0 8011A8C0 92D0030C */  jal        func_800F4248
    /* 28CC4 8011A8C4 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 28CC8 8011A8C8 48D0030C */  jal        func_800F4120
    /* 28CCC 8011A8CC 02020424 */   addiu     $a0, $zero, 0x202
    /* 28CD0 8011A8D0 09004014 */  bnez       $v0, .L8011A8F8
    /* 28CD4 8011A8D4 00000000 */   nop
    /* 28CD8 8011A8D8 DDE3030C */  jal        func_800F8F74
    /* 28CDC 8011A8DC 04170424 */   addiu     $a0, $zero, 0x1704
    /* 28CE0 8011A8E0 EEE3030C */  jal        func_800F8FB8
    /* 28CE4 8011A8E4 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 28CE8 8011A8E8 EEE3030C */  jal        func_800F8FB8
    /* 28CEC 8011A8EC 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 28CF0 8011A8F0 A86A0408 */  j          .L8011AAA0
    /* 28CF4 8011A8F4 00000000 */   nop
  .L8011A8F8:
    /* 28CF8 8011A8F8 33D7030C */  jal        func_800F5CCC
    /* 28CFC 8011A8FC 00000000 */   nop
    /* 28D00 8011A900 E3D6030C */  jal        func_800F5B8C
    /* 28D04 8011A904 02020424 */   addiu     $a0, $zero, 0x202
    /* 28D08 8011A908 09004014 */  bnez       $v0, .L8011A930
    /* 28D0C 8011A90C 00000000 */   nop
    /* 28D10 8011A910 53D9030C */  jal        func_800F654C
    /* 28D14 8011A914 01000424 */   addiu     $a0, $zero, 0x1
    /* 28D18 8011A918 62E0030C */  jal        func_800F8188
    /* 28D1C 8011A91C 0F170424 */   addiu     $a0, $zero, 0x170F
    /* 28D20 8011A920 CE0B040C */  jal        func_80102F38
    /* 28D24 8011A924 00000000 */   nop
    /* 28D28 8011A928 A86A0408 */  j          .L8011AAA0
    /* 28D2C 8011A92C 00000000 */   nop
  .L8011A930:
    /* 28D30 8011A930 33D7030C */  jal        func_800F5CCC
    /* 28D34 8011A934 00000000 */   nop
    /* 28D38 8011A938 E3D6030C */  jal        func_800F5B8C
    /* 28D3C 8011A93C 02020424 */   addiu     $a0, $zero, 0x202
    /* 28D40 8011A940 0B004014 */  bnez       $v0, .L8011A970
    /* 28D44 8011A944 00000000 */   nop
    /* 28D48 8011A948 53D9030C */  jal        func_800F654C
    /* 28D4C 8011A94C 01000424 */   addiu     $a0, $zero, 0x1
    /* 28D50 8011A950 62E0030C */  jal        func_800F8188
    /* 28D54 8011A954 12170424 */   addiu     $a0, $zero, 0x1712
    /* 28D58 8011A958 DDE3030C */  jal        func_800F8F74
    /* 28D5C 8011A95C 15170424 */   addiu     $a0, $zero, 0x1715
    /* 28D60 8011A960 DC0B040C */  jal        func_80102F70
    /* 28D64 8011A964 00000000 */   nop
    /* 28D68 8011A968 A86A0408 */  j          .L8011AAA0
    /* 28D6C 8011A96C 00000000 */   nop
  .L8011A970:
    /* 28D70 8011A970 33D7030C */  jal        func_800F5CCC
    /* 28D74 8011A974 00000000 */   nop
    /* 28D78 8011A978 E3D6030C */  jal        func_800F5B8C
    /* 28D7C 8011A97C 02020424 */   addiu     $a0, $zero, 0x202
    /* 28D80 8011A980 09004014 */  bnez       $v0, .L8011A9A8
    /* 28D84 8011A984 00000000 */   nop
    /* 28D88 8011A988 53D9030C */  jal        func_800F654C
    /* 28D8C 8011A98C 01000424 */   addiu     $a0, $zero, 0x1
    /* 28D90 8011A990 62E0030C */  jal        func_800F8188
    /* 28D94 8011A994 18170424 */   addiu     $a0, $zero, 0x1718
    /* 28D98 8011A998 0C0C040C */  jal        func_80103030
    /* 28D9C 8011A99C 00000000 */   nop
    /* 28DA0 8011A9A0 A86A0408 */  j          .L8011AAA0
    /* 28DA4 8011A9A4 00000000 */   nop
  .L8011A9A8:
    /* 28DA8 8011A9A8 33D7030C */  jal        func_800F5CCC
    /* 28DAC 8011A9AC 00000000 */   nop
    /* 28DB0 8011A9B0 E3D6030C */  jal        func_800F5B8C
    /* 28DB4 8011A9B4 02020424 */   addiu     $a0, $zero, 0x202
    /* 28DB8 8011A9B8 09004014 */  bnez       $v0, .L8011A9E0
    /* 28DBC 8011A9BC 00000000 */   nop
    /* 28DC0 8011A9C0 53D9030C */  jal        func_800F654C
    /* 28DC4 8011A9C4 01000424 */   addiu     $a0, $zero, 0x1
    /* 28DC8 8011A9C8 62E0030C */  jal        func_800F8188
    /* 28DCC 8011A9CC 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 28DD0 8011A9D0 7C0C040C */  jal        func_801031F0
    /* 28DD4 8011A9D4 00000000 */   nop
    /* 28DD8 8011A9D8 A86A0408 */  j          .L8011AAA0
    /* 28DDC 8011A9DC 00000000 */   nop
  .L8011A9E0:
    /* 28DE0 8011A9E0 33D7030C */  jal        func_800F5CCC
    /* 28DE4 8011A9E4 00000000 */   nop
    /* 28DE8 8011A9E8 E3D6030C */  jal        func_800F5B8C
    /* 28DEC 8011A9EC 02020424 */   addiu     $a0, $zero, 0x202
    /* 28DF0 8011A9F0 09004014 */  bnez       $v0, .L8011AA18
    /* 28DF4 8011A9F4 00000000 */   nop
    /* 28DF8 8011A9F8 53D9030C */  jal        func_800F654C
    /* 28DFC 8011A9FC 01000424 */   addiu     $a0, $zero, 0x1
    /* 28E00 8011AA00 62E0030C */  jal        func_800F8188
    /* 28E04 8011AA04 20170424 */   addiu     $a0, $zero, 0x1720
    /* 28E08 8011AA08 F80C040C */  jal        func_801033E0
    /* 28E0C 8011AA0C 00000000 */   nop
    /* 28E10 8011AA10 A86A0408 */  j          .L8011AAA0
    /* 28E14 8011AA14 00000000 */   nop
  .L8011AA18:
    /* 28E18 8011AA18 33D7030C */  jal        func_800F5CCC
    /* 28E1C 8011AA1C 00000000 */   nop
    /* 28E20 8011AA20 E3D6030C */  jal        func_800F5B8C
    /* 28E24 8011AA24 02020424 */   addiu     $a0, $zero, 0x202
    /* 28E28 8011AA28 09004014 */  bnez       $v0, .L8011AA50
    /* 28E2C 8011AA2C 00000000 */   nop
    /* 28E30 8011AA30 53D9030C */  jal        func_800F654C
    /* 28E34 8011AA34 01000424 */   addiu     $a0, $zero, 0x1
    /* 28E38 8011AA38 62E0030C */  jal        func_800F8188
    /* 28E3C 8011AA3C 24170424 */   addiu     $a0, $zero, 0x1724
    /* 28E40 8011AA40 6C0D040C */  jal        func_801035B0
    /* 28E44 8011AA44 00000000 */   nop
    /* 28E48 8011AA48 A86A0408 */  j          .L8011AAA0
    /* 28E4C 8011AA4C 00000000 */   nop
  .L8011AA50:
    /* 28E50 8011AA50 53D9030C */  jal        func_800F654C
    /* 28E54 8011AA54 01000424 */   addiu     $a0, $zero, 0x1
    /* 28E58 8011AA58 62E0030C */  jal        func_800F8188
    /* 28E5C 8011AA5C 28170424 */   addiu     $a0, $zero, 0x1728
    /* 28E60 8011AA60 9CDC030C */  jal        func_800F7270
    /* 28E64 8011AA64 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 28E68 8011AA68 DADA030C */  jal        func_800F6B68
    /* 28E6C 8011AA6C D9090424 */   addiu     $a0, $zero, 0x9D9
    /* 28E70 8011AA70 92D0030C */  jal        func_800F4248
    /* 28E74 8011AA74 18000424 */   addiu     $a0, $zero, 0x18
    /* 28E78 8011AA78 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 28E7C 8011AA7C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 28E80 8011AA80 00000000 */  nop
    /* 28E84 8011AA84 00006290 */  lbu        $v0, 0x0($v1)
    /* 28E88 8011AA88 05170424 */  addiu      $a0, $zero, 0x1705
    /* 28E8C 8011AA8C C2100200 */  srl        $v0, $v0, 3
    /* 28E90 8011AA90 62E0030C */  jal        func_800F8188
    /* 28E94 8011AA94 000062A0 */   sb        $v0, 0x0($v1)
    /* 28E98 8011AA98 FE0B040C */  jal        func_80102FF8
    /* 28E9C 8011AA9C 00000000 */   nop
  .L8011AAA0:
    /* 28EA0 8011AAA0 EEE3030C */  jal        func_800F8FB8
    /* 28EA4 8011AAA4 79000424 */   addiu     $a0, $zero, 0x79
    /* 28EA8 8011AAA8 EEE3030C */  jal        func_800F8FB8
    /* 28EAC 8011AAAC 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 28EB0 8011AAB0 EEE3030C */  jal        func_800F8FB8
    /* 28EB4 8011AAB4 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 28EB8 8011AAB8 53D9030C */  jal        func_800F654C
    /* 28EBC 8011AABC 81000424 */   addiu     $a0, $zero, 0x81
    /* 28EC0 8011AAC0 62E0030C */  jal        func_800F8188
    /* 28EC4 8011AAC4 00420424 */   addiu     $a0, $zero, 0x4200
    /* 28EC8 8011AAC8 F6F9030C */  jal        func_800FE7D8
    /* 28ECC 8011AACC 00000000 */   nop
    /* 28ED0 8011AAD0 12D5030C */  jal        func_800F5448
    /* 28ED4 8011AAD4 00000000 */   nop
    /* 28ED8 8011AAD8 9CDC030C */  jal        func_800F7270
    /* 28EDC 8011AADC B3000424 */   addiu     $a0, $zero, 0xB3
    /* 28EE0 8011AAE0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 28EE4 8011AAE4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 28EE8 8011AAE8 00000000 */  nop
    /* 28EEC 8011AAEC 00006294 */  lhu        $v0, 0x0($v1)
    /* 28EF0 8011AAF0 B3000424 */  addiu      $a0, $zero, 0xB3
    /* 28EF4 8011AAF4 04004224 */  addiu      $v0, $v0, 0x4
    /* 28EF8 8011AAF8 5BE3030C */  jal        func_800F8D6C
    /* 28EFC 8011AAFC 000062A4 */   sh        $v0, 0x0($v1)
    /* 28F00 8011AB00 977A040C */  jal        func_8011EA5C
    /* 28F04 8011AB04 00000000 */   nop
    /* 28F08 8011AB08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 28F0C 8011AB0C 00000000 */  nop
    /* 28F10 8011AB10 0800E003 */  jr         $ra
    /* 28F14 8011AB14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011A690
