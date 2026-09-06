nonmatching func_80161368, 0x68

glabel func_80161368
    /* 6F768 80161368 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F76C 8016136C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F770 80161370 CCE4030C */  jal        func_800F9330
    /* 6F774 80161374 00000000 */   nop
    /* 6F778 80161378 E7E4030C */  jal        func_800F939C
    /* 6F77C 8016137C 00000000 */   nop
    /* 6F780 80161380 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 6F784 80161384 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 6F788 80161388 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 6F78C 8016138C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 6F790 80161390 00004390 */  lbu        $v1, 0x0($v0)
    /* 6F794 80161394 01000424 */  addiu      $a0, $zero, 0x1
    /* 6F798 80161398 93E0030C */  jal        func_800F824C
    /* 6F79C 8016139C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 6F7A0 801613A0 53D9030C */  jal        func_800F654C
    /* 6F7A4 801613A4 06000424 */   addiu     $a0, $zero, 0x6
    /* 6F7A8 801613A8 0E43050C */  jal        func_80150C38
    /* 6F7AC 801613AC 00000000 */   nop
    /* 6F7B0 801613B0 83E5030C */  jal        func_800F960C
    /* 6F7B4 801613B4 00000000 */   nop
    /* 6F7B8 801613B8 68E5030C */  jal        func_800F95A0
    /* 6F7BC 801613BC 00000000 */   nop
    /* 6F7C0 801613C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F7C4 801613C4 00000000 */  nop
    /* 6F7C8 801613C8 0800E003 */  jr         $ra
    /* 6F7CC 801613CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80161368
