nonmatching func_8018DFC4, 0x24

glabel func_8018DFC4
    /* 9C3C4 8018DFC4 1F80023C */  lui        $v0, %hi(D_801F67A4)
    /* 9C3C8 8018DFC8 A467428C */  lw         $v0, %lo(D_801F67A4)($v0)
    /* 9C3CC 8018DFCC 00000000 */  nop
    /* 9C3D0 8018DFD0 03008210 */  beq        $a0, $v0, .L8018DFE0
    /* 9C3D4 8018DFD4 00000000 */   nop
    /* 9C3D8 8018DFD8 1F80013C */  lui        $at, %hi(D_801F67A4)
    /* 9C3DC 8018DFDC A46724AC */  sw         $a0, %lo(D_801F67A4)($at)
  .L8018DFE0:
    /* 9C3E0 8018DFE0 0800E003 */  jr         $ra
    /* 9C3E4 8018DFE4 00000000 */   nop
endlabel func_8018DFC4
