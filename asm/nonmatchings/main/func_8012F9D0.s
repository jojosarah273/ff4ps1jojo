nonmatching func_8012F9D0, 0x1E0

glabel func_8012F9D0
    /* 3DDD0 8012F9D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3DDD4 8012F9D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3DDD8 8012F9D8 93E0030C */  jal        func_800F824C
    /* 3DDDC 8012F9DC 43000424 */   addiu     $a0, $zero, 0x43
    /* 3DDE0 8012F9E0 EF83040C */  jal        func_80120FBC
    /* 3DDE4 8012F9E4 00000000 */   nop
    /* 3DDE8 8012F9E8 91E5030C */  jal        func_800F9644
    /* 3DDEC 8012F9EC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3DDF0 8012F9F0 96D9030C */  jal        func_800F6658
    /* 3DDF4 8012F9F4 43000424 */   addiu     $a0, $zero, 0x43
    /* 3DDF8 8012F9F8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3DDFC 8012F9FC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3DE00 8012FA00 00000000 */  nop
    /* 3DE04 8012FA04 00006294 */  lhu        $v0, 0x0($v1)
    /* 3DE08 8012FA08 48000424 */  addiu      $a0, $zero, 0x48
    /* 3DE0C 8012FA0C C0100200 */  sll        $v0, $v0, 3
    /* 3DE10 8012FA10 9DE0030C */  jal        func_800F8274
    /* 3DE14 8012FA14 000062A4 */   sh        $v0, 0x0($v1)
    /* 3DE18 8012FA18 5BD4030C */  jal        func_800F516C
    /* 3DE1C 8012FA1C 00000000 */   nop
    /* 3DE20 8012FA20 14D4030C */  jal        func_800F5050
    /* 3DE24 8012FA24 00000000 */   nop
    /* 3DE28 8012FA28 0FCF030C */  jal        func_800F3C3C
    /* 3DE2C 8012FA2C 48000424 */   addiu     $a0, $zero, 0x48
    /* 3DE30 8012FA30 E5CF030C */  jal        func_800F3F94
    /* 3DE34 8012FA34 21204000 */   addu      $a0, $v0, $zero
    /* 3DE38 8012FA38 19D0030C */  jal        func_800F4064
    /* 3DE3C 8012FA3C 60150424 */   addiu     $a0, $zero, 0x1560
    /* 3DE40 8012FA40 9DE0030C */  jal        func_800F8274
    /* 3DE44 8012FA44 60000424 */   addiu     $a0, $zero, 0x60
    /* 3DE48 8012FA48 98E5030C */  jal        func_800F9660
    /* 3DE4C 8012FA4C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3DE50 8012FA50 EEE3030C */  jal        func_800F8FB8
    /* 3DE54 8012FA54 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 3DE58 8012FA58 EEE3030C */  jal        func_800F8FB8
    /* 3DE5C 8012FA5C 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 3DE60 8012FA60 53D9030C */  jal        func_800F654C
    /* 3DE64 8012FA64 08000424 */   addiu     $a0, $zero, 0x8
    /* 3DE68 8012FA68 93E0030C */  jal        func_800F824C
    /* 3DE6C 8012FA6C 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 3DE70 8012FA70 65DD030C */  jal        func_800F7594
    /* 3DE74 8012FA74 41000424 */   addiu     $a0, $zero, 0x41
  .L8012FA78:
    /* 3DE78 8012FA78 53D9030C */  jal        func_800F654C
    /* 3DE7C 8012FA7C 03000424 */   addiu     $a0, $zero, 0x3
    /* 3DE80 8012FA80 93E0030C */  jal        func_800F824C
    /* 3DE84 8012FA84 5D000424 */   addiu     $a0, $zero, 0x5D
  .L8012FA88:
    /* 3DE88 8012FA88 91E5030C */  jal        func_800F9644
    /* 3DE8C 8012FA8C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3DE90 8012FA90 96D9030C */  jal        func_800F6658
    /* 3DE94 8012FA94 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 3DE98 8012FA98 3ED7030C */  jal        func_800F5CF8
    /* 3DE9C 8012FA9C 00000000 */   nop
    /* 3DEA0 8012FAA0 5BD4030C */  jal        func_800F516C
    /* 3DEA4 8012FAA4 00000000 */   nop
    /* 3DEA8 8012FAA8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3DEAC 8012FAAC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3DEB0 8012FAB0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3DEB4 8012FAB4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3DEB8 8012FAB8 00004394 */  lhu        $v1, 0x0($v0)
    /* 3DEBC 8012FABC 08000424 */  addiu      $a0, $zero, 0x8
    /* 3DEC0 8012FAC0 56D9030C */  jal        func_800F6558
    /* 3DEC4 8012FAC4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3DEC8 8012FAC8 20D5030C */  jal        func_800F5480
    /* 3DECC 8012FACC 00000000 */   nop
    /* 3DED0 8012FAD0 0FCF030C */  jal        func_800F3C3C
    /* 3DED4 8012FAD4 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 3DED8 8012FAD8 F3DF030C */  jal        func_800F7FCC
    /* 3DEDC 8012FADC 21204000 */   addu      $a0, $v0, $zero
    /* 3DEE0 8012FAE0 52CF030C */  jal        func_800F3D48
    /* 3DEE4 8012FAE4 00000000 */   nop
    /* 3DEE8 8012FAE8 99D0030C */  jal        func_800F4264
    /* 3DEEC 8012FAEC 00FF0434 */   ori       $a0, $zero, 0xFF00
    /* 3DEF0 8012FAF0 25DE030C */  jal        func_800F7894
    /* 3DEF4 8012FAF4 00000000 */   nop
    /* 3DEF8 8012FAF8 04D5030C */  jal        func_800F5410
    /* 3DEFC 8012FAFC 00000000 */   nop
    /* 3DF00 8012FB00 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3DF04 8012FB04 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3DF08 8012FB08 1E00043C */  lui        $a0, (0x1EFEBD >> 16)
    /* 3DF0C 8012FB0C 00004594 */  lhu        $a1, 0x0($v0)
    /* 3DF10 8012FB10 E7CE030C */  jal        func_800F3B9C
    /* 3DF14 8012FB14 BDFE8434 */   ori       $a0, $a0, (0x1EFEBD & 0xFFFF)
    /* 3DF18 8012FB18 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3DF1C 8012FB1C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3DF20 8012FB20 00000000 */  nop
    /* 3DF24 8012FB24 00006494 */  lhu        $a0, 0x0($v1)
    /* 3DF28 8012FB28 E5CF030C */  jal        func_800F3F94
    /* 3DF2C 8012FB2C 21204400 */   addu      $a0, $v0, $a0
    /* 3DF30 8012FB30 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3DF34 8012FB34 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3DF38 8012FB38 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3DF3C 8012FB3C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3DF40 8012FB40 00004394 */  lhu        $v1, 0x0($v0)
    /* 3DF44 8012FB44 20000424 */  addiu      $a0, $zero, 0x20
    /* 3DF48 8012FB48 98E5030C */  jal        func_800F9660
    /* 3DF4C 8012FB4C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3DF50 8012FB50 B6D9030C */  jal        func_800F66D8
    /* 3DF54 8012FB54 60000424 */   addiu     $a0, $zero, 0x60
    /* 3DF58 8012FB58 ECBE040C */  jal        func_8012FBB0
    /* 3DF5C 8012FB5C 00000000 */   nop
    /* 3DF60 8012FB60 EFD8030C */  jal        func_800F63BC
    /* 3DF64 8012FB64 00000000 */   nop
    /* 3DF68 8012FB68 68D7030C */  jal        func_800F5DA0
    /* 3DF6C 8012FB6C 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 3DF70 8012FB70 E3D6030C */  jal        func_800F5B8C
    /* 3DF74 8012FB74 02020424 */   addiu     $a0, $zero, 0x202
    /* 3DF78 8012FB78 C3FF4014 */  bnez       $v0, .L8012FA88
    /* 3DF7C 8012FB7C 00000000 */   nop
    /* 3DF80 8012FB80 68D7030C */  jal        func_800F5DA0
    /* 3DF84 8012FB84 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 3DF88 8012FB88 E3D6030C */  jal        func_800F5B8C
    /* 3DF8C 8012FB8C 02020424 */   addiu     $a0, $zero, 0x202
    /* 3DF90 8012FB90 B9FF4014 */  bnez       $v0, .L8012FA78
    /* 3DF94 8012FB94 00000000 */   nop
    /* 3DF98 8012FB98 98E5030C */  jal        func_800F9660
    /* 3DF9C 8012FB9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3DFA0 8012FBA0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3DFA4 8012FBA4 00000000 */  nop
    /* 3DFA8 8012FBA8 0800E003 */  jr         $ra
    /* 3DFAC 8012FBAC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012F9D0
