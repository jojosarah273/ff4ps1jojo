nonmatching func_801267E8, 0x48

glabel func_801267E8
    /* 34BE8 801267E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34BEC 801267EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34BF0 801267F0 91E5030C */  jal        func_800F9644
    /* 34BF4 801267F4 20000424 */   addiu     $a0, $zero, 0x20
    /* 34BF8 801267F8 56D9030C */  jal        func_800F6558
    /* 34BFC 801267FC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 34C00 80126800 77DC030C */  jal        func_800F71DC
    /* 34C04 80126804 00A00434 */   ori       $a0, $zero, 0xA000
    /* 34C08 80126808 40DD030C */  jal        func_800F7500
    /* 34C0C 8012680C 00A40434 */   ori       $a0, $zero, 0xA400
    /* 34C10 80126810 59CF030C */  jal        func_800F3D64
    /* 34C14 80126814 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 34C18 80126818 98E5030C */  jal        func_800F9660
    /* 34C1C 8012681C 20000424 */   addiu     $a0, $zero, 0x20
    /* 34C20 80126820 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34C24 80126824 00000000 */  nop
    /* 34C28 80126828 0800E003 */  jr         $ra
    /* 34C2C 8012682C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801267E8
