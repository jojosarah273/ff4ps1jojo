nonmatching func_80141A80, 0xB0

glabel func_80141A80
    /* 4FE80 80141A80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4FE84 80141A84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4FE88 80141A88 C7E5030C */  jal        func_800F971C
    /* 4FE8C 80141A8C 00000000 */   nop
    /* 4FE90 80141A90 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4FE94 80141A94 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4FE98 80141A98 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4FE9C 80141A9C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4FEA0 80141AA0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4FEA4 80141AA4 06F40434 */  ori        $a0, $zero, 0xF406
    /* 4FEA8 80141AA8 40E3030C */  jal        func_800F8D00
    /* 4FEAC 80141AAC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4FEB0 80141AB0 40E3030C */  jal        func_800F8D00
    /* 4FEB4 80141AB4 08F40434 */   ori       $a0, $zero, 0xF408
  .L80141AB8:
    /* 4FEB8 80141AB8 5601050C */  jal        func_80140558
    /* 4FEBC 80141ABC 00000000 */   nop
    /* 4FEC0 80141AC0 C400050C */  jal        func_80140310
    /* 4FEC4 80141AC4 00000000 */   nop
    /* 4FEC8 80141AC8 91E5030C */  jal        func_800F9644
    /* 4FECC 80141ACC 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FED0 80141AD0 63D9030C */  jal        func_800F658C
    /* 4FED4 80141AD4 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FED8 80141AD8 20D5030C */  jal        func_800F5480
    /* 4FEDC 80141ADC 00000000 */   nop
    /* 4FEE0 80141AE0 34E0030C */  jal        func_800F80D0
    /* 4FEE4 80141AE4 08000424 */   addiu     $a0, $zero, 0x8
    /* 4FEE8 80141AE8 6CE0030C */  jal        func_800F81B0
    /* 4FEEC 80141AEC 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FEF0 80141AF0 C7E5030C */  jal        func_800F971C
    /* 4FEF4 80141AF4 00000000 */   nop
    /* 4FEF8 80141AF8 98E5030C */  jal        func_800F9660
    /* 4FEFC 80141AFC 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FF00 80141B00 D9D8030C */  jal        func_800F6364
    /* 4FF04 80141B04 00000000 */   nop
    /* 4FF08 80141B08 56D6030C */  jal        func_800F5958
    /* 4FF0C 80141B0C 14000424 */   addiu     $a0, $zero, 0x14
    /* 4FF10 80141B10 F5D4030C */  jal        func_800F53D4
    /* 4FF14 80141B14 00000000 */   nop
    /* 4FF18 80141B18 E7FF4010 */  beqz       $v0, .L80141AB8
    /* 4FF1C 80141B1C 00000000 */   nop
    /* 4FF20 80141B20 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4FF24 80141B24 00000000 */  nop
    /* 4FF28 80141B28 0800E003 */  jr         $ra
    /* 4FF2C 80141B2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141A80
