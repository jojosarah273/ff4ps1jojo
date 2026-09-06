nonmatching func_80197E30, 0x38

glabel func_80197E30
    /* A6230 80197E30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A6234 80197E34 1000BFAF */  sw         $ra, 0x10($sp)
    /* A6238 80197E38 BA5D060C */  jal        func_801976E8
    /* A623C 80197E3C 00000000 */   nop
    /* A6240 80197E40 2080053C */  lui        $a1, %hi(D_801FEBE8)
    /* A6244 80197E44 E8EBA524 */  addiu      $a1, $a1, %lo(D_801FEBE8)
    /* A6248 80197E48 525F060C */  jal        func_80197D48
    /* A624C 80197E4C 01000424 */   addiu     $a0, $zero, 0x1
    /* A6250 80197E50 BE5D060C */  jal        func_801976F8
    /* A6254 80197E54 00000000 */   nop
    /* A6258 80197E58 1000BF8F */  lw         $ra, 0x10($sp)
    /* A625C 80197E5C 01000224 */  addiu      $v0, $zero, 0x1
    /* A6260 80197E60 0800E003 */  jr         $ra
    /* A6264 80197E64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80197E30
