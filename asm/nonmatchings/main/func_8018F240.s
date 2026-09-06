nonmatching func_8018F240, 0x28

glabel func_8018F240
    /* 9D640 8018F240 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9D644 8018F244 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9D648 8018F248 A23C060C */  jal        func_8018F288
    /* 9D64C 8018F24C 00000000 */   nop
    /* 9D650 8018F250 2E3D060C */  jal        func_8018F4B8
    /* 9D654 8018F254 00000000 */   nop
    /* 9D658 8018F258 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9D65C 8018F25C 21100000 */  addu       $v0, $zero, $zero
    /* 9D660 8018F260 0800E003 */  jr         $ra
    /* 9D664 8018F264 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018F240
