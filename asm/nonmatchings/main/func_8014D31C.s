nonmatching func_8014D31C, 0x78

glabel func_8014D31C
    /* 5B71C 8014D31C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B720 8014D320 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B724 8014D324 59D9030C */  jal        func_800F6564
    /* 5B728 8014D328 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5B72C 8014D32C 0DD9030C */  jal        func_800F6434
    /* 5B730 8014D330 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B734 8014D334 05004014 */  bnez       $v0, .L8014D34C
    /* 5B738 8014D338 00000000 */   nop
    /* 5B73C 8014D33C DDE3030C */  jal        func_800F8F74
    /* 5B740 8014D340 83F20434 */   ori       $a0, $zero, 0xF283
    /* 5B744 8014D344 E1340508 */  j          .L8014D384
    /* 5B748 8014D348 00000000 */   nop
  .L8014D34C:
    /* 5B74C 8014D34C 59D9030C */  jal        func_800F6564
    /* 5B750 8014D350 82F20434 */   ori       $a0, $zero, 0xF282
    /* 5B754 8014D354 5DD5030C */  jal        func_800F5574
    /* 5B758 8014D358 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B75C 8014D35C F5D4030C */  jal        func_800F53D4
    /* 5B760 8014D360 00000000 */   nop
    /* 5B764 8014D364 07004010 */  beqz       $v0, .L8014D384
    /* 5B768 8014D368 00000000 */   nop
    /* 5B76C 8014D36C DDE3030C */  jal        func_800F8F74
    /* 5B770 8014D370 82F20434 */   ori       $a0, $zero, 0xF282
    /* 5B774 8014D374 C7E5030C */  jal        func_800F971C
    /* 5B778 8014D378 00000000 */   nop
    /* 5B77C 8014D37C 7266020C */  jal        func_800999C8
    /* 5B780 8014D380 00000000 */   nop
  .L8014D384:
    /* 5B784 8014D384 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B788 8014D388 00000000 */  nop
    /* 5B78C 8014D38C 0800E003 */  jr         $ra
    /* 5B790 8014D390 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D31C
