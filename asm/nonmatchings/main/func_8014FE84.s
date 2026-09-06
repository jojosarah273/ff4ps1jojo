nonmatching func_8014FE84, 0x44

glabel func_8014FE84
    /* 5E284 8014FE84 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5E288 8014FE88 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5E28C 8014FE8C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5E290 8014FE90 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5E294 8014FE94 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5E298 8014FE98 1600043C */  lui        $a0, (0x16FCEB >> 16)
    /* 5E29C 8014FE9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5E2A0 8014FEA0 00004394 */  lhu        $v1, 0x0($v0)
    /* 5E2A4 8014FEA4 EBFC8434 */  ori        $a0, $a0, (0x16FCEB & 0xFFFF)
    /* 5E2A8 8014FEA8 1ADB030C */  jal        func_800F6C68
    /* 5E2AC 8014FEAC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5E2B0 8014FEB0 B23F050C */  jal        func_8014FEC8
    /* 5E2B4 8014FEB4 00000000 */   nop
    /* 5E2B8 8014FEB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5E2BC 8014FEBC 00000000 */  nop
    /* 5E2C0 8014FEC0 0800E003 */  jr         $ra
    /* 5E2C4 8014FEC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014FE84
