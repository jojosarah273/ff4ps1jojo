nonmatching func_80124DC8, 0xE4

glabel func_80124DC8
    /* 331C8 80124DC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 331CC 80124DCC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 331D0 80124DD0 92D0030C */  jal        func_800F4248
    /* 331D4 80124DD4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 331D8 80124DD8 80E4030C */  jal        func_800F9200
    /* 331DC 80124DDC 00000000 */   nop
    /* 331E0 80124DE0 91E5030C */  jal        func_800F9644
    /* 331E4 80124DE4 20000424 */   addiu     $a0, $zero, 0x20
    /* 331E8 80124DE8 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 331EC 80124DEC 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 331F0 80124DF0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 331F4 80124DF4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 331F8 80124DF8 00006294 */  lhu        $v0, 0x0($v1)
    /* 331FC 80124DFC 04D5030C */  jal        func_800F5410
    /* 33200 80124E00 000082A4 */   sh        $v0, 0x0($a0)
    /* 33204 80124E04 0FCF030C */  jal        func_800F3C3C
    /* 33208 80124E08 29000424 */   addiu     $a0, $zero, 0x29
    /* 3320C 80124E0C E5CF030C */  jal        func_800F3F94
    /* 33210 80124E10 21204000 */   addu      $a0, $v0, $zero
    /* 33214 80124E14 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 33218 80124E18 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3321C 80124E1C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 33220 80124E20 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 33224 80124E24 00004394 */  lhu        $v1, 0x0($v0)
    /* 33228 80124E28 20000424 */  addiu      $a0, $zero, 0x20
    /* 3322C 80124E2C 98E5030C */  jal        func_800F9660
    /* 33230 80124E30 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 33234 80124E34 F7E4030C */  jal        func_800F93DC
    /* 33238 80124E38 00000000 */   nop
    /* 3323C 80124E3C 50D4030C */  jal        func_800F5140
    /* 33240 80124E40 00000000 */   nop
    /* 33244 80124E44 93E0030C */  jal        func_800F824C
    /* 33248 80124E48 45000424 */   addiu     $a0, $zero, 0x45
    /* 3324C 80124E4C 50D4030C */  jal        func_800F5140
    /* 33250 80124E50 00000000 */   nop
    /* 33254 80124E54 D3D3030C */  jal        func_800F4F4C
    /* 33258 80124E58 00000000 */   nop
    /* 3325C 80124E5C 0FCF030C */  jal        func_800F3C3C
    /* 33260 80124E60 45000424 */   addiu     $a0, $zero, 0x45
    /* 33264 80124E64 CECF030C */  jal        func_800F3F38
    /* 33268 80124E68 21204000 */   addu      $a0, $v0, $zero
    /* 3326C 80124E6C 93E0030C */  jal        func_800F824C
    /* 33270 80124E70 45000424 */   addiu     $a0, $zero, 0x45
    /* 33274 80124E74 EEE3030C */  jal        func_800F8FB8
    /* 33278 80124E78 46000424 */   addiu     $a0, $zero, 0x46
    /* 3327C 80124E7C 9CDC030C */  jal        func_800F7270
    /* 33280 80124E80 45000424 */   addiu     $a0, $zero, 0x45
    /* 33284 80124E84 53D9030C */  jal        func_800F654C
    /* 33288 80124E88 06000424 */   addiu     $a0, $zero, 0x6
    /* 3328C 80124E8C 93E0030C */  jal        func_800F824C
    /* 33290 80124E90 45000424 */   addiu     $a0, $zero, 0x45
    /* 33294 80124E94 C78D040C */  jal        func_8012371C
    /* 33298 80124E98 00000000 */   nop
    /* 3329C 80124E9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 332A0 80124EA0 00000000 */  nop
    /* 332A4 80124EA4 0800E003 */  jr         $ra
    /* 332A8 80124EA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124DC8
