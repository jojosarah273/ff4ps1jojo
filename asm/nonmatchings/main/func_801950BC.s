nonmatching func_801950BC, 0x34

glabel func_801950BC
    /* A34BC 801950BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A34C0 801950C0 1000B0AF */  sw         $s0, 0x10($sp)
    /* A34C4 801950C4 21808000 */  addu       $s0, $a0, $zero
    /* A34C8 801950C8 1A80053C */  lui        $a1, %hi(D_8019DBC0)
    /* A34CC 801950CC C0DBA524 */  addiu      $a1, $a1, %lo(D_8019DBC0)
    /* A34D0 801950D0 1400BFAF */  sw         $ra, 0x14($sp)
    /* A34D4 801950D4 2240060C */  jal        func_80190088
    /* A34D8 801950D8 14000624 */   addiu     $a2, $zero, 0x14
    /* A34DC 801950DC 21100002 */  addu       $v0, $s0, $zero
    /* A34E0 801950E0 1400BF8F */  lw         $ra, 0x14($sp)
    /* A34E4 801950E4 1000B08F */  lw         $s0, 0x10($sp)
    /* A34E8 801950E8 0800E003 */  jr         $ra
    /* A34EC 801950EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801950BC
