nonmatching func_8013B1A8, 0x40

glabel func_8013B1A8
    /* 495A8 8013B1A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 495AC 8013B1AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 495B0 8013B1B0 59D9030C */  jal        func_800F6564
    /* 495B4 8013B1B4 B8160424 */   addiu     $a0, $zero, 0x16B8
    /* 495B8 8013B1B8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 495BC 8013B1BC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 495C0 8013B1C0 00000000 */  nop
    /* 495C4 8013B1C4 00006290 */  lbu        $v0, 0x0($v1)
    /* 495C8 8013B1C8 B8160424 */  addiu      $a0, $zero, 0x16B8
    /* 495CC 8013B1CC 01004238 */  xori       $v0, $v0, 0x1
    /* 495D0 8013B1D0 62E0030C */  jal        func_800F8188
    /* 495D4 8013B1D4 000062A0 */   sb        $v0, 0x0($v1)
    /* 495D8 8013B1D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 495DC 8013B1DC 00000000 */  nop
    /* 495E0 8013B1E0 0800E003 */  jr         $ra
    /* 495E4 8013B1E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B1A8
