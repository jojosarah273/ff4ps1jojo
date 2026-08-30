nonmatching func_801322AC, 0x64

glabel func_801322AC
    /* 406AC 801322AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 406B0 801322B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 406B4 801322B4 59D9030C */  jal        func_800F6564
    /* 406B8 801322B8 041A0424 */   addiu     $a0, $zero, 0x1A04
    /* 406BC 801322BC 92D0030C */  jal        func_800F4248
    /* 406C0 801322C0 40000424 */   addiu     $a0, $zero, 0x40
    /* 406C4 801322C4 48D0030C */  jal        func_800F4120
    /* 406C8 801322C8 02000424 */   addiu     $a0, $zero, 0x2
    /* 406CC 801322CC 07004010 */  beqz       $v0, .L801322EC
    /* 406D0 801322D0 00000000 */   nop
    /* 406D4 801322D4 A5C4040C */  jal        func_80131294
    /* 406D8 801322D8 00000000 */   nop
    /* 406DC 801322DC 6788040C */  jal        func_8012219C
    /* 406E0 801322E0 00000000 */   nop
    /* 406E4 801322E4 C0C80408 */  j          .L80132300
    /* 406E8 801322E8 02000224 */   addiu     $v0, $zero, 0x2
  .L801322EC:
    /* 406EC 801322EC 53D9030C */  jal        func_800F654C
    /* 406F0 801322F0 05000424 */   addiu     $a0, $zero, 0x5
    /* 406F4 801322F4 C4C8040C */  jal        func_80132310
    /* 406F8 801322F8 00000000 */   nop
    /* 406FC 801322FC 01000224 */  addiu      $v0, $zero, 0x1
  .L80132300:
    /* 40700 80132300 1000BF8F */  lw         $ra, 0x10($sp)
    /* 40704 80132304 00000000 */  nop
    /* 40708 80132308 0800E003 */  jr         $ra
    /* 4070C 8013230C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801322AC
