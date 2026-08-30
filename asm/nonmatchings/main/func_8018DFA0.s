nonmatching func_8018DFA0, 0x24

glabel func_8018DFA0
    /* 9C3A0 8018DFA0 1F80023C */  lui        $v0, %hi(D_801F67A8)
    /* 9C3A4 8018DFA4 A867428C */  lw         $v0, %lo(D_801F67A8)($v0)
    /* 9C3A8 8018DFA8 00000000 */  nop
    /* 9C3AC 8018DFAC 03008210 */  beq        $a0, $v0, .L8018DFBC
    /* 9C3B0 8018DFB0 00000000 */   nop
    /* 9C3B4 8018DFB4 1F80013C */  lui        $at, %hi(D_801F67A8)
    /* 9C3B8 8018DFB8 A86724AC */  sw         $a0, %lo(D_801F67A8)($at)
  .L8018DFBC:
    /* 9C3BC 8018DFBC 0800E003 */  jr         $ra
    /* 9C3C0 8018DFC0 00000000 */   nop
endlabel func_8018DFA0
