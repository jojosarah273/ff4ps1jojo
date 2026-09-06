nonmatching func_80122D20, 0x20C

glabel func_80122D20
    /* 31120 80122D20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31124 80122D24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31128 80122D28 5CDB030C */  jal        func_800F6D70
    /* 3112C 80122D2C 21200000 */   addu      $a0, $zero, $zero
    /* 31130 80122D30 92D0030C */  jal        func_800F4248
    /* 31134 80122D34 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 31138 80122D38 48D0030C */  jal        func_800F4120
    /* 3113C 80122D3C 02000424 */   addiu     $a0, $zero, 0x2
    /* 31140 80122D40 76004014 */  bnez       $v0, .L80122F1C
    /* 31144 80122D44 00000000 */   nop
    /* 31148 80122D48 AFE3030C */  jal        func_800F8EBC
    /* 3114C 80122D4C 48000424 */   addiu     $a0, $zero, 0x48
    /* 31150 80122D50 5BE3030C */  jal        func_800F8D6C
    /* 31154 80122D54 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 31158 80122D58 C08E040C */  jal        func_80123B00
    /* 3115C 80122D5C 00000000 */   nop
    /* 31160 80122D60 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 31164 80122D64 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 31168 80122D68 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 3116C 80122D6C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 31170 80122D70 00006294 */  lhu        $v0, 0x0($v1)
    /* 31174 80122D74 8382040C */  jal        func_80120A0C
    /* 31178 80122D78 000082A4 */   sh        $v0, 0x0($a0)
    /* 3117C 80122D7C 65DD030C */  jal        func_800F7594
    /* 31180 80122D80 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 31184 80122D84 9CDC030C */  jal        func_800F7270
    /* 31188 80122D88 48000424 */   addiu     $a0, $zero, 0x48
    /* 3118C 80122D8C C88C040C */  jal        func_80123320
    /* 31190 80122D90 00000000 */   nop
    /* 31194 80122D94 91E5030C */  jal        func_800F9644
    /* 31198 80122D98 20000424 */   addiu     $a0, $zero, 0x20
    /* 3119C 80122D9C 96D9030C */  jal        func_800F6658
    /* 311A0 80122DA0 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 311A4 80122DA4 04D5030C */  jal        func_800F5410
    /* 311A8 80122DA8 00000000 */   nop
    /* 311AC 80122DAC 19D0030C */  jal        func_800F4064
    /* 311B0 80122DB0 84000424 */   addiu     $a0, $zero, 0x84
    /* 311B4 80122DB4 9DE0030C */  jal        func_800F8274
    /* 311B8 80122DB8 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 311BC 80122DBC 0FCF030C */  jal        func_800F3C3C
    /* 311C0 80122DC0 29000424 */   addiu     $a0, $zero, 0x29
    /* 311C4 80122DC4 E5CF030C */  jal        func_800F3F94
    /* 311C8 80122DC8 21204000 */   addu      $a0, $v0, $zero
    /* 311CC 80122DCC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 311D0 80122DD0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 311D4 80122DD4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 311D8 80122DD8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 311DC 80122DDC 00004394 */  lhu        $v1, 0x0($v0)
    /* 311E0 80122DE0 20000424 */  addiu      $a0, $zero, 0x20
    /* 311E4 80122DE4 98E5030C */  jal        func_800F9660
    /* 311E8 80122DE8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 311EC 80122DEC 53D9030C */  jal        func_800F654C
    /* 311F0 80122DF0 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 311F4 80122DF4 DAE1030C */  jal        func_800F8768
    /* 311F8 80122DF8 21200000 */   addu      $a0, $zero, $zero
    /* 311FC 80122DFC DAE1030C */  jal        func_800F8768
    /* 31200 80122E00 08000424 */   addiu     $a0, $zero, 0x8
    /* 31204 80122E04 53D9030C */  jal        func_800F654C
    /* 31208 80122E08 46000424 */   addiu     $a0, $zero, 0x46
    /* 3120C 80122E0C DAE1030C */  jal        func_800F8768
    /* 31210 80122E10 02000424 */   addiu     $a0, $zero, 0x2
    /* 31214 80122E14 DAE1030C */  jal        func_800F8768
    /* 31218 80122E18 06000424 */   addiu     $a0, $zero, 0x6
    /* 3121C 80122E1C 53D9030C */  jal        func_800F654C
    /* 31220 80122E20 57000424 */   addiu     $a0, $zero, 0x57
    /* 31224 80122E24 DAE1030C */  jal        func_800F8768
    /* 31228 80122E28 04000424 */   addiu     $a0, $zero, 0x4
    /* 3122C 80122E2C 53D9030C */  jal        func_800F654C
    /* 31230 80122E30 49000424 */   addiu     $a0, $zero, 0x49
    /* 31234 80122E34 DAE1030C */  jal        func_800F8768
    /* 31238 80122E38 40000424 */   addiu     $a0, $zero, 0x40
    /* 3123C 80122E3C 53D9030C */  jal        func_800F654C
    /* 31240 80122E40 51000424 */   addiu     $a0, $zero, 0x51
    /* 31244 80122E44 DAE1030C */  jal        func_800F8768
    /* 31248 80122E48 42000424 */   addiu     $a0, $zero, 0x42
    /* 3124C 80122E4C DAE1030C */  jal        func_800F8768
    /* 31250 80122E50 82000424 */   addiu     $a0, $zero, 0x82
    /* 31254 80122E54 53D9030C */  jal        func_800F654C
    /* 31258 80122E58 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 3125C 80122E5C DAE1030C */  jal        func_800F8768
    /* 31260 80122E60 80000424 */   addiu     $a0, $zero, 0x80
    /* 31264 80122E64 53D9030C */  jal        func_800F654C
    /* 31268 80122E68 C7000424 */   addiu     $a0, $zero, 0xC7
    /* 3126C 80122E6C DAE1030C */  jal        func_800F8768
    /* 31270 80122E70 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 31274 80122E74 DAE1030C */  jal        func_800F8768
    /* 31278 80122E78 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 3127C 80122E7C 40DD030C */  jal        func_800F7500
    /* 31280 80122E80 02000424 */   addiu     $a0, $zero, 0x2
    /* 31284 80122E84 B6D9030C */  jal        func_800F66D8
    /* 31288 80122E88 48000424 */   addiu     $a0, $zero, 0x48
    /* 3128C 80122E8C D87C040C */  jal        func_8011F360
    /* 31290 80122E90 00000000 */   nop
    /* 31294 80122E94 DAE1030C */  jal        func_800F8768
    /* 31298 80122E98 14000424 */   addiu     $a0, $zero, 0x14
    /* 3129C 80122E9C 52CF030C */  jal        func_800F3D48
    /* 312A0 80122EA0 00000000 */   nop
    /* 312A4 80122EA4 DAE1030C */  jal        func_800F8768
    /* 312A8 80122EA8 16000424 */   addiu     $a0, $zero, 0x16
    /* 312AC 80122EAC 91E5030C */  jal        func_800F9644
    /* 312B0 80122EB0 20000424 */   addiu     $a0, $zero, 0x20
    /* 312B4 80122EB4 56D9030C */  jal        func_800F6558
    /* 312B8 80122EB8 46000424 */   addiu     $a0, $zero, 0x46
    /* 312BC 80122EBC 40DD030C */  jal        func_800F7500
    /* 312C0 80122EC0 07000424 */   addiu     $a0, $zero, 0x7
    /* 312C4 80122EC4 CB8B040C */  jal        func_80122F2C
    /* 312C8 80122EC8 00000000 */   nop
    /* 312CC 80122ECC 56D9030C */  jal        func_800F6558
    /* 312D0 80122ED0 50000424 */   addiu     $a0, $zero, 0x50
    /* 312D4 80122ED4 40DD030C */  jal        func_800F7500
    /* 312D8 80122ED8 09000424 */   addiu     $a0, $zero, 0x9
    /* 312DC 80122EDC CB8B040C */  jal        func_80122F2C
    /* 312E0 80122EE0 00000000 */   nop
    /* 312E4 80122EE4 56D9030C */  jal        func_800F6558
    /* 312E8 80122EE8 86000424 */   addiu     $a0, $zero, 0x86
    /* 312EC 80122EEC 40DD030C */  jal        func_800F7500
    /* 312F0 80122EF0 0B000424 */   addiu     $a0, $zero, 0xB
    /* 312F4 80122EF4 CB8B040C */  jal        func_80122F2C
    /* 312F8 80122EF8 00000000 */   nop
    /* 312FC 80122EFC 56D9030C */  jal        func_800F6558
    /* 31300 80122F00 90000424 */   addiu     $a0, $zero, 0x90
    /* 31304 80122F04 40DD030C */  jal        func_800F7500
    /* 31308 80122F08 0D000424 */   addiu     $a0, $zero, 0xD
    /* 3130C 80122F0C CB8B040C */  jal        func_80122F2C
    /* 31310 80122F10 00000000 */   nop
    /* 31314 80122F14 98E5030C */  jal        func_800F9660
    /* 31318 80122F18 20000424 */   addiu     $a0, $zero, 0x20
  .L80122F1C:
    /* 3131C 80122F1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31320 80122F20 00000000 */  nop
    /* 31324 80122F24 0800E003 */  jr         $ra
    /* 31328 80122F28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122D20
