nonmatching func_800FFB5C, 0x150

glabel func_800FFB5C
    /* DF5C 800FFB5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* DF60 800FFB60 1000BFAF */  sw         $ra, 0x10($sp)
    /* DF64 800FFB64 EEE3030C */  jal        func_800F8FB8
    /* DF68 800FFB68 C2000424 */   addiu     $a0, $zero, 0xC2
    /* DF6C 800FFB6C 59D9030C */  jal        func_800F6564
    /* DF70 800FFB70 04170424 */   addiu     $a0, $zero, 0x1704
    /* DF74 800FFB74 0DD9030C */  jal        func_800F6434
    /* DF78 800FFB78 02020424 */   addiu     $a0, $zero, 0x202
    /* DF7C 800FFB7C 47004014 */  bnez       $v0, .L800FFC9C
    /* DF80 800FFB80 00000000 */   nop
    /* DF84 800FFB84 77DC030C */  jal        func_800F71DC
    /* DF88 800FFB88 21200000 */   addu      $a0, $zero, $zero
  .L800FFB8C:
    /* DF8C 800FFB8C DADA030C */  jal        func_800F6B68
    /* DF90 800FFB90 00100424 */   addiu     $a0, $zero, 0x1000
    /* DF94 800FFB94 0DD9030C */  jal        func_800F6434
    /* DF98 800FFB98 02000424 */   addiu     $a0, $zero, 0x2
    /* DF9C 800FFB9C 27004014 */  bnez       $v0, .L800FFC3C
    /* DFA0 800FFBA0 00000000 */   nop
    /* DFA4 800FFBA4 DADA030C */  jal        func_800F6B68
    /* DFA8 800FFBA8 03100424 */   addiu     $a0, $zero, 0x1003
    /* DFAC 800FFBAC 92D0030C */  jal        func_800F4248
    /* DFB0 800FFBB0 01000424 */   addiu     $a0, $zero, 0x1
    /* DFB4 800FFBB4 48D0030C */  jal        func_800F4120
    /* DFB8 800FFBB8 02000424 */   addiu     $a0, $zero, 0x2
    /* DFBC 800FFBBC 1F004014 */  bnez       $v0, .L800FFC3C
    /* DFC0 800FFBC0 00000000 */   nop
    /* DFC4 800FFBC4 AFD8030C */  jal        func_800F62BC
    /* DFC8 800FFBC8 C2000424 */   addiu     $a0, $zero, 0xC2
    /* DFCC 800FFBCC 91E5030C */  jal        func_800F9644
    /* DFD0 800FFBD0 20000424 */   addiu     $a0, $zero, 0x20
    /* DFD4 800FFBD4 F8DA030C */  jal        func_800F6BE0
    /* DFD8 800FFBD8 07100424 */   addiu     $a0, $zero, 0x1007
    /* DFDC 800FFBDC 3BD9030C */  jal        func_800F64EC
    /* DFE0 800FFBE0 02000424 */   addiu     $a0, $zero, 0x2
    /* DFE4 800FFBE4 11004014 */  bnez       $v0, .L800FFC2C
    /* DFE8 800FFBE8 00000000 */   nop
    /* DFEC 800FFBEC 20D5030C */  jal        func_800F5480
    /* DFF0 800FFBF0 00000000 */   nop
    /* DFF4 800FFBF4 34E0030C */  jal        func_800F80D0
    /* DFF8 800FFBF8 01000424 */   addiu     $a0, $zero, 0x1
    /* DFFC 800FFBFC F7E1030C */  jal        func_800F87DC
    /* E000 800FFC00 07100424 */   addiu     $a0, $zero, 0x1007
    /* E004 800FFC04 70D5030C */  jal        func_800F55C0
    /* E008 800FFC08 01000424 */   addiu     $a0, $zero, 0x1
    /* E00C 800FFC0C F0D4030C */  jal        func_800F53C0
    /* E010 800FFC10 00000000 */   nop
    /* E014 800FFC14 05004014 */  bnez       $v0, .L800FFC2C
    /* E018 800FFC18 00000000 */   nop
    /* E01C 800FFC1C 56D9030C */  jal        func_800F6558
    /* E020 800FFC20 01000424 */   addiu     $a0, $zero, 0x1
    /* E024 800FFC24 F7E1030C */  jal        func_800F87DC
    /* E028 800FFC28 07100424 */   addiu     $a0, $zero, 0x1007
  .L800FFC2C:
    /* E02C 800FFC2C 56D9030C */  jal        func_800F6558
    /* E030 800FFC30 21200000 */   addu      $a0, $zero, $zero
    /* E034 800FFC34 98E5030C */  jal        func_800F9660
    /* E038 800FFC38 20000424 */   addiu     $a0, $zero, 0x20
  .L800FFC3C:
    /* E03C 800FFC3C 7E5F040C */  jal        func_80117DF8
    /* E040 800FFC40 00000000 */   nop
    /* E044 800FFC44 56D6030C */  jal        func_800F5958
    /* E048 800FFC48 40010424 */   addiu     $a0, $zero, 0x140
    /* E04C 800FFC4C F5D4030C */  jal        func_800F53D4
    /* E050 800FFC50 00000000 */   nop
    /* E054 800FFC54 CDFF4010 */  beqz       $v0, .L800FFB8C
    /* E058 800FFC58 00000000 */   nop
    /* E05C 800FFC5C 8CD9030C */  jal        func_800F6630
    /* E060 800FFC60 C2000424 */   addiu     $a0, $zero, 0xC2
    /* E064 800FFC64 0DD9030C */  jal        func_800F6434
    /* E068 800FFC68 02000424 */   addiu     $a0, $zero, 0x2
    /* E06C 800FFC6C 0B004014 */  bnez       $v0, .L800FFC9C
    /* E070 800FFC70 00000000 */   nop
    /* E074 800FFC74 8CD9030C */  jal        func_800F6630
    /* E078 800FFC78 B1000424 */   addiu     $a0, $zero, 0xB1
    /* E07C 800FFC7C 0DD9030C */  jal        func_800F6434
    /* E080 800FFC80 02020424 */   addiu     $a0, $zero, 0x202
    /* E084 800FFC84 05004014 */  bnez       $v0, .L800FFC9C
    /* E088 800FFC88 00000000 */   nop
    /* E08C 800FFC8C 53D9030C */  jal        func_800F654C
    /* E090 800FFC90 7A000424 */   addiu     $a0, $zero, 0x7A
    /* E094 800FFC94 01F6030C */  jal        func_800FD804
    /* E098 800FFC98 00000000 */   nop
  .L800FFC9C:
    /* E09C 800FFC9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* E0A0 800FFCA0 00000000 */  nop
    /* E0A4 800FFCA4 0800E003 */  jr         $ra
    /* E0A8 800FFCA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FFB5C
