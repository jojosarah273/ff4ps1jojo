nonmatching func_80134AB0, 0x48

glabel func_80134AB0
    /* 42EB0 80134AB0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 42EB4 80134AB4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 42EB8 80134AB8 B6D9030C */  jal        func_800F66D8
    /* 42EBC 80134ABC 60000424 */   addiu     $a0, $zero, 0x60
    /* 42EC0 80134AC0 80E4030C */  jal        func_800F9200
    /* 42EC4 80134AC4 00000000 */   nop
    /* 42EC8 80134AC8 DADA030C */  jal        func_800F6B68
    /* 42ECC 80134ACC 40140424 */   addiu     $a0, $zero, 0x1440
    /* 42ED0 80134AD0 BBE0030C */  jal        func_800F82EC
    /* 42ED4 80134AD4 60000424 */   addiu     $a0, $zero, 0x60
    /* 42ED8 80134AD8 F7E4030C */  jal        func_800F93DC
    /* 42EDC 80134ADC 00000000 */   nop
    /* 42EE0 80134AE0 DAE1030C */  jal        func_800F8768
    /* 42EE4 80134AE4 40140424 */   addiu     $a0, $zero, 0x1440
    /* 42EE8 80134AE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 42EEC 80134AEC 00000000 */  nop
    /* 42EF0 80134AF0 0800E003 */  jr         $ra
    /* 42EF4 80134AF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80134AB0
