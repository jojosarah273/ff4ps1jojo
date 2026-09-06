nonmatching func_8012B100, 0x68

glabel func_8012B100
    /* 39500 8012B100 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 39504 8012B104 1000BFAF */  sw         $ra, 0x10($sp)
    /* 39508 8012B108 77DC030C */  jal        func_800F71DC
    /* 3950C 8012B10C 04000424 */   addiu     $a0, $zero, 0x4
  .L8012B110:
    /* 39510 8012B110 53D9030C */  jal        func_800F654C
    /* 39514 8012B114 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 39518 8012B118 58E2030C */  jal        func_800F8960
    /* 3951C 8012B11C 21200000 */   addu      $a0, $zero, $zero
    /* 39520 8012B120 EFD8030C */  jal        func_800F63BC
    /* 39524 8012B124 00000000 */   nop
    /* 39528 8012B128 53D9030C */  jal        func_800F654C
    /* 3952C 8012B12C F0000424 */   addiu     $a0, $zero, 0xF0
    /* 39530 8012B130 58E2030C */  jal        func_800F8960
    /* 39534 8012B134 21200000 */   addu      $a0, $zero, $zero
    /* 39538 8012B138 EFD8030C */  jal        func_800F63BC
    /* 3953C 8012B13C 00000000 */   nop
    /* 39540 8012B140 92D7030C */  jal        func_800F5E48
    /* 39544 8012B144 00000000 */   nop
    /* 39548 8012B148 19D7030C */  jal        func_800F5C64
    /* 3954C 8012B14C 02020424 */   addiu     $a0, $zero, 0x202
    /* 39550 8012B150 EFFF4014 */  bnez       $v0, .L8012B110
    /* 39554 8012B154 00000000 */   nop
    /* 39558 8012B158 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3955C 8012B15C 00000000 */  nop
    /* 39560 8012B160 0800E003 */  jr         $ra
    /* 39564 8012B164 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012B100
