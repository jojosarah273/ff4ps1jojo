nonmatching func_80102FF8, 0x38

glabel func_80102FF8
    /* 113F8 80102FF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 113FC 80102FFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 11400 80103000 53D9030C */  jal        func_800F654C
    /* 11404 80103004 07000424 */   addiu     $a0, $zero, 0x7
    /* 11408 80103008 62E0030C */  jal        func_800F8188
    /* 1140C 8010300C 04170424 */   addiu     $a0, $zero, 0x1704
    /* 11410 80103010 53D9030C */  jal        func_800F654C
    /* 11414 80103014 01000424 */   addiu     $a0, $zero, 0x1
    /* 11418 80103018 93E0030C */  jal        func_800F824C
    /* 1141C 8010301C AC000424 */   addiu     $a0, $zero, 0xAC
    /* 11420 80103020 1000BF8F */  lw         $ra, 0x10($sp)
    /* 11424 80103024 00000000 */  nop
    /* 11428 80103028 0800E003 */  jr         $ra
    /* 1142C 8010302C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80102FF8
