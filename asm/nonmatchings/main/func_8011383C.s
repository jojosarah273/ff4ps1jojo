nonmatching func_8011383C, 0x3C8

glabel func_8011383C
    /* 21C3C 8011383C D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 21C40 80113840 51000424 */  addiu      $a0, $zero, 0x51
    /* 21C44 80113844 2000BFAF */  sw         $ra, 0x20($sp)
    /* 21C48 80113848 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 21C4C 8011384C 1800B2AF */  sw         $s2, 0x18($sp)
    /* 21C50 80113850 1400B1AF */  sw         $s1, 0x14($sp)
    /* 21C54 80113854 53D9030C */  jal        func_800F654C
    /* 21C58 80113858 1000B0AF */   sw        $s0, 0x10($sp)
    /* 21C5C 8011385C 01F6030C */  jal        func_800FD804
    /* 21C60 80113860 1A80133C */   lui       $s3, %hi(D_80198C5C)
    /* 21C64 80113864 53D9030C */  jal        func_800F654C
    /* 21C68 80113868 60000424 */   addiu     $a0, $zero, 0x60
    /* 21C6C 8011386C 93E0030C */  jal        func_800F824C
    /* 21C70 80113870 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 21C74 80113874 EEE3030C */  jal        func_800F8FB8
    /* 21C78 80113878 79000424 */   addiu     $a0, $zero, 0x79
    /* 21C7C 8011387C EEE3030C */  jal        func_800F8FB8
    /* 21C80 80113880 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 21C84 80113884 1A80113C */  lui        $s1, %hi(D_80198C64)
    /* 21C88 80113888 1A80123C */  lui        $s2, %hi(D_80198C74)
  .L8011388C:
    /* 21C8C 8011388C ECF9030C */  jal        func_800FE7B0
    /* 21C90 80113890 00000000 */   nop
    /* 21C94 80113894 8CD9030C */  jal        func_800F6630
    /* 21C98 80113898 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 21C9C 8011389C 92D0030C */  jal        func_800F4248
    /* 21CA0 801138A0 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 21CA4 801138A4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 21CA8 801138A8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 21CAC 801138AC 00000000 */  nop
    /* 21CB0 801138B0 00006290 */  lbu        $v0, 0x0($v1)
    /* 21CB4 801138B4 00000000 */  nop
    /* 21CB8 801138B8 82100200 */  srl        $v0, $v0, 2
    /* 21CBC 801138BC 000062A0 */  sb         $v0, 0x0($v1)
    /* 21CC0 801138C0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 21CC4 801138C4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 21CC8 801138C8 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 21CCC 801138CC 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 21CD0 801138D0 00008294 */  lhu        $v0, 0x0($a0)
    /* 21CD4 801138D4 83000424 */  addiu      $a0, $zero, 0x83
    /* 21CD8 801138D8 8CD9030C */  jal        func_800F6630
    /* 21CDC 801138DC 000062A4 */   sh        $v0, 0x0($v1)
    /* 21CE0 801138E0 92D0030C */  jal        func_800F4248
    /* 21CE4 801138E4 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 21CE8 801138E8 5C8C6426 */  addiu      $a0, $s3, %lo(D_80198C5C)
    /* 21CEC 801138EC 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 21CF0 801138F0 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 21CF4 801138F4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 21CF8 801138F8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 21CFC 801138FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 21D00 80113900 0000A290 */  lbu        $v0, 0x0($a1)
    /* 21D04 80113904 21186400 */  addu       $v1, $v1, $a0
    /* 21D08 80113908 00006490 */  lbu        $a0, 0x0($v1)
    /* 21D0C 8011390C 00000000 */  nop
    /* 21D10 80113910 25104400 */  or         $v0, $v0, $a0
    /* 21D14 80113914 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 21D18 80113918 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 21D1C 8011391C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 21D20 80113920 00000000 */  nop
    /* 21D24 80113924 00006490 */  lbu        $a0, 0x0($v1)
    /* 21D28 80113928 A4FA050C */  jal        func_8017EA90
    /* 21D2C 8011392C 00000000 */   nop
    /* 21D30 80113930 8CD9030C */  jal        func_800F6630
    /* 21D34 80113934 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 21D38 80113938 92D0030C */  jal        func_800F4248
    /* 21D3C 8011393C 0F000424 */   addiu     $a0, $zero, 0xF
    /* 21D40 80113940 48D0030C */  jal        func_800F4120
    /* 21D44 80113944 02020424 */   addiu     $a0, $zero, 0x202
    /* 21D48 80113948 03004014 */  bnez       $v0, .L80113958
    /* 21D4C 8011394C 00000000 */   nop
    /* 21D50 80113950 AFD8030C */  jal        func_800F62BC
    /* 21D54 80113954 79000424 */   addiu     $a0, $zero, 0x79
  .L80113958:
    /* 21D58 80113958 5B50040C */  jal        func_8011416C
    /* 21D5C 8011395C 00000000 */   nop
    /* 21D60 80113960 EEE3030C */  jal        func_800F8FB8
    /* 21D64 80113964 20000424 */   addiu     $a0, $zero, 0x20
  .L80113968:
    /* 21D68 80113968 8CD9030C */  jal        func_800F6630
    /* 21D6C 8011396C 20000424 */   addiu     $a0, $zero, 0x20
    /* 21D70 80113970 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 21D74 80113974 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 21D78 80113978 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 21D7C 8011397C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 21D80 80113980 00006294 */  lhu        $v0, 0x0($v1)
    /* 21D84 80113984 00000000 */  nop
    /* 21D88 80113988 000082A4 */  sh         $v0, 0x0($a0)
    /* 21D8C 8011398C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 21D90 80113990 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 21D94 80113994 648C3026 */  addiu      $s0, $s1, %lo(D_80198C64)
    /* 21D98 80113998 00006294 */  lhu        $v0, 0x0($v1)
    /* 21D9C 8011399C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 21DA0 801139A0 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 21DA4 801139A4 21105000 */  addu       $v0, $v0, $s0
    /* 21DA8 801139A8 00004390 */  lbu        $v1, 0x0($v0)
    /* 21DAC 801139AC 04D5030C */  jal        func_800F5410
    /* 21DB0 801139B0 000083A0 */   sb        $v1, 0x0($a0)
    /* 21DB4 801139B4 C1CE030C */  jal        func_800F3B04
    /* 21DB8 801139B8 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 21DBC 801139BC CECF030C */  jal        func_800F3F38
    /* 21DC0 801139C0 21204000 */   addu      $a0, $v0, $zero
    /* 21DC4 801139C4 93E0030C */  jal        func_800F824C
    /* 21DC8 801139C8 22000424 */   addiu     $a0, $zero, 0x22
    /* 21DCC 801139CC 50D4030C */  jal        func_800F5140
    /* 21DD0 801139D0 00000000 */   nop
    /* 21DD4 801139D4 04D5030C */  jal        func_800F5410
    /* 21DD8 801139D8 00000000 */   nop
    /* 21DDC 801139DC 0FCF030C */  jal        func_800F3C3C
    /* 21DE0 801139E0 22000424 */   addiu     $a0, $zero, 0x22
    /* 21DE4 801139E4 CECF030C */  jal        func_800F3F38
    /* 21DE8 801139E8 21204000 */   addu      $a0, $v0, $zero
    /* 21DEC 801139EC 2950040C */  jal        func_801140A4
    /* 21DF0 801139F0 00000000 */   nop
    /* 21DF4 801139F4 014F040C */  jal        func_80113C04
    /* 21DF8 801139F8 00000000 */   nop
    /* 21DFC 801139FC 8CD9030C */  jal        func_800F6630
    /* 21E00 80113A00 20000424 */   addiu     $a0, $zero, 0x20
    /* 21E04 80113A04 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 21E08 80113A08 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 21E0C 80113A0C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 21E10 80113A10 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 21E14 80113A14 00006294 */  lhu        $v0, 0x0($v1)
    /* 21E18 80113A18 00000000 */  nop
    /* 21E1C 80113A1C 000082A4 */  sh         $v0, 0x0($a0)
    /* 21E20 80113A20 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 21E24 80113A24 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 21E28 80113A28 00000000 */  nop
    /* 21E2C 80113A2C 00006294 */  lhu        $v0, 0x0($v1)
    /* 21E30 80113A30 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 21E34 80113A34 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 21E38 80113A38 21105000 */  addu       $v0, $v0, $s0
    /* 21E3C 80113A3C 00004390 */  lbu        $v1, 0x0($v0)
    /* 21E40 80113A40 04D5030C */  jal        func_800F5410
    /* 21E44 80113A44 000083A0 */   sb        $v1, 0x0($a0)
    /* 21E48 80113A48 02D0030C */  jal        func_800F4008
    /* 21E4C 80113A4C 40000424 */   addiu     $a0, $zero, 0x40
    /* 21E50 80113A50 04D5030C */  jal        func_800F5410
    /* 21E54 80113A54 00000000 */   nop
    /* 21E58 80113A58 C1CE030C */  jal        func_800F3B04
    /* 21E5C 80113A5C FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 21E60 80113A60 CECF030C */  jal        func_800F3F38
    /* 21E64 80113A64 21204000 */   addu      $a0, $v0, $zero
    /* 21E68 80113A68 50D4030C */  jal        func_800F5140
    /* 21E6C 80113A6C 00000000 */   nop
    /* 21E70 80113A70 2950040C */  jal        func_801140A4
    /* 21E74 80113A74 00000000 */   nop
    /* 21E78 80113A78 154F040C */  jal        func_80113C54
    /* 21E7C 80113A7C 00000000 */   nop
    /* 21E80 80113A80 8CD9030C */  jal        func_800F6630
    /* 21E84 80113A84 20000424 */   addiu     $a0, $zero, 0x20
    /* 21E88 80113A88 92D0030C */  jal        func_800F4248
    /* 21E8C 80113A8C 03000424 */   addiu     $a0, $zero, 0x3
    /* 21E90 80113A90 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 21E94 80113A94 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 21E98 80113A98 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 21E9C 80113A9C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 21EA0 80113AA0 00006294 */  lhu        $v0, 0x0($v1)
    /* 21EA4 80113AA4 00000000 */  nop
    /* 21EA8 80113AA8 000082A4 */  sh         $v0, 0x0($a0)
    /* 21EAC 80113AAC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 21EB0 80113AB0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 21EB4 80113AB4 748C4426 */  addiu      $a0, $s2, %lo(D_80198C74)
    /* 21EB8 80113AB8 00006294 */  lhu        $v0, 0x0($v1)
    /* 21EBC 80113ABC 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 21EC0 80113AC0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 21EC4 80113AC4 21104400 */  addu       $v0, $v0, $a0
    /* 21EC8 80113AC8 00004390 */  lbu        $v1, 0x0($v0)
    /* 21ECC 80113ACC 02030424 */  addiu      $a0, $zero, 0x302
    /* 21ED0 80113AD0 58E2030C */  jal        func_800F8960
    /* 21ED4 80113AD4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 21ED8 80113AD8 5DD5030C */  jal        func_800F5574
    /* 21EDC 80113ADC EC000424 */   addiu     $a0, $zero, 0xEC
    /* 21EE0 80113AE0 F5D4030C */  jal        func_800F53D4
    /* 21EE4 80113AE4 00000000 */   nop
    /* 21EE8 80113AE8 0B004010 */  beqz       $v0, .L80113B18
    /* 21EEC 80113AEC 00000000 */   nop
    /* 21EF0 80113AF0 8CD9030C */  jal        func_800F6630
    /* 21EF4 80113AF4 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 21EF8 80113AF8 92D0030C */  jal        func_800F4248
    /* 21EFC 80113AFC 04000424 */   addiu     $a0, $zero, 0x4
    /* 21F00 80113B00 48D0030C */  jal        func_800F4120
    /* 21F04 80113B04 02000424 */   addiu     $a0, $zero, 0x2
    /* 21F08 80113B08 03004014 */  bnez       $v0, .L80113B18
    /* 21F0C 80113B0C 00000000 */   nop
    /* 21F10 80113B10 53D9030C */  jal        func_800F654C
    /* 21F14 80113B14 79000424 */   addiu     $a0, $zero, 0x79
  .L80113B18:
    /* 21F18 80113B18 53D9030C */  jal        func_800F654C
    /* 21F1C 80113B1C 39000424 */   addiu     $a0, $zero, 0x39
    /* 21F20 80113B20 58E2030C */  jal        func_800F8960
    /* 21F24 80113B24 03030424 */   addiu     $a0, $zero, 0x303
    /* 21F28 80113B28 AFD8030C */  jal        func_800F62BC
    /* 21F2C 80113B2C 20000424 */   addiu     $a0, $zero, 0x20
    /* 21F30 80113B30 8CD9030C */  jal        func_800F6630
    /* 21F34 80113B34 20000424 */   addiu     $a0, $zero, 0x20
    /* 21F38 80113B38 5DD5030C */  jal        func_800F5574
    /* 21F3C 80113B3C 10000424 */   addiu     $a0, $zero, 0x10
    /* 21F40 80113B40 F5D4030C */  jal        func_800F53D4
    /* 21F44 80113B44 00000000 */   nop
    /* 21F48 80113B48 87FF4010 */  beqz       $v0, .L80113968
    /* 21F4C 80113B4C 00000000 */   nop
    /* 21F50 80113B50 90D8030C */  jal        func_800F6240
    /* 21F54 80113B54 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 21F58 80113B58 8CD9030C */  jal        func_800F6630
    /* 21F5C 80113B5C 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 21F60 80113B60 92D0030C */  jal        func_800F4248
    /* 21F64 80113B64 03000424 */   addiu     $a0, $zero, 0x3
    /* 21F68 80113B68 48D0030C */  jal        func_800F4120
    /* 21F6C 80113B6C 02020424 */   addiu     $a0, $zero, 0x202
    /* 21F70 80113B70 0F004014 */  bnez       $v0, .L80113BB0
    /* 21F74 80113B74 00000000 */   nop
    /* 21F78 80113B78 8CD9030C */  jal        func_800F6630
    /* 21F7C 80113B7C 79000424 */   addiu     $a0, $zero, 0x79
    /* 21F80 80113B80 5DD5030C */  jal        func_800F5574
    /* 21F84 80113B84 12000424 */   addiu     $a0, $zero, 0x12
    /* 21F88 80113B88 F0D4030C */  jal        func_800F53C0
    /* 21F8C 80113B8C 00000000 */   nop
    /* 21F90 80113B90 05004014 */  bnez       $v0, .L80113BA8
    /* 21F94 80113B94 00000000 */   nop
    /* 21F98 80113B98 68D7030C */  jal        func_800F5DA0
    /* 21F9C 80113B9C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 21FA0 80113BA0 EC4E0408 */  j          .L80113BB0
    /* 21FA4 80113BA4 00000000 */   nop
  .L80113BA8:
    /* 21FA8 80113BA8 AFD8030C */  jal        func_800F62BC
    /* 21FAC 80113BAC AD000424 */   addiu     $a0, $zero, 0xAD
  .L80113BB0:
    /* 21FB0 80113BB0 8CD9030C */  jal        func_800F6630
    /* 21FB4 80113BB4 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 21FB8 80113BB8 5DD5030C */  jal        func_800F5574
    /* 21FBC 80113BBC 62000424 */   addiu     $a0, $zero, 0x62
    /* 21FC0 80113BC0 F5D4030C */  jal        func_800F53D4
    /* 21FC4 80113BC4 00000000 */   nop
    /* 21FC8 80113BC8 30FF4010 */  beqz       $v0, .L8011388C
    /* 21FCC 80113BCC 00000000 */   nop
    /* 21FD0 80113BD0 53D9030C */  jal        func_800F654C
    /* 21FD4 80113BD4 21200000 */   addu      $a0, $zero, $zero
    /* 21FD8 80113BD8 01F6030C */  jal        func_800FD804
    /* 21FDC 80113BDC 00000000 */   nop
    /* 21FE0 80113BE0 977A040C */  jal        func_8011EA5C
    /* 21FE4 80113BE4 00000000 */   nop
    /* 21FE8 80113BE8 2000BF8F */  lw         $ra, 0x20($sp)
    /* 21FEC 80113BEC 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 21FF0 80113BF0 1800B28F */  lw         $s2, 0x18($sp)
    /* 21FF4 80113BF4 1400B18F */  lw         $s1, 0x14($sp)
    /* 21FF8 80113BF8 1000B08F */  lw         $s0, 0x10($sp)
    /* 21FFC 80113BFC 0800E003 */  jr         $ra
    /* 22000 80113C00 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8011383C
