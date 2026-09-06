nonmatching func_80161A00, 0x248

glabel func_80161A00
    /* 6FE00 80161A00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6FE04 80161A04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6FE08 80161A08 77DC030C */  jal        func_800F71DC
    /* 6FE0C 80161A0C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6FE10 80161A10 8CD9030C */  jal        func_800F6630
    /* 6FE14 80161A14 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 6FE18 80161A18 C1CE030C */  jal        func_800F3B04
    /* 6FE1C 80161A1C 39350424 */   addiu     $a0, $zero, 0x3539
    /* 6FE20 80161A20 35D5030C */  jal        func_800F54D4
    /* 6FE24 80161A24 21204000 */   addu      $a0, $v0, $zero
    /* 6FE28 80161A28 F5D4030C */  jal        func_800F53D4
    /* 6FE2C 80161A2C 00000000 */   nop
    /* 6FE30 80161A30 03004014 */  bnez       $v0, .L80161A40
    /* 6FE34 80161A34 00000000 */   nop
    /* 6FE38 80161A38 92D7030C */  jal        func_800F5E48
    /* 6FE3C 80161A3C 00000000 */   nop
  .L80161A40:
    /* 6FE40 80161A40 DADA030C */  jal        func_800F6B68
    /* 6FE44 80161A44 39350424 */   addiu     $a0, $zero, 0x3539
    /* 6FE48 80161A48 374B050C */  jal        func_80152CDC
    /* 6FE4C 80161A4C 00000000 */   nop
    /* 6FE50 80161A50 9CDC030C */  jal        func_800F7270
    /* 6FE54 80161A54 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6FE58 80161A58 DADA030C */  jal        func_800F6B68
    /* 6FE5C 80161A5C 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6FE60 80161A60 92D0030C */  jal        func_800F4248
    /* 6FE64 80161A64 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6FE68 80161A68 48D0030C */  jal        func_800F4120
    /* 6FE6C 80161A6C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6FE70 80161A70 11004010 */  beqz       $v0, .L80161AB8
    /* 6FE74 80161A74 00000000 */   nop
    /* 6FE78 80161A78 DADA030C */  jal        func_800F6B68
    /* 6FE7C 80161A7C 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6FE80 80161A80 92D0030C */  jal        func_800F4248
    /* 6FE84 80161A84 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 6FE88 80161A88 48D0030C */  jal        func_800F4120
    /* 6FE8C 80161A8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6FE90 80161A90 09004010 */  beqz       $v0, .L80161AB8
    /* 6FE94 80161A94 00000000 */   nop
    /* 6FE98 80161A98 DADA030C */  jal        func_800F6B68
    /* 6FE9C 80161A9C 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6FEA0 80161AA0 92D0030C */  jal        func_800F4248
    /* 6FEA4 80161AA4 40000424 */   addiu     $a0, $zero, 0x40
    /* 6FEA8 80161AA8 48D0030C */  jal        func_800F4120
    /* 6FEAC 80161AAC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6FEB0 80161AB0 05004014 */  bnez       $v0, .L80161AC8
    /* 6FEB4 80161AB4 00000000 */   nop
  .L80161AB8:
    /* 6FEB8 80161AB8 1287050C */  jal        func_80161C48
    /* 6FEBC 80161ABC 00000000 */   nop
    /* 6FEC0 80161AC0 0E870508 */  j          .L80161C38
    /* 6FEC4 80161AC4 00000000 */   nop
  .L80161AC8:
    /* 6FEC8 80161AC8 DADA030C */  jal        func_800F6B68
    /* 6FECC 80161ACC 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6FED0 80161AD0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6FED4 80161AD4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6FED8 80161AD8 00000000 */  nop
    /* 6FEDC 80161ADC 00006290 */  lbu        $v0, 0x0($v1)
    /* 6FEE0 80161AE0 05200424 */  addiu      $a0, $zero, 0x2005
    /* 6FEE4 80161AE4 04004234 */  ori        $v0, $v0, 0x4
    /* 6FEE8 80161AE8 DAE1030C */  jal        func_800F8768
    /* 6FEEC 80161AEC 000062A0 */   sb        $v0, 0x0($v1)
    /* 6FEF0 80161AF0 59D9030C */  jal        func_800F6564
    /* 6FEF4 80161AF4 D0260424 */   addiu     $a0, $zero, 0x26D0
    /* 6FEF8 80161AF8 DAE1030C */  jal        func_800F8768
    /* 6FEFC 80161AFC 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6FF00 80161B00 59D9030C */  jal        func_800F6564
    /* 6FF04 80161B04 D3260424 */   addiu     $a0, $zero, 0x26D3
    /* 6FF08 80161B08 DAE1030C */  jal        func_800F8768
    /* 6FF0C 80161B0C 53200424 */   addiu     $a0, $zero, 0x2053
    /* 6FF10 80161B10 53D9030C */  jal        func_800F654C
    /* 6FF14 80161B14 20000424 */   addiu     $a0, $zero, 0x20
    /* 6FF18 80161B18 DAE1030C */  jal        func_800F8768
    /* 6FF1C 80161B1C 51200424 */   addiu     $a0, $zero, 0x2051
    /* 6FF20 80161B20 84DC030C */  jal        func_800F7210
    /* 6FF24 80161B24 30350424 */   addiu     $a0, $zero, 0x3530
    /* 6FF28 80161B28 5BE3030C */  jal        func_800F8D6C
    /* 6FF2C 80161B2C 92000424 */   addiu     $a0, $zero, 0x92
    /* 6FF30 80161B30 53D9030C */  jal        func_800F654C
    /* 6FF34 80161B34 20000424 */   addiu     $a0, $zero, 0x20
    /* 6FF38 80161B38 62E0030C */  jal        func_800F8188
    /* 6FF3C 80161B3C 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 6FF40 80161B40 53D9030C */  jal        func_800F654C
    /* 6FF44 80161B44 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6FF48 80161B48 93E0030C */  jal        func_800F824C
    /* 6FF4C 80161B4C D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6FF50 80161B50 8CD9030C */  jal        func_800F6630
    /* 6FF54 80161B54 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 6FF58 80161B58 DD68050C */  jal        func_8015A374
    /* 6FF5C 80161B5C 00000000 */   nop
    /* 6FF60 80161B60 53D9030C */  jal        func_800F654C
    /* 6FF64 80161B64 03000424 */   addiu     $a0, $zero, 0x3
    /* 6FF68 80161B68 DD4C050C */  jal        func_80153374
    /* 6FF6C 80161B6C 00000000 */   nop
    /* 6FF70 80161B70 53D9030C */  jal        func_800F654C
    /* 6FF74 80161B74 08000424 */   addiu     $a0, $zero, 0x8
    /* 6FF78 80161B78 DAE1030C */  jal        func_800F8768
    /* 6FF7C 80161B7C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6FF80 80161B80 04D5030C */  jal        func_800F5410
    /* 6FF84 80161B84 00000000 */   nop
    /* 6FF88 80161B88 8CD9030C */  jal        func_800F6630
    /* 6FF8C 80161B8C 92000424 */   addiu     $a0, $zero, 0x92
    /* 6FF90 80161B90 02D0030C */  jal        func_800F4008
    /* 6FF94 80161B94 03000424 */   addiu     $a0, $zero, 0x3
    /* 6FF98 80161B98 93E0030C */  jal        func_800F824C
    /* 6FF9C 80161B9C 92000424 */   addiu     $a0, $zero, 0x92
    /* 6FFA0 80161BA0 8CD9030C */  jal        func_800F6630
    /* 6FFA4 80161BA4 93000424 */   addiu     $a0, $zero, 0x93
    /* 6FFA8 80161BA8 02D0030C */  jal        func_800F4008
    /* 6FFAC 80161BAC 21200000 */   addu      $a0, $zero, $zero
    /* 6FFB0 80161BB0 93E0030C */  jal        func_800F824C
    /* 6FFB4 80161BB4 93000424 */   addiu     $a0, $zero, 0x93
    /* 6FFB8 80161BB8 9CDC030C */  jal        func_800F7270
    /* 6FFBC 80161BBC 92000424 */   addiu     $a0, $zero, 0x92
    /* 6FFC0 80161BC0 8CD9030C */  jal        func_800F6630
    /* 6FFC4 80161BC4 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 6FFC8 80161BC8 DAE1030C */  jal        func_800F8768
    /* 6FFCC 80161BCC 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6FFD0 80161BD0 8CD9030C */  jal        func_800F6630
    /* 6FFD4 80161BD4 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 6FFD8 80161BD8 DAE1030C */  jal        func_800F8768
    /* 6FFDC 80161BDC 052A0424 */   addiu     $a0, $zero, 0x2A05
    /* 6FFE0 80161BE0 53D9030C */  jal        func_800F654C
    /* 6FFE4 80161BE4 08000424 */   addiu     $a0, $zero, 0x8
    /* 6FFE8 80161BE8 DAE1030C */  jal        func_800F8768
    /* 6FFEC 80161BEC 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6FFF0 80161BF0 9CDC030C */  jal        func_800F7270
    /* 6FFF4 80161BF4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6FFF8 80161BF8 DADA030C */  jal        func_800F6B68
    /* 6FFFC 80161BFC 05200424 */   addiu     $a0, $zero, 0x2005
    /* 70000 80161C00 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 70004 80161C04 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 70008 80161C08 00000000 */  nop
    /* 7000C 80161C0C 00006290 */  lbu        $v0, 0x0($v1)
    /* 70010 80161C10 05200424 */  addiu      $a0, $zero, 0x2005
    /* 70014 80161C14 04004234 */  ori        $v0, $v0, 0x4
    /* 70018 80161C18 DAE1030C */  jal        func_800F8768
    /* 7001C 80161C1C 000062A0 */   sb        $v0, 0x0($v1)
    /* 70020 80161C20 53D9030C */  jal        func_800F654C
    /* 70024 80161C24 20000424 */   addiu     $a0, $zero, 0x20
    /* 70028 80161C28 DAE1030C */  jal        func_800F8768
    /* 7002C 80161C2C 51200424 */   addiu     $a0, $zero, 0x2051
    /* 70030 80161C30 90D8030C */  jal        func_800F6240
    /* 70034 80161C34 0A390424 */   addiu     $a0, $zero, 0x390A
  .L80161C38:
    /* 70038 80161C38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7003C 80161C3C 00000000 */  nop
    /* 70040 80161C40 0800E003 */  jr         $ra
    /* 70044 80161C44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80161A00
