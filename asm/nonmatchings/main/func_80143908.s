nonmatching func_80143908, 0x37C

glabel func_80143908
    /* 51D08 80143908 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 51D0C 8014390C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 51D10 80143910 9E14050C */  jal        func_80145278
    /* 51D14 80143914 00000000 */   nop
    /* 51D18 80143918 DEFB040C */  jal        func_8013EF78
    /* 51D1C 8014391C 00000000 */   nop
    /* 51D20 80143920 53D9030C */  jal        func_800F654C
    /* 51D24 80143924 08000424 */   addiu     $a0, $zero, 0x8
    /* 51D28 80143928 62E0030C */  jal        func_800F8188
    /* 51D2C 8014392C 26F30434 */   ori       $a0, $zero, 0xF326
    /* 51D30 80143930 1B23050C */  jal        func_80148C6C
    /* 51D34 80143934 00000000 */   nop
    /* 51D38 80143938 C7E5030C */  jal        func_800F971C
    /* 51D3C 8014393C 00000000 */   nop
    /* 51D40 80143940 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 51D44 80143944 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 51D48 80143948 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 51D4C 8014394C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 51D50 80143950 00004394 */  lhu        $v1, 0x0($v0)
    /* 51D54 80143954 21200000 */  addu       $a0, $zero, $zero
    /* 51D58 80143958 EEE3030C */  jal        func_800F8FB8
    /* 51D5C 8014395C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 51D60 80143960 EEE3030C */  jal        func_800F8FB8
    /* 51D64 80143964 02000424 */   addiu     $a0, $zero, 0x2
  .L80143968:
    /* 51D68 80143968 DADA030C */  jal        func_800F6B68
    /* 51D6C 8014396C 00190424 */   addiu     $a0, $zero, 0x1900
    /* 51D70 80143970 DAE1030C */  jal        func_800F8768
    /* 51D74 80143974 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 51D78 80143978 8CD9030C */  jal        func_800F6630
    /* 51D7C 8014397C 02000424 */   addiu     $a0, $zero, 0x2
    /* 51D80 80143980 DAE1030C */  jal        func_800F8768
    /* 51D84 80143984 2EEC0434 */   ori       $a0, $zero, 0xEC2E
    /* 51D88 80143988 04D5030C */  jal        func_800F5410
    /* 51D8C 8014398C 00000000 */   nop
    /* 51D90 80143990 02D0030C */  jal        func_800F4008
    /* 51D94 80143994 08000424 */   addiu     $a0, $zero, 0x8
    /* 51D98 80143998 93E0030C */  jal        func_800F824C
    /* 51D9C 8014399C 02000424 */   addiu     $a0, $zero, 0x2
    /* 51DA0 801439A0 5DD5030C */  jal        func_800F5574
    /* 51DA4 801439A4 88000424 */   addiu     $a0, $zero, 0x88
    /* 51DA8 801439A8 F5D4030C */  jal        func_800F53D4
    /* 51DAC 801439AC 00000000 */   nop
    /* 51DB0 801439B0 03004010 */  beqz       $v0, .L801439C0
    /* 51DB4 801439B4 00000000 */   nop
    /* 51DB8 801439B8 EEE3030C */  jal        func_800F8FB8
    /* 51DBC 801439BC 02000424 */   addiu     $a0, $zero, 0x2
  .L801439C0:
    /* 51DC0 801439C0 C7E5030C */  jal        func_800F971C
    /* 51DC4 801439C4 00000000 */   nop
    /* 51DC8 801439C8 DAE1030C */  jal        func_800F8768
    /* 51DCC 801439CC 76EC0434 */   ori       $a0, $zero, 0xEC76
    /* 51DD0 801439D0 DAE1030C */  jal        func_800F8768
    /* 51DD4 801439D4 06ED0434 */   ori       $a0, $zero, 0xED06
    /* 51DD8 801439D8 DADA030C */  jal        func_800F6B68
    /* 51DDC 801439DC 00190424 */   addiu     $a0, $zero, 0x1900
    /* 51DE0 801439E0 DAE1030C */  jal        func_800F8768
    /* 51DE4 801439E4 BEEC0434 */   ori       $a0, $zero, 0xECBE
    /* 51DE8 801439E8 D9D8030C */  jal        func_800F6364
    /* 51DEC 801439EC 00000000 */   nop
    /* 51DF0 801439F0 56D6030C */  jal        func_800F5958
    /* 51DF4 801439F4 48000424 */   addiu     $a0, $zero, 0x48
    /* 51DF8 801439F8 F5D4030C */  jal        func_800F53D4
    /* 51DFC 801439FC 00000000 */   nop
    /* 51E00 80143A00 D9FF4010 */  beqz       $v0, .L80143968
    /* 51E04 80143A04 00000000 */   nop
    /* 51E08 80143A08 1B02050C */  jal        func_8014086C
    /* 51E0C 80143A0C 00000000 */   nop
    /* 51E10 80143A10 77DC030C */  jal        func_800F71DC
    /* 51E14 80143A14 80000424 */   addiu     $a0, $zero, 0x80
  .L80143A18:
    /* 51E18 80143A18 CCE4030C */  jal        func_800F9330
    /* 51E1C 80143A1C 00000000 */   nop
    /* 51E20 80143A20 5601050C */  jal        func_80140558
    /* 51E24 80143A24 00000000 */   nop
    /* 51E28 80143A28 CE0D050C */  jal        func_80143738
    /* 51E2C 80143A2C 00000000 */   nop
    /* 51E30 80143A30 C7E5030C */  jal        func_800F971C
    /* 51E34 80143A34 00000000 */   nop
    /* 51E38 80143A38 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 51E3C 80143A3C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 51E40 80143A40 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 51E44 80143A44 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 51E48 80143A48 00004394 */  lhu        $v1, 0x0($v0)
    /* 51E4C 80143A4C 00000000 */  nop
    /* 51E50 80143A50 000083A4 */  sh         $v1, 0x0($a0)
  .L80143A54:
    /* 51E54 80143A54 DADA030C */  jal        func_800F6B68
    /* 51E58 80143A58 00190424 */   addiu     $a0, $zero, 0x1900
    /* 51E5C 80143A5C 92D0030C */  jal        func_800F4248
    /* 51E60 80143A60 02000424 */   addiu     $a0, $zero, 0x2
    /* 51E64 80143A64 04D5030C */  jal        func_800F5410
    /* 51E68 80143A68 00000000 */   nop
    /* 51E6C 80143A6C 02D0030C */  jal        func_800F4008
    /* 51E70 80143A70 02000424 */   addiu     $a0, $zero, 0x2
    /* 51E74 80143A74 93E0030C */  jal        func_800F824C
    /* 51E78 80143A78 21200000 */   addu      $a0, $zero, $zero
    /* 51E7C 80143A7C DADA030C */  jal        func_800F6B68
    /* 51E80 80143A80 2EEC0434 */   ori       $a0, $zero, 0xEC2E
    /* 51E84 80143A84 04D5030C */  jal        func_800F5410
    /* 51E88 80143A88 00000000 */   nop
    /* 51E8C 80143A8C 0FCF030C */  jal        func_800F3C3C
    /* 51E90 80143A90 21200000 */   addu      $a0, $zero, $zero
    /* 51E94 80143A94 CECF030C */  jal        func_800F3F38
    /* 51E98 80143A98 21204000 */   addu      $a0, $v0, $zero
    /* 51E9C 80143A9C 5DD5030C */  jal        func_800F5574
    /* 51EA0 80143AA0 88000424 */   addiu     $a0, $zero, 0x88
    /* 51EA4 80143AA4 F0D4030C */  jal        func_800F53C0
    /* 51EA8 80143AA8 00000000 */   nop
    /* 51EAC 80143AAC 0B004010 */  beqz       $v0, .L80143ADC
    /* 51EB0 80143AB0 06ED0434 */   ori       $a0, $zero, 0xED06
    /* 51EB4 80143AB4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 51EB8 80143AB8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 51EBC 80143ABC 00000000 */  nop
    /* 51EC0 80143AC0 00004394 */  lhu        $v1, 0x0($v0)
    /* 51EC4 80143AC4 C1CE030C */  jal        func_800F3B04
    /* 51EC8 80143AC8 21206400 */   addu      $a0, $v1, $a0
    /* 51ECC 80143ACC 12D8030C */  jal        func_800F6048
    /* 51ED0 80143AD0 21204000 */   addu      $a0, $v0, $zero
    /* 51ED4 80143AD4 C7E5030C */  jal        func_800F971C
    /* 51ED8 80143AD8 00000000 */   nop
  .L80143ADC:
    /* 51EDC 80143ADC DAE1030C */  jal        func_800F8768
    /* 51EE0 80143AE0 2EEC0434 */   ori       $a0, $zero, 0xEC2E
    /* 51EE4 80143AE4 D9D8030C */  jal        func_800F6364
    /* 51EE8 80143AE8 00000000 */   nop
    /* 51EEC 80143AEC 56D6030C */  jal        func_800F5958
    /* 51EF0 80143AF0 48000424 */   addiu     $a0, $zero, 0x48
    /* 51EF4 80143AF4 F5D4030C */  jal        func_800F53D4
    /* 51EF8 80143AF8 00000000 */   nop
    /* 51EFC 80143AFC D5FF4010 */  beqz       $v0, .L80143A54
    /* 51F00 80143B00 00000000 */   nop
    /* 51F04 80143B04 C7E5030C */  jal        func_800F971C
    /* 51F08 80143B08 00000000 */   nop
    /* 51F0C 80143B0C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 51F10 80143B10 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 51F14 80143B14 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 51F18 80143B18 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 51F1C 80143B1C 00004394 */  lhu        $v1, 0x0($v0)
    /* 51F20 80143B20 00000000 */  nop
    /* 51F24 80143B24 000083A4 */  sh         $v1, 0x0($a0)
  .L80143B28:
    /* 51F28 80143B28 53D9030C */  jal        func_800F654C
    /* 51F2C 80143B2C 18000424 */   addiu     $a0, $zero, 0x18
    /* 51F30 80143B30 93E0030C */  jal        func_800F824C
    /* 51F34 80143B34 28000424 */   addiu     $a0, $zero, 0x28
    /* 51F38 80143B38 5BE3030C */  jal        func_800F8D6C
    /* 51F3C 80143B3C 21200000 */   addu      $a0, $zero, $zero
    /* 51F40 80143B40 DADA030C */  jal        func_800F6B68
    /* 51F44 80143B44 BEEC0434 */   ori       $a0, $zero, 0xECBE
    /* 51F48 80143B48 04D5030C */  jal        func_800F5410
    /* 51F4C 80143B4C 00000000 */   nop
    /* 51F50 80143B50 02D0030C */  jal        func_800F4008
    /* 51F54 80143B54 08000424 */   addiu     $a0, $zero, 0x8
    /* 51F58 80143B58 DAE1030C */  jal        func_800F8768
    /* 51F5C 80143B5C BEEC0434 */   ori       $a0, $zero, 0xECBE
    /* 51F60 80143B60 E823050C */  jal        func_80148FA0
    /* 51F64 80143B64 00000000 */   nop
    /* 51F68 80143B68 9CDC030C */  jal        func_800F7270
    /* 51F6C 80143B6C 21200000 */   addu      $a0, $zero, $zero
    /* 51F70 80143B70 DAE1030C */  jal        func_800F8768
    /* 51F74 80143B74 76EC0434 */   ori       $a0, $zero, 0xEC76
    /* 51F78 80143B78 D9D8030C */  jal        func_800F6364
    /* 51F7C 80143B7C 00000000 */   nop
    /* 51F80 80143B80 56D6030C */  jal        func_800F5958
    /* 51F84 80143B84 48000424 */   addiu     $a0, $zero, 0x48
    /* 51F88 80143B88 F5D4030C */  jal        func_800F53D4
    /* 51F8C 80143B8C 00000000 */   nop
    /* 51F90 80143B90 E5FF4010 */  beqz       $v0, .L80143B28
    /* 51F94 80143B94 00000000 */   nop
    /* 51F98 80143B98 C7E5030C */  jal        func_800F971C
    /* 51F9C 80143B9C 00000000 */   nop
    /* 51FA0 80143BA0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 51FA4 80143BA4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 51FA8 80143BA8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 51FAC 80143BAC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 51FB0 80143BB0 00004394 */  lhu        $v1, 0x0($v0)
    /* 51FB4 80143BB4 00000000 */  nop
    /* 51FB8 80143BB8 000083A4 */  sh         $v1, 0x0($a0)
  .L80143BBC:
    /* 51FBC 80143BBC DADA030C */  jal        func_800F6B68
    /* 51FC0 80143BC0 00190424 */   addiu     $a0, $zero, 0x1900
    /* 51FC4 80143BC4 92D0030C */  jal        func_800F4248
    /* 51FC8 80143BC8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 51FCC 80143BCC 93E0030C */  jal        func_800F824C
    /* 51FD0 80143BD0 21200000 */   addu      $a0, $zero, $zero
    /* 51FD4 80143BD4 DADA030C */  jal        func_800F6B68
    /* 51FD8 80143BD8 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 51FDC 80143BDC 20D5030C */  jal        func_800F5480
    /* 51FE0 80143BE0 00000000 */   nop
    /* 51FE4 80143BE4 0FCF030C */  jal        func_800F3C3C
    /* 51FE8 80143BE8 21200000 */   addu      $a0, $zero, $zero
    /* 51FEC 80143BEC D2DF030C */  jal        func_800F7F48
    /* 51FF0 80143BF0 21204000 */   addu      $a0, $v0, $zero
    /* 51FF4 80143BF4 DAE1030C */  jal        func_800F8768
    /* 51FF8 80143BF8 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 51FFC 80143BFC DADA030C */  jal        func_800F6B68
    /* 52000 80143C00 0AEC0434 */   ori       $a0, $zero, 0xEC0A
    /* 52004 80143C04 20D5030C */  jal        func_800F5480
    /* 52008 80143C08 00000000 */   nop
    /* 5200C 80143C0C 16E0030C */  jal        func_800F8058
    /* 52010 80143C10 04000424 */   addiu     $a0, $zero, 0x4
    /* 52014 80143C14 DAE1030C */  jal        func_800F8768
    /* 52018 80143C18 0AEC0434 */   ori       $a0, $zero, 0xEC0A
    /* 5201C 80143C1C D9D8030C */  jal        func_800F6364
    /* 52020 80143C20 00000000 */   nop
    /* 52024 80143C24 56D6030C */  jal        func_800F5958
    /* 52028 80143C28 24000424 */   addiu     $a0, $zero, 0x24
    /* 5202C 80143C2C F5D4030C */  jal        func_800F53D4
    /* 52030 80143C30 00000000 */   nop
    /* 52034 80143C34 E1FF4010 */  beqz       $v0, .L80143BBC
    /* 52038 80143C38 00000000 */   nop
    /* 5203C 80143C3C 68E5030C */  jal        func_800F95A0
    /* 52040 80143C40 00000000 */   nop
    /* 52044 80143C44 92D7030C */  jal        func_800F5E48
    /* 52048 80143C48 00000000 */   nop
    /* 5204C 80143C4C 19D7030C */  jal        func_800F5C64
    /* 52050 80143C50 02020424 */   addiu     $a0, $zero, 0x202
    /* 52054 80143C54 70FF4014 */  bnez       $v0, .L80143A18
    /* 52058 80143C58 00000000 */   nop
    /* 5205C 80143C5C DDE3030C */  jal        func_800F8F74
    /* 52060 80143C60 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 52064 80143C64 1B23050C */  jal        func_80148C6C
    /* 52068 80143C68 00000000 */   nop
    /* 5206C 80143C6C B214050C */  jal        func_801452C8
    /* 52070 80143C70 00000000 */   nop
    /* 52074 80143C74 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52078 80143C78 00000000 */  nop
    /* 5207C 80143C7C 0800E003 */  jr         $ra
    /* 52080 80143C80 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143908
