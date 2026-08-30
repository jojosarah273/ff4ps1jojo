nonmatching func_80121C0C, 0x40

glabel func_80121C0C
    /* 3000C 80121C0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30010 80121C10 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30014 80121C14 8CD9030C */  jal        func_800F6630
    /* 30018 80121C18 63000424 */   addiu     $a0, $zero, 0x63
    /* 3001C 80121C1C 50D4030C */  jal        func_800F5140
    /* 30020 80121C20 00000000 */   nop
    /* 30024 80121C24 93E0030C */  jal        func_800F824C
    /* 30028 80121C28 43000424 */   addiu     $a0, $zero, 0x43
    /* 3002C 80121C2C 8CD9030C */  jal        func_800F6630
    /* 30030 80121C30 64000424 */   addiu     $a0, $zero, 0x64
    /* 30034 80121C34 1387040C */  jal        func_80121C4C
    /* 30038 80121C38 00000000 */   nop
    /* 3003C 80121C3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30040 80121C40 00000000 */  nop
    /* 30044 80121C44 0800E003 */  jr         $ra
    /* 30048 80121C48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121C0C
