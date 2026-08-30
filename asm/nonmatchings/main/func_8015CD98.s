nonmatching func_8015CD98, 0x108

glabel func_8015CD98
    /* 6B198 8015CD98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B19C 8015CD9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B1A0 8015CDA0 8CD9030C */  jal        func_800F6630
    /* 6B1A4 8015CDA4 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6B1A8 8015CDA8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B1AC 8015CDAC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B1B0 8015CDB0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6B1B4 8015CDB4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6B1B8 8015CDB8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B1BC 8015CDBC 3D390424 */  addiu      $a0, $zero, 0x393D
    /* 6B1C0 8015CDC0 40E3030C */  jal        func_800F8D00
    /* 6B1C4 8015CDC4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B1C8 8015CDC8 9CDC030C */  jal        func_800F7270
    /* 6B1CC 8015CDCC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6B1D0 8015CDD0 40E3030C */  jal        func_800F8D00
    /* 6B1D4 8015CDD4 3F390424 */   addiu     $a0, $zero, 0x393F
    /* 6B1D8 8015CDD8 DB48050C */  jal        func_8015236C
    /* 6B1DC 8015CDDC 00000000 */   nop
    /* 6B1E0 8015CDE0 84DC030C */  jal        func_800F7210
    /* 6B1E4 8015CDE4 41390424 */   addiu     $a0, $zero, 0x3941
    /* 6B1E8 8015CDE8 40E3030C */  jal        func_800F8D00
    /* 6B1EC 8015CDEC 56390424 */   addiu     $a0, $zero, 0x3956
    /* 6B1F0 8015CDF0 9CDC030C */  jal        func_800F7270
    /* 6B1F4 8015CDF4 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6B1F8 8015CDF8 40E3030C */  jal        func_800F8D00
    /* 6B1FC 8015CDFC 58390424 */   addiu     $a0, $zero, 0x3958
    /* 6B200 8015CE00 794B050C */  jal        func_80152DE4
    /* 6B204 8015CE04 00000000 */   nop
    /* 6B208 8015CE08 59D9030C */  jal        func_800F6564
    /* 6B20C 8015CE0C 39390424 */   addiu     $a0, $zero, 0x3939
    /* 6B210 8015CE10 93E0030C */  jal        func_800F824C
    /* 6B214 8015CE14 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6B218 8015CE18 53D9030C */  jal        func_800F654C
    /* 6B21C 8015CE1C 04000424 */   addiu     $a0, $zero, 0x4
    /* 6B220 8015CE20 93E0030C */  jal        func_800F824C
    /* 6B224 8015CE24 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 6B228 8015CE28 0349050C */  jal        func_8015240C
    /* 6B22C 8015CE2C 00000000 */   nop
    /* 6B230 8015CE30 9CDC030C */  jal        func_800F7270
    /* 6B234 8015CE34 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6B238 8015CE38 40E3030C */  jal        func_800F8D00
    /* 6B23C 8015CE3C 56390424 */   addiu     $a0, $zero, 0x3956
    /* 6B240 8015CE40 84DC030C */  jal        func_800F7210
    /* 6B244 8015CE44 5A390424 */   addiu     $a0, $zero, 0x395A
    /* 6B248 8015CE48 40E3030C */  jal        func_800F8D00
    /* 6B24C 8015CE4C 58390424 */   addiu     $a0, $zero, 0x3958
    /* 6B250 8015CE50 794B050C */  jal        func_80152DE4
    /* 6B254 8015CE54 00000000 */   nop
    /* 6B258 8015CE58 9CDC030C */  jal        func_800F7270
    /* 6B25C 8015CE5C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6B260 8015CE60 59D9030C */  jal        func_800F6564
    /* 6B264 8015CE64 5A390424 */   addiu     $a0, $zero, 0x395A
    /* 6B268 8015CE68 DAE1030C */  jal        func_800F8768
    /* 6B26C 8015CE6C 55200424 */   addiu     $a0, $zero, 0x2055
    /* 6B270 8015CE70 93E0030C */  jal        func_800F824C
    /* 6B274 8015CE74 80000424 */   addiu     $a0, $zero, 0x80
    /* 6B278 8015CE78 59D9030C */  jal        func_800F6564
    /* 6B27C 8015CE7C 5B390424 */   addiu     $a0, $zero, 0x395B
    /* 6B280 8015CE80 DAE1030C */  jal        func_800F8768
    /* 6B284 8015CE84 56200424 */   addiu     $a0, $zero, 0x2056
    /* 6B288 8015CE88 93E0030C */  jal        func_800F824C
    /* 6B28C 8015CE8C 81000424 */   addiu     $a0, $zero, 0x81
    /* 6B290 8015CE90 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B294 8015CE94 00000000 */  nop
    /* 6B298 8015CE98 0800E003 */  jr         $ra
    /* 6B29C 8015CE9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015CD98
