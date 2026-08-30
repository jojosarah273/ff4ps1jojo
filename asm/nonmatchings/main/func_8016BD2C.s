nonmatching func_8016BD2C, 0x4C

glabel func_8016BD2C
    /* 7A12C 8016BD2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A130 8016BD30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A134 8016BD34 9BE4030C */  jal        func_800F926C
    /* 7A138 8016BD38 00000000 */   nop
    /* 7A13C 8016BD3C C7E5030C */  jal        func_800F971C
    /* 7A140 8016BD40 00000000 */   nop
    /* 7A144 8016BD44 80E4030C */  jal        func_800F9200
    /* 7A148 8016BD48 00000000 */   nop
    /* 7A14C 8016BD4C 12E5030C */  jal        func_800F9448
    /* 7A150 8016BD50 00000000 */   nop
    /* 7A154 8016BD54 0D80043C */  lui        $a0, (0x800D4503 >> 16)
    /* 7A158 8016BD58 70FD050C */  jal        func_8017F5C0
    /* 7A15C 8016BD5C 03458434 */   ori       $a0, $a0, (0x800D4503 & 0xFFFF)
    /* 7A160 8016BD60 12E5030C */  jal        func_800F9448
    /* 7A164 8016BD64 00000000 */   nop
    /* 7A168 8016BD68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A16C 8016BD6C 00000000 */  nop
    /* 7A170 8016BD70 0800E003 */  jr         $ra
    /* 7A174 8016BD74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BD2C
