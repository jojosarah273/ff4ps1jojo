nonmatching func_8018F604, 0x28

glabel func_8018F604
    /* 9DA04 8018F604 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9DA08 8018F608 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9DA0C 8018F60C 00F0043C */  lui        $a0, (0xF0000003 >> 16)
    /* 9DA10 8018F610 03008434 */  ori        $a0, $a0, (0xF0000003 & 0xFFFF)
    /* 9DA14 8018F614 925D060C */  jal        func_80197648
    /* 9DA18 8018F618 20000524 */   addiu     $a1, $zero, 0x20
    /* 9DA1C 8018F61C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9DA20 8018F620 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9DA24 8018F624 0800E003 */  jr         $ra
    /* 9DA28 8018F628 00000000 */   nop
endlabel func_8018F604
