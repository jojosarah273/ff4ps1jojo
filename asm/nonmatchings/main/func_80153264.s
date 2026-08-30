nonmatching func_80153264, 0x38

glabel func_80153264
    /* 61664 80153264 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 61668 80153268 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6166C 8015326C 53D9030C */  jal        func_800F654C
    /* 61670 80153270 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 61674 80153274 62E0030C */  jal        func_800F8188
    /* 61678 80153278 C2330424 */   addiu     $a0, $zero, 0x33C2
    /* 6167C 8015327C 53D9030C */  jal        func_800F654C
    /* 61680 80153280 03000424 */   addiu     $a0, $zero, 0x3
    /* 61684 80153284 62E0030C */  jal        func_800F8188
    /* 61688 80153288 C3330424 */   addiu     $a0, $zero, 0x33C3
    /* 6168C 8015328C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61690 80153290 00000000 */  nop
    /* 61694 80153294 0800E003 */  jr         $ra
    /* 61698 80153298 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80153264
