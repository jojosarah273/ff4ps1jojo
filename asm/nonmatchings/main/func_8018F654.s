nonmatching func_8018F654, 0x28

glabel func_8018F654
    /* 9DA54 8018F654 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9DA58 8018F658 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9DA5C 8018F65C 00F0043C */  lui        $a0, (0xF0000003 >> 16)
    /* 9DA60 8018F660 03008434 */  ori        $a0, $a0, (0xF0000003 & 0xFFFF)
    /* 9DA64 8018F664 925D060C */  jal        func_80197648
    /* 9DA68 8018F668 40000524 */   addiu     $a1, $zero, 0x40
    /* 9DA6C 8018F66C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9DA70 8018F670 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9DA74 8018F674 0800E003 */  jr         $ra
    /* 9DA78 8018F678 00000000 */   nop
endlabel func_8018F654
    /* 9DA7C 8018F67C 00000000 */  nop
    /* 9DA80 8018F680 00000000 */  nop
    /* 9DA84 8018F684 00000000 */  nop
