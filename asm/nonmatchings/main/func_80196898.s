nonmatching func_80196898, 0x34

glabel func_80196898
    /* A4C98 80196898 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A4C9C 8019689C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A4CA0 801968A0 3A4A060C */  jal        func_801928E8
    /* A4CA4 801968A4 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A4CA8 801968A8 F0004224 */  addiu      $v0, $v0, 0xF0
    /* A4CAC 801968AC 1A80013C */  lui        $at, %hi(D_8019DC90)
    /* A4CB0 801968B0 90DC22AC */  sw         $v0, %lo(D_8019DC90)($at)
    /* A4CB4 801968B4 1A80013C */  lui        $at, %hi(D_8019DC94)
    /* A4CB8 801968B8 94DC20AC */  sw         $zero, %lo(D_8019DC94)($at)
    /* A4CBC 801968BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* A4CC0 801968C0 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A4CC4 801968C4 0800E003 */  jr         $ra
    /* A4CC8 801968C8 00000000 */   nop
endlabel func_80196898
