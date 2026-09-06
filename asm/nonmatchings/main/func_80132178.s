nonmatching func_80132178, 0x3C

glabel func_80132178
    /* 40578 80132178 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4057C 8013217C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40580 80132180 93E0030C */  jal        func_800F824C
    /* 40584 80132184 43000424 */   addiu     $a0, $zero, 0x43
    /* 40588 80132188 9CDC030C */  jal        func_800F7270
    /* 4058C 8013218C 43000424 */   addiu     $a0, $zero, 0x43
    /* 40590 80132190 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 40594 80132194 1ADB030C */  jal        func_800F6C68
    /* 40598 80132198 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 4059C 8013219C AB93040C */  jal        func_80124EAC
    /* 405A0 801321A0 00000000 */   nop
    /* 405A4 801321A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 405A8 801321A8 00000000 */  nop
    /* 405AC 801321AC 0800E003 */  jr         $ra
    /* 405B0 801321B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80132178
