nonmatching func_801267A0, 0x48

glabel func_801267A0
    /* 34BA0 801267A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34BA4 801267A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34BA8 801267A8 91E5030C */  jal        func_800F9644
    /* 34BAC 801267AC 20000424 */   addiu     $a0, $zero, 0x20
    /* 34BB0 801267B0 56D9030C */  jal        func_800F6558
    /* 34BB4 801267B4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 34BB8 801267B8 77DC030C */  jal        func_800F71DC
    /* 34BBC 801267BC 00A00434 */   ori       $a0, $zero, 0xA000
    /* 34BC0 801267C0 40DD030C */  jal        func_800F7500
    /* 34BC4 801267C4 00A20434 */   ori       $a0, $zero, 0xA200
    /* 34BC8 801267C8 59CF030C */  jal        func_800F3D64
    /* 34BCC 801267CC 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 34BD0 801267D0 98E5030C */  jal        func_800F9660
    /* 34BD4 801267D4 20000424 */   addiu     $a0, $zero, 0x20
    /* 34BD8 801267D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34BDC 801267DC 00000000 */  nop
    /* 34BE0 801267E0 0800E003 */  jr         $ra
    /* 34BE4 801267E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801267A0
