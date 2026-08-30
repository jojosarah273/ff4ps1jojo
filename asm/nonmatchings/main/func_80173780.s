nonmatching func_80173780, 0x758

glabel func_80173780
    /* 81B80 80173780 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 81B84 80173784 1000BFAF */  sw         $ra, 0x10($sp)
    /* 81B88 80173788 9BE4030C */  jal        func_800F926C
    /* 81B8C 8017378C 00000000 */   nop
    /* 81B90 80173790 53D9030C */  jal        func_800F654C
    /* 81B94 80173794 15000424 */   addiu     $a0, $zero, 0x15
    /* 81B98 80173798 80E4030C */  jal        func_800F9200
    /* 81B9C 8017379C 00000000 */   nop
    /* 81BA0 801737A0 12E5030C */  jal        func_800F9448
    /* 81BA4 801737A4 00000000 */   nop
    /* 81BA8 801737A8 59D9030C */  jal        func_800F6564
    /* 81BAC 801737AC 04170424 */   addiu     $a0, $zero, 0x1704
    /* 81BB0 801737B0 5DD5030C */  jal        func_800F5574
    /* 81BB4 801737B4 06000424 */   addiu     $a0, $zero, 0x6
    /* 81BB8 801737B8 F5D4030C */  jal        func_800F53D4
    /* 81BBC 801737BC 00000000 */   nop
    /* 81BC0 801737C0 F1004014 */  bnez       $v0, .L80173B88
    /* 81BC4 801737C4 00000000 */   nop
    /* 81BC8 801737C8 59D9030C */  jal        func_800F6564
    /* 81BCC 801737CC 24170424 */   addiu     $a0, $zero, 0x1724
    /* 81BD0 801737D0 0DD9030C */  jal        func_800F6434
    /* 81BD4 801737D4 02000424 */   addiu     $a0, $zero, 0x2
    /* 81BD8 801737D8 B9014014 */  bnez       $v0, .L80173EC0
    /* 81BDC 801737DC 00000000 */   nop
    /* 81BE0 801737E0 59D9030C */  jal        func_800F6564
    /* 81BE4 801737E4 01170424 */   addiu     $a0, $zero, 0x1701
    /* 81BE8 801737E8 C1CE030C */  jal        func_800F3B04
    /* 81BEC 801737EC 27170424 */   addiu     $a0, $zero, 0x1727
    /* 81BF0 801737F0 35D5030C */  jal        func_800F54D4
    /* 81BF4 801737F4 21204000 */   addu      $a0, $v0, $zero
    /* 81BF8 801737F8 F5D4030C */  jal        func_800F53D4
    /* 81BFC 801737FC 00000000 */   nop
    /* 81C00 80173800 AF014010 */  beqz       $v0, .L80173EC0
    /* 81C04 80173804 00000000 */   nop
    /* 81C08 80173808 8CD9030C */  jal        func_800F6630
    /* 81C0C 8017380C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 81C10 80173810 92D0030C */  jal        func_800F4248
    /* 81C14 80173814 0F000424 */   addiu     $a0, $zero, 0xF
    /* 81C18 80173818 48D0030C */  jal        func_800F4120
    /* 81C1C 8017381C 02020424 */   addiu     $a0, $zero, 0x202
    /* 81C20 80173820 A7014014 */  bnez       $v0, .L80173EC0
    /* 81C24 80173824 00000000 */   nop
    /* 81C28 80173828 59D9030C */  jal        func_800F6564
    /* 81C2C 8017382C 25170424 */   addiu     $a0, $zero, 0x1725
    /* 81C30 80173830 33D7030C */  jal        func_800F5CCC
    /* 81C34 80173834 00000000 */   nop
    /* 81C38 80173838 93E0030C */  jal        func_800F824C
    /* 81C3C 8017383C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81C40 80173840 59D9030C */  jal        func_800F6564
    /* 81C44 80173844 26170424 */   addiu     $a0, $zero, 0x1726
    /* 81C48 80173848 33D7030C */  jal        func_800F5CCC
    /* 81C4C 8017384C 00000000 */   nop
    /* 81C50 80173850 93E0030C */  jal        func_800F824C
    /* 81C54 80173854 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81C58 80173858 59D9030C */  jal        func_800F6564
    /* 81C5C 8017385C 00170424 */   addiu     $a0, $zero, 0x1700
    /* 81C60 80173860 5DD5030C */  jal        func_800F5574
    /* 81C64 80173864 02000424 */   addiu     $a0, $zero, 0x2
    /* 81C68 80173868 F5D4030C */  jal        func_800F53D4
    /* 81C6C 8017386C 00000000 */   nop
    /* 81C70 80173870 65004010 */  beqz       $v0, .L80173A08
    /* 81C74 80173874 00000000 */   nop
    /* 81C78 80173878 59D9030C */  jal        func_800F6564
    /* 81C7C 8017387C 25170424 */   addiu     $a0, $zero, 0x1725
    /* 81C80 80173880 93E0030C */  jal        func_800F824C
    /* 81C84 80173884 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81C88 80173888 59D9030C */  jal        func_800F6564
    /* 81C8C 8017388C 26170424 */   addiu     $a0, $zero, 0x1726
    /* 81C90 80173890 93E0030C */  jal        func_800F824C
    /* 81C94 80173894 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81C98 80173898 59D9030C */  jal        func_800F6564
    /* 81C9C 8017389C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 81CA0 801738A0 5DD5030C */  jal        func_800F5574
    /* 81CA4 801738A4 08000424 */   addiu     $a0, $zero, 0x8
    /* 81CA8 801738A8 F0D4030C */  jal        func_800F53C0
    /* 81CAC 801738AC 00000000 */   nop
    /* 81CB0 801738B0 11004014 */  bnez       $v0, .L801738F8
    /* 81CB4 801738B4 00000000 */   nop
    /* 81CB8 801738B8 8CD9030C */  jal        func_800F6630
    /* 81CBC 801738BC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81CC0 801738C0 5DD5030C */  jal        func_800F5574
    /* 81CC4 801738C4 30000424 */   addiu     $a0, $zero, 0x30
    /* 81CC8 801738C8 F0D4030C */  jal        func_800F53C0
    /* 81CCC 801738CC 00000000 */   nop
    /* 81CD0 801738D0 1D004010 */  beqz       $v0, .L80173948
    /* 81CD4 801738D4 00000000 */   nop
    /* 81CD8 801738D8 20D5030C */  jal        func_800F5480
    /* 81CDC 801738DC 00000000 */   nop
    /* 81CE0 801738E0 16E0030C */  jal        func_800F8058
    /* 81CE4 801738E4 40000424 */   addiu     $a0, $zero, 0x40
    /* 81CE8 801738E8 93E0030C */  jal        func_800F824C
    /* 81CEC 801738EC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81CF0 801738F0 52CE0508 */  j          .L80173948
    /* 81CF4 801738F4 00000000 */   nop
  .L801738F8:
    /* 81CF8 801738F8 5DD5030C */  jal        func_800F5574
    /* 81CFC 801738FC 38000424 */   addiu     $a0, $zero, 0x38
    /* 81D00 80173900 F0D4030C */  jal        func_800F53C0
    /* 81D04 80173904 00000000 */   nop
    /* 81D08 80173908 0F004010 */  beqz       $v0, .L80173948
    /* 81D0C 8017390C 00000000 */   nop
    /* 81D10 80173910 8CD9030C */  jal        func_800F6630
    /* 81D14 80173914 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81D18 80173918 5DD5030C */  jal        func_800F5574
    /* 81D1C 8017391C 10000424 */   addiu     $a0, $zero, 0x10
    /* 81D20 80173920 F0D4030C */  jal        func_800F53C0
    /* 81D24 80173924 00000000 */   nop
    /* 81D28 80173928 07004014 */  bnez       $v0, .L80173948
    /* 81D2C 8017392C 00000000 */   nop
    /* 81D30 80173930 04D5030C */  jal        func_800F5410
    /* 81D34 80173934 00000000 */   nop
    /* 81D38 80173938 02D0030C */  jal        func_800F4008
    /* 81D3C 8017393C 40000424 */   addiu     $a0, $zero, 0x40
    /* 81D40 80173940 93E0030C */  jal        func_800F824C
    /* 81D44 80173944 0C000424 */   addiu     $a0, $zero, 0xC
  .L80173948:
    /* 81D48 80173948 59D9030C */  jal        func_800F6564
    /* 81D4C 8017394C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 81D50 80173950 5DD5030C */  jal        func_800F5574
    /* 81D54 80173954 08000424 */   addiu     $a0, $zero, 0x8
    /* 81D58 80173958 F0D4030C */  jal        func_800F53C0
    /* 81D5C 8017395C 00000000 */   nop
    /* 81D60 80173960 11004014 */  bnez       $v0, .L801739A8
    /* 81D64 80173964 00000000 */   nop
    /* 81D68 80173968 8CD9030C */  jal        func_800F6630
    /* 81D6C 8017396C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81D70 80173970 5DD5030C */  jal        func_800F5574
    /* 81D74 80173974 30000424 */   addiu     $a0, $zero, 0x30
    /* 81D78 80173978 F0D4030C */  jal        func_800F53C0
    /* 81D7C 8017397C 00000000 */   nop
    /* 81D80 80173980 1D004010 */  beqz       $v0, .L801739F8
    /* 81D84 80173984 00000000 */   nop
    /* 81D88 80173988 20D5030C */  jal        func_800F5480
    /* 81D8C 8017398C 00000000 */   nop
    /* 81D90 80173990 16E0030C */  jal        func_800F8058
    /* 81D94 80173994 40000424 */   addiu     $a0, $zero, 0x40
    /* 81D98 80173998 93E0030C */  jal        func_800F824C
    /* 81D9C 8017399C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81DA0 801739A0 7ECE0508 */  j          .L801739F8
    /* 81DA4 801739A4 00000000 */   nop
  .L801739A8:
    /* 81DA8 801739A8 5DD5030C */  jal        func_800F5574
    /* 81DAC 801739AC 38000424 */   addiu     $a0, $zero, 0x38
    /* 81DB0 801739B0 F0D4030C */  jal        func_800F53C0
    /* 81DB4 801739B4 00000000 */   nop
    /* 81DB8 801739B8 0F004010 */  beqz       $v0, .L801739F8
    /* 81DBC 801739BC 00000000 */   nop
    /* 81DC0 801739C0 8CD9030C */  jal        func_800F6630
    /* 81DC4 801739C4 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81DC8 801739C8 5DD5030C */  jal        func_800F5574
    /* 81DCC 801739CC 10000424 */   addiu     $a0, $zero, 0x10
    /* 81DD0 801739D0 F0D4030C */  jal        func_800F53C0
    /* 81DD4 801739D4 00000000 */   nop
    /* 81DD8 801739D8 07004014 */  bnez       $v0, .L801739F8
    /* 81DDC 801739DC 00000000 */   nop
    /* 81DE0 801739E0 04D5030C */  jal        func_800F5410
    /* 81DE4 801739E4 00000000 */   nop
    /* 81DE8 801739E8 02D0030C */  jal        func_800F4008
    /* 81DEC 801739EC 40000424 */   addiu     $a0, $zero, 0x40
    /* 81DF0 801739F0 93E0030C */  jal        func_800F824C
    /* 81DF4 801739F4 0E000424 */   addiu     $a0, $zero, 0xE
  .L801739F8:
    /* 81DF8 801739F8 68D7030C */  jal        func_800F5DA0
    /* 81DFC 801739FC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81E00 80173A00 68D7030C */  jal        func_800F5DA0
    /* 81E04 80173A04 0E000424 */   addiu     $a0, $zero, 0xE
  .L80173A08:
    /* 81E08 80173A08 B6CF050C */  jal        func_80173ED8
    /* 81E0C 80173A0C 00000000 */   nop
    /* 81E10 80173A10 8CD9030C */  jal        func_800F6630
    /* 81E14 80173A14 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 81E18 80173A18 0DD9030C */  jal        func_800F6434
    /* 81E1C 80173A1C 02020424 */   addiu     $a0, $zero, 0x202
    /* 81E20 80173A20 27014010 */  beqz       $v0, .L80173EC0
    /* 81E24 80173A24 00000000 */   nop
    /* 81E28 80173A28 8CD9030C */  jal        func_800F6630
    /* 81E2C 80173A2C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 81E30 80173A30 5DD5030C */  jal        func_800F5574
    /* 81E34 80173A34 10000424 */   addiu     $a0, $zero, 0x10
    /* 81E38 80173A38 F5D4030C */  jal        func_800F53D4
    /* 81E3C 80173A3C 00000000 */   nop
    /* 81E40 80173A40 4D004014 */  bnez       $v0, .L80173B78
    /* 81E44 80173A44 00000000 */   nop
    /* 81E48 80173A48 8CD9030C */  jal        func_800F6630
    /* 81E4C 80173A4C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81E50 80173A50 20D5030C */  jal        func_800F5480
    /* 81E54 80173A54 00000000 */   nop
    /* 81E58 80173A58 16E0030C */  jal        func_800F8058
    /* 81E5C 80173A5C 08000424 */   addiu     $a0, $zero, 0x8
    /* 81E60 80173A60 93E0030C */  jal        func_800F824C
    /* 81E64 80173A64 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81E68 80173A68 77DC030C */  jal        func_800F71DC
    /* 81E6C 80173A6C 21200000 */   addu      $a0, $zero, $zero
  .L80173A70:
    /* 81E70 80173A70 DADA030C */  jal        func_800F6B68
    /* 81E74 80173A74 1FBC0434 */   ori       $a0, $zero, 0xBC1F
    /* 81E78 80173A78 04D5030C */  jal        func_800F5410
    /* 81E7C 80173A7C 00000000 */   nop
    /* 81E80 80173A80 0FCF030C */  jal        func_800F3C3C
    /* 81E84 80173A84 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81E88 80173A88 CECF030C */  jal        func_800F3F38
    /* 81E8C 80173A8C 21204000 */   addu      $a0, $v0, $zero
    /* 81E90 80173A90 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 81E94 80173A94 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 81E98 80173A98 00000000 */  nop
    /* 81E9C 80173A9C 00006290 */  lbu        $v0, 0x0($v1)
    /* 81EA0 80173AA0 00000000 */  nop
    /* 81EA4 80173AA4 FD004230 */  andi       $v0, $v0, 0xFD
    /* 81EA8 80173AA8 000062A0 */  sb         $v0, 0x0($v1)
    /* 81EAC 80173AAC 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 81EB0 80173AB0 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 81EB4 80173AB4 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 81EB8 80173AB8 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 81EBC 80173ABC 00008290 */  lbu        $v0, 0x0($a0)
    /* 81EC0 80173AC0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 81EC4 80173AC4 02004014 */  bnez       $v0, .L80173AD0
    /* 81EC8 80173AC8 00000000 */   nop
    /* 81ECC 80173ACC 02006334 */  ori        $v1, $v1, 0x2
  .L80173AD0:
    /* 81ED0 80173AD0 F0D4030C */  jal        func_800F53C0
    /* 81ED4 80173AD4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 81ED8 80173AD8 15004014 */  bnez       $v0, .L80173B30
    /* 81EDC 80173ADC 00000000 */   nop
    /* 81EE0 80173AE0 DAE1030C */  jal        func_800F8768
    /* 81EE4 80173AE4 E0040424 */   addiu     $a0, $zero, 0x4E0
    /* 81EE8 80173AE8 DADA030C */  jal        func_800F6B68
    /* 81EEC 80173AEC 20BC0434 */   ori       $a0, $zero, 0xBC20
    /* 81EF0 80173AF0 04D5030C */  jal        func_800F5410
    /* 81EF4 80173AF4 00000000 */   nop
    /* 81EF8 80173AF8 0FCF030C */  jal        func_800F3C3C
    /* 81EFC 80173AFC 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81F00 80173B00 CECF030C */  jal        func_800F3F38
    /* 81F04 80173B04 21204000 */   addu      $a0, $v0, $zero
    /* 81F08 80173B08 DAE1030C */  jal        func_800F8768
    /* 81F0C 80173B0C E1040424 */   addiu     $a0, $zero, 0x4E1
    /* 81F10 80173B10 DADA030C */  jal        func_800F6B68
    /* 81F14 80173B14 21BC0434 */   ori       $a0, $zero, 0xBC21
    /* 81F18 80173B18 DAE1030C */  jal        func_800F8768
    /* 81F1C 80173B1C E2040424 */   addiu     $a0, $zero, 0x4E2
    /* 81F20 80173B20 DADA030C */  jal        func_800F6B68
    /* 81F24 80173B24 22BC0434 */   ori       $a0, $zero, 0xBC22
    /* 81F28 80173B28 DAE1030C */  jal        func_800F8768
    /* 81F2C 80173B2C E3040424 */   addiu     $a0, $zero, 0x4E3
  .L80173B30:
    /* 81F30 80173B30 D9D8030C */  jal        func_800F6364
    /* 81F34 80173B34 00000000 */   nop
    /* 81F38 80173B38 D9D8030C */  jal        func_800F6364
    /* 81F3C 80173B3C 00000000 */   nop
    /* 81F40 80173B40 D9D8030C */  jal        func_800F6364
    /* 81F44 80173B44 00000000 */   nop
    /* 81F48 80173B48 D9D8030C */  jal        func_800F6364
    /* 81F4C 80173B4C 00000000 */   nop
    /* 81F50 80173B50 56D6030C */  jal        func_800F5958
    /* 81F54 80173B54 10000424 */   addiu     $a0, $zero, 0x10
    /* 81F58 80173B58 F5D4030C */  jal        func_800F53D4
    /* 81F5C 80173B5C 00000000 */   nop
    /* 81F60 80173B60 C3FF4010 */  beqz       $v0, .L80173A70
    /* 81F64 80173B64 00000000 */   nop
    /* 81F68 80173B68 12E5030C */  jal        func_800F9448
    /* 81F6C 80173B6C 00000000 */   nop
    /* 81F70 80173B70 B2CF0508 */  j          .L80173EC8
    /* 81F74 80173B74 00000000 */   nop
  .L80173B78:
    /* 81F78 80173B78 53D9030C */  jal        func_800F654C
    /* 81F7C 80173B7C 03000424 */   addiu     $a0, $zero, 0x3
    /* 81F80 80173B80 10CF0508 */  j          .L80173C40
    /* 81F84 80173B84 00000000 */   nop
  .L80173B88:
    /* 81F88 80173B88 8CD9030C */  jal        func_800F6630
    /* 81F8C 80173B8C B9000424 */   addiu     $a0, $zero, 0xB9
    /* 81F90 80173B90 5DD5030C */  jal        func_800F5574
    /* 81F94 80173B94 10000424 */   addiu     $a0, $zero, 0x10
    /* 81F98 80173B98 F0D4030C */  jal        func_800F53C0
    /* 81F9C 80173B9C 00000000 */   nop
    /* 81FA0 80173BA0 05004014 */  bnez       $v0, .L80173BB8
    /* 81FA4 80173BA4 00000000 */   nop
    /* 81FA8 80173BA8 95CD050C */  jal        func_80173654
    /* 81FAC 80173BAC 00000000 */   nop
    /* 81FB0 80173BB0 FCCE0508 */  j          .L80173BF0
    /* 81FB4 80173BB4 00000000 */   nop
  .L80173BB8:
    /* 81FB8 80173BB8 20D5030C */  jal        func_800F5480
    /* 81FBC 80173BBC 00000000 */   nop
    /* 81FC0 80173BC0 16E0030C */  jal        func_800F8058
    /* 81FC4 80173BC4 10000424 */   addiu     $a0, $zero, 0x10
    /* 81FC8 80173BC8 5DD5030C */  jal        func_800F5574
    /* 81FCC 80173BCC 10000424 */   addiu     $a0, $zero, 0x10
    /* 81FD0 80173BD0 F0D4030C */  jal        func_800F53C0
    /* 81FD4 80173BD4 00000000 */   nop
    /* 81FD8 80173BD8 03004010 */  beqz       $v0, .L80173BE8
    /* 81FDC 80173BDC 00000000 */   nop
    /* 81FE0 80173BE0 53D9030C */  jal        func_800F654C
    /* 81FE4 80173BE4 10000424 */   addiu     $a0, $zero, 0x10
  .L80173BE8:
    /* 81FE8 80173BE8 78CA050C */  jal        func_801729E0
    /* 81FEC 80173BEC 00000000 */   nop
  .L80173BF0:
    /* 81FF0 80173BF0 53D9030C */  jal        func_800F654C
    /* 81FF4 80173BF4 60000424 */   addiu     $a0, $zero, 0x60
    /* 81FF8 80173BF8 93E0030C */  jal        func_800F824C
    /* 81FFC 80173BFC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 82000 80173C00 53D9030C */  jal        func_800F654C
    /* 82004 80173C04 60000424 */   addiu     $a0, $zero, 0x60
    /* 82008 80173C08 20D5030C */  jal        func_800F5480
    /* 8200C 80173C0C 00000000 */   nop
    /* 82010 80173C10 0FCF030C */  jal        func_800F3C3C
    /* 82014 80173C14 B9000424 */   addiu     $a0, $zero, 0xB9
    /* 82018 80173C18 D2DF030C */  jal        func_800F7F48
    /* 8201C 80173C1C 21204000 */   addu      $a0, $v0, $zero
    /* 82020 80173C20 93E0030C */  jal        func_800F824C
    /* 82024 80173C24 0E000424 */   addiu     $a0, $zero, 0xE
    /* 82028 80173C28 EEE3030C */  jal        func_800F8FB8
    /* 8202C 80173C2C 0D000424 */   addiu     $a0, $zero, 0xD
    /* 82030 80173C30 EEE3030C */  jal        func_800F8FB8
    /* 82034 80173C34 0F000424 */   addiu     $a0, $zero, 0xF
    /* 82038 80173C38 59D9030C */  jal        func_800F6564
    /* 8203C 80173C3C 05170424 */   addiu     $a0, $zero, 0x1705
  .L80173C40:
    /* 82040 80173C40 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 82044 80173C44 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 82048 80173C48 00000000 */  nop
    /* 8204C 80173C4C 00006290 */  lbu        $v0, 0x0($v1)
    /* 82050 80173C50 07000424 */  addiu      $a0, $zero, 0x7
    /* 82054 80173C54 40110200 */  sll        $v0, $v0, 5
    /* 82058 80173C58 93E0030C */  jal        func_800F824C
    /* 8205C 80173C5C 000062A0 */   sb        $v0, 0x0($v1)
    /* 82060 80173C60 8CD9030C */  jal        func_800F6630
    /* 82064 80173C64 07000424 */   addiu     $a0, $zero, 0x7
    /* 82068 80173C68 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 8206C 80173C6C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 82070 80173C70 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 82074 80173C74 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 82078 80173C78 00004394 */  lhu        $v1, 0x0($v0)
    /* 8207C 80173C7C 40000424 */  addiu      $a0, $zero, 0x40
    /* 82080 80173C80 5BE3030C */  jal        func_800F8D6C
    /* 82084 80173C84 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 82088 80173C88 40DD030C */  jal        func_800F7500
    /* 8208C 80173C8C 21200000 */   addu      $a0, $zero, $zero
    /* 82090 80173C90 AFE3030C */  jal        func_800F8EBC
    /* 82094 80173C94 43000424 */   addiu     $a0, $zero, 0x43
  .L80173C98:
    /* 82098 80173C98 9CDC030C */  jal        func_800F7270
    /* 8209C 80173C9C 43000424 */   addiu     $a0, $zero, 0x43
    /* 820A0 80173CA0 DADA030C */  jal        func_800F6B68
    /* 820A4 80173CA4 97BD0434 */   ori       $a0, $zero, 0xBD97
    /* 820A8 80173CA8 04D5030C */  jal        func_800F5410
    /* 820AC 80173CAC 00000000 */   nop
    /* 820B0 80173CB0 0FCF030C */  jal        func_800F3C3C
    /* 820B4 80173CB4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 820B8 80173CB8 CECF030C */  jal        func_800F3F38
    /* 820BC 80173CBC 21204000 */   addu      $a0, $v0, $zero
    /* 820C0 80173CC0 58E2030C */  jal        func_800F8960
    /* 820C4 80173CC4 24040424 */   addiu     $a0, $zero, 0x424
    /* 820C8 80173CC8 8CD9030C */  jal        func_800F6630
    /* 820CC 80173CCC 0D000424 */   addiu     $a0, $zero, 0xD
    /* 820D0 80173CD0 02D0030C */  jal        func_800F4008
    /* 820D4 80173CD4 21200000 */   addu      $a0, $zero, $zero
    /* 820D8 80173CD8 92D0030C */  jal        func_800F4248
    /* 820DC 80173CDC 01000424 */   addiu     $a0, $zero, 0x1
    /* 820E0 80173CE0 48D0030C */  jal        func_800F4120
    /* 820E4 80173CE4 02000424 */   addiu     $a0, $zero, 0x2
    /* 820E8 80173CE8 05004014 */  bnez       $v0, .L80173D00
    /* 820EC 80173CEC 00000000 */   nop
    /* 820F0 80173CF0 53D9030C */  jal        func_800F654C
    /* 820F4 80173CF4 49000424 */   addiu     $a0, $zero, 0x49
    /* 820F8 80173CF8 31C5050C */  jal        func_801714C4
    /* 820FC 80173CFC 00000000 */   nop
  .L80173D00:
    /* 82100 80173D00 DADA030C */  jal        func_800F6B68
    /* 82104 80173D04 98BD0434 */   ori       $a0, $zero, 0xBD98
    /* 82108 80173D08 04D5030C */  jal        func_800F5410
    /* 8210C 80173D0C 00000000 */   nop
    /* 82110 80173D10 0FCF030C */  jal        func_800F3C3C
    /* 82114 80173D14 0E000424 */   addiu     $a0, $zero, 0xE
    /* 82118 80173D18 CECF030C */  jal        func_800F3F38
    /* 8211C 80173D1C 21204000 */   addu      $a0, $v0, $zero
    /* 82120 80173D20 58E2030C */  jal        func_800F8960
    /* 82124 80173D24 25040424 */   addiu     $a0, $zero, 0x425
    /* 82128 80173D28 9CDC030C */  jal        func_800F7270
    /* 8212C 80173D2C 40000424 */   addiu     $a0, $zero, 0x40
    /* 82130 80173D30 DADA030C */  jal        func_800F6B68
    /* 82134 80173D34 B7BD0434 */   ori       $a0, $zero, 0xBDB7
    /* 82138 80173D38 58E2030C */  jal        func_800F8960
    /* 8213C 80173D3C 26040424 */   addiu     $a0, $zero, 0x426
    /* 82140 80173D40 DADA030C */  jal        func_800F6B68
    /* 82144 80173D44 B8BD0434 */   ori       $a0, $zero, 0xBDB8
    /* 82148 80173D48 58E2030C */  jal        func_800F8960
    /* 8214C 80173D4C 27040424 */   addiu     $a0, $zero, 0x427
    /* 82150 80173D50 AFD8030C */  jal        func_800F62BC
    /* 82154 80173D54 40000424 */   addiu     $a0, $zero, 0x40
    /* 82158 80173D58 AFD8030C */  jal        func_800F62BC
    /* 8215C 80173D5C 40000424 */   addiu     $a0, $zero, 0x40
    /* 82160 80173D60 AFD8030C */  jal        func_800F62BC
    /* 82164 80173D64 43000424 */   addiu     $a0, $zero, 0x43
    /* 82168 80173D68 AFD8030C */  jal        func_800F62BC
    /* 8216C 80173D6C 43000424 */   addiu     $a0, $zero, 0x43
    /* 82170 80173D70 EFD8030C */  jal        func_800F63BC
    /* 82174 80173D74 00000000 */   nop
    /* 82178 80173D78 EFD8030C */  jal        func_800F63BC
    /* 8217C 80173D7C 00000000 */   nop
    /* 82180 80173D80 EFD8030C */  jal        func_800F63BC
    /* 82184 80173D84 00000000 */   nop
    /* 82188 80173D88 EFD8030C */  jal        func_800F63BC
    /* 8218C 80173D8C 00000000 */   nop
    /* 82190 80173D90 A4D6030C */  jal        func_800F5A90
    /* 82194 80173D94 20000424 */   addiu     $a0, $zero, 0x20
    /* 82198 80173D98 F5D4030C */  jal        func_800F53D4
    /* 8219C 80173D9C 00000000 */   nop
    /* 821A0 80173DA0 BDFF4010 */  beqz       $v0, .L80173C98
    /* 821A4 80173DA4 00000000 */   nop
    /* 821A8 80173DA8 40DD030C */  jal        func_800F7500
    /* 821AC 80173DAC 21200000 */   addu      $a0, $zero, $zero
  .L80173DB0:
    /* 821B0 80173DB0 9CDC030C */  jal        func_800F7270
    /* 821B4 80173DB4 43000424 */   addiu     $a0, $zero, 0x43
    /* 821B8 80173DB8 DADA030C */  jal        func_800F6B68
    /* 821BC 80173DBC 97BD0434 */   ori       $a0, $zero, 0xBD97
    /* 821C0 80173DC0 04D5030C */  jal        func_800F5410
    /* 821C4 80173DC4 00000000 */   nop
    /* 821C8 80173DC8 0FCF030C */  jal        func_800F3C3C
    /* 821CC 80173DCC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 821D0 80173DD0 CECF030C */  jal        func_800F3F38
    /* 821D4 80173DD4 21204000 */   addu      $a0, $v0, $zero
    /* 821D8 80173DD8 58E2030C */  jal        func_800F8960
    /* 821DC 80173DDC A0040424 */   addiu     $a0, $zero, 0x4A0
    /* 821E0 80173DE0 8CD9030C */  jal        func_800F6630
    /* 821E4 80173DE4 0D000424 */   addiu     $a0, $zero, 0xD
    /* 821E8 80173DE8 02D0030C */  jal        func_800F4008
    /* 821EC 80173DEC 21200000 */   addu      $a0, $zero, $zero
    /* 821F0 80173DF0 92D0030C */  jal        func_800F4248
    /* 821F4 80173DF4 01000424 */   addiu     $a0, $zero, 0x1
    /* 821F8 80173DF8 48D0030C */  jal        func_800F4120
    /* 821FC 80173DFC 02000424 */   addiu     $a0, $zero, 0x2
    /* 82200 80173E00 05004014 */  bnez       $v0, .L80173E18
    /* 82204 80173E04 00000000 */   nop
    /* 82208 80173E08 53D9030C */  jal        func_800F654C
    /* 8220C 80173E0C 68000424 */   addiu     $a0, $zero, 0x68
    /* 82210 80173E10 31C5050C */  jal        func_801714C4
    /* 82214 80173E14 00000000 */   nop
  .L80173E18:
    /* 82218 80173E18 DADA030C */  jal        func_800F6B68
    /* 8221C 80173E1C 98BD0434 */   ori       $a0, $zero, 0xBD98
    /* 82220 80173E20 04D5030C */  jal        func_800F5410
    /* 82224 80173E24 00000000 */   nop
    /* 82228 80173E28 0FCF030C */  jal        func_800F3C3C
    /* 8222C 80173E2C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 82230 80173E30 CECF030C */  jal        func_800F3F38
    /* 82234 80173E34 21204000 */   addu      $a0, $v0, $zero
    /* 82238 80173E38 58E2030C */  jal        func_800F8960
    /* 8223C 80173E3C A1040424 */   addiu     $a0, $zero, 0x4A1
    /* 82240 80173E40 9CDC030C */  jal        func_800F7270
    /* 82244 80173E44 40000424 */   addiu     $a0, $zero, 0x40
    /* 82248 80173E48 DADA030C */  jal        func_800F6B68
    /* 8224C 80173E4C B7BD0434 */   ori       $a0, $zero, 0xBDB7
    /* 82250 80173E50 58E2030C */  jal        func_800F8960
    /* 82254 80173E54 A2040424 */   addiu     $a0, $zero, 0x4A2
    /* 82258 80173E58 DADA030C */  jal        func_800F6B68
    /* 8225C 80173E5C B8BD0434 */   ori       $a0, $zero, 0xBDB8
    /* 82260 80173E60 58E2030C */  jal        func_800F8960
    /* 82264 80173E64 A3040424 */   addiu     $a0, $zero, 0x4A3
    /* 82268 80173E68 AFD8030C */  jal        func_800F62BC
    /* 8226C 80173E6C 40000424 */   addiu     $a0, $zero, 0x40
    /* 82270 80173E70 AFD8030C */  jal        func_800F62BC
    /* 82274 80173E74 40000424 */   addiu     $a0, $zero, 0x40
    /* 82278 80173E78 AFD8030C */  jal        func_800F62BC
    /* 8227C 80173E7C 43000424 */   addiu     $a0, $zero, 0x43
    /* 82280 80173E80 AFD8030C */  jal        func_800F62BC
    /* 82284 80173E84 43000424 */   addiu     $a0, $zero, 0x43
    /* 82288 80173E88 EFD8030C */  jal        func_800F63BC
    /* 8228C 80173E8C 00000000 */   nop
    /* 82290 80173E90 EFD8030C */  jal        func_800F63BC
    /* 82294 80173E94 00000000 */   nop
    /* 82298 80173E98 EFD8030C */  jal        func_800F63BC
    /* 8229C 80173E9C 00000000 */   nop
    /* 822A0 80173EA0 EFD8030C */  jal        func_800F63BC
    /* 822A4 80173EA4 00000000 */   nop
    /* 822A8 80173EA8 A4D6030C */  jal        func_800F5A90
    /* 822AC 80173EAC 20000424 */   addiu     $a0, $zero, 0x20
    /* 822B0 80173EB0 F5D4030C */  jal        func_800F53D4
    /* 822B4 80173EB4 00000000 */   nop
    /* 822B8 80173EB8 BDFF4010 */  beqz       $v0, .L80173DB0
    /* 822BC 80173EBC 00000000 */   nop
  .L80173EC0:
    /* 822C0 80173EC0 12E5030C */  jal        func_800F9448
    /* 822C4 80173EC4 00000000 */   nop
  .L80173EC8:
    /* 822C8 80173EC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 822CC 80173ECC 00000000 */  nop
    /* 822D0 80173ED0 0800E003 */  jr         $ra
    /* 822D4 80173ED4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80173780
