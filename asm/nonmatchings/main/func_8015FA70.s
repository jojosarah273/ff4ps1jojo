nonmatching func_8015FA70, 0x88

glabel func_8015FA70
    /* 6DE70 8015FA70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DE74 8015FA74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DE78 8015FA78 5349050C */  jal        func_8015254C
    /* 6DE7C 8015FA7C 00000000 */   nop
    /* 6DE80 8015FA80 84DC030C */  jal        func_800F7210
    /* 6DE84 8015FA84 49390424 */   addiu     $a0, $zero, 0x3949
    /* 6DE88 8015FA88 56D6030C */  jal        func_800F5958
    /* 6DE8C 8015FA8C 0F270424 */   addiu     $a0, $zero, 0x270F
    /* 6DE90 8015FA90 F0D4030C */  jal        func_800F53C0
    /* 6DE94 8015FA94 00000000 */   nop
    /* 6DE98 8015FA98 05004010 */  beqz       $v0, .L8015FAB0
    /* 6DE9C 8015FA9C 00000000 */   nop
    /* 6DEA0 8015FAA0 77DC030C */  jal        func_800F71DC
    /* 6DEA4 8015FAA4 0F270424 */   addiu     $a0, $zero, 0x270F
    /* 6DEA8 8015FAA8 40E3030C */  jal        func_800F8D00
    /* 6DEAC 8015FAAC 49390424 */   addiu     $a0, $zero, 0x3949
  .L8015FAB0:
    /* 6DEB0 8015FAB0 59D9030C */  jal        func_800F6564
    /* 6DEB4 8015FAB4 49390424 */   addiu     $a0, $zero, 0x3949
    /* 6DEB8 8015FAB8 93E0030C */  jal        func_800F824C
    /* 6DEBC 8015FABC A4000424 */   addiu     $a0, $zero, 0xA4
    /* 6DEC0 8015FAC0 59D9030C */  jal        func_800F6564
    /* 6DEC4 8015FAC4 4A390424 */   addiu     $a0, $zero, 0x394A
    /* 6DEC8 8015FAC8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6DECC 8015FACC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6DED0 8015FAD0 00000000 */  nop
    /* 6DED4 8015FAD4 00006290 */  lbu        $v0, 0x0($v1)
    /* 6DED8 8015FAD8 A5000424 */  addiu      $a0, $zero, 0xA5
    /* 6DEDC 8015FADC 80004234 */  ori        $v0, $v0, 0x80
    /* 6DEE0 8015FAE0 93E0030C */  jal        func_800F824C
    /* 6DEE4 8015FAE4 000062A0 */   sb        $v0, 0x0($v1)
    /* 6DEE8 8015FAE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DEEC 8015FAEC 00000000 */  nop
    /* 6DEF0 8015FAF0 0800E003 */  jr         $ra
    /* 6DEF4 8015FAF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FA70
