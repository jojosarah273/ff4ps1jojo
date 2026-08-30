nonmatching func_80126878, 0x48

glabel func_80126878
    /* 34C78 80126878 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34C7C 8012687C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34C80 80126880 91E5030C */  jal        func_800F9644
    /* 34C84 80126884 20000424 */   addiu     $a0, $zero, 0x20
    /* 34C88 80126888 56D9030C */  jal        func_800F6558
    /* 34C8C 8012688C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 34C90 80126890 77DC030C */  jal        func_800F71DC
    /* 34C94 80126894 00A40434 */   ori       $a0, $zero, 0xA400
    /* 34C98 80126898 40DD030C */  jal        func_800F7500
    /* 34C9C 8012689C 00A00434 */   ori       $a0, $zero, 0xA000
    /* 34CA0 801268A0 59CF030C */  jal        func_800F3D64
    /* 34CA4 801268A4 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 34CA8 801268A8 98E5030C */  jal        func_800F9660
    /* 34CAC 801268AC 20000424 */   addiu     $a0, $zero, 0x20
    /* 34CB0 801268B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34CB4 801268B4 00000000 */  nop
    /* 34CB8 801268B8 0800E003 */  jr         $ra
    /* 34CBC 801268BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126878
