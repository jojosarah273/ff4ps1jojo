nonmatching func_80177178, 0x34

glabel func_80177178
    /* 85578 80177178 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8557C 8017717C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 85580 80177180 F5DC050C */  jal        func_801773D4
    /* 85584 80177184 00000000 */   nop
    /* 85588 80177188 1E00043C */  lui        $a0, (0x1EFD66 >> 16)
    /* 8558C 8017718C 1ADB030C */  jal        func_800F6C68
    /* 85590 80177190 66FD8434 */   ori       $a0, $a0, (0x1EFD66 & 0xFFFF)
    /* 85594 80177194 9388040C */  jal        func_8012224C
    /* 85598 80177198 00000000 */   nop
    /* 8559C 8017719C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 855A0 801771A0 00000000 */  nop
    /* 855A4 801771A4 0800E003 */  jr         $ra
    /* 855A8 801771A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80177178
