nonmatching func_8015CB80, 0x100

glabel func_8015CB80
    /* 6AF80 8015CB80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6AF84 8015CB84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6AF88 8015CB88 CCE4030C */  jal        func_800F9330
    /* 6AF8C 8015CB8C 00000000 */   nop
    /* 6AF90 8015CB90 59D9030C */  jal        func_800F6564
    /* 6AF94 8015CB94 3B390424 */   addiu     $a0, $zero, 0x393B
    /* 6AF98 8015CB98 C1CE030C */  jal        func_800F3B04
    /* 6AF9C 8015CB9C 3A390424 */   addiu     $a0, $zero, 0x393A
    /* 6AFA0 8015CBA0 31DE030C */  jal        func_800F78C4
    /* 6AFA4 8015CBA4 21204000 */   addu      $a0, $v0, $zero
    /* 6AFA8 8015CBA8 AB4B050C */  jal        func_80152EAC
    /* 6AFAC 8015CBAC 00000000 */   nop
    /* 6AFB0 8015CBB0 92D7030C */  jal        func_800F5E48
    /* 6AFB4 8015CBB4 00000000 */   nop
    /* 6AFB8 8015CBB8 19D7030C */  jal        func_800F5C64
    /* 6AFBC 8015CBBC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6AFC0 8015CBC0 29004014 */  bnez       $v0, .L8015CC68
    /* 6AFC4 8015CBC4 00000000 */   nop
    /* 6AFC8 8015CBC8 C7E5030C */  jal        func_800F971C
    /* 6AFCC 8015CBCC 00000000 */   nop
    /* 6AFD0 8015CBD0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6AFD4 8015CBD4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6AFD8 8015CBD8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6AFDC 8015CBDC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 6AFE0 8015CBE0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6AFE4 8015CBE4 3B390424 */  addiu      $a0, $zero, 0x393B
    /* 6AFE8 8015CBE8 59D9030C */  jal        func_800F6564
    /* 6AFEC 8015CBEC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6AFF0 8015CBF0 93E0030C */  jal        func_800F824C
    /* 6AFF4 8015CBF4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6AFF8 8015CBF8 93E0030C */  jal        func_800F824C
    /* 6AFFC 8015CBFC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6B000 8015CC00 77DC030C */  jal        func_800F71DC
    /* 6B004 8015CC04 05000424 */   addiu     $a0, $zero, 0x5
    /* 6B008 8015CC08 5BE3030C */  jal        func_800F8D6C
    /* 6B00C 8015CC0C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6B010 8015CC10 2073050C */  jal        func_8015CC80
    /* 6B014 8015CC14 00000000 */   nop
    /* 6B018 8015CC18 8CD9030C */  jal        func_800F6630
    /* 6B01C 8015CC1C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6B020 8015CC20 62E0030C */  jal        func_800F8188
    /* 6B024 8015CC24 3B390424 */   addiu     $a0, $zero, 0x393B
    /* 6B028 8015CC28 59D9030C */  jal        func_800F6564
    /* 6B02C 8015CC2C 3A390424 */   addiu     $a0, $zero, 0x393A
    /* 6B030 8015CC30 93E0030C */  jal        func_800F824C
    /* 6B034 8015CC34 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6B038 8015CC38 93E0030C */  jal        func_800F824C
    /* 6B03C 8015CC3C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6B040 8015CC40 77DC030C */  jal        func_800F71DC
    /* 6B044 8015CC44 0D000424 */   addiu     $a0, $zero, 0xD
    /* 6B048 8015CC48 5BE3030C */  jal        func_800F8D6C
    /* 6B04C 8015CC4C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6B050 8015CC50 2073050C */  jal        func_8015CC80
    /* 6B054 8015CC54 00000000 */   nop
    /* 6B058 8015CC58 8CD9030C */  jal        func_800F6630
    /* 6B05C 8015CC5C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6B060 8015CC60 62E0030C */  jal        func_800F8188
    /* 6B064 8015CC64 3A390424 */   addiu     $a0, $zero, 0x393A
  .L8015CC68:
    /* 6B068 8015CC68 68E5030C */  jal        func_800F95A0
    /* 6B06C 8015CC6C 00000000 */   nop
    /* 6B070 8015CC70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B074 8015CC74 00000000 */  nop
    /* 6B078 8015CC78 0800E003 */  jr         $ra
    /* 6B07C 8015CC7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015CB80
