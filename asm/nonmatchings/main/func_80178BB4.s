nonmatching func_80178BB4, 0x60

glabel func_80178BB4
    /* 86FB4 80178BB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 86FB8 80178BB8 1A80043C */  lui        $a0, %hi(D_8019EE90)
    /* 86FBC 80178BBC 90EE8424 */  addiu      $a0, $a0, %lo(D_8019EE90)
    /* 86FC0 80178BC0 00010224 */  addiu      $v0, $zero, 0x100
    /* 86FC4 80178BC4 E0010324 */  addiu      $v1, $zero, 0x1E0
    /* 86FC8 80178BC8 08000524 */  addiu      $a1, $zero, 0x8
    /* 86FCC 80178BCC 08000624 */  addiu      $a2, $zero, 0x8
    /* 86FD0 80178BD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 86FD4 80178BD4 1A80013C */  lui        $at, %hi(D_8019EE90)
    /* 86FD8 80178BD8 90EE20A4 */  sh         $zero, %lo(D_8019EE90)($at)
    /* 86FDC 80178BDC 1A80013C */  lui        $at, %hi(D_8019EE92)
    /* 86FE0 80178BE0 92EE20A4 */  sh         $zero, %lo(D_8019EE92)($at)
    /* 86FE4 80178BE4 1A80013C */  lui        $at, %hi(D_8019EE94)
    /* 86FE8 80178BE8 94EE22A4 */  sh         $v0, %lo(D_8019EE94)($at)
    /* 86FEC 80178BEC 1A80013C */  lui        $at, %hi(D_8019EE96)
    /* 86FF0 80178BF0 96EE23A4 */  sh         $v1, %lo(D_8019EE96)($at)
    /* 86FF4 80178BF4 4651060C */  jal        func_80194518
    /* 86FF8 80178BF8 08000724 */   addiu     $a3, $zero, 0x8
    /* 86FFC 80178BFC E550060C */  jal        func_80194394
    /* 87000 80178C00 21200000 */   addu      $a0, $zero, $zero
    /* 87004 80178C04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 87008 80178C08 00000000 */  nop
    /* 8700C 80178C0C 0800E003 */  jr         $ra
    /* 87010 80178C10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80178BB4
