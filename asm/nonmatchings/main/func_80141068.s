nonmatching func_80141068, 0x48

glabel func_80141068
    /* 4F468 80141068 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F46C 8014106C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F470 80141070 90D8030C */  jal        func_800F6240
    /* 4F474 80141074 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F478 80141078 53D9030C */  jal        func_800F654C
    /* 4F47C 8014107C 03000424 */   addiu     $a0, $zero, 0x3
    /* 4F480 80141080 CD04050C */  jal        func_80141334
    /* 4F484 80141084 00000000 */   nop
    /* 4F488 80141088 90D8030C */  jal        func_800F6240
    /* 4F48C 8014108C 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F490 80141090 AA03050C */  jal        func_80140EA8
    /* 4F494 80141094 00000000 */   nop
    /* 4F498 80141098 90D8030C */  jal        func_800F6240
    /* 4F49C 8014109C 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F4A0 801410A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F4A4 801410A4 00000000 */  nop
    /* 4F4A8 801410A8 0800E003 */  jr         $ra
    /* 4F4AC 801410AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141068
