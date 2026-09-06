nonmatching func_80140E00, 0x78

glabel func_80140E00
    /* 4F200 80140E00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F204 80140E04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F208 80140E08 53D9030C */  jal        func_800F654C
    /* 4F20C 80140E0C C4000424 */   addiu     $a0, $zero, 0xC4
    /* 4F210 80140E10 62E0030C */  jal        func_800F8188
    /* 4F214 80140E14 C2330424 */   addiu     $a0, $zero, 0x33C2
    /* 4F218 80140E18 53D9030C */  jal        func_800F654C
    /* 4F21C 80140E1C 56000424 */   addiu     $a0, $zero, 0x56
    /* 4F220 80140E20 62E0030C */  jal        func_800F8188
    /* 4F224 80140E24 C3330424 */   addiu     $a0, $zero, 0x33C3
    /* 4F228 80140E28 53D9030C */  jal        func_800F654C
    /* 4F22C 80140E2C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 4F230 80140E30 62E0030C */  jal        func_800F8188
    /* 4F234 80140E34 C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 4F238 80140E38 3F03050C */  jal        func_80140CFC
    /* 4F23C 80140E3C 00000000 */   nop
    /* 4F240 80140E40 90D8030C */  jal        func_800F6240
    /* 4F244 80140E44 74F40434 */   ori       $a0, $zero, 0xF474
    /* 4F248 80140E48 59D9030C */  jal        func_800F6564
    /* 4F24C 80140E4C 75F40434 */   ori       $a0, $zero, 0xF475
    /* 4F250 80140E50 62E0030C */  jal        func_800F8188
    /* 4F254 80140E54 C3340424 */   addiu     $a0, $zero, 0x34C3
    /* 4F258 80140E58 1B55020C */  jal        func_8009546C
    /* 4F25C 80140E5C 00000000 */   nop
    /* 4F260 80140E60 6503050C */  jal        func_80140D94
    /* 4F264 80140E64 00000000 */   nop
    /* 4F268 80140E68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F26C 80140E6C 00000000 */  nop
    /* 4F270 80140E70 0800E003 */  jr         $ra
    /* 4F274 80140E74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140E00
