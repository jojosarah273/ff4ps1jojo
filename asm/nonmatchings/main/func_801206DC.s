nonmatching func_801206DC, 0x98

glabel func_801206DC
    /* 2EADC 801206DC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2EAE0 801206E0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2EAE4 801206E4 D87C040C */  jal        func_8011F360
    /* 2EAE8 801206E8 00000000 */   nop
    /* 2EAEC 801206EC 91E5030C */  jal        func_800F9644
    /* 2EAF0 801206F0 20000424 */   addiu     $a0, $zero, 0x20
    /* 2EAF4 801206F4 8BE4030C */  jal        func_800F922C
    /* 2EAF8 801206F8 00000000 */   nop
    /* 2EAFC 801206FC 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2EB00 80120700 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2EB04 80120704 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 2EB08 80120708 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 2EB0C 8012070C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EB10 80120710 04D5030C */  jal        func_800F5410
    /* 2EB14 80120714 000082A4 */   sh        $v0, 0x0($a0)
    /* 2EB18 80120718 0FCF030C */  jal        func_800F3C3C
    /* 2EB1C 8012071C 29000424 */   addiu     $a0, $zero, 0x29
    /* 2EB20 80120720 E5CF030C */  jal        func_800F3F94
    /* 2EB24 80120724 21204000 */   addu      $a0, $v0, $zero
    /* 2EB28 80120728 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2EB2C 8012072C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2EB30 80120730 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2EB34 80120734 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2EB38 80120738 00006294 */  lhu        $v0, 0x0($v1)
    /* 2EB3C 8012073C 04E5030C */  jal        func_800F9410
    /* 2EB40 80120740 000082A4 */   sh        $v0, 0x0($a0)
    /* 2EB44 80120744 98E5030C */  jal        func_800F9660
    /* 2EB48 80120748 20000424 */   addiu     $a0, $zero, 0x20
    /* 2EB4C 8012074C 58E2030C */  jal        func_800F8960
    /* 2EB50 80120750 21200000 */   addu      $a0, $zero, $zero
    /* 2EB54 80120754 52CF030C */  jal        func_800F3D48
    /* 2EB58 80120758 00000000 */   nop
    /* 2EB5C 8012075C 58E2030C */  jal        func_800F8960
    /* 2EB60 80120760 02000424 */   addiu     $a0, $zero, 0x2
    /* 2EB64 80120764 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2EB68 80120768 00000000 */  nop
    /* 2EB6C 8012076C 0800E003 */  jr         $ra
    /* 2EB70 80120770 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801206DC
