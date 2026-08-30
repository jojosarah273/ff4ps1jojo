nonmatching func_801410B0, 0x50

glabel func_801410B0
    /* 4F4B0 801410B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F4B4 801410B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F4B8 801410B8 90D8030C */  jal        func_800F6240
    /* 4F4BC 801410BC F7380424 */   addiu     $a0, $zero, 0x38F7
    /* 4F4C0 801410C0 90D8030C */  jal        func_800F6240
    /* 4F4C4 801410C4 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F4C8 801410C8 53D9030C */  jal        func_800F654C
    /* 4F4CC 801410CC 04000424 */   addiu     $a0, $zero, 0x4
    /* 4F4D0 801410D0 CD04050C */  jal        func_80141334
    /* 4F4D4 801410D4 00000000 */   nop
    /* 4F4D8 801410D8 90D8030C */  jal        func_800F6240
    /* 4F4DC 801410DC 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F4E0 801410E0 AA03050C */  jal        func_80140EA8
    /* 4F4E4 801410E4 00000000 */   nop
    /* 4F4E8 801410E8 90D8030C */  jal        func_800F6240
    /* 4F4EC 801410EC 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F4F0 801410F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F4F4 801410F4 00000000 */  nop
    /* 4F4F8 801410F8 0800E003 */  jr         $ra
    /* 4F4FC 801410FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801410B0
