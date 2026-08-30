nonmatching func_80100978, 0x70

glabel func_80100978
    /* ED78 80100978 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* ED7C 8010097C 1000BFAF */  sw         $ra, 0x10($sp)
    /* ED80 80100980 A602040C */  jal        func_80100A98
    /* ED84 80100984 00000000 */   nop
    /* ED88 80100988 DADA030C */  jal        func_800F6B68
    /* ED8C 8010098C A0120424 */   addiu     $a0, $zero, 0x12A0
    /* ED90 80100990 93E0030C */  jal        func_800F824C
    /* ED94 80100994 07000424 */   addiu     $a0, $zero, 0x7
  .L80100998:
    /* ED98 80100998 0FCF030C */  jal        func_800F3C3C
    /* ED9C 8010099C 07000424 */   addiu     $a0, $zero, 0x7
    /* EDA0 801009A0 AFDD030C */  jal        func_800F76BC
    /* EDA4 801009A4 21204000 */   addu      $a0, $v0, $zero
    /* EDA8 801009A8 BADD030C */  jal        func_800F76E8
    /* EDAC 801009AC 00000000 */   nop
    /* EDB0 801009B0 A8D7030C */  jal        func_800F5EA0
    /* EDB4 801009B4 00000000 */   nop
    /* EDB8 801009B8 19D7030C */  jal        func_800F5C64
    /* EDBC 801009BC 02020424 */   addiu     $a0, $zero, 0x202
    /* EDC0 801009C0 F5FF4014 */  bnez       $v0, .L80100998
    /* EDC4 801009C4 00000000 */   nop
    /* EDC8 801009C8 53D9030C */  jal        func_800F654C
    /* EDCC 801009CC 21200000 */   addu      $a0, $zero, $zero
    /* EDD0 801009D0 02D0030C */  jal        func_800F4008
    /* EDD4 801009D4 21200000 */   addu      $a0, $zero, $zero
    /* EDD8 801009D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* EDDC 801009DC 00000000 */  nop
    /* EDE0 801009E0 0800E003 */  jr         $ra
    /* EDE4 801009E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80100978
