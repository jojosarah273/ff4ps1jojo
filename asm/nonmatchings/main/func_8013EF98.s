nonmatching func_8013EF98, 0x40

glabel func_8013EF98
    /* 4D398 8013EF98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4D39C 8013EF9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4D3A0 8013EFA0 77DC030C */  jal        func_800F71DC
    /* 4D3A4 8013EFA4 FD6C0424 */   addiu     $a0, $zero, 0x6CFD
    /* 4D3A8 8013EFA8 5BE3030C */  jal        func_800F8D6C
    /* 4D3AC 8013EFAC 21200000 */   addu      $a0, $zero, $zero
    /* 4D3B0 8013EFB0 77DC030C */  jal        func_800F71DC
    /* 4D3B4 8013EFB4 12000424 */   addiu     $a0, $zero, 0x12
    /* 4D3B8 8013EFB8 5BE3030C */  jal        func_800F8D6C
    /* 4D3BC 8013EFBC 02000424 */   addiu     $a0, $zero, 0x2
    /* 4D3C0 8013EFC0 F6FB040C */  jal        func_8013EFD8
    /* 4D3C4 8013EFC4 00000000 */   nop
    /* 4D3C8 8013EFC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4D3CC 8013EFCC 00000000 */  nop
    /* 4D3D0 8013EFD0 0800E003 */  jr         $ra
    /* 4D3D4 8013EFD4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013EF98
