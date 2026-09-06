nonmatching func_80119BDC, 0x48

glabel func_80119BDC
    /* 27FDC 80119BDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27FE0 80119BE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27FE4 80119BE4 8CD9030C */  jal        func_800F6630
    /* 27FE8 80119BE8 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 27FEC 80119BEC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 27FF0 80119BF0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 27FF4 80119BF4 00000000 */  nop
    /* 27FF8 80119BF8 00006290 */  lbu        $v0, 0x0($v1)
    /* 27FFC 80119BFC E3000424 */  addiu      $a0, $zero, 0xE3
    /* 28000 80119C00 01004238 */  xori       $v0, $v0, 0x1
    /* 28004 80119C04 93E0030C */  jal        func_800F824C
    /* 28008 80119C08 000062A0 */   sb        $v0, 0x0($v1)
    /* 2800C 80119C0C 977A040C */  jal        func_8011EA5C
    /* 28010 80119C10 00000000 */   nop
    /* 28014 80119C14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 28018 80119C18 00000000 */  nop
    /* 2801C 80119C1C 0800E003 */  jr         $ra
    /* 28020 80119C20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119BDC
