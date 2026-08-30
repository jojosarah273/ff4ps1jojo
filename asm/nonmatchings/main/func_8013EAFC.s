nonmatching func_8013EAFC, 0x30

glabel func_8013EAFC
    /* 4CEFC 8013EAFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4CF00 8013EB00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4CF04 8013EB04 93E0030C */  jal        func_800F824C
    /* 4CF08 8013EB08 27000424 */   addiu     $a0, $zero, 0x27
    /* 4CF0C 8013EB0C EEE3030C */  jal        func_800F8FB8
    /* 4CF10 8013EB10 26000424 */   addiu     $a0, $zero, 0x26
    /* 4CF14 8013EB14 9CDC030C */  jal        func_800F7270
    /* 4CF18 8013EB18 26000424 */   addiu     $a0, $zero, 0x26
    /* 4CF1C 8013EB1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4CF20 8013EB20 00000000 */  nop
    /* 4CF24 8013EB24 0800E003 */  jr         $ra
    /* 4CF28 8013EB28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013EAFC
