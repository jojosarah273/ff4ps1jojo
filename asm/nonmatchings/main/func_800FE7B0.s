nonmatching func_800FE7B0, 0x28

glabel func_800FE7B0
    /* CBB0 800FE7B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CBB4 800FE7B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* CBB8 800FE7B8 6BDF050C */  jal        func_80177DAC
    /* CBBC 800FE7BC 00000000 */   nop
    /* CBC0 800FE7C0 AFD8030C */  jal        func_800F62BC
    /* CBC4 800FE7C4 7D000424 */   addiu     $a0, $zero, 0x7D
    /* CBC8 800FE7C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* CBCC 800FE7CC 00000000 */  nop
    /* CBD0 800FE7D0 0800E003 */  jr         $ra
    /* CBD4 800FE7D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE7B0
