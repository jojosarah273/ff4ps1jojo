nonmatching func_801690AC, 0x4C

glabel func_801690AC
    /* 774AC 801690AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 774B0 801690B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 774B4 801690B4 9BE4030C */  jal        func_800F926C
    /* 774B8 801690B8 00000000 */   nop
    /* 774BC 801690BC C7E5030C */  jal        func_800F971C
    /* 774C0 801690C0 00000000 */   nop
    /* 774C4 801690C4 80E4030C */  jal        func_800F9200
    /* 774C8 801690C8 00000000 */   nop
    /* 774CC 801690CC 12E5030C */  jal        func_800F9448
    /* 774D0 801690D0 00000000 */   nop
    /* 774D4 801690D4 0E80043C */  lui        $a0, (0x800E1150 >> 16)
    /* 774D8 801690D8 70FD050C */  jal        func_8017F5C0
    /* 774DC 801690DC 50118434 */   ori       $a0, $a0, (0x800E1150 & 0xFFFF)
    /* 774E0 801690E0 12E5030C */  jal        func_800F9448
    /* 774E4 801690E4 00000000 */   nop
    /* 774E8 801690E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 774EC 801690EC 00000000 */  nop
    /* 774F0 801690F0 0800E003 */  jr         $ra
    /* 774F4 801690F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801690AC
