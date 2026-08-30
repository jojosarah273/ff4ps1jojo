nonmatching func_8014EAE4, 0x134

glabel func_8014EAE4
    /* 5CEE4 8014EAE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5CEE8 8014EAE8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5CEEC 8014EAEC 59D9030C */  jal        func_800F6564
    /* 5CEF0 8014EAF0 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5CEF4 8014EAF4 0DD9030C */  jal        func_800F6434
    /* 5CEF8 8014EAF8 02000424 */   addiu     $a0, $zero, 0x2
    /* 5CEFC 8014EAFC 11004014 */  bnez       $v0, .L8014EB44
    /* 5CF00 8014EB00 00000000 */   nop
    /* 5CF04 8014EB04 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 5CF08 8014EB08 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 5CF0C 8014EB0C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 5CF10 8014EB10 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 5CF14 8014EB14 00006290 */  lbu        $v0, 0x0($v1)
    /* 5CF18 8014EB18 04D5030C */  jal        func_800F5410
    /* 5CF1C 8014EB1C 000082A0 */   sb        $v0, 0x0($a0)
    /* 5CF20 8014EB20 02D0030C */  jal        func_800F4008
    /* 5CF24 8014EB24 10000424 */   addiu     $a0, $zero, 0x10
    /* 5CF28 8014EB28 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5CF2C 8014EB2C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5CF30 8014EB30 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5CF34 8014EB34 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5CF38 8014EB38 00006294 */  lhu        $v0, 0x0($v1)
    /* 5CF3C 8014EB3C 00000000 */  nop
    /* 5CF40 8014EB40 000082A4 */  sh         $v0, 0x0($a0)
  .L8014EB44:
    /* 5CF44 8014EB44 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 5CF48 8014EB48 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 5CF4C 8014EB4C 00000000 */  nop
    /* 5CF50 8014EB50 00004490 */  lbu        $a0, 0x0($v0)
    /* 5CF54 8014EB54 00000000 */  nop
    /* 5CF58 8014EB58 1F00832C */  sltiu      $v1, $a0, 0x1F
    /* 5CF5C 8014EB5C 2A006010 */  beqz       $v1, .L8014EC08
    /* 5CF60 8014EB60 0F80023C */   lui       $v0, %hi(jtbl_800F2CB0)
    /* 5CF64 8014EB64 B02C4224 */  addiu      $v0, $v0, %lo(jtbl_800F2CB0)
    /* 5CF68 8014EB68 80180400 */  sll        $v1, $a0, 2
    /* 5CF6C 8014EB6C 21186200 */  addu       $v1, $v1, $v0
    /* 5CF70 8014EB70 0000648C */  lw         $a0, 0x0($v1)
    /* 5CF74 8014EB74 00000000 */  nop
    /* 5CF78 8014EB78 08008000 */  jr         $a0
    /* 5CF7C 8014EB7C 00000000 */   nop
  jlabel .L8014EB80
    /* 5CF80 8014EB80 503B050C */  jal        func_8014ED40
    /* 5CF84 8014EB84 00000000 */   nop
    /* 5CF88 8014EB88 023B0508 */  j          .L8014EC08
    /* 5CF8C 8014EB8C 00000000 */   nop
  jlabel .L8014EB90
    /* 5CF90 8014EB90 263B050C */  jal        func_8014EC98
    /* 5CF94 8014EB94 00000000 */   nop
    /* 5CF98 8014EB98 023B0508 */  j          .L8014EC08
    /* 5CF9C 8014EB9C 00000000 */   nop
  jlabel .L8014EBA0
    /* 5CFA0 8014EBA0 1A3B050C */  jal        func_8014EC68
    /* 5CFA4 8014EBA4 00000000 */   nop
    /* 5CFA8 8014EBA8 023B0508 */  j          .L8014EC08
    /* 5CFAC 8014EBAC 00000000 */   nop
  jlabel .L8014EBB0
    /* 5CFB0 8014EBB0 063B050C */  jal        func_8014EC18
    /* 5CFB4 8014EBB4 00000000 */   nop
    /* 5CFB8 8014EBB8 023B0508 */  j          .L8014EC08
    /* 5CFBC 8014EBBC 00000000 */   nop
  jlabel .L8014EBC0
    /* 5CFC0 8014EBC0 443B050C */  jal        func_8014ED10
    /* 5CFC4 8014EBC4 00000000 */   nop
    /* 5CFC8 8014EBC8 023B0508 */  j          .L8014EC08
    /* 5CFCC 8014EBCC 00000000 */   nop
  jlabel .L8014EBD0
    /* 5CFD0 8014EBD0 323B050C */  jal        func_8014ECC8
    /* 5CFD4 8014EBD4 00000000 */   nop
    /* 5CFD8 8014EBD8 023B0508 */  j          .L8014EC08
    /* 5CFDC 8014EBDC 00000000 */   nop
  jlabel .L8014EBE0
    /* 5CFE0 8014EBE0 743B050C */  jal        func_8014EDD0
    /* 5CFE4 8014EBE4 00000000 */   nop
    /* 5CFE8 8014EBE8 023B0508 */  j          .L8014EC08
    /* 5CFEC 8014EBEC 00000000 */   nop
  jlabel .L8014EBF0
    /* 5CFF0 8014EBF0 623B050C */  jal        func_8014ED88
    /* 5CFF4 8014EBF4 00000000 */   nop
    /* 5CFF8 8014EBF8 023B0508 */  j          .L8014EC08
    /* 5CFFC 8014EBFC 00000000 */   nop
  jlabel .L8014EC00
    /* 5D000 8014EC00 503B050C */  jal        func_8014ED40
    /* 5D004 8014EC04 00000000 */   nop
  jlabel .L8014EC08
    /* 5D008 8014EC08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D00C 8014EC0C 00000000 */  nop
    /* 5D010 8014EC10 0800E003 */  jr         $ra
    /* 5D014 8014EC14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EAE4
