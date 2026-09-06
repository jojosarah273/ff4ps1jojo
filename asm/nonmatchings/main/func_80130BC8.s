nonmatching func_80130BC8, 0xAC

glabel func_80130BC8
    /* 3EFC8 80130BC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3EFCC 80130BCC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3EFD0 80130BD0 52CF030C */  jal        func_800F3D48
    /* 3EFD4 80130BD4 00000000 */   nop
    /* 3EFD8 80130BD8 53D9030C */  jal        func_800F654C
    /* 3EFDC 80130BDC 21200000 */   addu      $a0, $zero, $zero
    /* 3EFE0 80130BE0 52CF030C */  jal        func_800F3D48
    /* 3EFE4 80130BE4 00000000 */   nop
    /* 3EFE8 80130BE8 91E5030C */  jal        func_800F9644
    /* 3EFEC 80130BEC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3EFF0 80130BF0 5BD4030C */  jal        func_800F516C
    /* 3EFF4 80130BF4 00000000 */   nop
    /* 3EFF8 80130BF8 9DE0030C */  jal        func_800F8274
    /* 3EFFC 80130BFC 45000424 */   addiu     $a0, $zero, 0x45
    /* 3F000 80130C00 5BD4030C */  jal        func_800F516C
    /* 3F004 80130C04 00000000 */   nop
    /* 3F008 80130C08 14D4030C */  jal        func_800F5050
    /* 3F00C 80130C0C 00000000 */   nop
    /* 3F010 80130C10 0FCF030C */  jal        func_800F3C3C
    /* 3F014 80130C14 45000424 */   addiu     $a0, $zero, 0x45
    /* 3F018 80130C18 E5CF030C */  jal        func_800F3F94
    /* 3F01C 80130C1C 21204000 */   addu      $a0, $v0, $zero
    /* 3F020 80130C20 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3F024 80130C24 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3F028 80130C28 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3F02C 80130C2C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3F030 80130C30 00004394 */  lhu        $v1, 0x0($v0)
    /* 3F034 80130C34 20000424 */  addiu      $a0, $zero, 0x20
    /* 3F038 80130C38 98E5030C */  jal        func_800F9660
    /* 3F03C 80130C3C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3F040 80130C40 0F00043C */  lui        $a0, (0xF97A5 >> 16)
    /* 3F044 80130C44 1ADB030C */  jal        func_800F6C68
    /* 3F048 80130C48 A5978434 */   ori       $a0, $a0, (0xF97A5 & 0xFFFF)
    /* 3F04C 80130C4C 92D0030C */  jal        func_800F4248
    /* 3F050 80130C50 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 3F054 80130C54 62E0030C */  jal        func_800F8188
    /* 3F058 80130C58 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3F05C 80130C5C 59D9030C */  jal        func_800F6564
    /* 3F060 80130C60 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3F064 80130C64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3F068 80130C68 00000000 */  nop
    /* 3F06C 80130C6C 0800E003 */  jr         $ra
    /* 3F070 80130C70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130BC8
