nonmatching func_80140FB8, 0x28

glabel func_80140FB8
    /* 4F3B8 80140FB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F3BC 80140FBC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F3C0 80140FC0 AA03050C */  jal        func_80140EA8
    /* 4F3C4 80140FC4 00000000 */   nop
    /* 4F3C8 80140FC8 90D8030C */  jal        func_800F6240
    /* 4F3CC 80140FCC 1AF40434 */   ori       $a0, $zero, 0xF41A
    /* 4F3D0 80140FD0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F3D4 80140FD4 00000000 */  nop
    /* 4F3D8 80140FD8 0800E003 */  jr         $ra
    /* 4F3DC 80140FDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140FB8
