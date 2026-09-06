nonmatching func_8012F3F0, 0x5B0

glabel func_8012F3F0
    /* 3D7F0 8012F3F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3D7F4 8012F3F4 1000BFAF */  sw         $ra, 0x10($sp)
  .L8012F3F8:
    /* 3D7F8 8012F3F8 59D9030C */  jal        func_800F6564
    /* 3D7FC 8012F3FC 871B0424 */   addiu     $a0, $zero, 0x1B87
    /* 3D800 8012F400 0DD9030C */  jal        func_800F6434
    /* 3D804 8012F404 02020424 */   addiu     $a0, $zero, 0x202
    /* 3D808 8012F408 19004014 */  bnez       $v0, .L8012F470
    /* 3D80C 8012F40C 00000000 */   nop
    /* 3D810 8012F410 DDE3030C */  jal        func_800F8F74
    /* 3D814 8012F414 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3D818 8012F418 59D9030C */  jal        func_800F6564
    /* 3D81C 8012F41C 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D820 8012F420 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3D824 8012F424 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3D828 8012F428 00000000 */  nop
    /* 3D82C 8012F42C 00006290 */  lbu        $v0, 0x0($v1)
    /* 3D830 8012F430 00000000 */  nop
    /* 3D834 8012F434 C0100200 */  sll        $v0, $v0, 3
    /* 3D838 8012F438 50D4030C */  jal        func_800F5140
    /* 3D83C 8012F43C 000062A0 */   sb        $v0, 0x0($v1)
    /* 3D840 8012F440 D3D3030C */  jal        func_800F4F4C
    /* 3D844 8012F444 00000000 */   nop
    /* 3D848 8012F448 02D0030C */  jal        func_800F4008
    /* 3D84C 8012F44C 10000424 */   addiu     $a0, $zero, 0x10
    /* 3D850 8012F450 93E0030C */  jal        func_800F824C
    /* 3D854 8012F454 46000424 */   addiu     $a0, $zero, 0x46
    /* 3D858 8012F458 53D9030C */  jal        func_800F654C
    /* 3D85C 8012F45C 08000424 */   addiu     $a0, $zero, 0x8
    /* 3D860 8012F460 93E0030C */  jal        func_800F824C
    /* 3D864 8012F464 45000424 */   addiu     $a0, $zero, 0x45
    /* 3D868 8012F468 1EBD0408 */  j          .L8012F478
    /* 3D86C 8012F46C 00000000 */   nop
  .L8012F470:
    /* 3D870 8012F470 E7BF040C */  jal        func_8012FF9C
    /* 3D874 8012F474 00000000 */   nop
  .L8012F478:
    /* 3D878 8012F478 B57D040C */  jal        func_8011F6D4
    /* 3D87C 8012F47C 00000000 */   nop
    /* 3D880 8012F480 C783040C */  jal        func_80120F1C
    /* 3D884 8012F484 00000000 */   nop
    /* 3D888 8012F488 57C2040C */  jal        func_8013095C
    /* 3D88C 8012F48C 00000000 */   nop
    /* 3D890 8012F490 A9C2040C */  jal        func_80130AA4
    /* 3D894 8012F494 00000000 */   nop
    /* 3D898 8012F498 62E0030C */  jal        func_800F8188
    /* 3D89C 8012F49C 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3D8A0 8012F4A0 40DD030C */  jal        func_800F7500
    /* 3D8A4 8012F4A4 1A020424 */   addiu     $a0, $zero, 0x21A
    /* 3D8A8 8012F4A8 B781040C */  jal        func_801206DC
    /* 3D8AC 8012F4AC 00000000 */   nop
    /* 3D8B0 8012F4B0 77DC030C */  jal        func_800F71DC
    /* 3D8B4 8012F4B4 0A020424 */   addiu     $a0, $zero, 0x20A
    /* 3D8B8 8012F4B8 1A80023C */  lui        $v0, %hi(D_801991D8)
    /* 3D8BC 8012F4BC D8914494 */  lhu        $a0, %lo(D_801991D8)($v0)
    /* 3D8C0 8012F4C0 40DD030C */  jal        func_800F7500
    /* 3D8C4 8012F4C4 00000000 */   nop
    /* 3D8C8 8012F4C8 E988040C */  jal        func_801223A4
    /* 3D8CC 8012F4CC 00000000 */   nop
    /* 3D8D0 8012F4D0 A17D040C */  jal        func_8011F684
    /* 3D8D4 8012F4D4 00000000 */   nop
    /* 3D8D8 8012F4D8 3A99040C */  jal        func_801264E8
    /* 3D8DC 8012F4DC 00000000 */   nop
    /* 3D8E0 8012F4E0 217E040C */  jal        func_8011F884
    /* 3D8E4 8012F4E4 00000000 */   nop
    /* 3D8E8 8012F4E8 59D9030C */  jal        func_800F6564
    /* 3D8EC 8012F4EC 871B0424 */   addiu     $a0, $zero, 0x1B87
    /* 3D8F0 8012F4F0 0DD9030C */  jal        func_800F6434
    /* 3D8F4 8012F4F4 02020424 */   addiu     $a0, $zero, 0x202
    /* 3D8F8 8012F4F8 67004014 */  bnez       $v0, .L8012F698
    /* 3D8FC 8012F4FC 00000000 */   nop
    /* 3D900 8012F500 8CD9030C */  jal        func_800F6630
    /* 3D904 8012F504 01000424 */   addiu     $a0, $zero, 0x1
    /* 3D908 8012F508 92D0030C */  jal        func_800F4248
    /* 3D90C 8012F50C 08000424 */   addiu     $a0, $zero, 0x8
    /* 3D910 8012F510 48D0030C */  jal        func_800F4120
    /* 3D914 8012F514 02000424 */   addiu     $a0, $zero, 0x2
    /* 3D918 8012F518 21004014 */  bnez       $v0, .L8012F5A0
    /* 3D91C 8012F51C 00000000 */   nop
    /* 3D920 8012F520 59D9030C */  jal        func_800F6564
    /* 3D924 8012F524 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D928 8012F528 93E0030C */  jal        func_800F824C
    /* 3D92C 8012F52C 43000424 */   addiu     $a0, $zero, 0x43
  .L8012F530:
    /* 3D930 8012F530 8CD9030C */  jal        func_800F6630
    /* 3D934 8012F534 43000424 */   addiu     $a0, $zero, 0x43
    /* 3D938 8012F538 33D7030C */  jal        func_800F5CCC
    /* 3D93C 8012F53C 00000000 */   nop
    /* 3D940 8012F540 E3D6030C */  jal        func_800F5B8C
    /* 3D944 8012F544 80800434 */   ori       $a0, $zero, 0x8080
    /* 3D948 8012F548 03004014 */  bnez       $v0, .L8012F558
    /* 3D94C 8012F54C 00000000 */   nop
    /* 3D950 8012F550 53D9030C */  jal        func_800F654C
    /* 3D954 8012F554 02000424 */   addiu     $a0, $zero, 0x2
  .L8012F558:
    /* 3D958 8012F558 3489040C */  jal        func_801224D0
    /* 3D95C 8012F55C 00000000 */   nop
    /* 3D960 8012F560 DADA030C */  jal        func_800F6B68
    /* 3D964 8012F564 7E1B0424 */   addiu     $a0, $zero, 0x1B7E
    /* 3D968 8012F568 0DD9030C */  jal        func_800F6434
    /* 3D96C 8012F56C 80000424 */   addiu     $a0, $zero, 0x80
    /* 3D970 8012F570 EFFF4014 */  bnez       $v0, .L8012F530
    /* 3D974 8012F574 00000000 */   nop
    /* 3D978 8012F578 80E4030C */  jal        func_800F9200
    /* 3D97C 8012F57C 00000000 */   nop
    /* 3D980 8012F580 8CD9030C */  jal        func_800F6630
    /* 3D984 8012F584 43000424 */   addiu     $a0, $zero, 0x43
    /* 3D988 8012F588 62E0030C */  jal        func_800F8188
    /* 3D98C 8012F58C 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D990 8012F590 F7E4030C */  jal        func_800F93DC
    /* 3D994 8012F594 00000000 */   nop
    /* 3D998 8012F598 68BE040C */  jal        func_8012F9A0
    /* 3D99C 8012F59C 00000000 */   nop
  .L8012F5A0:
    /* 3D9A0 8012F5A0 8CD9030C */  jal        func_800F6630
    /* 3D9A4 8012F5A4 01000424 */   addiu     $a0, $zero, 0x1
    /* 3D9A8 8012F5A8 92D0030C */  jal        func_800F4248
    /* 3D9AC 8012F5AC 04000424 */   addiu     $a0, $zero, 0x4
    /* 3D9B0 8012F5B0 48D0030C */  jal        func_800F4120
    /* 3D9B4 8012F5B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3D9B8 8012F5B8 23004014 */  bnez       $v0, .L8012F648
    /* 3D9BC 8012F5BC 00000000 */   nop
    /* 3D9C0 8012F5C0 59D9030C */  jal        func_800F6564
    /* 3D9C4 8012F5C4 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3D9C8 8012F5C8 93E0030C */  jal        func_800F824C
    /* 3D9CC 8012F5CC 43000424 */   addiu     $a0, $zero, 0x43
  .L8012F5D0:
    /* 3D9D0 8012F5D0 8CD9030C */  jal        func_800F6630
    /* 3D9D4 8012F5D4 43000424 */   addiu     $a0, $zero, 0x43
    /* 3D9D8 8012F5D8 7AD8030C */  jal        func_800F61E8
    /* 3D9DC 8012F5DC 00000000 */   nop
    /* 3D9E0 8012F5E0 5DD5030C */  jal        func_800F5574
    /* 3D9E4 8012F5E4 03000424 */   addiu     $a0, $zero, 0x3
    /* 3D9E8 8012F5E8 F5D4030C */  jal        func_800F53D4
    /* 3D9EC 8012F5EC 00000000 */   nop
    /* 3D9F0 8012F5F0 03004010 */  beqz       $v0, .L8012F600
    /* 3D9F4 8012F5F4 00000000 */   nop
    /* 3D9F8 8012F5F8 C7E5030C */  jal        func_800F971C
    /* 3D9FC 8012F5FC 00000000 */   nop
  .L8012F600:
    /* 3DA00 8012F600 3489040C */  jal        func_801224D0
    /* 3DA04 8012F604 00000000 */   nop
    /* 3DA08 8012F608 DADA030C */  jal        func_800F6B68
    /* 3DA0C 8012F60C 7E1B0424 */   addiu     $a0, $zero, 0x1B7E
    /* 3DA10 8012F610 0DD9030C */  jal        func_800F6434
    /* 3DA14 8012F614 80000424 */   addiu     $a0, $zero, 0x80
    /* 3DA18 8012F618 EDFF4014 */  bnez       $v0, .L8012F5D0
    /* 3DA1C 8012F61C 00000000 */   nop
    /* 3DA20 8012F620 80E4030C */  jal        func_800F9200
    /* 3DA24 8012F624 00000000 */   nop
    /* 3DA28 8012F628 8CD9030C */  jal        func_800F6630
    /* 3DA2C 8012F62C 43000424 */   addiu     $a0, $zero, 0x43
    /* 3DA30 8012F630 62E0030C */  jal        func_800F8188
    /* 3DA34 8012F634 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3DA38 8012F638 F7E4030C */  jal        func_800F93DC
    /* 3DA3C 8012F63C 00000000 */   nop
    /* 3DA40 8012F640 68BE040C */  jal        func_8012F9A0
    /* 3DA44 8012F644 00000000 */   nop
  .L8012F648:
    /* 3DA48 8012F648 8CD9030C */  jal        func_800F6630
    /* 3DA4C 8012F64C 21200000 */   addu      $a0, $zero, $zero
    /* 3DA50 8012F650 92D0030C */  jal        func_800F4248
    /* 3DA54 8012F654 80000424 */   addiu     $a0, $zero, 0x80
    /* 3DA58 8012F658 48D0030C */  jal        func_800F4120
    /* 3DA5C 8012F65C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DA60 8012F660 03004014 */  bnez       $v0, .L8012F670
    /* 3DA64 8012F664 00000000 */   nop
    /* 3DA68 8012F668 90D8030C */  jal        func_800F6240
    /* 3DA6C 8012F66C 871B0424 */   addiu     $a0, $zero, 0x1B87
  .L8012F670:
    /* 3DA70 8012F670 8CD9030C */  jal        func_800F6630
    /* 3DA74 8012F674 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DA78 8012F678 92D0030C */  jal        func_800F4248
    /* 3DA7C 8012F67C 80000424 */   addiu     $a0, $zero, 0x80
    /* 3DA80 8012F680 48D0030C */  jal        func_800F4120
    /* 3DA84 8012F684 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DA88 8012F688 5BFF4014 */  bnez       $v0, .L8012F3F8
    /* 3DA8C 8012F68C 21100000 */   addu      $v0, $zero, $zero
    /* 3DA90 8012F690 64BE0408 */  j          .L8012F990
    /* 3DA94 8012F694 00000000 */   nop
  .L8012F698:
    /* 3DA98 8012F698 8CD9030C */  jal        func_800F6630
    /* 3DA9C 8012F69C 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DAA0 8012F6A0 92D0030C */  jal        func_800F4248
    /* 3DAA4 8012F6A4 08000424 */   addiu     $a0, $zero, 0x8
    /* 3DAA8 8012F6A8 48D0030C */  jal        func_800F4120
    /* 3DAAC 8012F6AC 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DAB0 8012F6B0 0D004014 */  bnez       $v0, .L8012F6E8
    /* 3DAB4 8012F6B4 00000000 */   nop
    /* 3DAB8 8012F6B8 59D9030C */  jal        func_800F6564
    /* 3DABC 8012F6BC 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3DAC0 8012F6C0 33D7030C */  jal        func_800F5CCC
    /* 3DAC4 8012F6C4 00000000 */   nop
    /* 3DAC8 8012F6C8 E3D6030C */  jal        func_800F5B8C
    /* 3DACC 8012F6CC 80800434 */   ori       $a0, $zero, 0x8080
    /* 3DAD0 8012F6D0 03004014 */  bnez       $v0, .L8012F6E0
    /* 3DAD4 8012F6D4 00000000 */   nop
    /* 3DAD8 8012F6D8 53D9030C */  jal        func_800F654C
    /* 3DADC 8012F6DC 07000424 */   addiu     $a0, $zero, 0x7
  .L8012F6E0:
    /* 3DAE0 8012F6E0 62E0030C */  jal        func_800F8188
    /* 3DAE4 8012F6E4 831B0424 */   addiu     $a0, $zero, 0x1B83
  .L8012F6E8:
    /* 3DAE8 8012F6E8 8CD9030C */  jal        func_800F6630
    /* 3DAEC 8012F6EC 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DAF0 8012F6F0 92D0030C */  jal        func_800F4248
    /* 3DAF4 8012F6F4 04000424 */   addiu     $a0, $zero, 0x4
    /* 3DAF8 8012F6F8 48D0030C */  jal        func_800F4120
    /* 3DAFC 8012F6FC 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DB00 8012F700 0F004014 */  bnez       $v0, .L8012F740
    /* 3DB04 8012F704 00000000 */   nop
    /* 3DB08 8012F708 59D9030C */  jal        func_800F6564
    /* 3DB0C 8012F70C 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3DB10 8012F710 7AD8030C */  jal        func_800F61E8
    /* 3DB14 8012F714 00000000 */   nop
    /* 3DB18 8012F718 5DD5030C */  jal        func_800F5574
    /* 3DB1C 8012F71C 08000424 */   addiu     $a0, $zero, 0x8
    /* 3DB20 8012F720 F5D4030C */  jal        func_800F53D4
    /* 3DB24 8012F724 00000000 */   nop
    /* 3DB28 8012F728 03004010 */  beqz       $v0, .L8012F738
    /* 3DB2C 8012F72C 00000000 */   nop
    /* 3DB30 8012F730 C7E5030C */  jal        func_800F971C
    /* 3DB34 8012F734 00000000 */   nop
  .L8012F738:
    /* 3DB38 8012F738 62E0030C */  jal        func_800F8188
    /* 3DB3C 8012F73C 831B0424 */   addiu     $a0, $zero, 0x1B83
  .L8012F740:
    /* 3DB40 8012F740 8CD9030C */  jal        func_800F6630
    /* 3DB44 8012F744 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DB48 8012F748 92D0030C */  jal        func_800F4248
    /* 3DB4C 8012F74C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DB50 8012F750 48D0030C */  jal        func_800F4120
    /* 3DB54 8012F754 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DB58 8012F758 0D004014 */  bnez       $v0, .L8012F790
    /* 3DB5C 8012F75C 00000000 */   nop
    /* 3DB60 8012F760 59D9030C */  jal        func_800F6564
    /* 3DB64 8012F764 841B0424 */   addiu     $a0, $zero, 0x1B84
    /* 3DB68 8012F768 33D7030C */  jal        func_800F5CCC
    /* 3DB6C 8012F76C 00000000 */   nop
    /* 3DB70 8012F770 E3D6030C */  jal        func_800F5B8C
    /* 3DB74 8012F774 80800434 */   ori       $a0, $zero, 0x8080
    /* 3DB78 8012F778 03004014 */  bnez       $v0, .L8012F788
    /* 3DB7C 8012F77C 00000000 */   nop
    /* 3DB80 8012F780 53D9030C */  jal        func_800F654C
    /* 3DB84 8012F784 02000424 */   addiu     $a0, $zero, 0x2
  .L8012F788:
    /* 3DB88 8012F788 62E0030C */  jal        func_800F8188
    /* 3DB8C 8012F78C 841B0424 */   addiu     $a0, $zero, 0x1B84
  .L8012F790:
    /* 3DB90 8012F790 8CD9030C */  jal        func_800F6630
    /* 3DB94 8012F794 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DB98 8012F798 92D0030C */  jal        func_800F4248
    /* 3DB9C 8012F79C 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DBA0 8012F7A0 48D0030C */  jal        func_800F4120
    /* 3DBA4 8012F7A4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DBA8 8012F7A8 0F004014 */  bnez       $v0, .L8012F7E8
    /* 3DBAC 8012F7AC 00000000 */   nop
    /* 3DBB0 8012F7B0 59D9030C */  jal        func_800F6564
    /* 3DBB4 8012F7B4 841B0424 */   addiu     $a0, $zero, 0x1B84
    /* 3DBB8 8012F7B8 7AD8030C */  jal        func_800F61E8
    /* 3DBBC 8012F7BC 00000000 */   nop
    /* 3DBC0 8012F7C0 5DD5030C */  jal        func_800F5574
    /* 3DBC4 8012F7C4 03000424 */   addiu     $a0, $zero, 0x3
    /* 3DBC8 8012F7C8 F5D4030C */  jal        func_800F53D4
    /* 3DBCC 8012F7CC 00000000 */   nop
    /* 3DBD0 8012F7D0 03004010 */  beqz       $v0, .L8012F7E0
    /* 3DBD4 8012F7D4 00000000 */   nop
    /* 3DBD8 8012F7D8 C7E5030C */  jal        func_800F971C
    /* 3DBDC 8012F7DC 00000000 */   nop
  .L8012F7E0:
    /* 3DBE0 8012F7E0 62E0030C */  jal        func_800F8188
    /* 3DBE4 8012F7E4 841B0424 */   addiu     $a0, $zero, 0x1B84
  .L8012F7E8:
    /* 3DBE8 8012F7E8 8CD9030C */  jal        func_800F6630
    /* 3DBEC 8012F7EC 21200000 */   addu      $a0, $zero, $zero
    /* 3DBF0 8012F7F0 92D0030C */  jal        func_800F4248
    /* 3DBF4 8012F7F4 80000424 */   addiu     $a0, $zero, 0x80
    /* 3DBF8 8012F7F8 48D0030C */  jal        func_800F4120
    /* 3DBFC 8012F7FC 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DC00 8012F800 29004014 */  bnez       $v0, .L8012F8A8
    /* 3DC04 8012F804 00000000 */   nop
    /* 3DC08 8012F808 59D9030C */  jal        func_800F6564
    /* 3DC0C 8012F80C 881B0424 */   addiu     $a0, $zero, 0x1B88
    /* 3DC10 8012F810 0DD9030C */  jal        func_800F6434
    /* 3DC14 8012F814 02020424 */   addiu     $a0, $zero, 0x202
    /* 3DC18 8012F818 19004014 */  bnez       $v0, .L8012F880
    /* 3DC1C 8012F81C 00000000 */   nop
    /* 3DC20 8012F820 90D8030C */  jal        func_800F6240
    /* 3DC24 8012F824 881B0424 */   addiu     $a0, $zero, 0x1B88
    /* 3DC28 8012F828 84DC030C */  jal        func_800F7210
    /* 3DC2C 8012F82C 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3DC30 8012F830 40E3030C */  jal        func_800F8D00
    /* 3DC34 8012F834 851B0424 */   addiu     $a0, $zero, 0x1B85
    /* 3DC38 8012F838 E7BF040C */  jal        func_8012FF9C
    /* 3DC3C 8012F83C 00000000 */   nop
    /* 3DC40 8012F840 91E5030C */  jal        func_800F9644
    /* 3DC44 8012F844 20000424 */   addiu     $a0, $zero, 0x20
    /* 3DC48 8012F848 96D9030C */  jal        func_800F6658
    /* 3DC4C 8012F84C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3DC50 8012F850 04D5030C */  jal        func_800F5410
    /* 3DC54 8012F854 00000000 */   nop
    /* 3DC58 8012F858 19D0030C */  jal        func_800F4064
    /* 3DC5C 8012F85C 04040424 */   addiu     $a0, $zero, 0x404
    /* 3DC60 8012F860 9DE0030C */  jal        func_800F8274
    /* 3DC64 8012F864 45000424 */   addiu     $a0, $zero, 0x45
    /* 3DC68 8012F868 98E5030C */  jal        func_800F9660
    /* 3DC6C 8012F86C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3DC70 8012F870 AB7D040C */  jal        func_8011F6AC
    /* 3DC74 8012F874 00000000 */   nop
    /* 3DC78 8012F878 38BE0408 */  j          .L8012F8E0
    /* 3DC7C 8012F87C 00000000 */   nop
  .L8012F880:
    /* 3DC80 8012F880 DDE3030C */  jal        func_800F8F74
    /* 3DC84 8012F884 881B0424 */   addiu     $a0, $zero, 0x1B88
    /* 3DC88 8012F888 16C0040C */  jal        func_80130058
    /* 3DC8C 8012F88C 00000000 */   nop
    /* 3DC90 8012F890 FF004230 */  andi       $v0, $v0, 0xFF
    /* 3DC94 8012F894 01000324 */  addiu      $v1, $zero, 0x1
    /* 3DC98 8012F898 11004314 */  bne        $v0, $v1, .L8012F8E0
    /* 3DC9C 8012F89C 01000224 */   addiu     $v0, $zero, 0x1
    /* 3DCA0 8012F8A0 64BE0408 */  j          .L8012F990
    /* 3DCA4 8012F8A4 00000000 */   nop
  .L8012F8A8:
    /* 3DCA8 8012F8A8 8CD9030C */  jal        func_800F6630
    /* 3DCAC 8012F8AC 01000424 */   addiu     $a0, $zero, 0x1
    /* 3DCB0 8012F8B0 92D0030C */  jal        func_800F4248
    /* 3DCB4 8012F8B4 80000424 */   addiu     $a0, $zero, 0x80
    /* 3DCB8 8012F8B8 48D0030C */  jal        func_800F4120
    /* 3DCBC 8012F8BC 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DCC0 8012F8C0 07004014 */  bnez       $v0, .L8012F8E0
    /* 3DCC4 8012F8C4 00000000 */   nop
    /* 3DCC8 8012F8C8 DDE3030C */  jal        func_800F8F74
    /* 3DCCC 8012F8CC 871B0424 */   addiu     $a0, $zero, 0x1B87
    /* 3DCD0 8012F8D0 DDE3030C */  jal        func_800F8F74
    /* 3DCD4 8012F8D4 881B0424 */   addiu     $a0, $zero, 0x1B88
    /* 3DCD8 8012F8D8 A5C4040C */  jal        func_80131294
    /* 3DCDC 8012F8DC 00000000 */   nop
  .L8012F8E0:
    /* 3DCE0 8012F8E0 8CD9030C */  jal        func_800F6630
    /* 3DCE4 8012F8E4 21200000 */   addu      $a0, $zero, $zero
    /* 3DCE8 8012F8E8 92D0030C */  jal        func_800F4248
    /* 3DCEC 8012F8EC 40000424 */   addiu     $a0, $zero, 0x40
    /* 3DCF0 8012F8F0 48D0030C */  jal        func_800F4120
    /* 3DCF4 8012F8F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3DCF8 8012F8F8 BFFE4014 */  bnez       $v0, .L8012F3F8
    /* 3DCFC 8012F8FC 00000000 */   nop
    /* 3DD00 8012F900 59D9030C */  jal        func_800F6564
    /* 3DD04 8012F904 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3DD08 8012F908 93E0030C */  jal        func_800F824C
    /* 3DD0C 8012F90C 43000424 */   addiu     $a0, $zero, 0x43
  .L8012F910:
    /* 3DD10 8012F910 8CD9030C */  jal        func_800F6630
    /* 3DD14 8012F914 43000424 */   addiu     $a0, $zero, 0x43
    /* 3DD18 8012F918 7AD8030C */  jal        func_800F61E8
    /* 3DD1C 8012F91C 00000000 */   nop
    /* 3DD20 8012F920 5DD5030C */  jal        func_800F5574
    /* 3DD24 8012F924 03000424 */   addiu     $a0, $zero, 0x3
    /* 3DD28 8012F928 F5D4030C */  jal        func_800F53D4
    /* 3DD2C 8012F92C 00000000 */   nop
    /* 3DD30 8012F930 03004010 */  beqz       $v0, .L8012F940
    /* 3DD34 8012F934 00000000 */   nop
    /* 3DD38 8012F938 C7E5030C */  jal        func_800F971C
    /* 3DD3C 8012F93C 00000000 */   nop
  .L8012F940:
    /* 3DD40 8012F940 3489040C */  jal        func_801224D0
    /* 3DD44 8012F944 00000000 */   nop
    /* 3DD48 8012F948 DADA030C */  jal        func_800F6B68
    /* 3DD4C 8012F94C 7E1B0424 */   addiu     $a0, $zero, 0x1B7E
    /* 3DD50 8012F950 0DD9030C */  jal        func_800F6434
    /* 3DD54 8012F954 80000424 */   addiu     $a0, $zero, 0x80
    /* 3DD58 8012F958 EDFF4014 */  bnez       $v0, .L8012F910
    /* 3DD5C 8012F95C 00000000 */   nop
    /* 3DD60 8012F960 80E4030C */  jal        func_800F9200
    /* 3DD64 8012F964 00000000 */   nop
    /* 3DD68 8012F968 8CD9030C */  jal        func_800F6630
    /* 3DD6C 8012F96C 43000424 */   addiu     $a0, $zero, 0x43
    /* 3DD70 8012F970 62E0030C */  jal        func_800F8188
    /* 3DD74 8012F974 811B0424 */   addiu     $a0, $zero, 0x1B81
    /* 3DD78 8012F978 F7E4030C */  jal        func_800F93DC
    /* 3DD7C 8012F97C 00000000 */   nop
    /* 3DD80 8012F980 68BE040C */  jal        func_8012F9A0
    /* 3DD84 8012F984 00000000 */   nop
    /* 3DD88 8012F988 FEBC0408 */  j          .L8012F3F8
    /* 3DD8C 8012F98C 00000000 */   nop
  .L8012F990:
    /* 3DD90 8012F990 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3DD94 8012F994 00000000 */  nop
    /* 3DD98 8012F998 0800E003 */  jr         $ra
    /* 3DD9C 8012F99C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012F3F0
