nonmatching func_80110B08, 0xC0

glabel func_80110B08
    /* 1EF08 80110B08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1EF0C 80110B0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1EF10 80110B10 53D9030C */  jal        func_800F654C
    /* 1EF14 80110B14 68000424 */   addiu     $a0, $zero, 0x68
    /* 1EF18 80110B18 62E0030C */  jal        func_800F8188
    /* 1EF1C 80110B1C 00030424 */   addiu     $a0, $zero, 0x300
    /* 1EF20 80110B20 53D9030C */  jal        func_800F654C
    /* 1EF24 80110B24 78000424 */   addiu     $a0, $zero, 0x78
    /* 1EF28 80110B28 62E0030C */  jal        func_800F8188
    /* 1EF2C 80110B2C 04030424 */   addiu     $a0, $zero, 0x304
    /* 1EF30 80110B30 62E0030C */  jal        func_800F8188
    /* 1EF34 80110B34 01030424 */   addiu     $a0, $zero, 0x301
    /* 1EF38 80110B38 62E0030C */  jal        func_800F8188
    /* 1EF3C 80110B3C 05030424 */   addiu     $a0, $zero, 0x305
    /* 1EF40 80110B40 8CD9030C */  jal        func_800F6630
    /* 1EF44 80110B44 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1EF48 80110B48 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1EF4C 80110B4C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1EF50 80110B50 00000000 */  nop
    /* 1EF54 80110B54 00006290 */  lbu        $v0, 0x0($v1)
    /* 1EF58 80110B58 02000424 */  addiu      $a0, $zero, 0x2
    /* 1EF5C 80110B5C 82100200 */  srl        $v0, $v0, 2
    /* 1EF60 80110B60 92D0030C */  jal        func_800F4248
    /* 1EF64 80110B64 000062A0 */   sb        $v0, 0x0($v1)
    /* 1EF68 80110B68 04D5030C */  jal        func_800F5410
    /* 1EF6C 80110B6C 00000000 */   nop
    /* 1EF70 80110B70 02D0030C */  jal        func_800F4008
    /* 1EF74 80110B74 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 1EF78 80110B78 62E0030C */  jal        func_800F8188
    /* 1EF7C 80110B7C 02030424 */   addiu     $a0, $zero, 0x302
    /* 1EF80 80110B80 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1EF84 80110B84 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1EF88 80110B88 00000000 */  nop
    /* 1EF8C 80110B8C 00006290 */  lbu        $v0, 0x0($v1)
    /* 1EF90 80110B90 06030424 */  addiu      $a0, $zero, 0x306
    /* 1EF94 80110B94 02004238 */  xori       $v0, $v0, 0x2
    /* 1EF98 80110B98 62E0030C */  jal        func_800F8188
    /* 1EF9C 80110B9C 000062A0 */   sb        $v0, 0x0($v1)
    /* 1EFA0 80110BA0 53D9030C */  jal        func_800F654C
    /* 1EFA4 80110BA4 37000424 */   addiu     $a0, $zero, 0x37
    /* 1EFA8 80110BA8 62E0030C */  jal        func_800F8188
    /* 1EFAC 80110BAC 03030424 */   addiu     $a0, $zero, 0x303
    /* 1EFB0 80110BB0 62E0030C */  jal        func_800F8188
    /* 1EFB4 80110BB4 07030424 */   addiu     $a0, $zero, 0x307
    /* 1EFB8 80110BB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1EFBC 80110BBC 00000000 */  nop
    /* 1EFC0 80110BC0 0800E003 */  jr         $ra
    /* 1EFC4 80110BC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110B08
