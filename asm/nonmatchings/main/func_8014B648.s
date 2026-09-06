nonmatching func_8014B648, 0x50

glabel func_8014B648
    /* 59A48 8014B648 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59A4C 8014B64C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59A50 8014B650 53D9030C */  jal        func_800F654C
    /* 59A54 8014B654 05000424 */   addiu     $a0, $zero, 0x5
    /* 59A58 8014B658 62E0030C */  jal        func_800F8188
    /* 59A5C 8014B65C D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 59A60 8014B660 53D9030C */  jal        func_800F654C
    /* 59A64 8014B664 08000424 */   addiu     $a0, $zero, 0x8
    /* 59A68 8014B668 62E0030C */  jal        func_800F8188
    /* 59A6C 8014B66C 26F30434 */   ori       $a0, $zero, 0xF326
    /* 59A70 8014B670 632E050C */  jal        func_8014B98C
    /* 59A74 8014B674 00000000 */   nop
    /* 59A78 8014B678 AD10050C */  jal        func_801442B4
    /* 59A7C 8014B67C 00000000 */   nop
    /* 59A80 8014B680 FD54020C */  jal        func_800953F4
    /* 59A84 8014B684 00000000 */   nop
    /* 59A88 8014B688 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59A8C 8014B68C 00000000 */  nop
    /* 59A90 8014B690 0800E003 */  jr         $ra
    /* 59A94 8014B694 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B648
