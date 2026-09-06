nonmatching func_8015F8B8, 0x88

glabel func_8015F8B8
    /* 6DCB8 8015F8B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DCBC 8015F8BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DCC0 8015F8C0 91E5030C */  jal        func_800F9644
    /* 6DCC4 8015F8C4 20000424 */   addiu     $a0, $zero, 0x20
    /* 6DCC8 8015F8C8 20D5030C */  jal        func_800F5480
    /* 6DCCC 8015F8CC 00000000 */   nop
    /* 6DCD0 8015F8D0 63D9030C */  jal        func_800F658C
    /* 6DCD4 8015F8D4 09270424 */   addiu     $a0, $zero, 0x2709
    /* 6DCD8 8015F8D8 C1CE030C */  jal        func_800F3B04
    /* 6DCDC 8015F8DC 07270424 */   addiu     $a0, $zero, 0x2707
    /* 6DCE0 8015F8E0 F3DF030C */  jal        func_800F7FCC
    /* 6DCE4 8015F8E4 21204000 */   addu      $a0, $v0, $zero
    /* 6DCE8 8015F8E8 9DE0030C */  jal        func_800F8274
    /* 6DCEC 8015F8EC A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6DCF0 8015F8F0 C7E5030C */  jal        func_800F971C
    /* 6DCF4 8015F8F4 00000000 */   nop
    /* 6DCF8 8015F8F8 98E5030C */  jal        func_800F9660
    /* 6DCFC 8015F8FC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6DD00 8015F900 8CD9030C */  jal        func_800F6630
    /* 6DD04 8015F904 A5000424 */   addiu     $a0, $zero, 0xA5
    /* 6DD08 8015F908 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6DD0C 8015F90C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6DD10 8015F910 00000000 */  nop
    /* 6DD14 8015F914 00006290 */  lbu        $v0, 0x0($v1)
    /* 6DD18 8015F918 A5000424 */  addiu      $a0, $zero, 0xA5
    /* 6DD1C 8015F91C 80004234 */  ori        $v0, $v0, 0x80
    /* 6DD20 8015F920 93E0030C */  jal        func_800F824C
    /* 6DD24 8015F924 000062A0 */   sb        $v0, 0x0($v1)
    /* 6DD28 8015F928 3395010C */  jal        func_800654CC
    /* 6DD2C 8015F92C 00000000 */   nop
    /* 6DD30 8015F930 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DD34 8015F934 00000000 */  nop
    /* 6DD38 8015F938 0800E003 */  jr         $ra
    /* 6DD3C 8015F93C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F8B8
