nonmatching func_80166BF8, 0x58

glabel func_80166BF8
    /* 74FF8 80166BF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 74FFC 80166BFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 75000 80166C00 CCE4030C */  jal        func_800F9330
    /* 75004 80166C04 00000000 */   nop
    /* 75008 80166C08 2A9B050C */  jal        func_80166CA8
    /* 7500C 80166C0C 00000000 */   nop
    /* 75010 80166C10 DADA030C */  jal        func_800F6B68
    /* 75014 80166C14 C5EF0434 */   ori       $a0, $zero, 0xEFC5
    /* 75018 80166C18 20D5030C */  jal        func_800F5480
    /* 7501C 80166C1C 00000000 */   nop
    /* 75020 80166C20 0FCF030C */  jal        func_800F3C3C
    /* 75024 80166C24 21200000 */   addu      $a0, $zero, $zero
    /* 75028 80166C28 D2DF030C */  jal        func_800F7F48
    /* 7502C 80166C2C 21204000 */   addu      $a0, $v0, $zero
    /* 75030 80166C30 DAE1030C */  jal        func_800F8768
    /* 75034 80166C34 C5EF0434 */   ori       $a0, $zero, 0xEFC5
    /* 75038 80166C38 68E5030C */  jal        func_800F95A0
    /* 7503C 80166C3C 00000000 */   nop
    /* 75040 80166C40 1000BF8F */  lw         $ra, 0x10($sp)
    /* 75044 80166C44 00000000 */  nop
    /* 75048 80166C48 0800E003 */  jr         $ra
    /* 7504C 80166C4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80166BF8
