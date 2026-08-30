nonmatching func_80120E2C, 0x70

glabel func_80120E2C
    /* 2F22C 80120E2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F230 80120E30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F234 80120E34 80E4030C */  jal        func_800F9200
    /* 2F238 80120E38 00000000 */   nop
    /* 2F23C 80120E3C CCE4030C */  jal        func_800F9330
    /* 2F240 80120E40 00000000 */   nop
    /* 2F244 80120E44 77DC030C */  jal        func_800F71DC
    /* 2F248 80120E48 00D60434 */   ori       $a0, $zero, 0xD600
    /* 2F24C 80120E4C 5BE3030C */  jal        func_800F8D6C
    /* 2F250 80120E50 29000424 */   addiu     $a0, $zero, 0x29
    /* 2F254 80120E54 77DC030C */  jal        func_800F71DC
    /* 2F258 80120E58 00700424 */   addiu     $a0, $zero, 0x7000
    /* 2F25C 80120E5C 5BE3030C */  jal        func_800F8D6C
    /* 2F260 80120E60 35000424 */   addiu     $a0, $zero, 0x35
    /* 2F264 80120E64 53D9030C */  jal        func_800F654C
    /* 2F268 80120E68 03000424 */   addiu     $a0, $zero, 0x3
    /* 2F26C 80120E6C 93E0030C */  jal        func_800F824C
    /* 2F270 80120E70 C3000424 */   addiu     $a0, $zero, 0xC3
    /* 2F274 80120E74 EEE3030C */  jal        func_800F8FB8
    /* 2F278 80120E78 34000424 */   addiu     $a0, $zero, 0x34
    /* 2F27C 80120E7C 68E5030C */  jal        func_800F95A0
    /* 2F280 80120E80 00000000 */   nop
    /* 2F284 80120E84 F7E4030C */  jal        func_800F93DC
    /* 2F288 80120E88 00000000 */   nop
    /* 2F28C 80120E8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F290 80120E90 00000000 */  nop
    /* 2F294 80120E94 0800E003 */  jr         $ra
    /* 2F298 80120E98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120E2C
