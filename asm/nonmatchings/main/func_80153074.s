nonmatching func_80153074, 0x24

glabel func_80153074
    /* 61474 80153074 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 61478 80153078 1300043C */  lui        $a0, (0x13FEF6 >> 16)
    /* 6147C 8015307C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 61480 80153080 9FD2030C */  jal        func_800F4A7C
    /* 61484 80153084 F6FE8434 */   ori       $a0, $a0, (0x13FEF6 & 0xFFFF)
    /* 61488 80153088 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6148C 8015308C 00000000 */  nop
    /* 61490 80153090 0800E003 */  jr         $ra
    /* 61494 80153094 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80153074
