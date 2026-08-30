nonmatching func_8013B7C0, 0x44

glabel func_8013B7C0
    /* 49BC0 8013B7C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49BC4 8013B7C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49BC8 8013B7C8 59D9030C */  jal        func_800F6564
    /* 49BCC 8013B7CC C71B0424 */   addiu     $a0, $zero, 0x1BC7
    /* 49BD0 8013B7D0 3489040C */  jal        func_801224D0
    /* 49BD4 8013B7D4 00000000 */   nop
    /* 49BD8 8013B7D8 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 49BDC 8013B7DC 1ADB030C */  jal        func_800F6C68
    /* 49BE0 8013B7E0 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 49BE4 8013B7E4 3489040C */  jal        func_801224D0
    /* 49BE8 8013B7E8 00000000 */   nop
    /* 49BEC 8013B7EC DADA030C */  jal        func_800F6B68
    /* 49BF0 8013B7F0 B9160424 */   addiu     $a0, $zero, 0x16B9
    /* 49BF4 8013B7F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49BF8 8013B7F8 00000000 */  nop
    /* 49BFC 8013B7FC 0800E003 */  jr         $ra
    /* 49C00 8013B800 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B7C0
