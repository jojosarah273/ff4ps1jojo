nonmatching func_80126830, 0x48

glabel func_80126830
    /* 34C30 80126830 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34C34 80126834 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34C38 80126838 91E5030C */  jal        func_800F9644
    /* 34C3C 8012683C 20000424 */   addiu     $a0, $zero, 0x20
    /* 34C40 80126840 56D9030C */  jal        func_800F6558
    /* 34C44 80126844 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 34C48 80126848 77DC030C */  jal        func_800F71DC
    /* 34C4C 8012684C 00A20434 */   ori       $a0, $zero, 0xA200
    /* 34C50 80126850 40DD030C */  jal        func_800F7500
    /* 34C54 80126854 00A00434 */   ori       $a0, $zero, 0xA000
    /* 34C58 80126858 59CF030C */  jal        func_800F3D64
    /* 34C5C 8012685C 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 34C60 80126860 98E5030C */  jal        func_800F9660
    /* 34C64 80126864 20000424 */   addiu     $a0, $zero, 0x20
    /* 34C68 80126868 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34C6C 8012686C 00000000 */  nop
    /* 34C70 80126870 0800E003 */  jr         $ra
    /* 34C74 80126874 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126830
