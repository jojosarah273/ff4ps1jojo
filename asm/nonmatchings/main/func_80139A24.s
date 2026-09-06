nonmatching func_80139A24, 0x80

glabel func_80139A24
    /* 47E24 80139A24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 47E28 80139A28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 47E2C 80139A2C 77DC030C */  jal        func_800F71DC
    /* 47E30 80139A30 A8FF0434 */   ori       $a0, $zero, 0xFFA8
    /* 47E34 80139A34 5BE3030C */  jal        func_800F8D6C
    /* 47E38 80139A38 99000424 */   addiu     $a0, $zero, 0x99
    /* 47E3C 80139A3C 90D8030C */  jal        func_800F6240
    /* 47E40 80139A40 CC1B0424 */   addiu     $a0, $zero, 0x1BCC
    /* 47E44 80139A44 8B83040C */  jal        func_80120E2C
    /* 47E48 80139A48 00000000 */   nop
    /* 47E4C 80139A4C 1A80023C */  lui        $v0, %hi(D_80199250)
    /* 47E50 80139A50 50924494 */  lhu        $a0, %lo(D_80199250)($v0)
    /* 47E54 80139A54 40DD030C */  jal        func_800F7500
    /* 47E58 80139A58 00000000 */   nop
    /* 47E5C 80139A5C E97E040C */  jal        func_8011FBA4
    /* 47E60 80139A60 00000000 */   nop
    /* 47E64 80139A64 4A99040C */  jal        func_80126528
    /* 47E68 80139A68 00000000 */   nop
    /* 47E6C 80139A6C 53D9030C */  jal        func_800F654C
    /* 47E70 80139A70 38000424 */   addiu     $a0, $zero, 0x38
    /* 47E74 80139A74 93E0030C */  jal        func_800F824C
    /* 47E78 80139A78 E2000424 */   addiu     $a0, $zero, 0xE2
    /* 47E7C 80139A7C 7BE6040C */  jal        func_801399EC
    /* 47E80 80139A80 00000000 */   nop
    /* 47E84 80139A84 61E4040C */  jal        func_80139184
    /* 47E88 80139A88 00000000 */   nop
    /* 47E8C 80139A8C DDE3030C */  jal        func_800F8F74
    /* 47E90 80139A90 CC1B0424 */   addiu     $a0, $zero, 0x1BCC
    /* 47E94 80139A94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 47E98 80139A98 00000000 */  nop
    /* 47E9C 80139A9C 0800E003 */  jr         $ra
    /* 47EA0 80139AA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80139A24
