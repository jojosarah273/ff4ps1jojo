nonmatching func_8010FB58, 0x150

glabel func_8010FB58
    /* 1DF58 8010FB58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1DF5C 8010FB5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1DF60 8010FB60 77DC030C */  jal        func_800F71DC
    /* 1DF64 8010FB64 30000424 */   addiu     $a0, $zero, 0x30
    /* 1DF68 8010FB68 5BE3030C */  jal        func_800F8D6C
    /* 1DF6C 8010FB6C EF000424 */   addiu     $a0, $zero, 0xEF
    /* 1DF70 8010FB70 77DC030C */  jal        func_800F71DC
    /* 1DF74 8010FB74 B0000424 */   addiu     $a0, $zero, 0xB0
    /* 1DF78 8010FB78 5BE3030C */  jal        func_800F8D6C
    /* 1DF7C 8010FB7C F1000424 */   addiu     $a0, $zero, 0xF1
    /* 1DF80 8010FB80 77DC030C */  jal        func_800F71DC
    /* 1DF84 8010FB84 00010424 */   addiu     $a0, $zero, 0x100
    /* 1DF88 8010FB88 5BE3030C */  jal        func_800F8D6C
    /* 1DF8C 8010FB8C F3000424 */   addiu     $a0, $zero, 0xF3
    /* 1DF90 8010FB90 77DC030C */  jal        func_800F71DC
    /* 1DF94 8010FB94 E0FF0434 */   ori       $a0, $zero, 0xFFE0
    /* 1DF98 8010FB98 5BE3030C */  jal        func_800F8D6C
    /* 1DF9C 8010FB9C F5000424 */   addiu     $a0, $zero, 0xF5
    /* 1DFA0 8010FBA0 2A3F040C */  jal        func_8010FCA8
    /* 1DFA4 8010FBA4 00000000 */   nop
    /* 1DFA8 8010FBA8 77DC030C */  jal        func_800F71DC
    /* 1DFAC 8010FBAC C0010424 */   addiu     $a0, $zero, 0x1C0
    /* 1DFB0 8010FBB0 5BE3030C */  jal        func_800F8D6C
    /* 1DFB4 8010FBB4 89000424 */   addiu     $a0, $zero, 0x89
  .L8010FBB8:
    /* 1DFB8 8010FBB8 DEF9030C */  jal        func_800FE778
    /* 1DFBC 8010FBBC 00000000 */   nop
    /* 1DFC0 8010FBC0 1CFA030C */  jal        func_800FE870
    /* 1DFC4 8010FBC4 00000000 */   nop
    /* 1DFC8 8010FBC8 9CDC030C */  jal        func_800F7270
    /* 1DFCC 8010FBCC 89000424 */   addiu     $a0, $zero, 0x89
    /* 1DFD0 8010FBD0 56D6030C */  jal        func_800F5958
    /* 1DFD4 8010FBD4 40010424 */   addiu     $a0, $zero, 0x140
    /* 1DFD8 8010FBD8 F0D4030C */  jal        func_800F53C0
    /* 1DFDC 8010FBDC 00000000 */   nop
    /* 1DFE0 8010FBE0 11004014 */  bnez       $v0, .L8010FC28
    /* 1DFE4 8010FBE4 00000000 */   nop
    /* 1DFE8 8010FBE8 8CD9030C */  jal        func_800F6630
    /* 1DFEC 8010FBEC 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1DFF0 8010FBF0 92D0030C */  jal        func_800F4248
    /* 1DFF4 8010FBF4 03000424 */   addiu     $a0, $zero, 0x3
    /* 1DFF8 8010FBF8 48D0030C */  jal        func_800F4120
    /* 1DFFC 8010FBFC 02020424 */   addiu     $a0, $zero, 0x202
    /* 1E000 8010FC00 17004014 */  bnez       $v0, .L8010FC60
    /* 1E004 8010FC04 00000000 */   nop
    /* 1E008 8010FC08 9CDC030C */  jal        func_800F7270
    /* 1E00C 8010FC0C F3000424 */   addiu     $a0, $zero, 0xF3
    /* 1E010 8010FC10 92D7030C */  jal        func_800F5E48
    /* 1E014 8010FC14 00000000 */   nop
    /* 1E018 8010FC18 5BE3030C */  jal        func_800F8D6C
    /* 1E01C 8010FC1C F3000424 */   addiu     $a0, $zero, 0xF3
    /* 1E020 8010FC20 183F0408 */  j          .L8010FC60
    /* 1E024 8010FC24 00000000 */   nop
  .L8010FC28:
    /* 1E028 8010FC28 4B57040C */  jal        func_80115D2C
    /* 1E02C 8010FC2C 00000000 */   nop
    /* 1E030 8010FC30 9CDC030C */  jal        func_800F7270
    /* 1E034 8010FC34 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E038 8010FC38 56D6030C */  jal        func_800F5958
    /* 1E03C 8010FC3C B8010424 */   addiu     $a0, $zero, 0x1B8
    /* 1E040 8010FC40 F5D4030C */  jal        func_800F53D4
    /* 1E044 8010FC44 00000000 */   nop
    /* 1E048 8010FC48 05004010 */  beqz       $v0, .L8010FC60
    /* 1E04C 8010FC4C 00000000 */   nop
    /* 1E050 8010FC50 53D9030C */  jal        func_800F654C
    /* 1E054 8010FC54 23000424 */   addiu     $a0, $zero, 0x23
    /* 1E058 8010FC58 01F6030C */  jal        func_800FD804
    /* 1E05C 8010FC5C 00000000 */   nop
  .L8010FC60:
    /* 1E060 8010FC60 1D41040C */  jal        func_80110474
    /* 1E064 8010FC64 00000000 */   nop
    /* 1E068 8010FC68 9CDC030C */  jal        func_800F7270
    /* 1E06C 8010FC6C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E070 8010FC70 92D7030C */  jal        func_800F5E48
    /* 1E074 8010FC74 00000000 */   nop
    /* 1E078 8010FC78 5BE3030C */  jal        func_800F8D6C
    /* 1E07C 8010FC7C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E080 8010FC80 19D7030C */  jal        func_800F5C64
    /* 1E084 8010FC84 02020424 */   addiu     $a0, $zero, 0x202
    /* 1E088 8010FC88 CBFF4014 */  bnez       $v0, .L8010FBB8
    /* 1E08C 8010FC8C 00000000 */   nop
    /* 1E090 8010FC90 977A040C */  jal        func_8011EA5C
    /* 1E094 8010FC94 00000000 */   nop
    /* 1E098 8010FC98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1E09C 8010FC9C 00000000 */  nop
    /* 1E0A0 8010FCA0 0800E003 */  jr         $ra
    /* 1E0A4 8010FCA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010FB58
