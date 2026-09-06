nonmatching func_801669BC, 0x1C4

glabel func_801669BC
    /* 74DBC 801669BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 74DC0 801669C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 74DC4 801669C4 53D9030C */  jal        func_800F654C
    /* 74DC8 801669C8 42000424 */   addiu     $a0, $zero, 0x42
    /* 74DCC 801669CC 62E0030C */  jal        func_800F8188
    /* 74DD0 801669D0 BE380424 */   addiu     $a0, $zero, 0x38BE
    /* 74DD4 801669D4 90D8030C */  jal        func_800F6240
    /* 74DD8 801669D8 BD380424 */   addiu     $a0, $zero, 0x38BD
    /* 74DDC 801669DC 539A050C */  jal        func_8016694C
    /* 74DE0 801669E0 00000000 */   nop
    /* 74DE4 801669E4 E09A050C */  jal        func_80166B80
    /* 74DE8 801669E8 00000000 */   nop
    /* 74DEC 801669EC 77DC030C */  jal        func_800F71DC
    /* 74DF0 801669F0 40000424 */   addiu     $a0, $zero, 0x40
    /* 74DF4 801669F4 8B9D050C */  jal        func_8016762C
    /* 74DF8 801669F8 00000000 */   nop
    /* 74DFC 801669FC 539A050C */  jal        func_8016694C
    /* 74E00 80166A00 00000000 */   nop
    /* 74E04 80166A04 5102050C */  jal        func_80140944
    /* 74E08 80166A08 00000000 */   nop
    /* 74E0C 80166A0C 77DC030C */  jal        func_800F71DC
    /* 74E10 80166A10 20000424 */   addiu     $a0, $zero, 0x20
    /* 74E14 80166A14 8B9D050C */  jal        func_8016762C
    /* 74E18 80166A18 00000000 */   nop
    /* 74E1C 80166A1C E09A050C */  jal        func_80166B80
    /* 74E20 80166A20 00000000 */   nop
    /* 74E24 80166A24 77DC030C */  jal        func_800F71DC
    /* 74E28 80166A28 21200000 */   addu      $a0, $zero, $zero
    /* 74E2C 80166A2C 40E3030C */  jal        func_800F8D00
    /* 74E30 80166A30 06F40434 */   ori       $a0, $zero, 0xF406
    /* 74E34 80166A34 40E3030C */  jal        func_800F8D00
    /* 74E38 80166A38 08F40434 */   ori       $a0, $zero, 0xF408
    /* 74E3C 80166A3C 62E0030C */  jal        func_800F8188
    /* 74E40 80166A40 33F10434 */   ori       $a0, $zero, 0xF133
  .L80166A44:
    /* 74E44 80166A44 5DC0010C */  jal        func_80070174
    /* 74E48 80166A48 00000000 */   nop
    /* 74E4C 80166A4C 59D9030C */  jal        func_800F6564
    /* 74E50 80166A50 33F10434 */   ori       $a0, $zero, 0xF133
    /* 74E54 80166A54 92D0030C */  jal        func_800F4248
    /* 74E58 80166A58 07000424 */   addiu     $a0, $zero, 0x7
    /* 74E5C 80166A5C 0D00043C */  lui        $a0, (0xDFFDD >> 16)
    /* 74E60 80166A60 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 74E64 80166A64 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 74E68 80166A68 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 74E6C 80166A6C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 74E70 80166A70 00004394 */  lhu        $v1, 0x0($v0)
    /* 74E74 80166A74 DDFF8434 */  ori        $a0, $a0, (0xDFFDD & 0xFFFF)
    /* 74E78 80166A78 1ADB030C */  jal        func_800F6C68
    /* 74E7C 80166A7C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 74E80 80166A80 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 74E84 80166A84 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 74E88 80166A88 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 74E8C 80166A8C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 74E90 80166A90 00004394 */  lhu        $v1, 0x0($v0)
    /* 74E94 80166A94 06F40434 */  ori        $a0, $zero, 0xF406
    /* 74E98 80166A98 94E3030C */  jal        func_800F8E50
    /* 74E9C 80166A9C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 74EA0 80166AA0 59D9030C */  jal        func_800F6564
    /* 74EA4 80166AA4 33F10434 */   ori       $a0, $zero, 0xF133
    /* 74EA8 80166AA8 92D0030C */  jal        func_800F4248
    /* 74EAC 80166AAC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 74EB0 80166AB0 48D0030C */  jal        func_800F4120
    /* 74EB4 80166AB4 02020424 */   addiu     $a0, $zero, 0x202
    /* 74EB8 80166AB8 07004014 */  bnez       $v0, .L80166AD8
    /* 74EBC 80166ABC 00000000 */   nop
    /* 74EC0 80166AC0 4DDD030C */  jal        func_800F7534
    /* 74EC4 80166AC4 08F40434 */   ori       $a0, $zero, 0xF408
    /* 74EC8 80166AC8 A8D7030C */  jal        func_800F5EA0
    /* 74ECC 80166ACC 00000000 */   nop
    /* 74ED0 80166AD0 94E3030C */  jal        func_800F8E50
    /* 74ED4 80166AD4 08F40434 */   ori       $a0, $zero, 0xF408
  .L80166AD8:
    /* 74ED8 80166AD8 59D9030C */  jal        func_800F6564
    /* 74EDC 80166ADC 33F10434 */   ori       $a0, $zero, 0xF133
    /* 74EE0 80166AE0 5DD5030C */  jal        func_800F5574
    /* 74EE4 80166AE4 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 74EE8 80166AE8 F5D4030C */  jal        func_800F53D4
    /* 74EEC 80166AEC 00000000 */   nop
    /* 74EF0 80166AF0 0D004014 */  bnez       $v0, .L80166B28
    /* 74EF4 80166AF4 00000000 */   nop
    /* 74EF8 80166AF8 5DD5030C */  jal        func_800F5574
    /* 74EFC 80166AFC 10000424 */   addiu     $a0, $zero, 0x10
    /* 74F00 80166B00 F5D4030C */  jal        func_800F53D4
    /* 74F04 80166B04 00000000 */   nop
    /* 74F08 80166B08 07004014 */  bnez       $v0, .L80166B28
    /* 74F0C 80166B0C 00000000 */   nop
    /* 74F10 80166B10 5DD5030C */  jal        func_800F5574
    /* 74F14 80166B14 20000424 */   addiu     $a0, $zero, 0x20
    /* 74F18 80166B18 F5D4030C */  jal        func_800F53D4
    /* 74F1C 80166B1C 00000000 */   nop
    /* 74F20 80166B20 03004010 */  beqz       $v0, .L80166B30
    /* 74F24 80166B24 00000000 */   nop
  .L80166B28:
    /* 74F28 80166B28 E09A050C */  jal        func_80166B80
    /* 74F2C 80166B2C 00000000 */   nop
  .L80166B30:
    /* 74F30 80166B30 90D8030C */  jal        func_800F6240
    /* 74F34 80166B34 33F10434 */   ori       $a0, $zero, 0xF133
    /* 74F38 80166B38 C400050C */  jal        func_80140310
    /* 74F3C 80166B3C 00000000 */   nop
    /* 74F40 80166B40 4DDD030C */  jal        func_800F7534
    /* 74F44 80166B44 08F40434 */   ori       $a0, $zero, 0xF408
    /* 74F48 80166B48 A4D6030C */  jal        func_800F5A90
    /* 74F4C 80166B4C 60FF0434 */   ori       $a0, $zero, 0xFF60
    /* 74F50 80166B50 F5D4030C */  jal        func_800F53D4
    /* 74F54 80166B54 00000000 */   nop
    /* 74F58 80166B58 BAFF4010 */  beqz       $v0, .L80166A44
    /* 74F5C 80166B5C 00000000 */   nop
    /* 74F60 80166B60 53D9030C */  jal        func_800F654C
    /* 74F64 80166B64 20000424 */   addiu     $a0, $zero, 0x20
    /* 74F68 80166B68 4A35050C */  jal        func_8014D528
    /* 74F6C 80166B6C 00000000 */   nop
    /* 74F70 80166B70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 74F74 80166B74 00000000 */  nop
    /* 74F78 80166B78 0800E003 */  jr         $ra
    /* 74F7C 80166B7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801669BC
