nonmatching func_8018F62C, 0x28

glabel func_8018F62C
    /* 9DA2C 8018F62C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9DA30 8018F630 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9DA34 8018F634 00F0043C */  lui        $a0, (0xF0000003 >> 16)
    /* 9DA38 8018F638 03008434 */  ori        $a0, $a0, (0xF0000003 & 0xFFFF)
    /* 9DA3C 8018F63C 925D060C */  jal        func_80197648
    /* 9DA40 8018F640 40000524 */   addiu     $a1, $zero, 0x40
    /* 9DA44 8018F644 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9DA48 8018F648 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9DA4C 8018F64C 0800E003 */  jr         $ra
    /* 9DA50 8018F650 00000000 */   nop
endlabel func_8018F62C
