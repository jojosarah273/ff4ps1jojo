nonmatching func_80139AA4, 0x58

glabel func_80139AA4
    /* 47EA4 80139AA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 47EA8 80139AA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 47EAC 80139AAC 91E5030C */  jal        func_800F9644
    /* 47EB0 80139AB0 20000424 */   addiu     $a0, $zero, 0x20
    /* 47EB4 80139AB4 56D9030C */  jal        func_800F6558
    /* 47EB8 80139AB8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 47EBC 80139ABC 77DC030C */  jal        func_800F71DC
    /* 47EC0 80139AC0 10810434 */   ori       $a0, $zero, 0x8110
    /* 47EC4 80139AC4 40DD030C */  jal        func_800F7500
    /* 47EC8 80139AC8 20A10434 */   ori       $a0, $zero, 0xA120
    /* 47ECC 80139ACC 59CF030C */  jal        func_800F3D64
    /* 47ED0 80139AD0 7E0D0424 */   addiu     $a0, $zero, 0xD7E
    /* 47ED4 80139AD4 98E5030C */  jal        func_800F9660
    /* 47ED8 80139AD8 20000424 */   addiu     $a0, $zero, 0x20
    /* 47EDC 80139ADC 40DD030C */  jal        func_800F7500
    /* 47EE0 80139AE0 00F20434 */   ori       $a0, $zero, 0xF200
    /* 47EE4 80139AE4 3ECC040C */  jal        func_801330F8
    /* 47EE8 80139AE8 00000000 */   nop
    /* 47EEC 80139AEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 47EF0 80139AF0 00000000 */  nop
    /* 47EF4 80139AF4 0800E003 */  jr         $ra
    /* 47EF8 80139AF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80139AA4
