nonmatching func_8018C7C8, 0x30

glabel func_8018C7C8
    /* 9ABC8 8018C7C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9ABCC 8018C7CC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9ABD0 8018C7D0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 9ABD4 8018C7D4 3A39060C */  jal        func_8018E4E8
    /* 9ABD8 8018C7D8 21808000 */   addu      $s0, $a0, $zero
    /* 9ABDC 8018C7DC 0000058E */  lw         $a1, 0x0($s0)
    /* 9ABE0 8018C7E0 8231060C */  jal        func_8018C608
    /* 9ABE4 8018C7E4 01000424 */   addiu     $a0, $zero, 0x1
    /* 9ABE8 8018C7E8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9ABEC 8018C7EC 1000B08F */  lw         $s0, 0x10($sp)
    /* 9ABF0 8018C7F0 0800E003 */  jr         $ra
    /* 9ABF4 8018C7F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018C7C8
