nonmatching func_80105828, 0x2C8

glabel func_80105828
    /* 13C28 80105828 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 13C2C 8010582C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 13C30 80105830 59D9030C */  jal        func_800F6564
    /* 13C34 80105834 09070424 */   addiu     $a0, $zero, 0x709
    /* 13C38 80105838 A4E5030C */  jal        func_800F9690
    /* 13C3C 8010583C 00000000 */   nop
    /* 13C40 80105840 59D9030C */  jal        func_800F6564
    /* 13C44 80105844 06170424 */   addiu     $a0, $zero, 0x1706
    /* 13C48 80105848 04D5030C */  jal        func_800F5410
    /* 13C4C 8010584C 00000000 */   nop
    /* 13C50 80105850 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* 13C54 80105854 1A80023C */  lui        $v0, %hi(D_80198AC4)
    /* 13C58 80105858 00008394 */  lhu        $v1, 0x0($a0)
    /* 13C5C 8010585C C48A4224 */  addiu      $v0, $v0, %lo(D_80198AC4)
    /* 13C60 80105860 21186200 */  addu       $v1, $v1, $v0
    /* 13C64 80105864 00006490 */  lbu        $a0, 0x0($v1)
    /* 13C68 80105868 02D0030C */  jal        func_800F4008
    /* 13C6C 8010586C 00000000 */   nop
    /* 13C70 80105870 93E0030C */  jal        func_800F824C
    /* 13C74 80105874 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13C78 80105878 59D9030C */  jal        func_800F6564
    /* 13C7C 8010587C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 13C80 80105880 04D5030C */  jal        func_800F5410
    /* 13C84 80105884 00000000 */   nop
    /* 13C88 80105888 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* 13C8C 8010588C 1A80023C */  lui        $v0, %hi(D_80198ACC)
    /* 13C90 80105890 00008394 */  lhu        $v1, 0x0($a0)
    /* 13C94 80105894 CC8A4224 */  addiu      $v0, $v0, %lo(D_80198ACC)
    /* 13C98 80105898 21186200 */  addu       $v1, $v1, $v0
    /* 13C9C 8010589C 00006490 */  lbu        $a0, 0x0($v1)
    /* 13CA0 801058A0 02D0030C */  jal        func_800F4008
    /* 13CA4 801058A4 00000000 */   nop
    /* 13CA8 801058A8 93E0030C */  jal        func_800F824C
    /* 13CAC 801058AC 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13CB0 801058B0 EEE3030C */  jal        func_800F8FB8
    /* 13CB4 801058B4 0A000424 */   addiu     $a0, $zero, 0xA
    /* 13CB8 801058B8 59D9030C */  jal        func_800F6564
    /* 13CBC 801058BC 04170424 */   addiu     $a0, $zero, 0x1704
    /* 13CC0 801058C0 0DD9030C */  jal        func_800F6434
    /* 13CC4 801058C4 02020424 */   addiu     $a0, $zero, 0x202
    /* 13CC8 801058C8 85004010 */  beqz       $v0, .L80105AE0
    /* 13CCC 801058CC 00000000 */   nop
    /* 13CD0 801058D0 5DD5030C */  jal        func_800F5574
    /* 13CD4 801058D4 01000424 */   addiu     $a0, $zero, 0x1
    /* 13CD8 801058D8 F5D4030C */  jal        func_800F53D4
    /* 13CDC 801058DC 00000000 */   nop
    /* 13CE0 801058E0 15004010 */  beqz       $v0, .L80105938
    /* 13CE4 801058E4 00000000 */   nop
    /* 13CE8 801058E8 8CD9030C */  jal        func_800F6630
    /* 13CEC 801058EC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13CF0 801058F0 C1CE030C */  jal        func_800F3B04
    /* 13CF4 801058F4 19170424 */   addiu     $a0, $zero, 0x1719
    /* 13CF8 801058F8 35D5030C */  jal        func_800F54D4
    /* 13CFC 801058FC 21204000 */   addu      $a0, $v0, $zero
    /* 13D00 80105900 F5D4030C */  jal        func_800F53D4
    /* 13D04 80105904 00000000 */   nop
    /* 13D08 80105908 0B004010 */  beqz       $v0, .L80105938
    /* 13D0C 8010590C 00000000 */   nop
    /* 13D10 80105910 8CD9030C */  jal        func_800F6630
    /* 13D14 80105914 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13D18 80105918 C1CE030C */  jal        func_800F3B04
    /* 13D1C 8010591C 1A170424 */   addiu     $a0, $zero, 0x171A
    /* 13D20 80105920 35D5030C */  jal        func_800F54D4
    /* 13D24 80105924 21204000 */   addu      $a0, $v0, $zero
    /* 13D28 80105928 F5D4030C */  jal        func_800F53D4
    /* 13D2C 8010592C 00000000 */   nop
    /* 13D30 80105930 51004014 */  bnez       $v0, .L80105A78
    /* 13D34 80105934 00000000 */   nop
  .L80105938:
    /* 13D38 80105938 59D9030C */  jal        func_800F6564
    /* 13D3C 8010593C 04170424 */   addiu     $a0, $zero, 0x1704
    /* 13D40 80105940 5DD5030C */  jal        func_800F5574
    /* 13D44 80105944 02000424 */   addiu     $a0, $zero, 0x2
    /* 13D48 80105948 F5D4030C */  jal        func_800F53D4
    /* 13D4C 8010594C 00000000 */   nop
    /* 13D50 80105950 63004014 */  bnez       $v0, .L80105AE0
    /* 13D54 80105954 00000000 */   nop
    /* 13D58 80105958 5DD5030C */  jal        func_800F5574
    /* 13D5C 8010595C 04000424 */   addiu     $a0, $zero, 0x4
    /* 13D60 80105960 F0D4030C */  jal        func_800F53C0
    /* 13D64 80105964 00000000 */   nop
    /* 13D68 80105968 5D004014 */  bnez       $v0, .L80105AE0
    /* 13D6C 8010596C 00000000 */   nop
    /* 13D70 80105970 59D9030C */  jal        func_800F6564
    /* 13D74 80105974 15170424 */   addiu     $a0, $zero, 0x1715
    /* 13D78 80105978 0DD9030C */  jal        func_800F6434
    /* 13D7C 8010597C 02020424 */   addiu     $a0, $zero, 0x202
    /* 13D80 80105980 15004014 */  bnez       $v0, .L801059D8
    /* 13D84 80105984 00000000 */   nop
    /* 13D88 80105988 8CD9030C */  jal        func_800F6630
    /* 13D8C 8010598C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13D90 80105990 C1CE030C */  jal        func_800F3B04
    /* 13D94 80105994 13170424 */   addiu     $a0, $zero, 0x1713
    /* 13D98 80105998 35D5030C */  jal        func_800F54D4
    /* 13D9C 8010599C 21204000 */   addu      $a0, $v0, $zero
    /* 13DA0 801059A0 F5D4030C */  jal        func_800F53D4
    /* 13DA4 801059A4 00000000 */   nop
    /* 13DA8 801059A8 0B004010 */  beqz       $v0, .L801059D8
    /* 13DAC 801059AC 00000000 */   nop
    /* 13DB0 801059B0 8CD9030C */  jal        func_800F6630
    /* 13DB4 801059B4 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13DB8 801059B8 C1CE030C */  jal        func_800F3B04
    /* 13DBC 801059BC 14170424 */   addiu     $a0, $zero, 0x1714
    /* 13DC0 801059C0 35D5030C */  jal        func_800F54D4
    /* 13DC4 801059C4 21204000 */   addu      $a0, $v0, $zero
    /* 13DC8 801059C8 F5D4030C */  jal        func_800F53D4
    /* 13DCC 801059CC 00000000 */   nop
    /* 13DD0 801059D0 29004014 */  bnez       $v0, .L80105A78
    /* 13DD4 801059D4 00000000 */   nop
  .L801059D8:
    /* 13DD8 801059D8 8CD9030C */  jal        func_800F6630
    /* 13DDC 801059DC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13DE0 801059E0 C1CE030C */  jal        func_800F3B04
    /* 13DE4 801059E4 1D170424 */   addiu     $a0, $zero, 0x171D
    /* 13DE8 801059E8 35D5030C */  jal        func_800F54D4
    /* 13DEC 801059EC 21204000 */   addu      $a0, $v0, $zero
    /* 13DF0 801059F0 F5D4030C */  jal        func_800F53D4
    /* 13DF4 801059F4 00000000 */   nop
    /* 13DF8 801059F8 0B004010 */  beqz       $v0, .L80105A28
    /* 13DFC 801059FC 00000000 */   nop
    /* 13E00 80105A00 8CD9030C */  jal        func_800F6630
    /* 13E04 80105A04 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13E08 80105A08 C1CE030C */  jal        func_800F3B04
    /* 13E0C 80105A0C 1E170424 */   addiu     $a0, $zero, 0x171E
    /* 13E10 80105A10 35D5030C */  jal        func_800F54D4
    /* 13E14 80105A14 21204000 */   addu      $a0, $v0, $zero
    /* 13E18 80105A18 F5D4030C */  jal        func_800F53D4
    /* 13E1C 80105A1C 00000000 */   nop
    /* 13E20 80105A20 15004014 */  bnez       $v0, .L80105A78
    /* 13E24 80105A24 00000000 */   nop
  .L80105A28:
    /* 13E28 80105A28 8CD9030C */  jal        func_800F6630
    /* 13E2C 80105A2C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13E30 80105A30 C1CE030C */  jal        func_800F3B04
    /* 13E34 80105A34 21170424 */   addiu     $a0, $zero, 0x1721
    /* 13E38 80105A38 35D5030C */  jal        func_800F54D4
    /* 13E3C 80105A3C 21204000 */   addu      $a0, $v0, $zero
    /* 13E40 80105A40 F5D4030C */  jal        func_800F53D4
    /* 13E44 80105A44 00000000 */   nop
    /* 13E48 80105A48 0F004010 */  beqz       $v0, .L80105A88
    /* 13E4C 80105A4C 00000000 */   nop
    /* 13E50 80105A50 8CD9030C */  jal        func_800F6630
    /* 13E54 80105A54 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13E58 80105A58 C1CE030C */  jal        func_800F3B04
    /* 13E5C 80105A5C 22170424 */   addiu     $a0, $zero, 0x1722
    /* 13E60 80105A60 35D5030C */  jal        func_800F54D4
    /* 13E64 80105A64 21204000 */   addu      $a0, $v0, $zero
    /* 13E68 80105A68 F5D4030C */  jal        func_800F53D4
    /* 13E6C 80105A6C 00000000 */   nop
    /* 13E70 80105A70 05004010 */  beqz       $v0, .L80105A88
    /* 13E74 80105A74 00000000 */   nop
  .L80105A78:
    /* 13E78 80105A78 AFD8030C */  jal        func_800F62BC
    /* 13E7C 80105A7C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 13E80 80105A80 B8160408 */  j          .L80105AE0
    /* 13E84 80105A84 00000000 */   nop
  .L80105A88:
    /* 13E88 80105A88 8CD9030C */  jal        func_800F6630
    /* 13E8C 80105A8C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 13E90 80105A90 C1CE030C */  jal        func_800F3B04
    /* 13E94 80105A94 25170424 */   addiu     $a0, $zero, 0x1725
    /* 13E98 80105A98 35D5030C */  jal        func_800F54D4
    /* 13E9C 80105A9C 21204000 */   addu      $a0, $v0, $zero
    /* 13EA0 80105AA0 F5D4030C */  jal        func_800F53D4
    /* 13EA4 80105AA4 00000000 */   nop
    /* 13EA8 80105AA8 0D004010 */  beqz       $v0, .L80105AE0
    /* 13EAC 80105AAC 00000000 */   nop
    /* 13EB0 80105AB0 8CD9030C */  jal        func_800F6630
    /* 13EB4 80105AB4 0E000424 */   addiu     $a0, $zero, 0xE
    /* 13EB8 80105AB8 C1CE030C */  jal        func_800F3B04
    /* 13EBC 80105ABC 26170424 */   addiu     $a0, $zero, 0x1726
    /* 13EC0 80105AC0 35D5030C */  jal        func_800F54D4
    /* 13EC4 80105AC4 21204000 */   addu      $a0, $v0, $zero
    /* 13EC8 80105AC8 F5D4030C */  jal        func_800F53D4
    /* 13ECC 80105ACC 00000000 */   nop
    /* 13ED0 80105AD0 03004010 */  beqz       $v0, .L80105AE0
    /* 13ED4 80105AD4 00000000 */   nop
    /* 13ED8 80105AD8 AFD8030C */  jal        func_800F62BC
    /* 13EDC 80105ADC 0A000424 */   addiu     $a0, $zero, 0xA
  .L80105AE0:
    /* 13EE0 80105AE0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 13EE4 80105AE4 00000000 */  nop
    /* 13EE8 80105AE8 0800E003 */  jr         $ra
    /* 13EEC 80105AEC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80105828
