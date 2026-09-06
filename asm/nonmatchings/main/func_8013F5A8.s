nonmatching func_8013F5A8, 0x3C4

glabel func_8013F5A8
    /* 4D9A8 8013F5A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4D9AC 8013F5AC 81350424 */  addiu      $a0, $zero, 0x3581
    /* 4D9B0 8013F5B0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4D9B4 8013F5B4 59D9030C */  jal        func_800F6564
    /* 4D9B8 8013F5B8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4D9BC 8013F5BC 62E0030C */  jal        func_800F8188
    /* 4D9C0 8013F5C0 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 4D9C4 8013F5C4 C7E5030C */  jal        func_800F971C
    /* 4D9C8 8013F5C8 1A80103C */   lui       $s0, %hi(D_8019A0C4)
    /* 4D9CC 8013F5CC 77DC030C */  jal        func_800F71DC
    /* 4D9D0 8013F5D0 50ED0434 */   ori       $a0, $zero, 0xED50
  .L8013F5D4:
    /* 4D9D4 8013F5D4 DAE1030C */  jal        func_800F8768
    /* 4D9D8 8013F5D8 21200000 */   addu      $a0, $zero, $zero
    /* 4D9DC 8013F5DC D9D8030C */  jal        func_800F6364
    /* 4D9E0 8013F5E0 00000000 */   nop
    /* 4D9E4 8013F5E4 56D6030C */  jal        func_800F5958
    /* 4D9E8 8013F5E8 BCF40434 */   ori       $a0, $zero, 0xF4BC
    /* 4D9EC 8013F5EC F5D4030C */  jal        func_800F53D4
    /* 4D9F0 8013F5F0 00000000 */   nop
    /* 4D9F4 8013F5F4 F7FF4010 */  beqz       $v0, .L8013F5D4
    /* 4D9F8 8013F5F8 00000000 */   nop
    /* 4D9FC 8013F5FC 77DC030C */  jal        func_800F71DC
    /* 4DA00 8013F600 0C180424 */   addiu     $a0, $zero, 0x180C
  .L8013F604:
    /* 4DA04 8013F604 DAE1030C */  jal        func_800F8768
    /* 4DA08 8013F608 21200000 */   addu      $a0, $zero, $zero
    /* 4DA0C 8013F60C D9D8030C */  jal        func_800F6364
    /* 4DA10 8013F610 00000000 */   nop
    /* 4DA14 8013F614 56D6030C */  jal        func_800F5958
    /* 4DA18 8013F618 47180424 */   addiu     $a0, $zero, 0x1847
    /* 4DA1C 8013F61C F5D4030C */  jal        func_800F53D4
    /* 4DA20 8013F620 00000000 */   nop
    /* 4DA24 8013F624 F7FF4010 */  beqz       $v0, .L8013F604
    /* 4DA28 8013F628 00000000 */   nop
    /* 4DA2C 8013F62C C7E5030C */  jal        func_800F971C
    /* 4DA30 8013F630 00000000 */   nop
    /* 4DA34 8013F634 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DA38 8013F638 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DA3C 8013F63C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4DA40 8013F640 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4DA44 8013F644 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DA48 8013F648 D7000424 */  addiu      $a0, $zero, 0xD7
    /* 4DA4C 8013F64C EEE3030C */  jal        func_800F8FB8
    /* 4DA50 8013F650 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4DA54 8013F654 EEE3030C */  jal        func_800F8FB8
    /* 4DA58 8013F658 47000424 */   addiu     $a0, $zero, 0x47
    /* 4DA5C 8013F65C 5BE3030C */  jal        func_800F8D6C
    /* 4DA60 8013F660 48000424 */   addiu     $a0, $zero, 0x48
    /* 4DA64 8013F664 5BE3030C */  jal        func_800F8D6C
    /* 4DA68 8013F668 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 4DA6C 8013F66C 5BE3030C */  jal        func_800F8D6C
    /* 4DA70 8013F670 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 4DA74 8013F674 EEE3030C */  jal        func_800F8FB8
    /* 4DA78 8013F678 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 4DA7C 8013F67C 5BE3030C */  jal        func_800F8D6C
    /* 4DA80 8013F680 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 4DA84 8013F684 5BE3030C */  jal        func_800F8D6C
    /* 4DA88 8013F688 61000424 */   addiu     $a0, $zero, 0x61
    /* 4DA8C 8013F68C EEE3030C */  jal        func_800F8FB8
    /* 4DA90 8013F690 63000424 */   addiu     $a0, $zero, 0x63
    /* 4DA94 8013F694 EEE3030C */  jal        func_800F8FB8
    /* 4DA98 8013F698 64000424 */   addiu     $a0, $zero, 0x64
    /* 4DA9C 8013F69C 5BE3030C */  jal        func_800F8D6C
    /* 4DAA0 8013F6A0 37000424 */   addiu     $a0, $zero, 0x37
    /* 4DAA4 8013F6A4 5BE3030C */  jal        func_800F8D6C
    /* 4DAA8 8013F6A8 39000424 */   addiu     $a0, $zero, 0x39
    /* 4DAAC 8013F6AC 62E0030C */  jal        func_800F8188
    /* 4DAB0 8013F6B0 C16C0424 */   addiu     $a0, $zero, 0x6CC1
    /* 4DAB4 8013F6B4 62E0030C */  jal        func_800F8188
    /* 4DAB8 8013F6B8 C26C0424 */   addiu     $a0, $zero, 0x6CC2
    /* 4DABC 8013F6BC 90D8030C */  jal        func_800F6240
    /* 4DAC0 8013F6C0 7BF00434 */   ori       $a0, $zero, 0xF07B
    /* 4DAC4 8013F6C4 90D8030C */  jal        func_800F6240
    /* 4DAC8 8013F6C8 7FF00434 */   ori       $a0, $zero, 0xF07F
    /* 4DACC 8013F6CC 90D8030C */  jal        func_800F6240
    /* 4DAD0 8013F6D0 83F00434 */   ori       $a0, $zero, 0xF083
    /* 4DAD4 8013F6D4 90D8030C */  jal        func_800F6240
    /* 4DAD8 8013F6D8 87F00434 */   ori       $a0, $zero, 0xF087
    /* 4DADC 8013F6DC 90D8030C */  jal        func_800F6240
    /* 4DAE0 8013F6E0 8BF00434 */   ori       $a0, $zero, 0xF08B
  .L8013F6E4:
    /* 4DAE4 8013F6E4 DAE1030C */  jal        func_800F8768
    /* 4DAE8 8013F6E8 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 4DAEC 8013F6EC D9D8030C */  jal        func_800F6364
    /* 4DAF0 8013F6F0 00000000 */   nop
    /* 4DAF4 8013F6F4 D9D8030C */  jal        func_800F6364
    /* 4DAF8 8013F6F8 00000000 */   nop
    /* 4DAFC 8013F6FC D9D8030C */  jal        func_800F6364
    /* 4DB00 8013F700 00000000 */   nop
    /* 4DB04 8013F704 D9D8030C */  jal        func_800F6364
    /* 4DB08 8013F708 00000000 */   nop
    /* 4DB0C 8013F70C 56D6030C */  jal        func_800F5958
    /* 4DB10 8013F710 10000424 */   addiu     $a0, $zero, 0x10
    /* 4DB14 8013F714 F5D4030C */  jal        func_800F53D4
    /* 4DB18 8013F718 00000000 */   nop
    /* 4DB1C 8013F71C F1FF4010 */  beqz       $v0, .L8013F6E4
    /* 4DB20 8013F720 00000000 */   nop
    /* 4DB24 8013F724 84DC030C */  jal        func_800F7210
    /* 4DB28 8013F728 00180424 */   addiu     $a0, $zero, 0x1800
    /* 4DB2C 8013F72C 56D6030C */  jal        func_800F5958
    /* 4DB30 8013F730 F4000424 */   addiu     $a0, $zero, 0xF4
    /* 4DB34 8013F734 F5D4030C */  jal        func_800F53D4
    /* 4DB38 8013F738 00000000 */   nop
    /* 4DB3C 8013F73C 05004010 */  beqz       $v0, .L8013F754
    /* 4DB40 8013F740 00000000 */   nop
    /* 4DB44 8013F744 53D9030C */  jal        func_800F654C
    /* 4DB48 8013F748 02000424 */   addiu     $a0, $zero, 0x2
    /* 4DB4C 8013F74C DDFD0408 */  j          .L8013F774
    /* 4DB50 8013F750 00000000 */   nop
  .L8013F754:
    /* 4DB54 8013F754 56D6030C */  jal        func_800F5958
    /* 4DB58 8013F758 AF010424 */   addiu     $a0, $zero, 0x1AF
    /* 4DB5C 8013F75C F5D4030C */  jal        func_800F53D4
    /* 4DB60 8013F760 00000000 */   nop
    /* 4DB64 8013F764 05004010 */  beqz       $v0, .L8013F77C
    /* 4DB68 8013F768 00000000 */   nop
    /* 4DB6C 8013F76C 53D9030C */  jal        func_800F654C
    /* 4DB70 8013F770 12000424 */   addiu     $a0, $zero, 0x12
  .L8013F774:
    /* 4DB74 8013F774 62E0030C */  jal        func_800F8188
    /* 4DB78 8013F778 11F40434 */   ori       $a0, $zero, 0xF411
  .L8013F77C:
    /* 4DB7C 8013F77C 90D8030C */  jal        func_800F6240
    /* 4DB80 8013F780 8BF20434 */   ori       $a0, $zero, 0xF28B
    /* 4DB84 8013F784 C7E5030C */  jal        func_800F971C
    /* 4DB88 8013F788 00000000 */   nop
    /* 4DB8C 8013F78C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DB90 8013F790 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DB94 8013F794 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4DB98 8013F798 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4DB9C 8013F79C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DBA0 8013F7A0 00000000 */  nop
    /* 4DBA4 8013F7A4 000083A4 */  sh         $v1, 0x0($a0)
  .L8013F7A8:
    /* 4DBA8 8013F7A8 53D9030C */  jal        func_800F654C
    /* 4DBAC 8013F7AC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 4DBB0 8013F7B0 DAE1030C */  jal        func_800F8768
    /* 4DBB4 8013F7B4 B4F20434 */   ori       $a0, $zero, 0xF2B4
    /* 4DBB8 8013F7B8 53D9030C */  jal        func_800F654C
    /* 4DBBC 8013F7BC 80000424 */   addiu     $a0, $zero, 0x80
    /* 4DBC0 8013F7C0 DAE1030C */  jal        func_800F8768
    /* 4DBC4 8013F7C4 6BEF0434 */   ori       $a0, $zero, 0xEF6B
    /* 4DBC8 8013F7C8 DAE1030C */  jal        func_800F8768
    /* 4DBCC 8013F7CC 7AEF0434 */   ori       $a0, $zero, 0xEF7A
    /* 4DBD0 8013F7D0 D9D8030C */  jal        func_800F6364
    /* 4DBD4 8013F7D4 00000000 */   nop
    /* 4DBD8 8013F7D8 56D6030C */  jal        func_800F5958
    /* 4DBDC 8013F7DC 08000424 */   addiu     $a0, $zero, 0x8
    /* 4DBE0 8013F7E0 F5D4030C */  jal        func_800F53D4
    /* 4DBE4 8013F7E4 00000000 */   nop
    /* 4DBE8 8013F7E8 EFFF4010 */  beqz       $v0, .L8013F7A8
    /* 4DBEC 8013F7EC 00000000 */   nop
    /* 4DBF0 8013F7F0 53D9030C */  jal        func_800F654C
    /* 4DBF4 8013F7F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 4DBF8 8013F7F8 62E0030C */  jal        func_800F8188
    /* 4DBFC 8013F7FC 3A180424 */   addiu     $a0, $zero, 0x183A
    /* 4DC00 8013F800 62E0030C */  jal        func_800F8188
    /* 4DC04 8013F804 3C180424 */   addiu     $a0, $zero, 0x183C
    /* 4DC08 8013F808 62E0030C */  jal        func_800F8188
    /* 4DC0C 8013F80C 3E180424 */   addiu     $a0, $zero, 0x183E
    /* 4DC10 8013F810 77DC030C */  jal        func_800F71DC
    /* 4DC14 8013F814 01010424 */   addiu     $a0, $zero, 0x101
    /* 4DC18 8013F818 40E3030C */  jal        func_800F8D00
    /* 4DC1C 8013F81C 69EF0434 */   ori       $a0, $zero, 0xEF69
    /* 4DC20 8013F820 40E3030C */  jal        func_800F8D00
    /* 4DC24 8013F824 83EF0434 */   ori       $a0, $zero, 0xEF83
    /* 4DC28 8013F828 40E3030C */  jal        func_800F8D00
    /* 4DC2C 8013F82C 76EF0434 */   ori       $a0, $zero, 0xEF76
    /* 4DC30 8013F830 40E3030C */  jal        func_800F8D00
    /* 4DC34 8013F834 78EF0434 */   ori       $a0, $zero, 0xEF78
    /* 4DC38 8013F838 90D8030C */  jal        func_800F6240
    /* 4DC3C 8013F83C 73EF0434 */   ori       $a0, $zero, 0xEF73
    /* 4DC40 8013F840 C7E5030C */  jal        func_800F971C
    /* 4DC44 8013F844 00000000 */   nop
    /* 4DC48 8013F848 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DC4C 8013F84C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DC50 8013F850 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4DC54 8013F854 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4DC58 8013F858 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DC5C 8013F85C 20000424 */  addiu      $a0, $zero, 0x20
    /* 4DC60 8013F860 91E5030C */  jal        func_800F9644
    /* 4DC64 8013F864 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4DC68 8013F868 56D9030C */  jal        func_800F6558
    /* 4DC6C 8013F86C C0B60434 */   ori       $a0, $zero, 0xB6C0
  .L8013F870:
    /* 4DC70 8013F870 7F00043C */  lui        $a0, (0x7FF000 >> 16)
    /* 4DC74 8013F874 39E2030C */  jal        func_800F88E4
    /* 4DC78 8013F878 00F08434 */   ori       $a0, $a0, (0x7FF000 & 0xFFFF)
    /* 4DC7C 8013F87C 04D5030C */  jal        func_800F5410
    /* 4DC80 8013F880 00000000 */   nop
    /* 4DC84 8013F884 19D0030C */  jal        func_800F4064
    /* 4DC88 8013F888 18000424 */   addiu     $a0, $zero, 0x18
    /* 4DC8C 8013F88C D9D8030C */  jal        func_800F6364
    /* 4DC90 8013F890 00000000 */   nop
    /* 4DC94 8013F894 D9D8030C */  jal        func_800F6364
    /* 4DC98 8013F898 00000000 */   nop
    /* 4DC9C 8013F89C 56D6030C */  jal        func_800F5958
    /* 4DCA0 8013F8A0 00060424 */   addiu     $a0, $zero, 0x600
    /* 4DCA4 8013F8A4 F5D4030C */  jal        func_800F53D4
    /* 4DCA8 8013F8A8 00000000 */   nop
    /* 4DCAC 8013F8AC F0FF4010 */  beqz       $v0, .L8013F870
    /* 4DCB0 8013F8B0 00000000 */   nop
    /* 4DCB4 8013F8B4 56D9030C */  jal        func_800F6558
    /* 4DCB8 8013F8B8 21200000 */   addu      $a0, $zero, $zero
    /* 4DCBC 8013F8BC 98E5030C */  jal        func_800F9660
    /* 4DCC0 8013F8C0 20000424 */   addiu     $a0, $zero, 0x20
    /* 4DCC4 8013F8C4 C7E5030C */  jal        func_800F971C
    /* 4DCC8 8013F8C8 00000000 */   nop
    /* 4DCCC 8013F8CC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DCD0 8013F8D0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DCD4 8013F8D4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4DCD8 8013F8D8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4DCDC 8013F8DC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DCE0 8013F8E0 00000000 */  nop
    /* 4DCE4 8013F8E4 000083A4 */  sh         $v1, 0x0($a0)
  .L8013F8E8:
    /* 4DCE8 8013F8E8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4DCEC 8013F8EC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4DCF0 8013F8F0 C4A00426 */  addiu      $a0, $s0, %lo(D_8019A0C4)
    /* 4DCF4 8013F8F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DCF8 8013F8F8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4DCFC 8013F8FC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4DD00 8013F900 21186400 */  addu       $v1, $v1, $a0
    /* 4DD04 8013F904 00006290 */  lbu        $v0, 0x0($v1)
    /* 4DD08 8013F908 88F40434 */  ori        $a0, $zero, 0xF488
    /* 4DD0C 8013F90C DAE1030C */  jal        func_800F8768
    /* 4DD10 8013F910 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 4DD14 8013F914 D9D8030C */  jal        func_800F6364
    /* 4DD18 8013F918 00000000 */   nop
    /* 4DD1C 8013F91C 56D6030C */  jal        func_800F5958
    /* 4DD20 8013F920 12000424 */   addiu     $a0, $zero, 0x12
    /* 4DD24 8013F924 F5D4030C */  jal        func_800F53D4
    /* 4DD28 8013F928 00000000 */   nop
    /* 4DD2C 8013F92C EEFF4010 */  beqz       $v0, .L8013F8E8
    /* 4DD30 8013F930 00000000 */   nop
    /* 4DD34 8013F934 D4A1050C */  jal        func_80168750
    /* 4DD38 8013F938 00000000 */   nop
    /* 4DD3C 8013F93C 53D9030C */  jal        func_800F654C
    /* 4DD40 8013F940 18000424 */   addiu     $a0, $zero, 0x18
    /* 4DD44 8013F944 62E0030C */  jal        func_800F8188
    /* 4DD48 8013F948 DD010424 */   addiu     $a0, $zero, 0x1DD
    /* 4DD4C 8013F94C 53D9030C */  jal        func_800F654C
    /* 4DD50 8013F950 03000424 */   addiu     $a0, $zero, 0x3
    /* 4DD54 8013F954 62E0030C */  jal        func_800F8188
    /* 4DD58 8013F958 DC010424 */   addiu     $a0, $zero, 0x1DC
    /* 4DD5C 8013F95C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4DD60 8013F960 1000B08F */  lw         $s0, 0x10($sp)
    /* 4DD64 8013F964 0800E003 */  jr         $ra
    /* 4DD68 8013F968 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013F5A8
