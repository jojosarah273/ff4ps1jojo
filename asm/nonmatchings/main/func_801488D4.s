nonmatching func_801488D4, 0x30C

glabel func_801488D4
    /* 56CD4 801488D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 56CD8 801488D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 56CDC 801488DC 59D9030C */  jal        func_800F6564
    /* 56CE0 801488E0 C1F00434 */   ori       $a0, $zero, 0xF0C1
    /* 56CE4 801488E4 0DD9030C */  jal        func_800F6434
    /* 56CE8 801488E8 02020424 */   addiu     $a0, $zero, 0x202
    /* 56CEC 801488EC B8004010 */  beqz       $v0, .L80148BD0
    /* 56CF0 801488F0 00000000 */   nop
    /* 56CF4 801488F4 DDE3030C */  jal        func_800F8F74
    /* 56CF8 801488F8 C1F00434 */   ori       $a0, $zero, 0xF0C1
    /* 56CFC 801488FC 59D9030C */  jal        func_800F6564
    /* 56D00 80148900 C7F00434 */   ori       $a0, $zero, 0xF0C7
    /* 56D04 80148904 0DD9030C */  jal        func_800F6434
    /* 56D08 80148908 02020424 */   addiu     $a0, $zero, 0x202
    /* 56D0C 8014890C 05004014 */  bnez       $v0, .L80148924
    /* 56D10 80148910 00000000 */   nop
    /* 56D14 80148914 4123050C */  jal        func_80148D04
    /* 56D18 80148918 00000000 */   nop
    /* 56D1C 8014891C 5B220508 */  j          .L8014896C
    /* 56D20 80148920 00000000 */   nop
  .L80148924:
    /* 56D24 80148924 5DD5030C */  jal        func_800F5574
    /* 56D28 80148928 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 56D2C 8014892C F5D4030C */  jal        func_800F53D4
    /* 56D30 80148930 00000000 */   nop
    /* 56D34 80148934 0D004014 */  bnez       $v0, .L8014896C
    /* 56D38 80148938 00000000 */   nop
    /* 56D3C 8014893C 5DD5030C */  jal        func_800F5574
    /* 56D40 80148940 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 56D44 80148944 F5D4030C */  jal        func_800F53D4
    /* 56D48 80148948 00000000 */   nop
    /* 56D4C 8014894C 05004014 */  bnez       $v0, .L80148964
    /* 56D50 80148950 00000000 */   nop
    /* 56D54 80148954 2B23050C */  jal        func_80148CAC
    /* 56D58 80148958 00000000 */   nop
    /* 56D5C 8014895C 5B220508 */  j          .L8014896C
    /* 56D60 80148960 00000000 */   nop
  .L80148964:
    /* 56D64 80148964 F822050C */  jal        func_80148BE0
    /* 56D68 80148968 00000000 */   nop
  .L8014896C:
    /* 56D6C 8014896C 59D9030C */  jal        func_800F6564
    /* 56D70 80148970 C3F00434 */   ori       $a0, $zero, 0xF0C3
    /* 56D74 80148974 50D4030C */  jal        func_800F5140
    /* 56D78 80148978 00000000 */   nop
    /* 56D7C 8014897C 0D00043C */  lui        $a0, (0xDFA89 >> 16)
    /* 56D80 80148980 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 56D84 80148984 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 56D88 80148988 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 56D8C 8014898C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 56D90 80148990 00004394 */  lhu        $v1, 0x0($v0)
    /* 56D94 80148994 89FA8434 */  ori        $a0, $a0, (0xDFA89 & 0xFFFF)
    /* 56D98 80148998 1ADB030C */  jal        func_800F6C68
    /* 56D9C 8014899C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 56DA0 801489A0 93E0030C */  jal        func_800F824C
    /* 56DA4 801489A4 14000424 */   addiu     $a0, $zero, 0x14
    /* 56DA8 801489A8 0D00043C */  lui        $a0, (0xDFA8A >> 16)
    /* 56DAC 801489AC 1ADB030C */  jal        func_800F6C68
    /* 56DB0 801489B0 8AFA8434 */   ori       $a0, $a0, (0xDFA8A & 0xFFFF)
    /* 56DB4 801489B4 93E0030C */  jal        func_800F824C
    /* 56DB8 801489B8 15000424 */   addiu     $a0, $zero, 0x15
    /* 56DBC 801489BC 53D9030C */  jal        func_800F654C
    /* 56DC0 801489C0 0D000424 */   addiu     $a0, $zero, 0xD
    /* 56DC4 801489C4 93E0030C */  jal        func_800F824C
    /* 56DC8 801489C8 16000424 */   addiu     $a0, $zero, 0x16
    /* 56DCC 801489CC 59D9030C */  jal        func_800F6564
    /* 56DD0 801489D0 C4F00434 */   ori       $a0, $zero, 0xF0C4
    /* 56DD4 801489D4 20D5030C */  jal        func_800F5480
    /* 56DD8 801489D8 00000000 */   nop
    /* 56DDC 801489DC 16E0030C */  jal        func_800F8058
    /* 56DE0 801489E0 18000424 */   addiu     $a0, $zero, 0x18
    /* 56DE4 801489E4 93E0030C */  jal        func_800F824C
    /* 56DE8 801489E8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 56DEC 801489EC 59D9030C */  jal        func_800F6564
    /* 56DF0 801489F0 C5F00434 */   ori       $a0, $zero, 0xF0C5
    /* 56DF4 801489F4 20D5030C */  jal        func_800F5480
    /* 56DF8 801489F8 00000000 */   nop
    /* 56DFC 801489FC 16E0030C */  jal        func_800F8058
    /* 56E00 80148A00 18000424 */   addiu     $a0, $zero, 0x18
    /* 56E04 80148A04 93E0030C */  jal        func_800F824C
    /* 56E08 80148A08 10000424 */   addiu     $a0, $zero, 0x10
    /* 56E0C 80148A0C 59D9030C */  jal        func_800F6564
    /* 56E10 80148A10 C6F00434 */   ori       $a0, $zero, 0xF0C6
    /* 56E14 80148A14 93E0030C */  jal        func_800F824C
    /* 56E18 80148A18 12000424 */   addiu     $a0, $zero, 0x12
    /* 56E1C 80148A1C 59D9030C */  jal        func_800F6564
    /* 56E20 80148A20 C2F00434 */   ori       $a0, $zero, 0xF0C2
    /* 56E24 80148A24 91E5030C */  jal        func_800F9644
    /* 56E28 80148A28 20000424 */   addiu     $a0, $zero, 0x20
    /* 56E2C 80148A2C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 56E30 80148A30 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 56E34 80148A34 00000000 */  nop
    /* 56E38 80148A38 00006294 */  lhu        $v0, 0x0($v1)
    /* 56E3C 80148A3C 00000000 */  nop
    /* 56E40 80148A40 80100200 */  sll        $v0, $v0, 2
    /* 56E44 80148A44 000062A4 */  sh         $v0, 0x0($v1)
    /* 56E48 80148A48 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 56E4C 80148A4C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 56E50 80148A50 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 56E54 80148A54 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 56E58 80148A58 00008294 */  lhu        $v0, 0x0($a0)
    /* 56E5C 80148A5C C7E5030C */  jal        func_800F971C
    /* 56E60 80148A60 000062A4 */   sh        $v0, 0x0($v1)
    /* 56E64 80148A64 98E5030C */  jal        func_800F9660
    /* 56E68 80148A68 20000424 */   addiu     $a0, $zero, 0x20
    /* 56E6C 80148A6C 40DD030C */  jal        func_800F7500
    /* 56E70 80148A70 21200000 */   addu      $a0, $zero, $zero
  .L80148A74:
    /* 56E74 80148A74 FFD9030C */  jal        func_800F67FC
    /* 56E78 80148A78 14000424 */   addiu     $a0, $zero, 0x14
    /* 56E7C 80148A7C 5DD5030C */  jal        func_800F5574
    /* 56E80 80148A80 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 56E84 80148A84 F5D4030C */  jal        func_800F53D4
    /* 56E88 80148A88 00000000 */   nop
    /* 56E8C 80148A8C 50004014 */  bnez       $v0, .L80148BD0
    /* 56E90 80148A90 00000000 */   nop
    /* 56E94 80148A94 80E4030C */  jal        func_800F9200
    /* 56E98 80148A98 00000000 */   nop
    /* 56E9C 80148A9C 92D0030C */  jal        func_800F4248
    /* 56EA0 80148AA0 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 56EA4 80148AA4 19DE030C */  jal        func_800F7864
    /* 56EA8 80148AA8 00000000 */   nop
    /* 56EAC 80148AAC 04D5030C */  jal        func_800F5410
    /* 56EB0 80148AB0 00000000 */   nop
    /* 56EB4 80148AB4 0FCF030C */  jal        func_800F3C3C
    /* 56EB8 80148AB8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 56EBC 80148ABC CECF030C */  jal        func_800F3F38
    /* 56EC0 80148AC0 21204000 */   addu      $a0, $v0, $zero
    /* 56EC4 80148AC4 6251020C */  jal        func_80094588
    /* 56EC8 80148AC8 00000000 */   nop
    /* 56ECC 80148ACC DAE1030C */  jal        func_800F8768
    /* 56ED0 80148AD0 00030424 */   addiu     $a0, $zero, 0x300
    /* 56ED4 80148AD4 D9D8030C */  jal        func_800F6364
    /* 56ED8 80148AD8 00000000 */   nop
    /* 56EDC 80148ADC F7E4030C */  jal        func_800F93DC
    /* 56EE0 80148AE0 00000000 */   nop
    /* 56EE4 80148AE4 92D0030C */  jal        func_800F4248
    /* 56EE8 80148AE8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 56EEC 80148AEC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 56EF0 80148AF0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 56EF4 80148AF4 00000000 */  nop
    /* 56EF8 80148AF8 00006290 */  lbu        $v0, 0x0($v1)
    /* 56EFC 80148AFC 00000000 */  nop
    /* 56F00 80148B00 C0100200 */  sll        $v0, $v0, 3
    /* 56F04 80148B04 04D5030C */  jal        func_800F5410
    /* 56F08 80148B08 000062A0 */   sb        $v0, 0x0($v1)
    /* 56F0C 80148B0C 0FCF030C */  jal        func_800F3C3C
    /* 56F10 80148B10 10000424 */   addiu     $a0, $zero, 0x10
    /* 56F14 80148B14 CECF030C */  jal        func_800F3F38
    /* 56F18 80148B18 21204000 */   addu      $a0, $v0, $zero
    /* 56F1C 80148B1C DAE1030C */  jal        func_800F8768
    /* 56F20 80148B20 00030424 */   addiu     $a0, $zero, 0x300
    /* 56F24 80148B24 D9D8030C */  jal        func_800F6364
    /* 56F28 80148B28 00000000 */   nop
    /* 56F2C 80148B2C EFD8030C */  jal        func_800F63BC
    /* 56F30 80148B30 00000000 */   nop
    /* 56F34 80148B34 FFD9030C */  jal        func_800F67FC
    /* 56F38 80148B38 14000424 */   addiu     $a0, $zero, 0x14
    /* 56F3C 80148B3C 04D5030C */  jal        func_800F5410
    /* 56F40 80148B40 00000000 */   nop
    /* 56F44 80148B44 0FCF030C */  jal        func_800F3C3C
    /* 56F48 80148B48 12000424 */   addiu     $a0, $zero, 0x12
    /* 56F4C 80148B4C CECF030C */  jal        func_800F3F38
    /* 56F50 80148B50 21204000 */   addu      $a0, $v0, $zero
    /* 56F54 80148B54 DAE1030C */  jal        func_800F8768
    /* 56F58 80148B58 00030424 */   addiu     $a0, $zero, 0x300
    /* 56F5C 80148B5C D9D8030C */  jal        func_800F6364
    /* 56F60 80148B60 00000000 */   nop
    /* 56F64 80148B64 EFD8030C */  jal        func_800F63BC
    /* 56F68 80148B68 00000000 */   nop
    /* 56F6C 80148B6C 59D9030C */  jal        func_800F6564
    /* 56F70 80148B70 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 56F74 80148B74 0DD9030C */  jal        func_800F6434
    /* 56F78 80148B78 02000424 */   addiu     $a0, $zero, 0x2
    /* 56F7C 80148B7C 0B004014 */  bnez       $v0, .L80148BAC
    /* 56F80 80148B80 00000000 */   nop
    /* 56F84 80148B84 59D9030C */  jal        func_800F6564
    /* 56F88 80148B88 C8F00434 */   ori       $a0, $zero, 0xF0C8
    /* 56F8C 80148B8C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 56F90 80148B90 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 56F94 80148B94 00000000 */  nop
    /* 56F98 80148B98 00006290 */  lbu        $v0, 0x0($v1)
    /* 56F9C 80148B9C 00030424 */  addiu      $a0, $zero, 0x300
    /* 56FA0 80148BA0 40004238 */  xori       $v0, $v0, 0x40
    /* 56FA4 80148BA4 EE220508 */  j          .L80148BB8
    /* 56FA8 80148BA8 000062A0 */   sb        $v0, 0x0($v1)
  .L80148BAC:
    /* 56FAC 80148BAC 59D9030C */  jal        func_800F6564
    /* 56FB0 80148BB0 C8F00434 */   ori       $a0, $zero, 0xF0C8
    /* 56FB4 80148BB4 00030424 */  addiu      $a0, $zero, 0x300
  .L80148BB8:
    /* 56FB8 80148BB8 DAE1030C */  jal        func_800F8768
    /* 56FBC 80148BBC 00000000 */   nop
    /* 56FC0 80148BC0 D9D8030C */  jal        func_800F6364
    /* 56FC4 80148BC4 00000000 */   nop
    /* 56FC8 80148BC8 9D220508 */  j          .L80148A74
    /* 56FCC 80148BCC 00000000 */   nop
  .L80148BD0:
    /* 56FD0 80148BD0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 56FD4 80148BD4 00000000 */  nop
    /* 56FD8 80148BD8 0800E003 */  jr         $ra
    /* 56FDC 80148BDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801488D4
