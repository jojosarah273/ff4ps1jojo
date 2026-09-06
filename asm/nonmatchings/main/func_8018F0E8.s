nonmatching func_8018F0E8, 0x54

glabel func_8018F0E8
    /* 9D4E8 8018F0E8 A0000A24 */  addiu      $t2, $zero, 0xA0
    /* 9D4EC 8018F0EC 08004001 */  jr         $t2
    /* 9D4F0 8018F0F0 AB000924 */   addiu     $t1, $zero, 0xAB
    /* 9D4F4 8018F0F4 00000000 */  nop
    /* 9D4F8 8018F0F8 A0000A24 */  addiu      $t2, $zero, 0xA0
    /* 9D4FC 8018F0FC 08004001 */  jr         $t2
    /* 9D500 8018F100 AC000924 */   addiu     $t1, $zero, 0xAC
    /* 9D504 8018F104 00000000 */  nop
    /* 9D508 8018F108 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9D50C 8018F10C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9D510 8018F110 1400BFAF */  sw         $ra, 0x14($sp)
    /* 9D514 8018F114 563C060C */  jal        func_8018F158
    /* 9D518 8018F118 21808000 */   addu      $s0, $a0, $zero
    /* 9D51C 8018F11C 21200002 */  addu       $a0, $s0, $zero
    /* 9D520 8018F120 3F000524 */  addiu      $a1, $zero, 0x3F
    /* 9D524 8018F124 523C060C */  jal        func_8018F148
    /* 9D528 8018F128 21300000 */   addu      $a2, $zero, $zero
    /* 9D52C 8018F12C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9D530 8018F130 1000B08F */  lw         $s0, 0x10($sp)
    /* 9D534 8018F134 0800E003 */  jr         $ra
    /* 9D538 8018F138 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018F0E8
    /* 9D53C 8018F13C 00000000 */  nop
    /* 9D540 8018F140 00000000 */  nop
    /* 9D544 8018F144 00000000 */  nop
