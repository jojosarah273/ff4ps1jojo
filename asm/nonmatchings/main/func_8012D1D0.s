nonmatching func_8012D1D0, 0x34

glabel func_8012D1D0
    /* 3B5D0 8012D1D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B5D4 8012D1D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B5D8 8012D1D8 3489040C */  jal        func_801224D0
    /* 3B5DC 8012D1DC 00000000 */   nop
    /* 3B5E0 8012D1E0 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 3B5E4 8012D1E4 1ADB030C */  jal        func_800F6C68
    /* 3B5E8 8012D1E8 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 3B5EC 8012D1EC 81B4040C */  jal        func_8012D204
    /* 3B5F0 8012D1F0 00000000 */   nop
    /* 3B5F4 8012D1F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B5F8 8012D1F8 00000000 */  nop
    /* 3B5FC 8012D1FC 0800E003 */  jr         $ra
    /* 3B600 8012D200 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012D1D0
