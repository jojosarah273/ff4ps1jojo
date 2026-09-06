nonmatching func_8014AAA8, 0xC8

glabel func_8014AAA8
    /* 58EA8 8014AAA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58EAC 8014AAAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58EB0 8014AAB0 5B32050C */  jal        func_8014C96C
    /* 58EB4 8014AAB4 00000000 */   nop
    /* 58EB8 8014AAB8 90D8030C */  jal        func_800F6240
    /* 58EBC 8014AABC A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 58EC0 8014AAC0 59D9030C */  jal        func_800F6564
    /* 58EC4 8014AAC4 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 58EC8 8014AAC8 62E0030C */  jal        func_800F8188
    /* 58ECC 8014AACC 62F40434 */   ori       $a0, $zero, 0xF462
    /* 58ED0 8014AAD0 59D9030C */  jal        func_800F6564
    /* 58ED4 8014AAD4 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 58ED8 8014AAD8 C1CE030C */  jal        func_800F3B04
    /* 58EDC 8014AADC 22350424 */   addiu     $a0, $zero, 0x3522
    /* 58EE0 8014AAE0 31DE030C */  jal        func_800F78C4
    /* 58EE4 8014AAE4 21204000 */   addu      $a0, $v0, $zero
    /* 58EE8 8014AAE8 62E0030C */  jal        func_800F8188
    /* 58EEC 8014AAEC 63F40434 */   ori       $a0, $zero, 0xF463
    /* 58EF0 8014AAF0 9A2A050C */  jal        func_8014AA68
    /* 58EF4 8014AAF4 00000000 */   nop
    /* 58EF8 8014AAF8 6D2E050C */  jal        func_8014B9B4
    /* 58EFC 8014AAFC 00000000 */   nop
    /* 58F00 8014AB00 59D9030C */  jal        func_800F6564
    /* 58F04 8014AB04 22350424 */   addiu     $a0, $zero, 0x3522
    /* 58F08 8014AB08 0DD9030C */  jal        func_800F6434
    /* 58F0C 8014AB0C 02000424 */   addiu     $a0, $zero, 0x2
    /* 58F10 8014AB10 13004014 */  bnez       $v0, .L8014AB60
    /* 58F14 8014AB14 00000000 */   nop
    /* 58F18 8014AB18 59D9030C */  jal        func_800F6564
    /* 58F1C 8014AB1C C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 58F20 8014AB20 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 58F24 8014AB24 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 58F28 8014AB28 00000000 */  nop
    /* 58F2C 8014AB2C 00006290 */  lbu        $v0, 0x0($v1)
    /* 58F30 8014AB30 62F40434 */  ori        $a0, $zero, 0xF462
    /* 58F34 8014AB34 80004238 */  xori       $v0, $v0, 0x80
    /* 58F38 8014AB38 62E0030C */  jal        func_800F8188
    /* 58F3C 8014AB3C 000062A0 */   sb        $v0, 0x0($v1)
    /* 58F40 8014AB40 59D9030C */  jal        func_800F6564
    /* 58F44 8014AB44 23350424 */   addiu     $a0, $zero, 0x3523
    /* 58F48 8014AB48 62E0030C */  jal        func_800F8188
    /* 58F4C 8014AB4C 63F40434 */   ori       $a0, $zero, 0xF463
    /* 58F50 8014AB50 9A2A050C */  jal        func_8014AA68
    /* 58F54 8014AB54 00000000 */   nop
    /* 58F58 8014AB58 8D2E050C */  jal        func_8014BA34
    /* 58F5C 8014AB5C 00000000 */   nop
  .L8014AB60:
    /* 58F60 8014AB60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58F64 8014AB64 00000000 */  nop
    /* 58F68 8014AB68 0800E003 */  jr         $ra
    /* 58F6C 8014AB6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AAA8
