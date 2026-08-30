nonmatching func_80121D64, 0x28

glabel func_80121D64
    /* 30164 80121D64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30168 80121D68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3016C 80121D6C 3987040C */  jal        func_80121CE4
    /* 30170 80121D70 00000000 */   nop
    /* 30174 80121D74 6387040C */  jal        func_80121D8C
    /* 30178 80121D78 00000000 */   nop
    /* 3017C 80121D7C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30180 80121D80 00000000 */  nop
    /* 30184 80121D84 0800E003 */  jr         $ra
    /* 30188 80121D88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121D64
