nonmatching func_8018E4B8, 0x24

glabel func_8018E4B8
    /* 9C8B8 8018E4B8 1A80023C */  lui        $v0, %hi(D_8019B14C)
    /* 9C8BC 8018E4BC 4CB1428C */  lw         $v0, %lo(D_8019B14C)($v0)
    /* 9C8C0 8018E4C0 00000000 */  nop
    /* 9C8C4 8018E4C4 03008210 */  beq        $a0, $v0, .L8018E4D4
    /* 9C8C8 8018E4C8 00000000 */   nop
    /* 9C8CC 8018E4CC 1A80013C */  lui        $at, %hi(D_8019B14C)
    /* 9C8D0 8018E4D0 4CB124AC */  sw         $a0, %lo(D_8019B14C)($at)
  .L8018E4D4:
    /* 9C8D4 8018E4D4 0800E003 */  jr         $ra
    /* 9C8D8 8018E4D8 00000000 */   nop
endlabel func_8018E4B8
    /* 9C8DC 8018E4DC 00000000 */  nop
    /* 9C8E0 8018E4E0 00000000 */  nop
    /* 9C8E4 8018E4E4 00000000 */  nop
