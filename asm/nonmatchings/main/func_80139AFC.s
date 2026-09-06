nonmatching func_80139AFC, 0x48

glabel func_80139AFC
    /* 47EFC 80139AFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 47F00 80139B00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 47F04 80139B04 91E5030C */  jal        func_800F9644
    /* 47F08 80139B08 20000424 */   addiu     $a0, $zero, 0x20
    /* 47F0C 80139B0C 56D9030C */  jal        func_800F6558
    /* 47F10 80139B10 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 47F14 80139B14 77DC030C */  jal        func_800F71DC
    /* 47F18 80139B18 7DFC0434 */   ori       $a0, $zero, 0xFC7D
    /* 47F1C 80139B1C 40DD030C */  jal        func_800F7500
    /* 47F20 80139B20 80040424 */   addiu     $a0, $zero, 0x480
    /* 47F24 80139B24 59CF030C */  jal        func_800F3D64
    /* 47F28 80139B28 7E1E0424 */   addiu     $a0, $zero, 0x1E7E
    /* 47F2C 80139B2C 98E5030C */  jal        func_800F9660
    /* 47F30 80139B30 20000424 */   addiu     $a0, $zero, 0x20
    /* 47F34 80139B34 1000BF8F */  lw         $ra, 0x10($sp)
    /* 47F38 80139B38 00000000 */  nop
    /* 47F3C 80139B3C 0800E003 */  jr         $ra
    /* 47F40 80139B40 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80139AFC
