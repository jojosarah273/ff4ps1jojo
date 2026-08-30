nonmatching func_8013B1E8, 0x40

glabel func_8013B1E8
    /* 495E8 8013B1E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 495EC 8013B1EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 495F0 8013B1F0 59D9030C */  jal        func_800F6564
    /* 495F4 8013B1F4 BE160424 */   addiu     $a0, $zero, 0x16BE
    /* 495F8 8013B1F8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 495FC 8013B1FC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 49600 8013B200 00000000 */  nop
    /* 49604 8013B204 00006290 */  lbu        $v0, 0x0($v1)
    /* 49608 8013B208 BE160424 */  addiu      $a0, $zero, 0x16BE
    /* 4960C 8013B20C 01004238 */  xori       $v0, $v0, 0x1
    /* 49610 8013B210 62E0030C */  jal        func_800F8188
    /* 49614 8013B214 000062A0 */   sb        $v0, 0x0($v1)
    /* 49618 8013B218 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4961C 8013B21C 00000000 */  nop
    /* 49620 8013B220 0800E003 */  jr         $ra
    /* 49624 8013B224 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B1E8
