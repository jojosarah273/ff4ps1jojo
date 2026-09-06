nonmatching func_8018F478, 0x34

glabel func_8018F478
    /* 9D878 8018F478 80DF0234 */  ori        $v0, $zero, 0xDF80
    /* 9D87C 8018F47C 19800A3C */  lui        $t2, %hi(func_8018F2DC)
    /* 9D880 8018F480 DCF24A25 */  addiu      $t2, $t2, %lo(func_8018F2DC)
    /* 9D884 8018F484 1980093C */  lui        $t1, %hi(func_8018F34C)
    /* 9D888 8018F488 4CF32925 */  addiu      $t1, $t1, %lo(func_8018F34C)
  .L8018F48C:
    /* 9D88C 8018F48C 0000438D */  lw         $v1, 0x0($t2)
    /* 9D890 8018F490 00000000 */  nop
    /* 9D894 8018F494 000043AC */  sw         $v1, 0x0($v0)
    /* 9D898 8018F498 04004A25 */  addiu      $t2, $t2, 0x4
    /* 9D89C 8018F49C FBFF4915 */  bne        $t2, $t1, .L8018F48C
    /* 9D8A0 8018F4A0 04004224 */   addiu     $v0, $v0, 0x4
    /* 9D8A4 8018F4A4 0800E003 */  jr         $ra
    /* 9D8A8 8018F4A8 00000000 */   nop
endlabel func_8018F478
    /* 9D8AC 8018F4AC 00000000 */  nop
    /* 9D8B0 8018F4B0 00000000 */  nop
    /* 9D8B4 8018F4B4 00000000 */  nop
