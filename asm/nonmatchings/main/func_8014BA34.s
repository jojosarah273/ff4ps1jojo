nonmatching func_8014BA34, 0x70

glabel func_8014BA34
    /* 59E34 8014BA34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59E38 8014BA38 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59E3C 8014BA3C 59D9030C */  jal        func_800F6564
    /* 59E40 8014BA40 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 59E44 8014BA44 92D0030C */  jal        func_800F4248
    /* 59E48 8014BA48 80000424 */   addiu     $a0, $zero, 0x80
    /* 59E4C 8014BA4C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 59E50 8014BA50 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 59E54 8014BA54 00000000 */  nop
    /* 59E58 8014BA58 00006290 */  lbu        $v0, 0x0($v1)
    /* 59E5C 8014BA5C 21200000 */  addu       $a0, $zero, $zero
    /* 59E60 8014BA60 80004238 */  xori       $v0, $v0, 0x80
    /* 59E64 8014BA64 93E0030C */  jal        func_800F824C
    /* 59E68 8014BA68 000062A0 */   sb        $v0, 0x0($v1)
    /* 59E6C 8014BA6C 59D9030C */  jal        func_800F6564
    /* 59E70 8014BA70 23350424 */   addiu     $a0, $zero, 0x3523
    /* 59E74 8014BA74 93E0030C */  jal        func_800F824C
    /* 59E78 8014BA78 01000424 */   addiu     $a0, $zero, 0x1
    /* 59E7C 8014BA7C EEE3030C */  jal        func_800F8FB8
    /* 59E80 8014BA80 02000424 */   addiu     $a0, $zero, 0x2
    /* 59E84 8014BA84 59D9030C */  jal        func_800F6564
    /* 59E88 8014BA88 97F30434 */   ori       $a0, $zero, 0xF397
    /* 59E8C 8014BA8C 8B36050C */  jal        func_8014DA2C
    /* 59E90 8014BA90 00000000 */   nop
    /* 59E94 8014BA94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59E98 8014BA98 00000000 */  nop
    /* 59E9C 8014BA9C 0800E003 */  jr         $ra
    /* 59EA0 8014BAA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014BA34
