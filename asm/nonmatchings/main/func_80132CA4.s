nonmatching func_80132CA4, 0x58

glabel func_80132CA4
    /* 410A4 80132CA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 410A8 80132CA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 410AC 80132CAC 91E5030C */  jal        func_800F9644
    /* 410B0 80132CB0 20000424 */   addiu     $a0, $zero, 0x20
    /* 410B4 80132CB4 56D9030C */  jal        func_800F6558
    /* 410B8 80132CB8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 410BC 80132CBC 77DC030C */  jal        func_800F71DC
    /* 410C0 80132CC0 30810434 */   ori       $a0, $zero, 0x8130
    /* 410C4 80132CC4 40DD030C */  jal        func_800F7500
    /* 410C8 80132CC8 20A10434 */   ori       $a0, $zero, 0xA120
    /* 410CC 80132CCC 59CF030C */  jal        func_800F3D64
    /* 410D0 80132CD0 7E0D0424 */   addiu     $a0, $zero, 0xD7E
    /* 410D4 80132CD4 98E5030C */  jal        func_800F9660
    /* 410D8 80132CD8 20000424 */   addiu     $a0, $zero, 0x20
    /* 410DC 80132CDC 40DD030C */  jal        func_800F7500
    /* 410E0 80132CE0 80F30434 */   ori       $a0, $zero, 0xF380
    /* 410E4 80132CE4 3ECC040C */  jal        func_801330F8
    /* 410E8 80132CE8 00000000 */   nop
    /* 410EC 80132CEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 410F0 80132CF0 00000000 */  nop
    /* 410F4 80132CF4 0800E003 */  jr         $ra
    /* 410F8 80132CF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80132CA4
