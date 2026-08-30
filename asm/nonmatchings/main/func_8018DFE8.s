nonmatching func_8018DFE8, 0x24

glabel func_8018DFE8
    /* 9C3E8 8018DFE8 1F80023C */  lui        $v0, %hi(D_801F67AC)
    /* 9C3EC 8018DFEC AC67428C */  lw         $v0, %lo(D_801F67AC)($v0)
    /* 9C3F0 8018DFF0 00000000 */  nop
    /* 9C3F4 8018DFF4 03008210 */  beq        $a0, $v0, .L8018E004
    /* 9C3F8 8018DFF8 00000000 */   nop
    /* 9C3FC 8018DFFC 1F80013C */  lui        $at, %hi(D_801F67AC)
    /* 9C400 8018E000 AC6724AC */  sw         $a0, %lo(D_801F67AC)($at)
  .L8018E004:
    /* 9C404 8018E004 0800E003 */  jr         $ra
    /* 9C408 8018E008 00000000 */   nop
endlabel func_8018DFE8
