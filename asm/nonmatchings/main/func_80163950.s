nonmatching func_80163950, 0x238

glabel func_80163950
    /* 71D50 80163950 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71D54 80163954 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71D58 80163958 F5D4030C */  jal        func_800F53D4
    /* 71D5C 8016395C 00000000 */   nop
    /* 71D60 80163960 85004014 */  bnez       $v0, .L80163B78
    /* 71D64 80163964 00000000 */   nop
    /* 71D68 80163968 5DD5030C */  jal        func_800F5574
    /* 71D6C 8016396C DE000424 */   addiu     $a0, $zero, 0xDE
    /* 71D70 80163970 F0D4030C */  jal        func_800F53C0
    /* 71D74 80163974 00000000 */   nop
    /* 71D78 80163978 7F004014 */  bnez       $v0, .L80163B78
    /* 71D7C 8016397C 00000000 */   nop
    /* 71D80 80163980 5DD5030C */  jal        func_800F5574
    /* 71D84 80163984 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 71D88 80163988 F0D4030C */  jal        func_800F53C0
    /* 71D8C 8016398C 00000000 */   nop
    /* 71D90 80163990 4F004014 */  bnez       $v0, .L80163AD0
    /* 71D94 80163994 00000000 */   nop
    /* 71D98 80163998 5DD5030C */  jal        func_800F5574
    /* 71D9C 8016399C 6D000424 */   addiu     $a0, $zero, 0x6D
    /* 71DA0 801639A0 F0D4030C */  jal        func_800F53C0
    /* 71DA4 801639A4 00000000 */   nop
    /* 71DA8 801639A8 73004014 */  bnez       $v0, .L80163B78
    /* 71DAC 801639AC 00000000 */   nop
    /* 71DB0 801639B0 5DD5030C */  jal        func_800F5574
    /* 71DB4 801639B4 61000424 */   addiu     $a0, $zero, 0x61
    /* 71DB8 801639B8 F0D4030C */  jal        func_800F53C0
    /* 71DBC 801639BC 00000000 */   nop
    /* 71DC0 801639C0 07004010 */  beqz       $v0, .L801639E0
    /* 71DC4 801639C4 00000000 */   nop
    /* 71DC8 801639C8 53D9030C */  jal        func_800F654C
    /* 71DCC 801639CC 21200000 */   addu      $a0, $zero, $zero
    /* 71DD0 801639D0 0DD9030C */  jal        func_800F6434
    /* 71DD4 801639D4 02000424 */   addiu     $a0, $zero, 0x2
    /* 71DD8 801639D8 65004014 */  bnez       $v0, .L80163B70
    /* 71DDC 801639DC 00000000 */   nop
  .L801639E0:
    /* 71DE0 801639E0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 71DE4 801639E4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 71DE8 801639E8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 71DEC 801639EC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 71DF0 801639F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 71DF4 801639F4 E5000424 */  addiu      $a0, $zero, 0xE5
    /* 71DF8 801639F8 5BE3030C */  jal        func_800F8D6C
    /* 71DFC 801639FC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 71E00 80163A00 77DC030C */  jal        func_800F71DC
    /* 71E04 80163A04 00910434 */   ori       $a0, $zero, 0x9100
    /* 71E08 80163A08 5BE3030C */  jal        func_800F8D6C
    /* 71E0C 80163A0C 80000424 */   addiu     $a0, $zero, 0x80
    /* 71E10 80163A10 53D9030C */  jal        func_800F654C
    /* 71E14 80163A14 0F000424 */   addiu     $a0, $zero, 0xF
    /* 71E18 80163A18 93E0030C */  jal        func_800F824C
    /* 71E1C 80163A1C 82000424 */   addiu     $a0, $zero, 0x82
    /* 71E20 80163A20 53D9030C */  jal        func_800F654C
    /* 71E24 80163A24 08000424 */   addiu     $a0, $zero, 0x8
    /* 71E28 80163A28 BE49050C */  jal        func_801526F8
    /* 71E2C 80163A2C 00000000 */   nop
    /* 71E30 80163A30 80E4030C */  jal        func_800F9200
    /* 71E34 80163A34 00000000 */   nop
    /* 71E38 80163A38 59D9030C */  jal        func_800F6564
    /* 71E3C 80163A3C 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 71E40 80163A40 F14A050C */  jal        func_80152BC4
    /* 71E44 80163A44 00000000 */   nop
    /* 71E48 80163A48 92D0030C */  jal        func_800F4248
    /* 71E4C 80163A4C 08000424 */   addiu     $a0, $zero, 0x8
    /* 71E50 80163A50 93E0030C */  jal        func_800F824C
    /* 71E54 80163A54 C7000424 */   addiu     $a0, $zero, 0xC7
    /* 71E58 80163A58 F7E4030C */  jal        func_800F93DC
    /* 71E5C 80163A5C 00000000 */   nop
    /* 71E60 80163A60 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 71E64 80163A64 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 71E68 80163A68 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 71E6C 80163A6C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 71E70 80163A70 00004394 */  lhu        $v1, 0x0($v0)
    /* 71E74 80163A74 E5000424 */  addiu      $a0, $zero, 0xE5
    /* 71E78 80163A78 5BE3030C */  jal        func_800F8D6C
    /* 71E7C 80163A7C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 71E80 80163A80 77DC030C */  jal        func_800F71DC
    /* 71E84 80163A84 A0970434 */   ori       $a0, $zero, 0x97A0
    /* 71E88 80163A88 5BE3030C */  jal        func_800F8D6C
    /* 71E8C 80163A8C 80000424 */   addiu     $a0, $zero, 0x80
    /* 71E90 80163A90 53D9030C */  jal        func_800F654C
    /* 71E94 80163A94 0F000424 */   addiu     $a0, $zero, 0xF
    /* 71E98 80163A98 93E0030C */  jal        func_800F824C
    /* 71E9C 80163A9C 82000424 */   addiu     $a0, $zero, 0x82
    /* 71EA0 80163AA0 53D9030C */  jal        func_800F654C
    /* 71EA4 80163AA4 06000424 */   addiu     $a0, $zero, 0x6
    /* 71EA8 80163AA8 BE49050C */  jal        func_801526F8
    /* 71EAC 80163AAC 00000000 */   nop
    /* 71EB0 80163AB0 9CDC030C */  jal        func_800F7270
    /* 71EB4 80163AB4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 71EB8 80163AB8 59D9030C */  jal        func_800F6564
    /* 71EBC 80163ABC 9F280424 */   addiu     $a0, $zero, 0x289F
    /* 71EC0 80163AC0 DAE1030C */  jal        func_800F8768
    /* 71EC4 80163AC4 1D320424 */   addiu     $a0, $zero, 0x321D
    /* 71EC8 80163AC8 D28E0508 */  j          .L80163B48
    /* 71ECC 80163ACC 00000000 */   nop
  .L80163AD0:
    /* 71ED0 80163AD0 20D5030C */  jal        func_800F5480
    /* 71ED4 80163AD4 00000000 */   nop
    /* 71ED8 80163AD8 16E0030C */  jal        func_800F8058
    /* 71EDC 80163ADC B0000424 */   addiu     $a0, $zero, 0xB0
    /* 71EE0 80163AE0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 71EE4 80163AE4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 71EE8 80163AE8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 71EEC 80163AEC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 71EF0 80163AF0 00004394 */  lhu        $v1, 0x0($v0)
    /* 71EF4 80163AF4 E5000424 */  addiu      $a0, $zero, 0xE5
    /* 71EF8 80163AF8 5BE3030C */  jal        func_800F8D6C
    /* 71EFC 80163AFC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 71F00 80163B00 77DC030C */  jal        func_800F71DC
    /* 71F04 80163B04 80960434 */   ori       $a0, $zero, 0x9680
    /* 71F08 80163B08 5BE3030C */  jal        func_800F8D6C
    /* 71F0C 80163B0C 80000424 */   addiu     $a0, $zero, 0x80
    /* 71F10 80163B10 53D9030C */  jal        func_800F654C
    /* 71F14 80163B14 0F000424 */   addiu     $a0, $zero, 0xF
    /* 71F18 80163B18 93E0030C */  jal        func_800F824C
    /* 71F1C 80163B1C 82000424 */   addiu     $a0, $zero, 0x82
    /* 71F20 80163B20 53D9030C */  jal        func_800F654C
    /* 71F24 80163B24 06000424 */   addiu     $a0, $zero, 0x6
    /* 71F28 80163B28 BE49050C */  jal        func_801526F8
    /* 71F2C 80163B2C 00000000 */   nop
    /* 71F30 80163B30 9CDC030C */  jal        func_800F7270
    /* 71F34 80163B34 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 71F38 80163B38 59D9030C */  jal        func_800F6564
    /* 71F3C 80163B3C 9F280424 */   addiu     $a0, $zero, 0x289F
    /* 71F40 80163B40 DAE1030C */  jal        func_800F8768
    /* 71F44 80163B44 1D320424 */   addiu     $a0, $zero, 0x321D
  .L80163B48:
    /* 71F48 80163B48 59D9030C */  jal        func_800F6564
    /* 71F4C 80163B4C 9C280424 */   addiu     $a0, $zero, 0x289C
    /* 71F50 80163B50 92D0030C */  jal        func_800F4248
    /* 71F54 80163B54 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 71F58 80163B58 0FCF030C */  jal        func_800F3C3C
    /* 71F5C 80163B5C C7000424 */   addiu     $a0, $zero, 0xC7
    /* 71F60 80163B60 31DE030C */  jal        func_800F78C4
    /* 71F64 80163B64 21204000 */   addu      $a0, $v0, $zero
    /* 71F68 80163B68 19DE030C */  jal        func_800F7864
    /* 71F6C 80163B6C 00000000 */   nop
  .L80163B70:
    /* 71F70 80163B70 DAE1030C */  jal        func_800F8768
    /* 71F74 80163B74 1A320424 */   addiu     $a0, $zero, 0x321A
  .L80163B78:
    /* 71F78 80163B78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 71F7C 80163B7C 00000000 */  nop
    /* 71F80 80163B80 0800E003 */  jr         $ra
    /* 71F84 80163B84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80163950
