nonmatching func_801531CC, 0x4C

glabel func_801531CC
    /* 615CC 801531CC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 615D0 801531D0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 615D4 801531D4 C7E5030C */  jal        func_800F971C
    /* 615D8 801531D8 00000000 */   nop
    /* 615DC 801531DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 615E0 801531E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 615E4 801531E4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 615E8 801531E8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 615EC 801531EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 615F0 801531F0 00000000 */  nop
    /* 615F4 801531F4 000083A4 */  sh         $v1, 0x0($a0)
    /* 615F8 801531F8 53D9030C */  jal        func_800F654C
    /* 615FC 801531FC 62000424 */   addiu     $a0, $zero, 0x62
    /* 61600 80153200 8948050C */  jal        func_80152224
    /* 61604 80153204 00000000 */   nop
    /* 61608 80153208 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6160C 8015320C 00000000 */  nop
    /* 61610 80153210 0800E003 */  jr         $ra
    /* 61614 80153214 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801531CC
