nonmatching func_80119DE4, 0x98

glabel func_80119DE4
    /* 281E4 80119DE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 281E8 80119DE8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 281EC 80119DEC 59D9030C */  jal        func_800F6564
    /* 281F0 80119DF0 00170424 */   addiu     $a0, $zero, 0x1700
    /* 281F4 80119DF4 0DD9030C */  jal        func_800F6434
    /* 281F8 80119DF8 02000424 */   addiu     $a0, $zero, 0x2
    /* 281FC 80119DFC 05004010 */  beqz       $v0, .L80119E14
    /* 28200 80119E00 00000000 */   nop
    /* 28204 80119E04 E40D040C */  jal        func_80103790
    /* 28208 80119E08 00000000 */   nop
    /* 2820C 80119E0C 87670408 */  j          .L80119E1C
    /* 28210 80119E10 00000000 */   nop
  .L80119E14:
    /* 28214 80119E14 350E040C */  jal        func_801038D4
    /* 28218 80119E18 00000000 */   nop
  .L80119E1C:
    /* 2821C 80119E1C EEE3030C */  jal        func_800F8FB8
    /* 28220 80119E20 79000424 */   addiu     $a0, $zero, 0x79
    /* 28224 80119E24 EEE3030C */  jal        func_800F8FB8
    /* 28228 80119E28 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 2822C 80119E2C EEE3030C */  jal        func_800F8FB8
    /* 28230 80119E30 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 28234 80119E34 53D9030C */  jal        func_800F654C
    /* 28238 80119E38 81000424 */   addiu     $a0, $zero, 0x81
    /* 2823C 80119E3C 62E0030C */  jal        func_800F8188
    /* 28240 80119E40 00420424 */   addiu     $a0, $zero, 0x4200
    /* 28244 80119E44 ECF9030C */  jal        func_800FE7B0
    /* 28248 80119E48 00000000 */   nop
    /* 2824C 80119E4C 53D9030C */  jal        func_800F654C
    /* 28250 80119E50 0F000424 */   addiu     $a0, $zero, 0xF
    /* 28254 80119E54 62E0030C */  jal        func_800F8188
    /* 28258 80119E58 00210424 */   addiu     $a0, $zero, 0x2100
    /* 2825C 80119E5C 12D5030C */  jal        func_800F5448
    /* 28260 80119E60 00000000 */   nop
    /* 28264 80119E64 977A040C */  jal        func_8011EA5C
    /* 28268 80119E68 00000000 */   nop
    /* 2826C 80119E6C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 28270 80119E70 00000000 */  nop
    /* 28274 80119E74 0800E003 */  jr         $ra
    /* 28278 80119E78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119DE4
