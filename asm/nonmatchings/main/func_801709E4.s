nonmatching func_801709E4, 0x230

glabel func_801709E4
    /* 7EDE4 801709E4 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 7EDE8 801709E8 80000424 */  addiu      $a0, $zero, 0x80
    /* 7EDEC 801709EC 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 7EDF0 801709F0 1800B2AF */  sw         $s2, 0x18($sp)
    /* 7EDF4 801709F4 1400B1AF */  sw         $s1, 0x14($sp)
    /* 7EDF8 801709F8 53D9030C */  jal        func_800F654C
    /* 7EDFC 801709FC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 7EE00 80170A00 62E0030C */  jal        func_800F8188
    /* 7EE04 80170A04 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7EE08 80170A08 77DC030C */  jal        func_800F71DC
    /* 7EE0C 80170A0C 21200000 */   addu      $a0, $zero, $zero
    /* 7EE10 80170A10 00170424 */  addiu      $a0, $zero, 0x1700
    /* 7EE14 80170A14 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7EE18 80170A18 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7EE1C 80170A1C 00000000 */  nop
    /* 7EE20 80170A20 00005194 */  lhu        $s1, 0x0($v0)
    /* 7EE24 80170A24 59D9030C */  jal        func_800F6564
    /* 7EE28 80170A28 1D80123C */   lui       $s2, %hi(D_801CFD68)
    /* 7EE2C 80170A2C 93E0030C */  jal        func_800F824C
    /* 7EE30 80170A30 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 7EE34 80170A34 EEE3030C */  jal        func_800F8FB8
    /* 7EE38 80170A38 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7EE3C 80170A3C 9CDC030C */  jal        func_800F7270
    /* 7EE40 80170A40 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7EE44 80170A44 40DD030C */  jal        func_800F7500
    /* 7EE48 80170A48 21200000 */   addu      $a0, $zero, $zero
  .L80170A4C:
    /* 7EE4C 80170A4C 1400043C */  lui        $a0, (0x148600 >> 16)
    /* 7EE50 80170A50 1ADB030C */  jal        func_800F6C68
    /* 7EE54 80170A54 00868434 */   ori       $a0, $a0, (0x148600 & 0xFFFF)
    /* 7EE58 80170A58 58E2030C */  jal        func_800F8960
    /* 7EE5C 80170A5C DB0B0424 */   addiu     $a0, $zero, 0xBDB
    /* 7EE60 80170A60 D9D8030C */  jal        func_800F6364
    /* 7EE64 80170A64 00000000 */   nop
    /* 7EE68 80170A68 EFD8030C */  jal        func_800F63BC
    /* 7EE6C 80170A6C 00000000 */   nop
    /* 7EE70 80170A70 A4D6030C */  jal        func_800F5A90
    /* 7EE74 80170A74 00010424 */   addiu     $a0, $zero, 0x100
    /* 7EE78 80170A78 F5D4030C */  jal        func_800F53D4
    /* 7EE7C 80170A7C 00000000 */   nop
    /* 7EE80 80170A80 F2FF4010 */  beqz       $v0, .L80170A4C
    /* 7EE84 80170A84 00000000 */   nop
    /* 7EE88 80170A88 59D9030C */  jal        func_800F6564
    /* 7EE8C 80170A8C 00170424 */   addiu     $a0, $zero, 0x1700
    /* 7EE90 80170A90 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7EE94 80170A94 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7EE98 80170A98 00000000 */  nop
    /* 7EE9C 80170A9C 00006290 */  lbu        $v0, 0x0($v1)
    /* 7EEA0 80170AA0 3E000424 */  addiu      $a0, $zero, 0x3E
    /* 7EEA4 80170AA4 40110200 */  sll        $v0, $v0, 5
    /* 7EEA8 80170AA8 93E0030C */  jal        func_800F824C
    /* 7EEAC 80170AAC 000062A0 */   sb        $v0, 0x0($v1)
    /* 7EEB0 80170AB0 EEE3030C */  jal        func_800F8FB8
    /* 7EEB4 80170AB4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7EEB8 80170AB8 9CDC030C */  jal        func_800F7270
    /* 7EEBC 80170ABC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7EEC0 80170AC0 40DD030C */  jal        func_800F7500
    /* 7EEC4 80170AC4 21200000 */   addu      $a0, $zero, $zero
    /* 7EEC8 80170AC8 1D00043C */  lui        $a0, (0x1D8000 >> 16)
  .L80170ACC:
    /* 7EECC 80170ACC 1ADB030C */  jal        func_800F6C68
    /* 7EED0 80170AD0 00808434 */   ori       $a0, $a0, (0x1D8000 & 0xFFFF)
    /* 7EED4 80170AD4 93E0030C */  jal        func_800F824C
    /* 7EED8 80170AD8 08000424 */   addiu     $a0, $zero, 0x8
    /* 7EEDC 80170ADC D9D8030C */  jal        func_800F6364
    /* 7EEE0 80170AE0 68FD5026 */   addiu     $s0, $s2, %lo(D_801CFD68)
    /* 7EEE4 80170AE4 92D0030C */  jal        func_800F4248
    /* 7EEE8 80170AE8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 7EEEC 80170AEC 04D5030C */  jal        func_800F5410
    /* 7EEF0 80170AF0 00000000 */   nop
    /* 7EEF4 80170AF4 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 7EEF8 80170AF8 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 7EEFC 80170AFC 00000000 */  nop
    /* 7EF00 80170B00 00004494 */  lhu        $a0, 0x0($v0)
    /* 7EF04 80170B04 C1CE030C */  jal        func_800F3B04
    /* 7EF08 80170B08 DB0B8424 */   addiu     $a0, $a0, 0xBDB
    /* 7EF0C 80170B0C CECF030C */  jal        func_800F3F38
    /* 7EF10 80170B10 21204000 */   addu      $a0, $v0, $zero
    /* 7EF14 80170B14 40301100 */  sll        $a2, $s1, 1
    /* 7EF18 80170B18 01002226 */  addiu      $v0, $s1, 0x1
    /* 7EF1C 80170B1C FFFF5130 */  andi       $s1, $v0, 0xFFFF
    /* 7EF20 80170B20 08000424 */  addiu      $a0, $zero, 0x8
    /* 7EF24 80170B24 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7EF28 80170B28 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7EF2C 80170B2C 2130D000 */  addu       $a2, $a2, $s0
    /* 7EF30 80170B30 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7EF34 80170B34 0000C390 */  lbu        $v1, 0x0($a2)
    /* 7EF38 80170B38 00120200 */  sll        $v0, $v0, 8
    /* 7EF3C 80170B3C 25186200 */  or         $v1, $v1, $v0
    /* 7EF40 80170B40 8CD9030C */  jal        func_800F6630
    /* 7EF44 80170B44 0000C3A4 */   sh        $v1, 0x0($a2)
    /* 7EF48 80170B48 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7EF4C 80170B4C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7EF50 80170B50 00000000 */  nop
    /* 7EF54 80170B54 00006290 */  lbu        $v0, 0x0($v1)
    /* 7EF58 80170B58 00000000 */  nop
    /* 7EF5C 80170B5C 02110200 */  srl        $v0, $v0, 4
    /* 7EF60 80170B60 04D5030C */  jal        func_800F5410
    /* 7EF64 80170B64 000062A0 */   sb        $v0, 0x0($v1)
    /* 7EF68 80170B68 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 7EF6C 80170B6C 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 7EF70 80170B70 00000000 */  nop
    /* 7EF74 80170B74 00004494 */  lhu        $a0, 0x0($v0)
    /* 7EF78 80170B78 C1CE030C */  jal        func_800F3B04
    /* 7EF7C 80170B7C DB0B8424 */   addiu     $a0, $a0, 0xBDB
    /* 7EF80 80170B80 CECF030C */  jal        func_800F3F38
    /* 7EF84 80170B84 21204000 */   addu      $a0, $v0, $zero
    /* 7EF88 80170B88 40201100 */  sll        $a0, $s1, 1
    /* 7EF8C 80170B8C 01002226 */  addiu      $v0, $s1, 0x1
    /* 7EF90 80170B90 FFFF5130 */  andi       $s1, $v0, 0xFFFF
    /* 7EF94 80170B94 21209000 */  addu       $a0, $a0, $s0
    /* 7EF98 80170B98 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 7EF9C 80170B9C 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 7EFA0 80170BA0 00008290 */  lbu        $v0, 0x0($a0)
    /* 7EFA4 80170BA4 0000C390 */  lbu        $v1, 0x0($a2)
    /* 7EFA8 80170BA8 1A80053C */  lui        $a1, %hi(D_8019ED5C)
    /* 7EFAC 80170BAC 5CEDA58C */  lw         $a1, %lo(D_8019ED5C)($a1)
    /* 7EFB0 80170BB0 001A0300 */  sll        $v1, $v1, 8
    /* 7EFB4 80170BB4 25104300 */  or         $v0, $v0, $v1
    /* 7EFB8 80170BB8 000082A4 */  sh         $v0, 0x0($a0)
    /* 7EFBC 80170BBC 0000A390 */  lbu        $v1, 0x0($a1)
    /* 7EFC0 80170BC0 1F000424 */  addiu      $a0, $zero, 0x1F
    /* 7EFC4 80170BC4 92D0030C */  jal        func_800F4248
    /* 7EFC8 80170BC8 0000C3A0 */   sb        $v1, 0x0($a2)
    /* 7EFCC 80170BCC 48D0030C */  jal        func_800F4120
    /* 7EFD0 80170BD0 02020424 */   addiu     $a0, $zero, 0x202
    /* 7EFD4 80170BD4 BDFF4014 */  bnez       $v0, .L80170ACC
    /* 7EFD8 80170BD8 1D00043C */   lui       $a0, (0x1D8000 >> 16)
    /* 7EFDC 80170BDC EFD8030C */  jal        func_800F63BC
    /* 7EFE0 80170BE0 00000000 */   nop
    /* 7EFE4 80170BE4 A4D6030C */  jal        func_800F5A90
    /* 7EFE8 80170BE8 00010424 */   addiu     $a0, $zero, 0x100
    /* 7EFEC 80170BEC F5D4030C */  jal        func_800F53D4
    /* 7EFF0 80170BF0 00000000 */   nop
    /* 7EFF4 80170BF4 B5FF4010 */  beqz       $v0, .L80170ACC
    /* 7EFF8 80170BF8 1D00043C */   lui       $a0, (0x1D8000 >> 16)
    /* 7EFFC 80170BFC 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 7F000 80170C00 1800B28F */  lw         $s2, 0x18($sp)
    /* 7F004 80170C04 1400B18F */  lw         $s1, 0x14($sp)
    /* 7F008 80170C08 1000B08F */  lw         $s0, 0x10($sp)
    /* 7F00C 80170C0C 0800E003 */  jr         $ra
    /* 7F010 80170C10 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_801709E4
