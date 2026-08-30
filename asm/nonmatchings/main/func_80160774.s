nonmatching func_80160774, 0x80

glabel func_80160774
    /* 6EB74 80160774 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EB78 80160778 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EB7C 8016077C 59D9030C */  jal        func_800F6564
    /* 6EB80 80160780 05270424 */   addiu     $a0, $zero, 0x2705
    /* 6EB84 80160784 92D0030C */  jal        func_800F4248
    /* 6EB88 80160788 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6EB8C 8016078C 62E0030C */  jal        func_800F8188
    /* 6EB90 80160790 05270424 */   addiu     $a0, $zero, 0x2705
    /* 6EB94 80160794 8CD9030C */  jal        func_800F6630
    /* 6EB98 80160798 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 6EB9C 8016079C 92D0030C */  jal        func_800F4248
    /* 6EBA0 801607A0 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6EBA4 801607A4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6EBA8 801607A8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6EBAC 801607AC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6EBB0 801607B0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6EBB4 801607B4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6EBB8 801607B8 B5290424 */  addiu      $a0, $zero, 0x29B5
    /* 6EBBC 801607BC DADA030C */  jal        func_800F6B68
    /* 6EBC0 801607C0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6EBC4 801607C4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6EBC8 801607C8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6EBCC 801607CC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6EBD0 801607D0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6EBD4 801607D4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6EBD8 801607D8 D0380424 */  addiu      $a0, $zero, 0x38D0
    /* 6EBDC 801607DC 3BE4030C */  jal        func_800F90EC
    /* 6EBE0 801607E0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6EBE4 801607E4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EBE8 801607E8 00000000 */  nop
    /* 6EBEC 801607EC 0800E003 */  jr         $ra
    /* 6EBF0 801607F0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160774
