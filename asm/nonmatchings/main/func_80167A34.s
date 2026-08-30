nonmatching func_80167A34, 0x114

glabel func_80167A34
    /* 75E34 80167A34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75E38 80167A38 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75E3C 80167A3C EEE3030C */  jal        func_800F8FB8
    /* 75E40 80167A40 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 75E44 80167A44 C7E5030C */  jal        func_800F971C
    /* 75E48 80167A48 00000000 */   nop
    /* 75E4C 80167A4C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 75E50 80167A50 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 75E54 80167A54 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 75E58 80167A58 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 75E5C 80167A5C 00004394 */  lhu        $v1, 0x0($v0)
    /* 75E60 80167A60 06F40434 */  ori        $a0, $zero, 0xF406
    /* 75E64 80167A64 40E3030C */  jal        func_800F8D00
    /* 75E68 80167A68 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 75E6C 80167A6C 40E3030C */  jal        func_800F8D00
    /* 75E70 80167A70 08F40434 */   ori       $a0, $zero, 0xF408
  .L80167A74:
    /* 75E74 80167A74 5DC0010C */  jal        func_80070174
    /* 75E78 80167A78 00000000 */   nop
    /* 75E7C 80167A7C C400050C */  jal        func_80140310
    /* 75E80 80167A80 00000000 */   nop
    /* 75E84 80167A84 8CD9030C */  jal        func_800F6630
    /* 75E88 80167A88 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 75E8C 80167A8C 92D0030C */  jal        func_800F4248
    /* 75E90 80167A90 07000424 */   addiu     $a0, $zero, 0x7
    /* 75E94 80167A94 50D4030C */  jal        func_800F5140
    /* 75E98 80167A98 00000000 */   nop
    /* 75E9C 80167A9C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 75EA0 80167AA0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 75EA4 80167AA4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 75EA8 80167AA8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 75EAC 80167AAC 00004394 */  lhu        $v1, 0x0($v0)
    /* 75EB0 80167AB0 20000424 */  addiu      $a0, $zero, 0x20
    /* 75EB4 80167AB4 91E5030C */  jal        func_800F9644
    /* 75EB8 80167AB8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 75EBC 80167ABC 1300043C */  lui        $a0, (0x13FCC5 >> 16)
    /* 75EC0 80167AC0 3DDB030C */  jal        func_800F6CF4
    /* 75EC4 80167AC4 C5FC8434 */   ori       $a0, $a0, (0x13FCC5 & 0xFFFF)
    /* 75EC8 80167AC8 6CE0030C */  jal        func_800F81B0
    /* 75ECC 80167ACC 06F40434 */   ori       $a0, $zero, 0xF406
    /* 75ED0 80167AD0 C7E5030C */  jal        func_800F971C
    /* 75ED4 80167AD4 00000000 */   nop
    /* 75ED8 80167AD8 98E5030C */  jal        func_800F9660
    /* 75EDC 80167ADC 20000424 */   addiu     $a0, $zero, 0x20
    /* 75EE0 80167AE0 AFD8030C */  jal        func_800F62BC
    /* 75EE4 80167AE4 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 75EE8 80167AE8 8CD9030C */  jal        func_800F6630
    /* 75EEC 80167AEC 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 75EF0 80167AF0 5DD5030C */  jal        func_800F5574
    /* 75EF4 80167AF4 40000424 */   addiu     $a0, $zero, 0x40
    /* 75EF8 80167AF8 F5D4030C */  jal        func_800F53D4
    /* 75EFC 80167AFC 00000000 */   nop
    /* 75F00 80167B00 DCFF4010 */  beqz       $v0, .L80167A74
    /* 75F04 80167B04 00000000 */   nop
    /* 75F08 80167B08 C7E5030C */  jal        func_800F971C
    /* 75F0C 80167B0C 00000000 */   nop
    /* 75F10 80167B10 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 75F14 80167B14 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 75F18 80167B18 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 75F1C 80167B1C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 75F20 80167B20 00004394 */  lhu        $v1, 0x0($v0)
    /* 75F24 80167B24 06F40434 */  ori        $a0, $zero, 0xF406
    /* 75F28 80167B28 40E3030C */  jal        func_800F8D00
    /* 75F2C 80167B2C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 75F30 80167B30 C400050C */  jal        func_80140310
    /* 75F34 80167B34 00000000 */   nop
    /* 75F38 80167B38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 75F3C 80167B3C 00000000 */  nop
    /* 75F40 80167B40 0800E003 */  jr         $ra
    /* 75F44 80167B44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167A34
