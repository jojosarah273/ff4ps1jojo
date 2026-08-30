nonmatching func_8015A284, 0x88

glabel func_8015A284
    /* 68684 8015A284 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 68688 8015A288 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6868C 8015A28C 59D9030C */  jal        func_800F6564
    /* 68690 8015A290 75390424 */   addiu     $a0, $zero, 0x3975
    /* 68694 8015A294 424A050C */  jal        func_80152908
    /* 68698 8015A298 00000000 */   nop
    /* 6869C 8015A29C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 686A0 8015A2A0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 686A4 8015A2A4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 686A8 8015A2A8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 686AC 8015A2AC 00004394 */  lhu        $v1, 0x0($v0)
    /* 686B0 8015A2B0 A6000424 */  addiu      $a0, $zero, 0xA6
    /* 686B4 8015A2B4 9CDC030C */  jal        func_800F7270
    /* 686B8 8015A2B8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 686BC 8015A2BC 5CDB030C */  jal        func_800F6D70
    /* 686C0 8015A2C0 DB320424 */   addiu     $a0, $zero, 0x32DB
    /* 686C4 8015A2C4 DAE1030C */  jal        func_800F8768
    /* 686C8 8015A2C8 33200424 */   addiu     $a0, $zero, 0x2033
    /* 686CC 8015A2CC 5CDB030C */  jal        func_800F6D70
    /* 686D0 8015A2D0 DC320424 */   addiu     $a0, $zero, 0x32DC
    /* 686D4 8015A2D4 DAE1030C */  jal        func_800F8768
    /* 686D8 8015A2D8 34200424 */   addiu     $a0, $zero, 0x2034
    /* 686DC 8015A2DC 5CDB030C */  jal        func_800F6D70
    /* 686E0 8015A2E0 DF320424 */   addiu     $a0, $zero, 0x32DF
    /* 686E4 8015A2E4 DAE1030C */  jal        func_800F8768
    /* 686E8 8015A2E8 35200424 */   addiu     $a0, $zero, 0x2035
    /* 686EC 8015A2EC 5CDB030C */  jal        func_800F6D70
    /* 686F0 8015A2F0 E0320424 */   addiu     $a0, $zero, 0x32E0
    /* 686F4 8015A2F4 DAE1030C */  jal        func_800F8768
    /* 686F8 8015A2F8 36200424 */   addiu     $a0, $zero, 0x2036
    /* 686FC 8015A2FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 68700 8015A300 00000000 */  nop
    /* 68704 8015A304 0800E003 */  jr         $ra
    /* 68708 8015A308 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015A284
