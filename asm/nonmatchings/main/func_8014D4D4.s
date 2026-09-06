nonmatching func_8014D4D4, 0x2C

glabel func_8014D4D4
    /* 5B8D4 8014D4D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B8D8 8014D4D8 0D00043C */  lui        $a0, (0xDFFDD >> 16)
    /* 5B8DC 8014D4DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B8E0 8014D4E0 1ADB030C */  jal        func_800F6C68
    /* 5B8E4 8014D4E4 DDFF8434 */   ori       $a0, $a0, (0xDFFDD & 0xFFFF)
    /* 5B8E8 8014D4E8 4035050C */  jal        func_8014D500
    /* 5B8EC 8014D4EC 00000000 */   nop
    /* 5B8F0 8014D4F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B8F4 8014D4F4 00000000 */  nop
    /* 5B8F8 8014D4F8 0800E003 */  jr         $ra
    /* 5B8FC 8014D4FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D4D4
