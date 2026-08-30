nonmatching func_80162468, 0x28

glabel func_80162468
    /* 70868 80162468 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7086C 8016246C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70870 80162470 EEE3030C */  jal        func_800F8FB8
    /* 70874 80162474 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 70878 80162478 7E8B050C */  jal        func_80162DF8
    /* 7087C 8016247C 00000000 */   nop
    /* 70880 80162480 1000BF8F */  lw         $ra, 0x10($sp)
    /* 70884 80162484 00000000 */  nop
    /* 70888 80162488 0800E003 */  jr         $ra
    /* 7088C 8016248C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80162468
