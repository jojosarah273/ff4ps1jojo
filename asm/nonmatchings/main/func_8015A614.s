nonmatching func_8015A614, 0x5C

glabel func_8015A614
    /* 68A14 8015A614 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68A18 8015A618 1000BFAF */  sw         $ra, 0x10($sp)
    /* 68A1C 8015A61C 59D9030C */  jal        func_800F6564
    /* 68A20 8015A620 7B390424 */   addiu     $a0, $zero, 0x397B
    /* 68A24 8015A624 93E0030C */  jal        func_800F824C
    /* 68A28 8015A628 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 68A2C 8015A62C 53D9030C */  jal        func_800F654C
    /* 68A30 8015A630 06000424 */   addiu     $a0, $zero, 0x6
    /* 68A34 8015A634 93E0030C */  jal        func_800F824C
    /* 68A38 8015A638 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 68A3C 8015A63C 0349050C */  jal        func_8015240C
    /* 68A40 8015A640 00000000 */   nop
    /* 68A44 8015A644 9CDC030C */  jal        func_800F7270
    /* 68A48 8015A648 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 68A4C 8015A64C 0F00043C */  lui        $a0, (0xF9680 >> 16)
    /* 68A50 8015A650 1ADB030C */  jal        func_800F6C68
    /* 68A54 8015A654 80968434 */   ori       $a0, $a0, (0xF9680 & 0xFFFF)
    /* 68A58 8015A658 B369050C */  jal        func_8015A6CC
    /* 68A5C 8015A65C 00000000 */   nop
    /* 68A60 8015A660 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68A64 8015A664 00000000 */  nop
    /* 68A68 8015A668 0800E003 */  jr         $ra
    /* 68A6C 8015A66C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A614
