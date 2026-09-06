nonmatching func_800FE778, 0x38

glabel func_800FE778
    /* CB78 800FE778 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CB7C 800FE77C 1000BFAF */  sw         $ra, 0x10($sp)
    /* CB80 800FE780 53D9030C */  jal        func_800F654C
    /* CB84 800FE784 01000424 */   addiu     $a0, $zero, 0x1
    /* CB88 800FE788 93E0030C */  jal        func_800F824C
    /* CB8C 800FE78C 7D000424 */   addiu     $a0, $zero, 0x7D
    /* CB90 800FE790 6BDF050C */  jal        func_80177DAC
    /* CB94 800FE794 00000000 */   nop
    /* CB98 800FE798 AFD8030C */  jal        func_800F62BC
    /* CB9C 800FE79C 7D000424 */   addiu     $a0, $zero, 0x7D
    /* CBA0 800FE7A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* CBA4 800FE7A4 00000000 */  nop
    /* CBA8 800FE7A8 0800E003 */  jr         $ra
    /* CBAC 800FE7AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE778
