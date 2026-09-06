nonmatching func_8011F9C4, 0x1B0

glabel func_8011F9C4
    /* 2DDC4 8011F9C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DDC8 8011F9C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DDCC 8011F9CC 9BE4030C */  jal        func_800F926C
    /* 2DDD0 8011F9D0 00000000 */   nop
    /* 2DDD4 8011F9D4 A6E4030C */  jal        func_800F9298
    /* 2DDD8 8011F9D8 00000000 */   nop
    /* 2DDDC 8011F9DC CCE4030C */  jal        func_800F9330
    /* 2DDE0 8011F9E0 00000000 */   nop
    /* 2DDE4 8011F9E4 CCE4030C */  jal        func_800F9330
    /* 2DDE8 8011F9E8 00000000 */   nop
    /* 2DDEC 8011F9EC 77DC030C */  jal        func_800F71DC
    /* 2DDF0 8011F9F0 00010424 */   addiu     $a0, $zero, 0x100
    /* 2DDF4 8011F9F4 CCE4030C */  jal        func_800F9330
    /* 2DDF8 8011F9F8 00000000 */   nop
    /* 2DDFC 8011F9FC 2EE5030C */  jal        func_800F94B8
    /* 2DE00 8011FA00 00000000 */   nop
    /* 2DE04 8011FA04 68E5030C */  jal        func_800F95A0
    /* 2DE08 8011FA08 00000000 */   nop
    /* 2DE0C 8011FA0C 80E4030C */  jal        func_800F9200
    /* 2DE10 8011FA10 00000000 */   nop
    /* 2DE14 8011FA14 12E5030C */  jal        func_800F9448
    /* 2DE18 8011FA18 00000000 */   nop
    /* 2DE1C 8011FA1C 91E5030C */  jal        func_800F9644
    /* 2DE20 8011FA20 20000424 */   addiu     $a0, $zero, 0x20
    /* 2DE24 8011FA24 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2DE28 8011FA28 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2DE2C 8011FA2C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 2DE30 8011FA30 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 2DE34 8011FA34 00006294 */  lhu        $v0, 0x0($v1)
    /* 2DE38 8011FA38 04D5030C */  jal        func_800F5410
    /* 2DE3C 8011FA3C 000082A4 */   sh        $v0, 0x0($a0)
    /* 2DE40 8011FA40 0FCF030C */  jal        func_800F3C3C
    /* 2DE44 8011FA44 29000424 */   addiu     $a0, $zero, 0x29
    /* 2DE48 8011FA48 E5CF030C */  jal        func_800F3F94
    /* 2DE4C 8011FA4C 21204000 */   addu      $a0, $v0, $zero
    /* 2DE50 8011FA50 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2DE54 8011FA54 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2DE58 8011FA58 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2DE5C 8011FA5C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2DE60 8011FA60 00004394 */  lhu        $v1, 0x0($v0)
    /* 2DE64 8011FA64 20000424 */  addiu      $a0, $zero, 0x20
    /* 2DE68 8011FA68 98E5030C */  jal        func_800F9660
    /* 2DE6C 8011FA6C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8011FA70:
    /* 2DE70 8011FA70 5CDB030C */  jal        func_800F6D70
    /* 2DE74 8011FA74 21200000 */   addu      $a0, $zero, $zero
    /* 2DE78 8011FA78 0DD9030C */  jal        func_800F6434
    /* 2DE7C 8011FA7C 02000424 */   addiu     $a0, $zero, 0x2
    /* 2DE80 8011FA80 16004014 */  bnez       $v0, .L8011FADC
    /* 2DE84 8011FA84 00000000 */   nop
    /* 2DE88 8011FA88 EFD8030C */  jal        func_800F63BC
    /* 2DE8C 8011FA8C 00000000 */   nop
    /* 2DE90 8011FA90 5DD5030C */  jal        func_800F5574
    /* 2DE94 8011FA94 01000424 */   addiu     $a0, $zero, 0x1
    /* 2DE98 8011FA98 F5D4030C */  jal        func_800F53D4
    /* 2DE9C 8011FA9C 00000000 */   nop
    /* 2DEA0 8011FAA0 16004014 */  bnez       $v0, .L8011FAFC
    /* 2DEA4 8011FAA4 00000000 */   nop
    /* 2DEA8 8011FAA8 6D91040C */  jal        func_801245B4
    /* 2DEAC 8011FAAC 00000000 */   nop
    /* 2DEB0 8011FAB0 17E2030C */  jal        func_800F885C
    /* 2DEB4 8011FAB4 7E00043C */   lui       $a0, (0x7E0000 >> 16)
    /* 2DEB8 8011FAB8 52CF030C */  jal        func_800F3D48
    /* 2DEBC 8011FABC 00000000 */   nop
    /* 2DEC0 8011FAC0 7E00043C */  lui        $a0, (0x7E0040 >> 16)
    /* 2DEC4 8011FAC4 17E2030C */  jal        func_800F885C
    /* 2DEC8 8011FAC8 40008434 */   ori       $a0, $a0, (0x7E0040 & 0xFFFF)
    /* 2DECC 8011FACC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2DED0 8011FAD0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2DED4 8011FAD4 D37E0408 */  j          .L8011FB4C
    /* 2DED8 8011FAD8 00000000 */   nop
  .L8011FADC:
    /* 2DEDC 8011FADC 68E5030C */  jal        func_800F95A0
    /* 2DEE0 8011FAE0 00000000 */   nop
    /* 2DEE4 8011FAE4 2EE5030C */  jal        func_800F94B8
    /* 2DEE8 8011FAE8 00000000 */   nop
    /* 2DEEC 8011FAEC 12E5030C */  jal        func_800F9448
    /* 2DEF0 8011FAF0 00000000 */   nop
    /* 2DEF4 8011FAF4 D97E0408 */  j          .L8011FB64
    /* 2DEF8 8011FAF8 00000000 */   nop
  .L8011FAFC:
    /* 2DEFC 8011FAFC 91E5030C */  jal        func_800F9644
    /* 2DF00 8011FB00 20000424 */   addiu     $a0, $zero, 0x20
    /* 2DF04 8011FB04 7ADB030C */  jal        func_800F6DE8
    /* 2DF08 8011FB08 21200000 */   addu      $a0, $zero, $zero
    /* 2DF0C 8011FB0C 04D5030C */  jal        func_800F5410
    /* 2DF10 8011FB10 00000000 */   nop
    /* 2DF14 8011FB14 0FCF030C */  jal        func_800F3C3C
    /* 2DF18 8011FB18 29000424 */   addiu     $a0, $zero, 0x29
    /* 2DF1C 8011FB1C E5CF030C */  jal        func_800F3F94
    /* 2DF20 8011FB20 21204000 */   addu      $a0, $v0, $zero
    /* 2DF24 8011FB24 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2DF28 8011FB28 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2DF2C 8011FB2C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2DF30 8011FB30 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2DF34 8011FB34 00004394 */  lhu        $v1, 0x0($v0)
    /* 2DF38 8011FB38 20000424 */  addiu      $a0, $zero, 0x20
    /* 2DF3C 8011FB3C 98E5030C */  jal        func_800F9660
    /* 2DF40 8011FB40 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2DF44 8011FB44 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2DF48 8011FB48 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
  .L8011FB4C:
    /* 2DF4C 8011FB4C 00000000 */  nop
    /* 2DF50 8011FB50 00006294 */  lhu        $v0, 0x0($v1)
    /* 2DF54 8011FB54 00000000 */  nop
    /* 2DF58 8011FB58 02004224 */  addiu      $v0, $v0, 0x2
    /* 2DF5C 8011FB5C 9C7E0408 */  j          .L8011FA70
    /* 2DF60 8011FB60 000062A4 */   sh        $v0, 0x0($v1)
  .L8011FB64:
    /* 2DF64 8011FB64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DF68 8011FB68 00000000 */  nop
    /* 2DF6C 8011FB6C 0800E003 */  jr         $ra
    /* 2DF70 8011FB70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F9C4
