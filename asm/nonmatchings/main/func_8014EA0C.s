nonmatching func_8014EA0C, 0xD8

glabel func_8014EA0C
    /* 5CE0C 8014EA0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5CE10 8014EA10 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5CE14 8014EA14 77DC030C */  jal        func_800F71DC
    /* 5CE18 8014EA18 21200000 */   addu      $a0, $zero, $zero
    /* 5CE1C 8014EA1C 93E0030C */  jal        func_800F824C
    /* 5CE20 8014EA20 21200000 */   addu      $a0, $zero, $zero
    /* 5CE24 8014EA24 59D9030C */  jal        func_800F6564
    /* 5CE28 8014EA28 84F20434 */   ori       $a0, $zero, 0xF284
    /* 5CE2C 8014EA2C 93E0030C */  jal        func_800F824C
    /* 5CE30 8014EA30 02000424 */   addiu     $a0, $zero, 0x2
  .L8014EA34:
    /* 5CE34 8014EA34 0FCF030C */  jal        func_800F3C3C
    /* 5CE38 8014EA38 02000424 */   addiu     $a0, $zero, 0x2
    /* 5CE3C 8014EA3C CAD3030C */  jal        func_800F4F28
    /* 5CE40 8014EA40 21204000 */   addu      $a0, $v0, $zero
    /* 5CE44 8014EA44 EBD3030C */  jal        func_800F4FAC
    /* 5CE48 8014EA48 01010424 */   addiu     $a0, $zero, 0x101
    /* 5CE4C 8014EA4C 19004014 */  bnez       $v0, .L8014EAB4
    /* 5CE50 8014EA50 00000000 */   nop
    /* 5CE54 8014EA54 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 5CE58 8014EA58 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 5CE5C 8014EA5C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 5CE60 8014EA60 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 5CE64 8014EA64 00006290 */  lbu        $v0, 0x0($v1)
    /* 5CE68 8014EA68 00000000 */  nop
    /* 5CE6C 8014EA6C 000082A0 */  sb         $v0, 0x0($a0)
    /* 5CE70 8014EA70 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5CE74 8014EA74 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5CE78 8014EA78 00000000 */  nop
    /* 5CE7C 8014EA7C 00006290 */  lbu        $v0, 0x0($v1)
    /* 5CE80 8014EA80 00000000 */  nop
    /* 5CE84 8014EA84 00110200 */  sll        $v0, $v0, 4
    /* 5CE88 8014EA88 000062A0 */  sb         $v0, 0x0($v1)
    /* 5CE8C 8014EA8C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5CE90 8014EA90 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5CE94 8014EA94 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5CE98 8014EA98 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5CE9C 8014EA9C 00008294 */  lhu        $v0, 0x0($a0)
    /* 5CEA0 8014EAA0 21200000 */  addu       $a0, $zero, $zero
    /* 5CEA4 8014EAA4 8CD9030C */  jal        func_800F6630
    /* 5CEA8 8014EAA8 000062A4 */   sh        $v0, 0x0($v1)
    /* 5CEAC 8014EAAC 58E2030C */  jal        func_800F8960
    /* 5CEB0 8014EAB0 C7EF0434 */   ori       $a0, $zero, 0xEFC7
  .L8014EAB4:
    /* 5CEB4 8014EAB4 D9D8030C */  jal        func_800F6364
    /* 5CEB8 8014EAB8 00000000 */   nop
    /* 5CEBC 8014EABC 56D6030C */  jal        func_800F5958
    /* 5CEC0 8014EAC0 05000424 */   addiu     $a0, $zero, 0x5
    /* 5CEC4 8014EAC4 F5D4030C */  jal        func_800F53D4
    /* 5CEC8 8014EAC8 00000000 */   nop
    /* 5CECC 8014EACC D9FF4010 */  beqz       $v0, .L8014EA34
    /* 5CED0 8014EAD0 00000000 */   nop
    /* 5CED4 8014EAD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5CED8 8014EAD8 00000000 */  nop
    /* 5CEDC 8014EADC 0800E003 */  jr         $ra
    /* 5CEE0 8014EAE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EA0C
