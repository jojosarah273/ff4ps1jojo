nonmatching func_80140BA0, 0xEC

glabel func_80140BA0
    /* 4EFA0 80140BA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EFA4 80140BA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EFA8 80140BA8 3F03050C */  jal        func_80140CFC
    /* 4EFAC 80140BAC 00000000 */   nop
    /* 4EFB0 80140BB0 59D9030C */  jal        func_800F6564
    /* 4EFB4 80140BB4 48000424 */   addiu     $a0, $zero, 0x48
    /* 4EFB8 80140BB8 80E4030C */  jal        func_800F9200
    /* 4EFBC 80140BBC 00000000 */   nop
    /* 4EFC0 80140BC0 59D9030C */  jal        func_800F6564
    /* 4EFC4 80140BC4 75F40434 */   ori       $a0, $zero, 0xF475
    /* 4EFC8 80140BC8 62E0030C */  jal        func_800F8188
    /* 4EFCC 80140BCC 48000424 */   addiu     $a0, $zero, 0x48
    /* 4EFD0 80140BD0 4D5F020C */  jal        func_80097D34
    /* 4EFD4 80140BD4 00000000 */   nop
    /* 4EFD8 80140BD8 B002050C */  jal        func_80140AC0
    /* 4EFDC 80140BDC 00000000 */   nop
    /* 4EFE0 80140BE0 C7E5030C */  jal        func_800F971C
    /* 4EFE4 80140BE4 00000000 */   nop
    /* 4EFE8 80140BE8 58E2030C */  jal        func_800F8960
    /* 4EFEC 80140BEC C1F20434 */   ori       $a0, $zero, 0xF2C1
    /* 4EFF0 80140BF0 DADA030C */  jal        func_800F6B68
    /* 4EFF4 80140BF4 00200424 */   addiu     $a0, $zero, 0x2000
    /* 4EFF8 80140BF8 80E4030C */  jal        func_800F9200
    /* 4EFFC 80140BFC 00000000 */   nop
    /* 4F000 80140C00 1A80033C */  lui        $v1, %hi(D_8019ED60)
    /* 4F004 80140C04 60ED638C */  lw         $v1, %lo(D_8019ED60)($v1)
    /* 4F008 80140C08 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 4F00C 80140C0C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 4F010 80140C10 00006290 */  lbu        $v0, 0x0($v1)
    /* 4F014 80140C14 00000000 */  nop
    /* 4F018 80140C18 000082A0 */  sb         $v0, 0x0($a0)
    /* 4F01C 80140C1C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4F020 80140C20 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4F024 80140C24 00000000 */  nop
    /* 4F028 80140C28 00006290 */  lbu        $v0, 0x0($v1)
    /* 4F02C 80140C2C 00000000 */  nop
    /* 4F030 80140C30 00110200 */  sll        $v0, $v0, 4
    /* 4F034 80140C34 000062A0 */  sb         $v0, 0x0($v1)
    /* 4F038 80140C38 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 4F03C 80140C3C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 4F040 80140C40 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4F044 80140C44 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4F048 80140C48 00008294 */  lhu        $v0, 0x0($a0)
    /* 4F04C 80140C4C F7E4030C */  jal        func_800F93DC
    /* 4F050 80140C50 000062A4 */   sh        $v0, 0x0($v1)
    /* 4F054 80140C54 DAE1030C */  jal        func_800F8768
    /* 4F058 80140C58 C4EF0434 */   ori       $a0, $zero, 0xEFC4
    /* 4F05C 80140C5C 555F020C */  jal        func_80097D54
    /* 4F060 80140C60 00000000 */   nop
    /* 4F064 80140C64 F7E4030C */  jal        func_800F93DC
    /* 4F068 80140C68 00000000 */   nop
    /* 4F06C 80140C6C 62E0030C */  jal        func_800F8188
    /* 4F070 80140C70 48000424 */   addiu     $a0, $zero, 0x48
    /* 4F074 80140C74 6503050C */  jal        func_80140D94
    /* 4F078 80140C78 00000000 */   nop
    /* 4F07C 80140C7C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F080 80140C80 00000000 */  nop
    /* 4F084 80140C84 0800E003 */  jr         $ra
    /* 4F088 80140C88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140BA0
