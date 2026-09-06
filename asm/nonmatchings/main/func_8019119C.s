nonmatching func_8019119C, 0x4C

glabel func_8019119C
    /* 9F59C 8019119C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9F5A0 801911A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9F5A4 801911A4 1A80013C */  lui        $at, %hi(D_8019B9F0)
    /* 9F5A8 801911A8 F0B920AC */  sw         $zero, %lo(D_8019B9F0)($at)
    /* 9F5AC 801911AC 1A80013C */  lui        $at, %hi(D_8019B9EC)
    /* 9F5B0 801911B0 ECB920AC */  sw         $zero, %lo(D_8019B9EC)($at)
    /* 9F5B4 801911B4 1A80013C */  lui        $at, %hi(D_8019B9FC)
    /* 9F5B8 801911B8 FCB920AC */  sw         $zero, %lo(D_8019B9FC)($at)
    /* 9F5BC 801911BC 1A80013C */  lui        $at, %hi(D_8019B9F8)
    /* 9F5C0 801911C0 BE4A060C */  jal        func_80192AF8
    /* 9F5C4 801911C4 F8B920AC */   sw        $zero, %lo(D_8019B9F8)($at)
    /* 9F5C8 801911C8 1980053C */  lui        $a1, %hi(func_8019153C)
    /* 9F5CC 801911CC 3C15A524 */  addiu      $a1, $a1, %lo(func_8019153C)
    /* 9F5D0 801911D0 CA4A060C */  jal        func_80192B28
    /* 9F5D4 801911D4 02000424 */   addiu     $a0, $zero, 0x2
    /* 9F5D8 801911D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9F5DC 801911DC 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9F5E0 801911E0 0800E003 */  jr         $ra
    /* 9F5E4 801911E4 00000000 */   nop
endlabel func_8019119C
