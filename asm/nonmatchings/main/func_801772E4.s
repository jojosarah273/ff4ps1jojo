nonmatching func_801772E4, 0xF0

glabel func_801772E4
    /* 856E4 801772E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 856E8 801772E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 856EC 801772EC 8CD9030C */  jal        func_800F6630
    /* 856F0 801772F0 D9000424 */   addiu     $a0, $zero, 0xD9
    /* 856F4 801772F4 75DC050C */  jal        func_801771D4
    /* 856F8 801772F8 00000000 */   nop
    /* 856FC 801772FC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 85700 80177300 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 85704 80177304 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 85708 80177308 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 8570C 8017730C 00004394 */  lhu        $v1, 0x0($v0)
    /* 85710 80177310 DA000424 */  addiu      $a0, $zero, 0xDA
    /* 85714 80177314 8CD9030C */  jal        func_800F6630
    /* 85718 80177318 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 8571C 8017731C 75DC050C */  jal        func_801771D4
    /* 85720 80177320 00000000 */   nop
    /* 85724 80177324 91E5030C */  jal        func_800F9644
    /* 85728 80177328 20000424 */   addiu     $a0, $zero, 0x20
    /* 8572C 8017732C F8DA030C */  jal        func_800F6BE0
    /* 85730 80177330 CD1B0424 */   addiu     $a0, $zero, 0x1BCD
    /* 85734 80177334 8BE4030C */  jal        func_800F922C
    /* 85738 80177338 00000000 */   nop
    /* 8573C 8017733C F8DA030C */  jal        func_800F6BE0
    /* 85740 80177340 CF1B0424 */   addiu     $a0, $zero, 0x1BCF
    /* 85744 80177344 8BE4030C */  jal        func_800F922C
    /* 85748 80177348 00000000 */   nop
    /* 8574C 8017734C F8DA030C */  jal        func_800F6BE0
    /* 85750 80177350 D11B0424 */   addiu     $a0, $zero, 0x1BD1
    /* 85754 80177354 8BE4030C */  jal        func_800F922C
    /* 85758 80177358 00000000 */   nop
    /* 8575C 8017735C 7ADB030C */  jal        func_800F6DE8
    /* 85760 80177360 CD1B0424 */   addiu     $a0, $zero, 0x1BCD
    /* 85764 80177364 F7E1030C */  jal        func_800F87DC
    /* 85768 80177368 CD1B0424 */   addiu     $a0, $zero, 0x1BCD
    /* 8576C 8017736C 7ADB030C */  jal        func_800F6DE8
    /* 85770 80177370 CF1B0424 */   addiu     $a0, $zero, 0x1BCF
    /* 85774 80177374 F7E1030C */  jal        func_800F87DC
    /* 85778 80177378 CF1B0424 */   addiu     $a0, $zero, 0x1BCF
    /* 8577C 8017737C 7ADB030C */  jal        func_800F6DE8
    /* 85780 80177380 D11B0424 */   addiu     $a0, $zero, 0x1BD1
    /* 85784 80177384 F7E1030C */  jal        func_800F87DC
    /* 85788 80177388 D11B0424 */   addiu     $a0, $zero, 0x1BD1
    /* 8578C 8017738C 04E5030C */  jal        func_800F9410
    /* 85790 80177390 00000000 */   nop
    /* 85794 80177394 75E2030C */  jal        func_800F89D4
    /* 85798 80177398 D11B0424 */   addiu     $a0, $zero, 0x1BD1
    /* 8579C 8017739C 04E5030C */  jal        func_800F9410
    /* 857A0 801773A0 00000000 */   nop
    /* 857A4 801773A4 75E2030C */  jal        func_800F89D4
    /* 857A8 801773A8 CF1B0424 */   addiu     $a0, $zero, 0x1BCF
    /* 857AC 801773AC 04E5030C */  jal        func_800F9410
    /* 857B0 801773B0 00000000 */   nop
    /* 857B4 801773B4 75E2030C */  jal        func_800F89D4
    /* 857B8 801773B8 CD1B0424 */   addiu     $a0, $zero, 0x1BCD
    /* 857BC 801773BC 98E5030C */  jal        func_800F9660
    /* 857C0 801773C0 20000424 */   addiu     $a0, $zero, 0x20
    /* 857C4 801773C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 857C8 801773C8 00000000 */  nop
    /* 857CC 801773CC 0800E003 */  jr         $ra
    /* 857D0 801773D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801772E4
