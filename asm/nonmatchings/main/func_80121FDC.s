nonmatching func_80121FDC, 0x50

glabel func_80121FDC
    /* 303DC 80121FDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 303E0 80121FE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 303E4 80121FE4 53D9030C */  jal        func_800F654C
    /* 303E8 80121FE8 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 303EC 80121FEC 93E0030C */  jal        func_800F824C
    /* 303F0 80121FF0 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 303F4 80121FF4 53D9030C */  jal        func_800F654C
    /* 303F8 80121FF8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 303FC 80121FFC 93E0030C */  jal        func_800F824C
    /* 30400 80122000 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 30404 80122004 53D9030C */  jal        func_800F654C
    /* 30408 80122008 FD000424 */   addiu     $a0, $zero, 0xFD
    /* 3040C 8012200C 93E0030C */  jal        func_800F824C
    /* 30410 80122010 20000424 */   addiu     $a0, $zero, 0x20
    /* 30414 80122014 F986040C */  jal        func_80121BE4
    /* 30418 80122018 00000000 */   nop
    /* 3041C 8012201C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30420 80122020 00000000 */  nop
    /* 30424 80122024 0800E003 */  jr         $ra
    /* 30428 80122028 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121FDC
