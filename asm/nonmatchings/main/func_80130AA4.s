nonmatching func_80130AA4, 0x124

glabel func_80130AA4
    /* 3EEA4 80130AA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3EEA8 80130AA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3EEAC 80130AAC 59D9030C */  jal        func_800F6564
    /* 3EEB0 80130AB0 871B0424 */   addiu     $a0, $zero, 0x1B87
    /* 3EEB4 80130AB4 0DD9030C */  jal        func_800F6434
    /* 3EEB8 80130AB8 02000424 */   addiu     $a0, $zero, 0x2
    /* 3EEBC 80130ABC 3C004014 */  bnez       $v0, .L80130BB0
    /* 3EEC0 80130AC0 00000000 */   nop
    /* 3EEC4 80130AC4 59D9030C */  jal        func_800F6564
    /* 3EEC8 80130AC8 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3EECC 80130ACC 50D4030C */  jal        func_800F5140
    /* 3EED0 80130AD0 00000000 */   nop
    /* 3EED4 80130AD4 D3D3030C */  jal        func_800F4F4C
    /* 3EED8 80130AD8 00000000 */   nop
    /* 3EEDC 80130ADC C1CE030C */  jal        func_800F3B04
    /* 3EEE0 80130AE0 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3EEE4 80130AE4 CECF030C */  jal        func_800F3F38
    /* 3EEE8 80130AE8 21204000 */   addu      $a0, $v0, $zero
    /* 3EEEC 80130AEC C1CE030C */  jal        func_800F3B04
    /* 3EEF0 80130AF0 841B0424 */   addiu     $a0, $zero, 0x1B84
    /* 3EEF4 80130AF4 CECF030C */  jal        func_800F3F38
    /* 3EEF8 80130AF8 21204000 */   addu      $a0, $v0, $zero
    /* 3EEFC 80130AFC 2DC2040C */  jal        func_801308B4
    /* 3EF00 80130B00 00000000 */   nop
    /* 3EF04 80130B04 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3EF08 80130B08 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3EF0C 80130B0C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3EF10 80130B10 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3EF14 80130B14 00004394 */  lhu        $v1, 0x0($v0)
    /* 3EF18 80130B18 60150424 */  addiu      $a0, $zero, 0x1560
    /* 3EF1C 80130B1C 5CDB030C */  jal        func_800F6D70
    /* 3EF20 80130B20 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3EF24 80130B24 52CF030C */  jal        func_800F3D48
    /* 3EF28 80130B28 00000000 */   nop
    /* 3EF2C 80130B2C 53D9030C */  jal        func_800F654C
    /* 3EF30 80130B30 21200000 */   addu      $a0, $zero, $zero
    /* 3EF34 80130B34 52CF030C */  jal        func_800F3D48
    /* 3EF38 80130B38 00000000 */   nop
    /* 3EF3C 80130B3C 91E5030C */  jal        func_800F9644
    /* 3EF40 80130B40 20000424 */   addiu     $a0, $zero, 0x20
    /* 3EF44 80130B44 5BD4030C */  jal        func_800F516C
    /* 3EF48 80130B48 00000000 */   nop
    /* 3EF4C 80130B4C 9DE0030C */  jal        func_800F8274
    /* 3EF50 80130B50 45000424 */   addiu     $a0, $zero, 0x45
    /* 3EF54 80130B54 5BD4030C */  jal        func_800F516C
    /* 3EF58 80130B58 00000000 */   nop
    /* 3EF5C 80130B5C 14D4030C */  jal        func_800F5050
    /* 3EF60 80130B60 00000000 */   nop
    /* 3EF64 80130B64 0FCF030C */  jal        func_800F3C3C
    /* 3EF68 80130B68 45000424 */   addiu     $a0, $zero, 0x45
    /* 3EF6C 80130B6C E5CF030C */  jal        func_800F3F94
    /* 3EF70 80130B70 21204000 */   addu      $a0, $v0, $zero
    /* 3EF74 80130B74 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3EF78 80130B78 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3EF7C 80130B7C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3EF80 80130B80 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3EF84 80130B84 00004394 */  lhu        $v1, 0x0($v0)
    /* 3EF88 80130B88 20000424 */  addiu      $a0, $zero, 0x20
    /* 3EF8C 80130B8C 98E5030C */  jal        func_800F9660
    /* 3EF90 80130B90 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3EF94 80130B94 0F00043C */  lui        $a0, (0xF97A5 >> 16)
    /* 3EF98 80130B98 1ADB030C */  jal        func_800F6C68
    /* 3EF9C 80130B9C A5978434 */   ori       $a0, $a0, (0xF97A5 & 0xFFFF)
    /* 3EFA0 80130BA0 92D0030C */  jal        func_800F4248
    /* 3EFA4 80130BA4 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 3EFA8 80130BA8 62E0030C */  jal        func_800F8188
    /* 3EFAC 80130BAC 931B0424 */   addiu     $a0, $zero, 0x1B93
  .L80130BB0:
    /* 3EFB0 80130BB0 59D9030C */  jal        func_800F6564
    /* 3EFB4 80130BB4 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3EFB8 80130BB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3EFBC 80130BBC 00000000 */  nop
    /* 3EFC0 80130BC0 0800E003 */  jr         $ra
    /* 3EFC4 80130BC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130AA4
