nonmatching func_80108398, 0x68

glabel func_80108398
    /* 16798 80108398 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1679C 8010839C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 167A0 801083A0 0021040C */  jal        func_80108400
    /* 167A4 801083A4 00000000 */   nop
    /* 167A8 801083A8 1300043C */  lui        $a0, (0x13A500 >> 16)
    /* 167AC 801083AC 1ADB030C */  jal        func_800F6C68
    /* 167B0 801083B0 00A58434 */   ori       $a0, $a0, (0x13A500 & 0xFFFF)
    /* 167B4 801083B4 93E0030C */  jal        func_800F824C
    /* 167B8 801083B8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 167BC 801083BC 1300043C */  lui        $a0, (0x13A501 >> 16)
    /* 167C0 801083C0 1ADB030C */  jal        func_800F6C68
    /* 167C4 801083C4 01A58434 */   ori       $a0, $a0, (0x13A501 & 0xFFFF)
    /* 167C8 801083C8 93E0030C */  jal        func_800F824C
    /* 167CC 801083CC 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 167D0 801083D0 9CDC030C */  jal        func_800F7270
    /* 167D4 801083D4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 167D8 801083D8 40E3030C */  jal        func_800F8D00
    /* 167DC 801083DC 72070424 */   addiu     $a0, $zero, 0x772
    /* 167E0 801083E0 53D9030C */  jal        func_800F654C
    /* 167E4 801083E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 167E8 801083E8 93E0030C */  jal        func_800F824C
    /* 167EC 801083EC DD000424 */   addiu     $a0, $zero, 0xDD
    /* 167F0 801083F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 167F4 801083F4 00000000 */  nop
    /* 167F8 801083F8 0800E003 */  jr         $ra
    /* 167FC 801083FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80108398
