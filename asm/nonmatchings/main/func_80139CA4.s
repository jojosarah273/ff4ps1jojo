nonmatching func_80139CA4, 0x50

glabel func_80139CA4
    /* 480A4 80139CA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 480A8 80139CA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 480AC 80139CAC 91E5030C */  jal        func_800F9644
    /* 480B0 80139CB0 20000424 */   addiu     $a0, $zero, 0x20
    /* 480B4 80139CB4 E5E3030C */  jal        func_800F8F94
    /* 480B8 80139CB8 4B1B0424 */   addiu     $a0, $zero, 0x1B4B
    /* 480BC 80139CBC E5E3030C */  jal        func_800F8F94
    /* 480C0 80139CC0 4D1B0424 */   addiu     $a0, $zero, 0x1B4D
    /* 480C4 80139CC4 E5E3030C */  jal        func_800F8F94
    /* 480C8 80139CC8 4F1B0424 */   addiu     $a0, $zero, 0x1B4F
    /* 480CC 80139CCC E5E3030C */  jal        func_800F8F94
    /* 480D0 80139CD0 511B0424 */   addiu     $a0, $zero, 0x1B51
    /* 480D4 80139CD4 E5E3030C */  jal        func_800F8F94
    /* 480D8 80139CD8 531B0424 */   addiu     $a0, $zero, 0x1B53
    /* 480DC 80139CDC 98E5030C */  jal        func_800F9660
    /* 480E0 80139CE0 20000424 */   addiu     $a0, $zero, 0x20
    /* 480E4 80139CE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 480E8 80139CE8 00000000 */  nop
    /* 480EC 80139CEC 0800E003 */  jr         $ra
    /* 480F0 80139CF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80139CA4
