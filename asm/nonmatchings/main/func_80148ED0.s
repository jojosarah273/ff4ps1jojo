nonmatching func_80148ED0, 0x90

glabel func_80148ED0
    /* 572D0 80148ED0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 572D4 80148ED4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 572D8 80148ED8 80E4030C */  jal        func_800F9200
    /* 572DC 80148EDC 00000000 */   nop
    /* 572E0 80148EE0 04D5030C */  jal        func_800F5410
    /* 572E4 80148EE4 00000000 */   nop
    /* 572E8 80148EE8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 572EC 80148EEC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 572F0 80148EF0 00000000 */  nop
    /* 572F4 80148EF4 00004394 */  lhu        $v1, 0x0($v0)
    /* 572F8 80148EF8 B3F10434 */  ori        $a0, $zero, 0xF1B3
    /* 572FC 80148EFC C1CE030C */  jal        func_800F3B04
    /* 57300 80148F00 21206400 */   addu      $a0, $v1, $a0
    /* 57304 80148F04 CECF030C */  jal        func_800F3F38
    /* 57308 80148F08 21204000 */   addu      $a0, $v0, $zero
    /* 5730C 80148F0C DAE1030C */  jal        func_800F8768
    /* 57310 80148F10 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 57314 80148F14 F7E4030C */  jal        func_800F93DC
    /* 57318 80148F18 00000000 */   nop
    /* 5731C 80148F1C 04D5030C */  jal        func_800F5410
    /* 57320 80148F20 00000000 */   nop
    /* 57324 80148F24 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 57328 80148F28 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5732C 80148F2C 00000000 */  nop
    /* 57330 80148F30 00004394 */  lhu        $v1, 0x0($v0)
    /* 57334 80148F34 F3F10434 */  ori        $a0, $zero, 0xF1F3
    /* 57338 80148F38 C1CE030C */  jal        func_800F3B04
    /* 5733C 80148F3C 21206400 */   addu      $a0, $v1, $a0
    /* 57340 80148F40 CECF030C */  jal        func_800F3F38
    /* 57344 80148F44 21204000 */   addu      $a0, $v0, $zero
    /* 57348 80148F48 DAE1030C */  jal        func_800F8768
    /* 5734C 80148F4C F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 57350 80148F50 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57354 80148F54 00000000 */  nop
    /* 57358 80148F58 0800E003 */  jr         $ra
    /* 5735C 80148F5C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148ED0
