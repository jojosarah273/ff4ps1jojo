nonmatching func_801308B4, 0xA8

glabel func_801308B4
    /* 3ECB4 801308B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3ECB8 801308B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3ECBC 801308BC 93E0030C */  jal        func_800F824C
    /* 3ECC0 801308C0 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3ECC4 801308C4 EEE3030C */  jal        func_800F8FB8
    /* 3ECC8 801308C8 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 3ECCC 801308CC 21C2040C */  jal        func_80130884
    /* 3ECD0 801308D0 00000000 */   nop
    /* 3ECD4 801308D4 52CF030C */  jal        func_800F3D48
    /* 3ECD8 801308D8 00000000 */   nop
    /* 3ECDC 801308DC 53D9030C */  jal        func_800F654C
    /* 3ECE0 801308E0 21200000 */   addu      $a0, $zero, $zero
    /* 3ECE4 801308E4 52CF030C */  jal        func_800F3D48
    /* 3ECE8 801308E8 00000000 */   nop
    /* 3ECEC 801308EC 91E5030C */  jal        func_800F9644
    /* 3ECF0 801308F0 20000424 */   addiu     $a0, $zero, 0x20
    /* 3ECF4 801308F4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3ECF8 801308F8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3ECFC 801308FC 00000000 */  nop
    /* 3ED00 80130900 00006294 */  lhu        $v0, 0x0($v1)
    /* 3ED04 80130904 45000424 */  addiu      $a0, $zero, 0x45
    /* 3ED08 80130908 C0100200 */  sll        $v0, $v0, 3
    /* 3ED0C 8013090C 9DE0030C */  jal        func_800F8274
    /* 3ED10 80130910 000062A4 */   sh        $v0, 0x0($v1)
    /* 3ED14 80130914 5BD4030C */  jal        func_800F516C
    /* 3ED18 80130918 00000000 */   nop
    /* 3ED1C 8013091C 14D4030C */  jal        func_800F5050
    /* 3ED20 80130920 00000000 */   nop
    /* 3ED24 80130924 0FCF030C */  jal        func_800F3C3C
    /* 3ED28 80130928 45000424 */   addiu     $a0, $zero, 0x45
    /* 3ED2C 8013092C E5CF030C */  jal        func_800F3F94
    /* 3ED30 80130930 21204000 */   addu      $a0, $v0, $zero
    /* 3ED34 80130934 0FCF030C */  jal        func_800F3C3C
    /* 3ED38 80130938 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3ED3C 8013093C E5CF030C */  jal        func_800F3F94
    /* 3ED40 80130940 21204000 */   addu      $a0, $v0, $zero
    /* 3ED44 80130944 98E5030C */  jal        func_800F9660
    /* 3ED48 80130948 20000424 */   addiu     $a0, $zero, 0x20
    /* 3ED4C 8013094C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3ED50 80130950 00000000 */  nop
    /* 3ED54 80130954 0800E003 */  jr         $ra
    /* 3ED58 80130958 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801308B4
