nonmatching func_80188EF8, 0x30

glabel func_80188EF8
    /* 972F8 80188EF8 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 972FC 80188EFC 1000A4A3 */  sb         $a0, 0x10($sp)
    /* 97300 80188F00 1000A427 */  addiu      $a0, $sp, 0x10
    /* 97304 80188F04 1800BFAF */  sw         $ra, 0x18($sp)
    /* 97308 80188F08 1100A5A3 */  sb         $a1, 0x11($sp)
    /* 9730C 80188F0C 1200A6A3 */  sb         $a2, 0x12($sp)
    /* 97310 80188F10 0E47060C */  jal        func_80191C38
    /* 97314 80188F14 1300A7A3 */   sb        $a3, 0x13($sp)
    /* 97318 80188F18 1800BF8F */  lw         $ra, 0x18($sp)
    /* 9731C 80188F1C 00000000 */  nop
    /* 97320 80188F20 0800E003 */  jr         $ra
    /* 97324 80188F24 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80188EF8
