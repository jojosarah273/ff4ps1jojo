nonmatching func_801196B0, 0x48

glabel func_801196B0
    /* 27AB0 801196B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27AB4 801196B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27AB8 801196B8 8CD9030C */  jal        func_800F6630
    /* 27ABC 801196BC 30000424 */   addiu     $a0, $zero, 0x30
    /* 27AC0 801196C0 62E0030C */  jal        func_800F8188
    /* 27AC4 801196C4 F8080424 */   addiu     $a0, $zero, 0x8F8
    /* 27AC8 801196C8 8CD9030C */  jal        func_800F6630
    /* 27ACC 801196CC 31000424 */   addiu     $a0, $zero, 0x31
    /* 27AD0 801196D0 62E0030C */  jal        func_800F8188
    /* 27AD4 801196D4 F9080424 */   addiu     $a0, $zero, 0x8F9
    /* 27AD8 801196D8 8CD9030C */  jal        func_800F6630
    /* 27ADC 801196DC 32000424 */   addiu     $a0, $zero, 0x32
    /* 27AE0 801196E0 62E0030C */  jal        func_800F8188
    /* 27AE4 801196E4 FA080424 */   addiu     $a0, $zero, 0x8FA
    /* 27AE8 801196E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27AEC 801196EC 00000000 */  nop
    /* 27AF0 801196F0 0800E003 */  jr         $ra
    /* 27AF4 801196F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801196B0
