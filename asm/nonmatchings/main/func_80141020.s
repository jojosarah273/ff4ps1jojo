nonmatching func_80141020, 0x48

glabel func_80141020
    /* 4F420 80141020 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F424 80141024 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F428 80141028 90D8030C */  jal        func_800F6240
    /* 4F42C 8014102C 4CF40434 */   ori       $a0, $zero, 0xF44C
    /* 4F430 80141030 53D9030C */  jal        func_800F654C
    /* 4F434 80141034 02000424 */   addiu     $a0, $zero, 0x2
    /* 4F438 80141038 CD04050C */  jal        func_80141334
    /* 4F43C 8014103C 00000000 */   nop
    /* 4F440 80141040 90D8030C */  jal        func_800F6240
    /* 4F444 80141044 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F448 80141048 AA03050C */  jal        func_80140EA8
    /* 4F44C 8014104C 00000000 */   nop
    /* 4F450 80141050 90D8030C */  jal        func_800F6240
    /* 4F454 80141054 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F458 80141058 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F45C 8014105C 00000000 */  nop
    /* 4F460 80141060 0800E003 */  jr         $ra
    /* 4F464 80141064 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141020
