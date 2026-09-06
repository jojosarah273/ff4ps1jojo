nonmatching func_80122A24, 0x78

glabel func_80122A24
    /* 30E24 80122A24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30E28 80122A28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30E2C 80122A2C 53D9030C */  jal        func_800F654C
    /* 30E30 80122A30 21200000 */   addu      $a0, $zero, $zero
    /* 30E34 80122A34 93E0030C */  jal        func_800F824C
    /* 30E38 80122A38 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 30E3C 80122A3C C7E5030C */  jal        func_800F971C
    /* 30E40 80122A40 00000000 */   nop
    /* 30E44 80122A44 3C8B040C */  jal        func_80122CF0
    /* 30E48 80122A48 00000000 */   nop
    /* 30E4C 80122A4C 53D9030C */  jal        func_800F654C
    /* 30E50 80122A50 01000424 */   addiu     $a0, $zero, 0x1
    /* 30E54 80122A54 3C8B040C */  jal        func_80122CF0
    /* 30E58 80122A58 00000000 */   nop
    /* 30E5C 80122A5C 53D9030C */  jal        func_800F654C
    /* 30E60 80122A60 02000424 */   addiu     $a0, $zero, 0x2
    /* 30E64 80122A64 3C8B040C */  jal        func_80122CF0
    /* 30E68 80122A68 00000000 */   nop
    /* 30E6C 80122A6C 53D9030C */  jal        func_800F654C
    /* 30E70 80122A70 03000424 */   addiu     $a0, $zero, 0x3
    /* 30E74 80122A74 3C8B040C */  jal        func_80122CF0
    /* 30E78 80122A78 00000000 */   nop
    /* 30E7C 80122A7C 53D9030C */  jal        func_800F654C
    /* 30E80 80122A80 04000424 */   addiu     $a0, $zero, 0x4
    /* 30E84 80122A84 3C8B040C */  jal        func_80122CF0
    /* 30E88 80122A88 00000000 */   nop
    /* 30E8C 80122A8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30E90 80122A90 00000000 */  nop
    /* 30E94 80122A94 0800E003 */  jr         $ra
    /* 30E98 80122A98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122A24
