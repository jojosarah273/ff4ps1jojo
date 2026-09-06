nonmatching func_801530E0, 0x2C

glabel func_801530E0
    /* 614E0 801530E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 614E4 801530E4 1300043C */  lui        $a0, (0x13FEFE >> 16)
    /* 614E8 801530E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 614EC 801530EC 9FD2030C */  jal        func_800F4A7C
    /* 614F0 801530F0 FEFE8434 */   ori       $a0, $a0, (0x13FEFE & 0xFFFF)
    /* 614F4 801530F4 3AD0030C */  jal        func_800F40E8
    /* 614F8 801530F8 00000000 */   nop
    /* 614FC 801530FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61500 80153100 00000000 */  nop
    /* 61504 80153104 0800E003 */  jr         $ra
    /* 61508 80153108 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801530E0
