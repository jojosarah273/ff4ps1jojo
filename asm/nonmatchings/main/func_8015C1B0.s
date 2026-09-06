nonmatching func_8015C1B0, 0x70

glabel func_8015C1B0
    /* 6A5B0 8015C1B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6A5B4 8015C1B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6A5B8 8015C1B8 9CDC030C */  jal        func_800F7270
    /* 6A5BC 8015C1BC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6A5C0 8015C1C0 DADA030C */  jal        func_800F6B68
    /* 6A5C4 8015C1C4 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6A5C8 8015C1C8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6A5CC 8015C1CC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6A5D0 8015C1D0 00000000 */  nop
    /* 6A5D4 8015C1D4 00006290 */  lbu        $v0, 0x0($v1)
    /* 6A5D8 8015C1D8 04200424 */  addiu      $a0, $zero, 0x2004
    /* 6A5DC 8015C1DC 04004234 */  ori        $v0, $v0, 0x4
    /* 6A5E0 8015C1E0 DAE1030C */  jal        func_800F8768
    /* 6A5E4 8015C1E4 000062A0 */   sb        $v0, 0x0($v1)
    /* 6A5E8 8015C1E8 8CD9030C */  jal        func_800F6630
    /* 6A5EC 8015C1EC D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6A5F0 8015C1F0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6A5F4 8015C1F4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6A5F8 8015C1F8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6A5FC 8015C1FC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6A600 8015C200 00004394 */  lhu        $v1, 0x0($v0)
    /* 6A604 8015C204 60350424 */  addiu      $a0, $zero, 0x3560
    /* 6A608 8015C208 3BE4030C */  jal        func_800F90EC
    /* 6A60C 8015C20C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6A610 8015C210 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6A614 8015C214 00000000 */  nop
    /* 6A618 8015C218 0800E003 */  jr         $ra
    /* 6A61C 8015C21C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015C1B0
