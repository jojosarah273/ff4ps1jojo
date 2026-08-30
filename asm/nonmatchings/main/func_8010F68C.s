nonmatching func_8010F68C, 0x2B8

glabel func_8010F68C
    /* 1DA8C 8010F68C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1DA90 8010F690 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1DA94 8010F694 EEE3030C */  jal        func_800F8FB8
    /* 1DA98 8010F698 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DA9C 8010F69C EEE3030C */  jal        func_800F8FB8
    /* 1DAA0 8010F6A0 24000424 */   addiu     $a0, $zero, 0x24
    /* 1DAA4 8010F6A4 EEE3030C */  jal        func_800F8FB8
    /* 1DAA8 8010F6A8 7A000424 */   addiu     $a0, $zero, 0x7A
  .L8010F6AC:
    /* 1DAAC 8010F6AC DEF9030C */  jal        func_800FE778
    /* 1DAB0 8010F6B0 00000000 */   nop
    /* 1DAB4 8010F6B4 8CD9030C */  jal        func_800F6630
    /* 1DAB8 8010F6B8 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DABC 8010F6BC 0DD9030C */  jal        func_800F6434
    /* 1DAC0 8010F6C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 1DAC4 8010F6C4 2F004014 */  bnez       $v0, .L8010F784
    /* 1DAC8 8010F6C8 00000000 */   nop
    /* 1DACC 8010F6CC 68D7030C */  jal        func_800F5DA0
    /* 1DAD0 8010F6D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DAD4 8010F6D4 8CD9030C */  jal        func_800F6630
    /* 1DAD8 8010F6D8 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DADC 8010F6DC 92D0030C */  jal        func_800F4248
    /* 1DAE0 8010F6E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 1DAE4 8010F6E4 48D0030C */  jal        func_800F4120
    /* 1DAE8 8010F6E8 02000424 */   addiu     $a0, $zero, 0x2
    /* 1DAEC 8010F6EC 25004014 */  bnez       $v0, .L8010F784
    /* 1DAF0 8010F6F0 00000000 */   nop
    /* 1DAF4 8010F6F4 8CD9030C */  jal        func_800F6630
    /* 1DAF8 8010F6F8 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DAFC 8010F6FC 19DE030C */  jal        func_800F7864
    /* 1DB00 8010F700 00000000 */   nop
    /* 1DB04 8010F704 93E0030C */  jal        func_800F824C
    /* 1DB08 8010F708 22000424 */   addiu     $a0, $zero, 0x22
    /* 1DB0C 8010F70C 8CD9030C */  jal        func_800F6630
    /* 1DB10 8010F710 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 1DB14 8010F714 04D5030C */  jal        func_800F5410
    /* 1DB18 8010F718 00000000 */   nop
    /* 1DB1C 8010F71C 0FCF030C */  jal        func_800F3C3C
    /* 1DB20 8010F720 22000424 */   addiu     $a0, $zero, 0x22
    /* 1DB24 8010F724 CECF030C */  jal        func_800F3F38
    /* 1DB28 8010F728 21204000 */   addu      $a0, $v0, $zero
    /* 1DB2C 8010F72C 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 1DB30 8010F730 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 1DB34 8010F734 00000000 */  nop
    /* 1DB38 8010F738 00004390 */  lbu        $v1, 0x0($v0)
    /* 1DB3C 8010F73C 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 1DB40 8010F740 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 1DB44 8010F744 8CD9030C */  jal        func_800F6630
    /* 1DB48 8010F748 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 1DB4C 8010F74C 02D0030C */  jal        func_800F4008
    /* 1DB50 8010F750 21200000 */   addu      $a0, $zero, $zero
    /* 1DB54 8010F754 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 1DB58 8010F758 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 1DB5C 8010F75C 00000000 */  nop
    /* 1DB60 8010F760 00004490 */  lbu        $a0, 0x0($v0)
    /* 1DB64 8010F764 1A80023C */  lui        $v0, %hi(D_8019EE68)
    /* 1DB68 8010F768 68EE4294 */  lhu        $v0, %lo(D_8019EE68)($v0)
    /* 1DB6C 8010F76C 01000324 */  addiu      $v1, $zero, 0x1
    /* 1DB70 8010F770 020083A3 */  sb         $v1, %gp_rel(D_8019ECFE)($gp)
    /* 1DB74 8010F774 00220400 */  sll        $a0, $a0, 8
    /* 1DB78 8010F778 25104400 */  or         $v0, $v0, $a0
    /* 1DB7C 8010F77C 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 1DB80 8010F780 68EE22A4 */  sh         $v0, %lo(D_8019EE68)($at)
  .L8010F784:
    /* 1DB84 8010F784 8CD9030C */  jal        func_800F6630
    /* 1DB88 8010F788 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1DB8C 8010F78C 92D0030C */  jal        func_800F4248
    /* 1DB90 8010F790 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 1DB94 8010F794 48D0030C */  jal        func_800F4120
    /* 1DB98 8010F798 02020424 */   addiu     $a0, $zero, 0x202
    /* 1DB9C 8010F79C 13004014 */  bnez       $v0, .L8010F7EC
    /* 1DBA0 8010F7A0 00000000 */   nop
    /* 1DBA4 8010F7A4 AFD8030C */  jal        func_800F62BC
    /* 1DBA8 8010F7A8 24000424 */   addiu     $a0, $zero, 0x24
    /* 1DBAC 8010F7AC 8CD9030C */  jal        func_800F6630
    /* 1DBB0 8010F7B0 24000424 */   addiu     $a0, $zero, 0x24
    /* 1DBB4 8010F7B4 5DD5030C */  jal        func_800F5574
    /* 1DBB8 8010F7B8 03000424 */   addiu     $a0, $zero, 0x3
    /* 1DBBC 8010F7BC F5D4030C */  jal        func_800F53D4
    /* 1DBC0 8010F7C0 00000000 */   nop
    /* 1DBC4 8010F7C4 5B004014 */  bnez       $v0, .L8010F934
    /* 1DBC8 8010F7C8 00000000 */   nop
    /* 1DBCC 8010F7CC 53D9030C */  jal        func_800F654C
    /* 1DBD0 8010F7D0 04000424 */   addiu     $a0, $zero, 0x4
    /* 1DBD4 8010F7D4 93E0030C */  jal        func_800F824C
    /* 1DBD8 8010F7D8 05000424 */   addiu     $a0, $zero, 0x5
    /* 1DBDC 8010F7DC EEE3030C */  jal        func_800F8FB8
    /* 1DBE0 8010F7E0 04000424 */   addiu     $a0, $zero, 0x4
    /* 1DBE4 8010F7E4 073E0408 */  j          .L8010F81C
    /* 1DBE8 8010F7E8 00000000 */   nop
  .L8010F7EC:
    /* 1DBEC 8010F7EC 8CD9030C */  jal        func_800F6630
    /* 1DBF0 8010F7F0 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1DBF4 8010F7F4 92D0030C */  jal        func_800F4248
    /* 1DBF8 8010F7F8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1DBFC 8010F7FC 48D0030C */  jal        func_800F4120
    /* 1DC00 8010F800 02020424 */   addiu     $a0, $zero, 0x202
    /* 1DC04 8010F804 05004014 */  bnez       $v0, .L8010F81C
    /* 1DC08 8010F808 00000000 */   nop
    /* 1DC0C 8010F80C EEE3030C */  jal        func_800F8FB8
    /* 1DC10 8010F810 05000424 */   addiu     $a0, $zero, 0x5
    /* 1DC14 8010F814 EEE3030C */  jal        func_800F8FB8
    /* 1DC18 8010F818 04000424 */   addiu     $a0, $zero, 0x4
  .L8010F81C:
    /* 1DC1C 8010F81C 1CFA030C */  jal        func_800FE870
    /* 1DC20 8010F820 00000000 */   nop
    /* 1DC24 8010F824 5B50040C */  jal        func_8011416C
    /* 1DC28 8010F828 00000000 */   nop
    /* 1DC2C 8010F82C 53D9030C */  jal        func_800F654C
    /* 1DC30 8010F830 01000424 */   addiu     $a0, $zero, 0x1
    /* 1DC34 8010F834 93E0030C */  jal        func_800F824C
    /* 1DC38 8010F838 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 1DC3C 8010F83C 0F15040C */  jal        func_8010543C
    /* 1DC40 8010F840 00000000 */   nop
    /* 1DC44 8010F844 DC09040C */  jal        func_80102770
    /* 1DC48 8010F848 00000000 */   nop
    /* 1DC4C 8010F84C 8CD9030C */  jal        func_800F6630
    /* 1DC50 8010F850 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 1DC54 8010F854 04D5030C */  jal        func_800F5410
    /* 1DC58 8010F858 00000000 */   nop
    /* 1DC5C 8010F85C 02D0030C */  jal        func_800F4008
    /* 1DC60 8010F860 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1DC64 8010F864 92D0030C */  jal        func_800F4248
    /* 1DC68 8010F868 10000424 */   addiu     $a0, $zero, 0x10
    /* 1DC6C 8010F86C 48D0030C */  jal        func_800F4120
    /* 1DC70 8010F870 02020424 */   addiu     $a0, $zero, 0x202
    /* 1DC74 8010F874 05004014 */  bnez       $v0, .L8010F88C
    /* 1DC78 8010F878 00000000 */   nop
    /* 1DC7C 8010F87C 77DC030C */  jal        func_800F71DC
    /* 1DC80 8010F880 21200000 */   addu      $a0, $zero, $zero
    /* 1DC84 8010F884 253E0408 */  j          .L8010F894
    /* 1DC88 8010F888 00000000 */   nop
  .L8010F88C:
    /* 1DC8C 8010F88C 77DC030C */  jal        func_800F71DC
    /* 1DC90 8010F890 18000424 */   addiu     $a0, $zero, 0x18
  .L8010F894:
    /* 1DC94 8010F894 53D9030C */  jal        func_800F654C
    /* 1DC98 8010F898 60000424 */   addiu     $a0, $zero, 0x60
    /* 1DC9C 8010F89C 93E0030C */  jal        func_800F824C
    /* 1DCA0 8010F8A0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1DCA4 8010F8A4 53D9030C */  jal        func_800F654C
    /* 1DCA8 8010F8A8 50000424 */   addiu     $a0, $zero, 0x50
    /* 1DCAC 8010F8AC 93E0030C */  jal        func_800F824C
    /* 1DCB0 8010F8B0 0E000424 */   addiu     $a0, $zero, 0xE
    /* 1DCB4 8010F8B4 6941040C */  jal        func_801105A4
    /* 1DCB8 8010F8B8 00000000 */   nop
    /* 1DCBC 8010F8BC 8CD9030C */  jal        func_800F6630
    /* 1DCC0 8010F8C0 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 1DCC4 8010F8C4 92D0030C */  jal        func_800F4248
    /* 1DCC8 8010F8C8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1DCCC 8010F8CC 5DD5030C */  jal        func_800F5574
    /* 1DCD0 8010F8D0 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1DCD4 8010F8D4 F5D4030C */  jal        func_800F53D4
    /* 1DCD8 8010F8D8 00000000 */   nop
    /* 1DCDC 8010F8DC 05004010 */  beqz       $v0, .L8010F8F4
    /* 1DCE0 8010F8E0 00000000 */   nop
    /* 1DCE4 8010F8E4 53D9030C */  jal        func_800F654C
    /* 1DCE8 8010F8E8 48000424 */   addiu     $a0, $zero, 0x48
    /* 1DCEC 8010F8EC 01F6030C */  jal        func_800FD804
    /* 1DCF0 8010F8F0 00000000 */   nop
  .L8010F8F4:
    /* 1DCF4 8010F8F4 E0CD050C */  jal        func_80173780
    /* 1DCF8 8010F8F8 00000000 */   nop
    /* 1DCFC 8010F8FC 8CD9030C */  jal        func_800F6630
    /* 1DD00 8010F900 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1DD04 8010F904 92D0030C */  jal        func_800F4248
    /* 1DD08 8010F908 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 1DD0C 8010F90C 48D0030C */  jal        func_800F4120
    /* 1DD10 8010F910 02020424 */   addiu     $a0, $zero, 0x202
    /* 1DD14 8010F914 65FF4014 */  bnez       $v0, .L8010F6AC
    /* 1DD18 8010F918 00000000 */   nop
    /* 1DD1C 8010F91C 53D9030C */  jal        func_800F654C
    /* 1DD20 8010F920 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DD24 8010F924 93E0030C */  jal        func_800F824C
    /* 1DD28 8010F928 20000424 */   addiu     $a0, $zero, 0x20
    /* 1DD2C 8010F92C AB3D0408 */  j          .L8010F6AC
    /* 1DD30 8010F930 00000000 */   nop
  .L8010F934:
    /* 1DD34 8010F934 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1DD38 8010F938 00000000 */  nop
    /* 1DD3C 8010F93C 0800E003 */  jr         $ra
    /* 1DD40 8010F940 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010F68C
