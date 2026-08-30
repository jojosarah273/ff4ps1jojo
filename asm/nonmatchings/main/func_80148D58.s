nonmatching func_80148D58, 0x90

glabel func_80148D58
    /* 57158 80148D58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5715C 80148D5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57160 80148D60 80E4030C */  jal        func_800F9200
    /* 57164 80148D64 00000000 */   nop
    /* 57168 80148D68 04D5030C */  jal        func_800F5410
    /* 5716C 80148D6C 00000000 */   nop
    /* 57170 80148D70 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 57174 80148D74 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 57178 80148D78 00000000 */  nop
    /* 5717C 80148D7C 00004394 */  lhu        $v1, 0x0($v0)
    /* 57180 80148D80 33F10434 */  ori        $a0, $zero, 0xF133
    /* 57184 80148D84 C1CE030C */  jal        func_800F3B04
    /* 57188 80148D88 21206400 */   addu      $a0, $v1, $a0
    /* 5718C 80148D8C CECF030C */  jal        func_800F3F38
    /* 57190 80148D90 21204000 */   addu      $a0, $v0, $zero
    /* 57194 80148D94 DAE1030C */  jal        func_800F8768
    /* 57198 80148D98 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5719C 80148D9C F7E4030C */  jal        func_800F93DC
    /* 571A0 80148DA0 00000000 */   nop
    /* 571A4 80148DA4 04D5030C */  jal        func_800F5410
    /* 571A8 80148DA8 00000000 */   nop
    /* 571AC 80148DAC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 571B0 80148DB0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 571B4 80148DB4 00000000 */  nop
    /* 571B8 80148DB8 00004394 */  lhu        $v1, 0x0($v0)
    /* 571BC 80148DBC 73F10434 */  ori        $a0, $zero, 0xF173
    /* 571C0 80148DC0 C1CE030C */  jal        func_800F3B04
    /* 571C4 80148DC4 21206400 */   addu      $a0, $v1, $a0
    /* 571C8 80148DC8 CECF030C */  jal        func_800F3F38
    /* 571CC 80148DCC 21204000 */   addu      $a0, $v0, $zero
    /* 571D0 80148DD0 DAE1030C */  jal        func_800F8768
    /* 571D4 80148DD4 73F10434 */   ori       $a0, $zero, 0xF173
    /* 571D8 80148DD8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 571DC 80148DDC 00000000 */  nop
    /* 571E0 80148DE0 0800E003 */  jr         $ra
    /* 571E4 80148DE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148D58
