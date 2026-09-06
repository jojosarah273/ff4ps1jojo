nonmatching func_8018F4B8, 0x70

glabel func_8018F4B8
    /* 9D8B8 8018F4B8 1F80013C */  lui        $at, %hi(D_801F6B00)
    /* 9D8BC 8018F4BC 006B3FAC */  sw         $ra, %lo(D_801F6B00)($at)
    /* 9D8C0 8018F4C0 BA5D060C */  jal        func_801976E8
    /* 9D8C4 8018F4C4 00000000 */   nop
    /* 9D8C8 8018F4C8 56000924 */  addiu      $t1, $zero, 0x56
    /* 9D8CC 8018F4CC B0000A24 */  addiu      $t2, $zero, 0xB0
    /* 9D8D0 8018F4D0 09F84001 */  jalr       $t2
    /* 9D8D4 8018F4D4 00000000 */   nop
    /* 9D8D8 8018F4D8 1800428C */  lw         $v0, 0x18($v0)
    /* 9D8DC 8018F4DC 19800A3C */  lui        $t2, %hi(D_8018F528)
    /* 9D8E0 8018F4E0 28F54A25 */  addiu      $t2, $t2, %lo(D_8018F528)
    /* 9D8E4 8018F4E4 1980093C */  lui        $t1, %hi(D_8018F534)
    /* 9D8E8 8018F4E8 34F52925 */  addiu      $t1, $t1, %lo(D_8018F534)
  .L8018F4EC:
    /* 9D8EC 8018F4EC 0000438D */  lw         $v1, 0x0($t2)
    /* 9D8F0 8018F4F0 00000000 */  nop
    /* 9D8F4 8018F4F4 700043AC */  sw         $v1, 0x70($v0)
    /* 9D8F8 8018F4F8 04004A25 */  addiu      $t2, $t2, 0x4
    /* 9D8FC 8018F4FC FBFF4915 */  bne        $t2, $t1, .L8018F4EC
    /* 9D900 8018F500 04004224 */   addiu     $v0, $v0, 0x4
    /* 9D904 8018F504 825D060C */  jal        func_80197608
    /* 9D908 8018F508 00000000 */   nop
    /* 9D90C 8018F50C BE5D060C */  jal        func_801976F8
    /* 9D910 8018F510 00000000 */   nop
    /* 9D914 8018F514 1F801F3C */  lui        $ra, %hi(D_801F6B00)
    /* 9D918 8018F518 006BFF8F */  lw         $ra, %lo(D_801F6B00)($ra)
    /* 9D91C 8018F51C 00000000 */  nop
    /* 9D920 8018F520 0800E003 */  jr         $ra
    /* 9D924 8018F524 00000000 */   nop
endlabel func_8018F4B8
  alabel D_8018F528
    /* 9D928 8018F528 00000000 */  nop
    /* 9D92C 8018F52C 00000000 */  nop
    /* 9D930 8018F530 00000000 */  nop
  alabel D_8018F534
    /* 9D934 8018F534 00000000 */  nop
