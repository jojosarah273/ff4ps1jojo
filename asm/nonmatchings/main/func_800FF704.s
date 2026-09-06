nonmatching func_800FF704, 0x274

glabel func_800FF704
    /* DB04 800FF704 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* DB08 800FF708 1000BFAF */  sw         $ra, 0x10($sp)
    /* DB0C 800FF70C 53D9030C */  jal        func_800F654C
    /* DB10 800FF710 6A000424 */   addiu     $a0, $zero, 0x6A
    /* DB14 800FF714 62E0030C */  jal        func_800F8188
    /* DB18 800FF718 06170424 */   addiu     $a0, $zero, 0x1706
    /* DB1C 800FF71C 53D9030C */  jal        func_800F654C
    /* DB20 800FF720 D4000424 */   addiu     $a0, $zero, 0xD4
    /* DB24 800FF724 62E0030C */  jal        func_800F8188
    /* DB28 800FF728 07170424 */   addiu     $a0, $zero, 0x1707
    /* DB2C 800FF72C 53D9030C */  jal        func_800F654C
    /* DB30 800FF730 21200000 */   addu      $a0, $zero, $zero
    /* DB34 800FF734 62E0030C */  jal        func_800F8188
    /* DB38 800FF738 00170424 */   addiu     $a0, $zero, 0x1700
    /* DB3C 800FF73C 62E0030C */  jal        func_800F8188
    /* DB40 800FF740 01170424 */   addiu     $a0, $zero, 0x1701
    /* DB44 800FF744 59D9030C */  jal        func_800F6564
    /* DB48 800FF748 04170424 */   addiu     $a0, $zero, 0x1704
    /* DB4C 800FF74C 5DD5030C */  jal        func_800F5574
    /* DB50 800FF750 04000424 */   addiu     $a0, $zero, 0x4
    /* DB54 800FF754 F5D4030C */  jal        func_800F53D4
    /* DB58 800FF758 00000000 */   nop
    /* DB5C 800FF75C 0D004010 */  beqz       $v0, .L800FF794
    /* DB60 800FF760 00000000 */   nop
    /* DB64 800FF764 DDE3030C */  jal        func_800F8F74
    /* DB68 800FF768 1F170424 */   addiu     $a0, $zero, 0x171F
    /* DB6C 800FF76C 59D9030C */  jal        func_800F6564
    /* DB70 800FF770 D0060424 */   addiu     $a0, $zero, 0x6D0
    /* DB74 800FF774 0DD9030C */  jal        func_800F6434
    /* DB78 800FF778 02000424 */   addiu     $a0, $zero, 0x2
    /* DB7C 800FF77C 07004014 */  bnez       $v0, .L800FF79C
    /* DB80 800FF780 00000000 */   nop
    /* DB84 800FF784 DDE3030C */  jal        func_800F8F74
    /* DB88 800FF788 1B170424 */   addiu     $a0, $zero, 0x171B
    /* DB8C 800FF78C E7FD0308 */  j          .L800FF79C
    /* DB90 800FF790 00000000 */   nop
  .L800FF794:
    /* DB94 800FF794 DDE3030C */  jal        func_800F8F74
    /* DB98 800FF798 23170424 */   addiu     $a0, $zero, 0x1723
  .L800FF79C:
    /* DB9C 800FF79C 27EC030C */  jal        func_800FB09C
    /* DBA0 800FF7A0 00000000 */   nop
    /* DBA4 800FF7A4 53D9030C */  jal        func_800F654C
    /* DBA8 800FF7A8 03000424 */   addiu     $a0, $zero, 0x3
    /* DBAC 800FF7AC 62E0030C */  jal        func_800F8188
    /* DBB0 800FF7B0 05170424 */   addiu     $a0, $zero, 0x1705
    /* DBB4 800FF7B4 53D9030C */  jal        func_800F654C
    /* DBB8 800FF7B8 81000424 */   addiu     $a0, $zero, 0x81
    /* DBBC 800FF7BC 62E0030C */  jal        func_800F8188
    /* DBC0 800FF7C0 00420424 */   addiu     $a0, $zero, 0x4200
    /* DBC4 800FF7C4 EEE3030C */  jal        func_800F8FB8
    /* DBC8 800FF7C8 79000424 */   addiu     $a0, $zero, 0x79
    /* DBCC 800FF7CC 59D9030C */  jal        func_800F6564
    /* DBD0 800FF7D0 04170424 */   addiu     $a0, $zero, 0x1704
    /* DBD4 800FF7D4 5DD5030C */  jal        func_800F5574
    /* DBD8 800FF7D8 04000424 */   addiu     $a0, $zero, 0x4
    /* DBDC 800FF7DC F5D4030C */  jal        func_800F53D4
    /* DBE0 800FF7E0 00000000 */   nop
    /* DBE4 800FF7E4 05004010 */  beqz       $v0, .L800FF7FC
    /* DBE8 800FF7E8 00000000 */   nop
    /* DBEC 800FF7EC EEE3030C */  jal        func_800F8FB8
    /* DBF0 800FF7F0 B7000424 */   addiu     $a0, $zero, 0xB7
    /* DBF4 800FF7F4 01FE0308 */  j          .L800FF804
    /* DBF8 800FF7F8 00000000 */   nop
  .L800FF7FC:
    /* DBFC 800FF7FC EEE3030C */  jal        func_800F8FB8
    /* DC00 800FF800 B8000424 */   addiu     $a0, $zero, 0xB8
  .L800FF804:
    /* DC04 800FF804 ECF9030C */  jal        func_800FE7B0
    /* DC08 800FF808 00000000 */   nop
    /* DC0C 800FF80C DDE3030C */  jal        func_800F8F74
    /* DC10 800FF810 0C420424 */   addiu     $a0, $zero, 0x420C
    /* DC14 800FF814 53D9030C */  jal        func_800F654C
    /* DC18 800FF818 20000424 */   addiu     $a0, $zero, 0x20
    /* DC1C 800FF81C 20D5030C */  jal        func_800F5480
    /* DC20 800FF820 00000000 */   nop
    /* DC24 800FF824 0FCF030C */  jal        func_800F3C3C
    /* DC28 800FF828 79000424 */   addiu     $a0, $zero, 0x79
    /* DC2C 800FF82C D2DF030C */  jal        func_800F7F48
    /* DC30 800FF830 21204000 */   addu      $a0, $v0, $zero
    /* DC34 800FF834 A4E5030C */  jal        func_800F9690
    /* DC38 800FF838 00000000 */   nop
    /* DC3C 800FF83C 1400043C */  lui        $a0, (0x14FAB6 >> 16)
    /* DC40 800FF840 1ADB030C */  jal        func_800F6C68
    /* DC44 800FF844 B6FA8434 */   ori       $a0, $a0, (0x14FAB6 & 0xFFFF)
    /* DC48 800FF848 62E0030C */  jal        func_800F8188
    /* DC4C 800FF84C FB060424 */   addiu     $a0, $zero, 0x6FB
    /* DC50 800FF850 8CD9030C */  jal        func_800F6630
    /* DC54 800FF854 79000424 */   addiu     $a0, $zero, 0x79
    /* DC58 800FF858 93E0030C */  jal        func_800F824C
    /* DC5C 800FF85C AD000424 */   addiu     $a0, $zero, 0xAD
    /* DC60 800FF860 75F9030C */  jal        func_800FE5D4
    /* DC64 800FF864 00000000 */   nop
    /* DC68 800FF868 B9F9030C */  jal        func_800FE6E4
    /* DC6C 800FF86C 00000000 */   nop
    /* DC70 800FF870 C00F040C */  jal        func_80103F00
    /* DC74 800FF874 00000000 */   nop
    /* DC78 800FF878 EACA050C */  jal        func_80172BA8
    /* DC7C 800FF87C 00000000 */   nop
    /* DC80 800FF880 02CC050C */  jal        func_80173008
    /* DC84 800FF884 00000000 */   nop
    /* DC88 800FF888 AFD8030C */  jal        func_800F62BC
    /* DC8C 800FF88C 79000424 */   addiu     $a0, $zero, 0x79
    /* DC90 800FF890 8CD9030C */  jal        func_800F6630
    /* DC94 800FF894 79000424 */   addiu     $a0, $zero, 0x79
    /* DC98 800FF898 5DD5030C */  jal        func_800F5574
    /* DC9C 800FF89C 20000424 */   addiu     $a0, $zero, 0x20
    /* DCA0 800FF8A0 F5D4030C */  jal        func_800F53D4
    /* DCA4 800FF8A4 00000000 */   nop
    /* DCA8 800FF8A8 D6FF4010 */  beqz       $v0, .L800FF804
    /* DCAC 800FF8AC 00000000 */   nop
    /* DCB0 800FF8B0 53D9030C */  jal        func_800F654C
    /* DCB4 800FF8B4 11000424 */   addiu     $a0, $zero, 0x11
    /* DCB8 800FF8B8 93E0030C */  jal        func_800F824C
    /* DCBC 800FF8BC 79000424 */   addiu     $a0, $zero, 0x79
    /* DCC0 800FF8C0 93E0030C */  jal        func_800F824C
    /* DCC4 800FF8C4 AD000424 */   addiu     $a0, $zero, 0xAD
  .L800FF8C8:
    /* DCC8 800FF8C8 F6F9030C */  jal        func_800FE7D8
    /* DCCC 800FF8CC 00000000 */   nop
    /* DCD0 800FF8D0 8CD9030C */  jal        func_800F6630
    /* DCD4 800FF8D4 79000424 */   addiu     $a0, $zero, 0x79
    /* DCD8 800FF8D8 93E0030C */  jal        func_800F824C
    /* DCDC 800FF8DC AD000424 */   addiu     $a0, $zero, 0xAD
    /* DCE0 800FF8E0 59D9030C */  jal        func_800F6564
    /* DCE4 800FF8E4 04170424 */   addiu     $a0, $zero, 0x1704
    /* DCE8 800FF8E8 5DD5030C */  jal        func_800F5574
    /* DCEC 800FF8EC 04000424 */   addiu     $a0, $zero, 0x4
    /* DCF0 800FF8F0 F5D4030C */  jal        func_800F53D4
    /* DCF4 800FF8F4 00000000 */   nop
    /* DCF8 800FF8F8 07004010 */  beqz       $v0, .L800FF918
    /* DCFC 800FF8FC 00000000 */   nop
    /* DD00 800FF900 AFD8030C */  jal        func_800F62BC
    /* DD04 800FF904 B7000424 */   addiu     $a0, $zero, 0xB7
    /* DD08 800FF908 8CD9030C */  jal        func_800F6630
    /* DD0C 800FF90C B7000424 */   addiu     $a0, $zero, 0xB7
    /* DD10 800FF910 4AFE0308 */  j          .L800FF928
    /* DD14 800FF914 00000000 */   nop
  .L800FF918:
    /* DD18 800FF918 AFD8030C */  jal        func_800F62BC
    /* DD1C 800FF91C B8000424 */   addiu     $a0, $zero, 0xB8
    /* DD20 800FF920 8CD9030C */  jal        func_800F6630
    /* DD24 800FF924 B8000424 */   addiu     $a0, $zero, 0xB8
  .L800FF928:
    /* DD28 800FF928 67D5050C */  jal        func_8017559C
    /* DD2C 800FF92C 00000000 */   nop
    /* DD30 800FF930 EACA050C */  jal        func_80172BA8
    /* DD34 800FF934 00000000 */   nop
    /* DD38 800FF938 02CC050C */  jal        func_80173008
    /* DD3C 800FF93C 00000000 */   nop
    /* DD40 800FF940 AFD8030C */  jal        func_800F62BC
    /* DD44 800FF944 79000424 */   addiu     $a0, $zero, 0x79
    /* DD48 800FF948 8CD9030C */  jal        func_800F6630
    /* DD4C 800FF94C 79000424 */   addiu     $a0, $zero, 0x79
    /* DD50 800FF950 5DD5030C */  jal        func_800F5574
    /* DD54 800FF954 21000424 */   addiu     $a0, $zero, 0x21
    /* DD58 800FF958 F5D4030C */  jal        func_800F53D4
    /* DD5C 800FF95C 00000000 */   nop
    /* DD60 800FF960 D9FF4010 */  beqz       $v0, .L800FF8C8
    /* DD64 800FF964 00000000 */   nop
    /* DD68 800FF968 1000BF8F */  lw         $ra, 0x10($sp)
    /* DD6C 800FF96C 00000000 */  nop
    /* DD70 800FF970 0800E003 */  jr         $ra
    /* DD74 800FF974 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF704
