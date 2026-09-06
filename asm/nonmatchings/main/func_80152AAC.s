nonmatching func_80152AAC, 0x8C

glabel func_80152AAC
    /* 60EAC 80152AAC 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 60EB0 80152AB0 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 60EB4 80152AB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 60EB8 80152AB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 60EBC 80152ABC 00006290 */  lbu        $v0, 0x0($v1)
    /* 60EC0 80152AC0 00000000 */  nop
    /* 60EC4 80152AC4 20004230 */  andi       $v0, $v0, 0x20
    /* 60EC8 80152AC8 0D004010 */  beqz       $v0, .L80152B00
    /* 60ECC 80152ACC 00000000 */   nop
    /* 60ED0 80152AD0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 60ED4 80152AD4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 60ED8 80152AD8 00000000 */  nop
    /* 60EDC 80152ADC 00006290 */  lbu        $v0, 0x0($v1)
    /* 60EE0 80152AE0 00000000 */  nop
    /* 60EE4 80152AE4 02110200 */  srl        $v0, $v0, 4
    /* 60EE8 80152AE8 19DE030C */  jal        func_800F7864
    /* 60EEC 80152AEC 000062A0 */   sb        $v0, 0x0($v1)
    /* 60EF0 80152AF0 BADD030C */  jal        func_800F76E8
    /* 60EF4 80152AF4 00000000 */   nop
    /* 60EF8 80152AF8 CA4A0508 */  j          .L80152B28
    /* 60EFC 80152AFC 00000000 */   nop
  .L80152B00:
    /* 60F00 80152B00 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 60F04 80152B04 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 60F08 80152B08 00000000 */  nop
    /* 60F0C 80152B0C 00006294 */  lhu        $v0, 0x0($v1)
    /* 60F10 80152B10 00000000 */  nop
    /* 60F14 80152B14 02110200 */  srl        $v0, $v0, 4
    /* 60F18 80152B18 25DE030C */  jal        func_800F7894
    /* 60F1C 80152B1C 000062A4 */   sh        $v0, 0x0($v1)
    /* 60F20 80152B20 F3DD030C */  jal        func_800F77CC
    /* 60F24 80152B24 00000000 */   nop
  .L80152B28:
    /* 60F28 80152B28 1000BF8F */  lw         $ra, 0x10($sp)
    /* 60F2C 80152B2C 00000000 */  nop
    /* 60F30 80152B30 0800E003 */  jr         $ra
    /* 60F34 80152B34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80152AAC
