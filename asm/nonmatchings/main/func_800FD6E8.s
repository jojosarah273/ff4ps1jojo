nonmatching func_800FD6E8, 0x30

glabel func_800FD6E8
    /* BAE8 800FD6E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BAEC 800FD6EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* BAF0 800FD6F0 53D9030C */  jal        func_800F654C
    /* BAF4 800FD6F4 85000424 */   addiu     $a0, $zero, 0x85
    /* BAF8 800FD6F8 62E0030C */  jal        func_800F8188
    /* BAFC 800FD6FC 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* BB00 800FD700 4AA4050C */  jal        func_80169128
    /* BB04 800FD704 00000000 */   nop
    /* BB08 800FD708 1000BF8F */  lw         $ra, 0x10($sp)
    /* BB0C 800FD70C 00000000 */  nop
    /* BB10 800FD710 0800E003 */  jr         $ra
    /* BB14 800FD714 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD6E8
