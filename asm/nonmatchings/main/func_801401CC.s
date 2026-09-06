nonmatching func_801401CC, 0x58

glabel func_801401CC
    /* 4E5CC 801401CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E5D0 801401D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E5D4 801401D4 CCE4030C */  jal        func_800F9330
    /* 4E5D8 801401D8 00000000 */   nop
    /* 4E5DC 801401DC 91E5030C */  jal        func_800F9644
    /* 4E5E0 801401E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 4E5E4 801401E4 63D9030C */  jal        func_800F658C
    /* 4E5E8 801401E8 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4E5EC 801401EC 04D5030C */  jal        func_800F5410
    /* 4E5F0 801401F0 00000000 */   nop
    /* 4E5F4 801401F4 0FCF030C */  jal        func_800F3C3C
    /* 4E5F8 801401F8 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 4E5FC 801401FC E5CF030C */  jal        func_800F3F94
    /* 4E600 80140200 21204000 */   addu      $a0, $v0, $zero
    /* 4E604 80140204 9DE0030C */  jal        func_800F8274
    /* 4E608 80140208 02000424 */   addiu     $a0, $zero, 0x2
    /* 4E60C 8014020C 8900050C */  jal        func_80140224
    /* 4E610 80140210 00000000 */   nop
    /* 4E614 80140214 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E618 80140218 00000000 */  nop
    /* 4E61C 8014021C 0800E003 */  jr         $ra
    /* 4E620 80140220 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801401CC
