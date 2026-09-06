nonmatching func_80160AAC, 0xE0

glabel func_80160AAC
    /* 6EEAC 80160AAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EEB0 80160AB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EEB4 80160AB4 59D9030C */  jal        func_800F6564
    /* 6EEB8 80160AB8 26270424 */   addiu     $a0, $zero, 0x2726
    /* 6EEBC 80160ABC A0D0030C */  jal        func_800F4280
    /* 6EEC0 80160AC0 A2280424 */   addiu     $a0, $zero, 0x28A2
    /* 6EEC4 80160AC4 48D0030C */  jal        func_800F4120
    /* 6EEC8 80160AC8 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EECC 80160ACC 13004014 */  bnez       $v0, .L80160B1C
    /* 6EED0 80160AD0 00000000 */   nop
    /* 6EED4 80160AD4 C7E5030C */  jal        func_800F971C
    /* 6EED8 80160AD8 00000000 */   nop
    /* 6EEDC 80160ADC 62E0030C */  jal        func_800F8188
    /* 6EEE0 80160AE0 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6EEE4 80160AE4 59D9030C */  jal        func_800F6564
    /* 6EEE8 80160AE8 26270424 */   addiu     $a0, $zero, 0x2726
    /* 6EEEC 80160AEC 92D0030C */  jal        func_800F4248
    /* 6EEF0 80160AF0 40000424 */   addiu     $a0, $zero, 0x40
    /* 6EEF4 80160AF4 48D0030C */  jal        func_800F4120
    /* 6EEF8 80160AF8 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EEFC 80160AFC 1F004014 */  bnez       $v0, .L80160B7C
    /* 6EF00 80160B00 00000000 */   nop
    /* 6EF04 80160B04 53D9030C */  jal        func_800F654C
    /* 6EF08 80160B08 84000424 */   addiu     $a0, $zero, 0x84
    /* 6EF0C 80160B0C 62E0030C */  jal        func_800F8188
    /* 6EF10 80160B10 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6EF14 80160B14 DF820508 */  j          .L80160B7C
    /* 6EF18 80160B18 00000000 */   nop
  .L80160B1C:
    /* 6EF1C 80160B1C 59D9030C */  jal        func_800F6564
    /* 6EF20 80160B20 25270424 */   addiu     $a0, $zero, 0x2725
    /* 6EF24 80160B24 A0D0030C */  jal        func_800F4280
    /* 6EF28 80160B28 A2280424 */   addiu     $a0, $zero, 0x28A2
    /* 6EF2C 80160B2C 48D0030C */  jal        func_800F4120
    /* 6EF30 80160B30 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EF34 80160B34 11004014 */  bnez       $v0, .L80160B7C
    /* 6EF38 80160B38 00000000 */   nop
    /* 6EF3C 80160B3C 53D9030C */  jal        func_800F654C
    /* 6EF40 80160B40 01000424 */   addiu     $a0, $zero, 0x1
    /* 6EF44 80160B44 62E0030C */  jal        func_800F8188
    /* 6EF48 80160B48 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6EF4C 80160B4C 59D9030C */  jal        func_800F6564
    /* 6EF50 80160B50 25270424 */   addiu     $a0, $zero, 0x2725
    /* 6EF54 80160B54 92D0030C */  jal        func_800F4248
    /* 6EF58 80160B58 40000424 */   addiu     $a0, $zero, 0x40
    /* 6EF5C 80160B5C 48D0030C */  jal        func_800F4120
    /* 6EF60 80160B60 02000424 */   addiu     $a0, $zero, 0x2
    /* 6EF64 80160B64 05004014 */  bnez       $v0, .L80160B7C
    /* 6EF68 80160B68 00000000 */   nop
    /* 6EF6C 80160B6C 53D9030C */  jal        func_800F654C
    /* 6EF70 80160B70 82000424 */   addiu     $a0, $zero, 0x82
    /* 6EF74 80160B74 62E0030C */  jal        func_800F8188
    /* 6EF78 80160B78 FE380424 */   addiu     $a0, $zero, 0x38FE
  .L80160B7C:
    /* 6EF7C 80160B7C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EF80 80160B80 00000000 */  nop
    /* 6EF84 80160B84 0800E003 */  jr         $ra
    /* 6EF88 80160B88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160AAC
