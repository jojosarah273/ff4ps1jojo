nonmatching func_8012D194, 0x3C

glabel func_8012D194
    /* 3B594 8012D194 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B598 8012D198 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B59C 8012D19C 59D9030C */  jal        func_800F6564
    /* 3B5A0 8012D1A0 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 3B5A4 8012D1A4 3489040C */  jal        func_801224D0
    /* 3B5A8 8012D1A8 00000000 */   nop
    /* 3B5AC 8012D1AC 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 3B5B0 8012D1B0 1ADB030C */  jal        func_800F6C68
    /* 3B5B4 8012D1B4 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 3B5B8 8012D1B8 81B4040C */  jal        func_8012D204
    /* 3B5BC 8012D1BC 00000000 */   nop
    /* 3B5C0 8012D1C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B5C4 8012D1C4 00000000 */  nop
    /* 3B5C8 8012D1C8 0800E003 */  jr         $ra
    /* 3B5CC 8012D1CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012D194
