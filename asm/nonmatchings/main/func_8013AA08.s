nonmatching func_8013AA08, 0xA0

glabel func_8013AA08
    /* 48E08 8013AA08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 48E0C 8013AA0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 48E10 8013AA10 5BE3030C */  jal        func_800F8D6C
    /* 48E14 8013AA14 45000424 */   addiu     $a0, $zero, 0x45
    /* 48E18 8013AA18 8CD9030C */  jal        func_800F6630
    /* 48E1C 8013AA1C 45000424 */   addiu     $a0, $zero, 0x45
    /* 48E20 8013AA20 92D0030C */  jal        func_800F4248
    /* 48E24 8013AA24 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 48E28 8013AA28 62E0030C */  jal        func_800F8188
    /* 48E2C 8013AA2C A81B0424 */   addiu     $a0, $zero, 0x1BA8
    /* 48E30 8013AA30 91E5030C */  jal        func_800F9644
    /* 48E34 8013AA34 20000424 */   addiu     $a0, $zero, 0x20
    /* 48E38 8013AA38 63D9030C */  jal        func_800F658C
    /* 48E3C 8013AA3C AA160424 */   addiu     $a0, $zero, 0x16AA
    /* 48E40 8013AA40 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 48E44 8013AA44 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 48E48 8013AA48 00000000 */  nop
    /* 48E4C 8013AA4C 00006294 */  lhu        $v0, 0x0($v1)
    /* 48E50 8013AA50 20000424 */  addiu      $a0, $zero, 0x20
    /* 48E54 8013AA54 42110200 */  srl        $v0, $v0, 5
    /* 48E58 8013AA58 98E5030C */  jal        func_800F9660
    /* 48E5C 8013AA5C 000062A4 */   sh        $v0, 0x0($v1)
    /* 48E60 8013AA60 92D0030C */  jal        func_800F4248
    /* 48E64 8013AA64 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 48E68 8013AA68 62E0030C */  jal        func_800F8188
    /* 48E6C 8013AA6C A91B0424 */   addiu     $a0, $zero, 0x1BA9
    /* 48E70 8013AA70 8CD9030C */  jal        func_800F6630
    /* 48E74 8013AA74 46000424 */   addiu     $a0, $zero, 0x46
    /* 48E78 8013AA78 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 48E7C 8013AA7C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 48E80 8013AA80 00000000 */  nop
    /* 48E84 8013AA84 00006290 */  lbu        $v0, 0x0($v1)
    /* 48E88 8013AA88 AA1B0424 */  addiu      $a0, $zero, 0x1BAA
    /* 48E8C 8013AA8C 82100200 */  srl        $v0, $v0, 2
    /* 48E90 8013AA90 62E0030C */  jal        func_800F8188
    /* 48E94 8013AA94 000062A0 */   sb        $v0, 0x0($v1)
    /* 48E98 8013AA98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 48E9C 8013AA9C 00000000 */  nop
    /* 48EA0 8013AAA0 0800E003 */  jr         $ra
    /* 48EA4 8013AAA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013AA08
