nonmatching func_80138730, 0x58

glabel func_80138730
    /* 46B30 80138730 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 46B34 80138734 1000BFAF */  sw         $ra, 0x10($sp)
    /* 46B38 80138738 53D9030C */  jal        func_800F654C
    /* 46B3C 8013873C 01000424 */   addiu     $a0, $zero, 0x1
    /* 46B40 80138740 62E0030C */  jal        func_800F8188
    /* 46B44 80138744 FB170424 */   addiu     $a0, $zero, 0x17FB
    /* 46B48 80138748 91E5030C */  jal        func_800F9644
    /* 46B4C 8013874C 20000424 */   addiu     $a0, $zero, 0x20
    /* 46B50 80138750 56D9030C */  jal        func_800F6558
    /* 46B54 80138754 FF070424 */   addiu     $a0, $zero, 0x7FF
    /* 46B58 80138758 77DC030C */  jal        func_800F71DC
    /* 46B5C 8013875C 00100424 */   addiu     $a0, $zero, 0x1000
    /* 46B60 80138760 40DD030C */  jal        func_800F7500
    /* 46B64 80138764 00F60434 */   ori       $a0, $zero, 0xF600
    /* 46B68 80138768 59CF030C */  jal        func_800F3D64
    /* 46B6C 8013876C 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 46B70 80138770 98E5030C */  jal        func_800F9660
    /* 46B74 80138774 20000424 */   addiu     $a0, $zero, 0x20
    /* 46B78 80138778 1000BF8F */  lw         $ra, 0x10($sp)
    /* 46B7C 8013877C 00000000 */  nop
    /* 46B80 80138780 0800E003 */  jr         $ra
    /* 46B84 80138784 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80138730
