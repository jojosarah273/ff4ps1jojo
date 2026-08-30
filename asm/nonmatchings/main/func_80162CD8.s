nonmatching func_80162CD8, 0x48

glabel func_80162CD8
    /* 710D8 80162CD8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 710DC 80162CDC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 710E0 80162CE0 9CDC030C */  jal        func_800F7270
    /* 710E4 80162CE4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 710E8 80162CE8 DADA030C */  jal        func_800F6B68
    /* 710EC 80162CEC 05200424 */   addiu     $a0, $zero, 0x2005
    /* 710F0 80162CF0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 710F4 80162CF4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 710F8 80162CF8 00000000 */  nop
    /* 710FC 80162CFC 00006290 */  lbu        $v0, 0x0($v1)
    /* 71100 80162D00 05200424 */  addiu      $a0, $zero, 0x2005
    /* 71104 80162D04 10004234 */  ori        $v0, $v0, 0x10
    /* 71108 80162D08 DAE1030C */  jal        func_800F8768
    /* 7110C 80162D0C 000062A0 */   sb        $v0, 0x0($v1)
    /* 71110 80162D10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 71114 80162D14 00000000 */  nop
    /* 71118 80162D18 0800E003 */  jr         $ra
    /* 7111C 80162D1C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80162CD8
