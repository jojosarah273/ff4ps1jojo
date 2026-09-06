nonmatching func_8013EB2C, 0x1E8

glabel func_8013EB2C
    /* 4CF2C 8013EB2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4CF30 8013EB30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4CF34 8013EB34 CCE4030C */  jal        func_800F9330
    /* 4CF38 8013EB38 00000000 */   nop
    /* 4CF3C 8013EB3C 91E5030C */  jal        func_800F9644
    /* 4CF40 8013EB40 20000424 */   addiu     $a0, $zero, 0x20
    /* 4CF44 8013EB44 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CF48 8013EB48 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CF4C 8013EB4C 00000000 */  nop
    /* 4CF50 8013EB50 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CF54 8013EB54 00000000 */  nop
    /* 4CF58 8013EB58 80110200 */  sll        $v0, $v0, 6
    /* 4CF5C 8013EB5C 04D5030C */  jal        func_800F5410
    /* 4CF60 8013EB60 000062A4 */   sh        $v0, 0x0($v1)
    /* 4CF64 8013EB64 19D0030C */  jal        func_800F4064
    /* 4CF68 8013EB68 80F80434 */   ori       $a0, $zero, 0xF880
    /* 4CF6C 8013EB6C 9DE0030C */  jal        func_800F8274
    /* 4CF70 8013EB70 21200000 */   addu      $a0, $zero, $zero
    /* 4CF74 8013EB74 C7E5030C */  jal        func_800F971C
    /* 4CF78 8013EB78 00000000 */   nop
    /* 4CF7C 8013EB7C 98E5030C */  jal        func_800F9660
    /* 4CF80 8013EB80 20000424 */   addiu     $a0, $zero, 0x20
    /* 4CF84 8013EB84 53D9030C */  jal        func_800F654C
    /* 4CF88 8013EB88 16000424 */   addiu     $a0, $zero, 0x16
    /* 4CF8C 8013EB8C 93E0030C */  jal        func_800F824C
    /* 4CF90 8013EB90 02000424 */   addiu     $a0, $zero, 0x2
    /* 4CF94 8013EB94 C7E5030C */  jal        func_800F971C
    /* 4CF98 8013EB98 00000000 */   nop
    /* 4CF9C 8013EB9C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CFA0 8013EBA0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CFA4 8013EBA4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4CFA8 8013EBA8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4CFAC 8013EBAC 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CFB0 8013EBB0 00000000 */  nop
    /* 4CFB4 8013EBB4 000082A4 */  sh         $v0, 0x0($a0)
    /* 4CFB8 8013EBB8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4CFBC 8013EBBC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4CFC0 8013EBC0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4CFC4 8013EBC4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4CFC8 8013EBC8 00006294 */  lhu        $v0, 0x0($v1)
    /* 4CFCC 8013EBCC 00000000 */  nop
    /* 4CFD0 8013EBD0 000082A4 */  sh         $v0, 0x0($a0)
  .L8013EBD4:
    /* 4CFD4 8013EBD4 FFD9030C */  jal        func_800F67FC
    /* 4CFD8 8013EBD8 21200000 */   addu      $a0, $zero, $zero
    /* 4CFDC 8013EBDC 93E0030C */  jal        func_800F824C
    /* 4CFE0 8013EBE0 04000424 */   addiu     $a0, $zero, 0x4
    /* 4CFE4 8013EBE4 92D0030C */  jal        func_800F4248
    /* 4CFE8 8013EBE8 80000424 */   addiu     $a0, $zero, 0x80
    /* 4CFEC 8013EBEC 93E0030C */  jal        func_800F824C
    /* 4CFF0 8013EBF0 05000424 */   addiu     $a0, $zero, 0x5
    /* 4CFF4 8013EBF4 8CD9030C */  jal        func_800F6630
    /* 4CFF8 8013EBF8 04000424 */   addiu     $a0, $zero, 0x4
    /* 4CFFC 8013EBFC 92D0030C */  jal        func_800F4248
    /* 4D000 8013EC00 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 4D004 8013EC04 7AD8030C */  jal        func_800F61E8
    /* 4D008 8013EC08 00000000 */   nop
    /* 4D00C 8013EC0C 04D5030C */  jal        func_800F5410
    /* 4D010 8013EC10 00000000 */   nop
    /* 4D014 8013EC14 0FCF030C */  jal        func_800F3C3C
    /* 4D018 8013EC18 06000424 */   addiu     $a0, $zero, 0x6
    /* 4D01C 8013EC1C CECF030C */  jal        func_800F3F38
    /* 4D020 8013EC20 21204000 */   addu      $a0, $v0, $zero
    /* 4D024 8013EC24 DAE1030C */  jal        func_800F8768
    /* 4D028 8013EC28 FD6E0424 */   addiu     $a0, $zero, 0x6EFD
    /* 4D02C 8013EC2C D9D8030C */  jal        func_800F6364
    /* 4D030 8013EC30 00000000 */   nop
    /* 4D034 8013EC34 8CD9030C */  jal        func_800F6630
    /* 4D038 8013EC38 04000424 */   addiu     $a0, $zero, 0x4
    /* 4D03C 8013EC3C 92D0030C */  jal        func_800F4248
    /* 4D040 8013EC40 40000424 */   addiu     $a0, $zero, 0x40
    /* 4D044 8013EC44 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4D048 8013EC48 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4D04C 8013EC4C 00000000 */  nop
    /* 4D050 8013EC50 00006290 */  lbu        $v0, 0x0($v1)
    /* 4D054 8013EC54 00000000 */  nop
    /* 4D058 8013EC58 02110200 */  srl        $v0, $v0, 4
    /* 4D05C 8013EC5C 04D5030C */  jal        func_800F5410
    /* 4D060 8013EC60 000062A0 */   sb        $v0, 0x0($v1)
    /* 4D064 8013EC64 02D0030C */  jal        func_800F4008
    /* 4D068 8013EC68 04000424 */   addiu     $a0, $zero, 0x4
    /* 4D06C 8013EC6C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4D070 8013EC70 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4D074 8013EC74 00000000 */  nop
    /* 4D078 8013EC78 00006290 */  lbu        $v0, 0x0($v1)
    /* 4D07C 8013EC7C 05000424 */  addiu      $a0, $zero, 0x5
    /* 4D080 8013EC80 02004234 */  ori        $v0, $v0, 0x2
    /* 4D084 8013EC84 0FCF030C */  jal        func_800F3C3C
    /* 4D088 8013EC88 000062A0 */   sb        $v0, 0x0($v1)
    /* 4D08C 8013EC8C 31DE030C */  jal        func_800F78C4
    /* 4D090 8013EC90 21204000 */   addu      $a0, $v0, $zero
    /* 4D094 8013EC94 DAE1030C */  jal        func_800F8768
    /* 4D098 8013EC98 FD6E0424 */   addiu     $a0, $zero, 0x6EFD
    /* 4D09C 8013EC9C D9D8030C */  jal        func_800F6364
    /* 4D0A0 8013ECA0 00000000 */   nop
    /* 4D0A4 8013ECA4 EFD8030C */  jal        func_800F63BC
    /* 4D0A8 8013ECA8 00000000 */   nop
    /* 4D0AC 8013ECAC 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 4D0B0 8013ECB0 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 4D0B4 8013ECB4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4D0B8 8013ECB8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4D0BC 8013ECBC 00004390 */  lbu        $v1, 0x0($v0)
    /* 4D0C0 8013ECC0 3F000424 */  addiu      $a0, $zero, 0x3F
    /* 4D0C4 8013ECC4 92D0030C */  jal        func_800F4248
    /* 4D0C8 8013ECC8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4D0CC 8013ECCC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4D0D0 8013ECD0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4D0D4 8013ECD4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4D0D8 8013ECD8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4D0DC 8013ECDC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4D0E0 8013ECE0 80020424 */  addiu      $a0, $zero, 0x280
    /* 4D0E4 8013ECE4 56D6030C */  jal        func_800F5958
    /* 4D0E8 8013ECE8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4D0EC 8013ECEC F5D4030C */  jal        func_800F53D4
    /* 4D0F0 8013ECF0 00000000 */   nop
    /* 4D0F4 8013ECF4 B7FF4010 */  beqz       $v0, .L8013EBD4
    /* 4D0F8 8013ECF8 00000000 */   nop
    /* 4D0FC 8013ECFC 68E5030C */  jal        func_800F95A0
    /* 4D100 8013ED00 00000000 */   nop
    /* 4D104 8013ED04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4D108 8013ED08 00000000 */  nop
    /* 4D10C 8013ED0C 0800E003 */  jr         $ra
    /* 4D110 8013ED10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013EB2C
