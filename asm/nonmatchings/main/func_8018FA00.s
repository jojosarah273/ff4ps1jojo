nonmatching func_8018FA00, 0x2C4

glabel func_8018FA00
    /* 9DE00 8018FA00 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 9DE04 8018FA04 01000424 */  addiu      $a0, $zero, 0x1
    /* 9DE08 8018FA08 10000524 */  addiu      $a1, $zero, 0x10
    /* 9DE0C 8018FA0C 2000B0AF */  sw         $s0, 0x20($sp)
    /* 9DE10 8018FA10 2080103C */  lui        $s0, %hi(D_801F8710)
    /* 9DE14 8018FA14 10871026 */  addiu      $s0, $s0, %lo(D_801F8710)
    /* 9DE18 8018FA18 21300002 */  addu       $a2, $s0, $zero
    /* 9DE1C 8018FA1C 3C00BFAF */  sw         $ra, 0x3C($sp)
    /* 9DE20 8018FA20 3800B6AF */  sw         $s6, 0x38($sp)
    /* 9DE24 8018FA24 3400B5AF */  sw         $s5, 0x34($sp)
    /* 9DE28 8018FA28 3000B4AF */  sw         $s4, 0x30($sp)
    /* 9DE2C 8018FA2C 2C00B3AF */  sw         $s3, 0x2C($sp)
    /* 9DE30 8018FA30 2800B2AF */  sw         $s2, 0x28($sp)
    /* 9DE34 8018FA34 0140060C */  jal        func_80190004
    /* 9DE38 8018FA38 2400B1AF */   sw        $s1, 0x24($sp)
    /* 9DE3C 8018FA3C 21884000 */  addu       $s1, $v0, $zero
    /* 9DE40 8018FA40 01000224 */  addiu      $v0, $zero, 0x1
    /* 9DE44 8018FA44 0B002212 */  beq        $s1, $v0, .L8018FA74
    /* 9DE48 8018FA48 01000426 */   addiu     $a0, $s0, 0x1
    /* 9DE4C 8018FA4C 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DE50 8018FA50 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DE54 8018FA54 00000000 */  nop
    /* 9DE58 8018FA58 90004018 */  blez       $v0, .L8018FC9C
    /* 9DE5C 8018FA5C 21100000 */   addu      $v0, $zero, $zero
    /* 9DE60 8018FA60 0F80043C */  lui        $a0, %hi(D_800F32BC)
    /* 9DE64 8018FA64 323C060C */  jal        func_8018F0C8
    /* 9DE68 8018FA68 BC328424 */   addiu     $a0, $a0, %lo(D_800F32BC)
    /* 9DE6C 8018FA6C 273F0608 */  j          .L8018FC9C
    /* 9DE70 8018FA70 21100000 */   addu      $v0, $zero, $zero
  .L8018FA74:
    /* 9DE74 8018FA74 0F80053C */  lui        $a1, %hi(D_800F32E8)
    /* 9DE78 8018FA78 E832A524 */  addiu      $a1, $a1, %lo(D_800F32E8)
    /* 9DE7C 8018FA7C 1E40060C */  jal        func_80190078
    /* 9DE80 8018FA80 05000624 */   addiu     $a2, $zero, 0x5
    /* 9DE84 8018FA84 0B004010 */  beqz       $v0, .L8018FAB4
    /* 9DE88 8018FA88 00000000 */   nop
    /* 9DE8C 8018FA8C 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DE90 8018FA90 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DE94 8018FA94 00000000 */  nop
    /* 9DE98 8018FA98 80004018 */  blez       $v0, .L8018FC9C
    /* 9DE9C 8018FA9C 21100000 */   addu      $v0, $zero, $zero
    /* 9DEA0 8018FAA0 0F80043C */  lui        $a0, %hi(D_800F32F0)
    /* 9DEA4 8018FAA4 323C060C */  jal        func_8018F0C8
    /* 9DEA8 8018FAA8 F0328424 */   addiu     $a0, $a0, %lo(D_800F32F0)
    /* 9DEAC 8018FAAC 273F0608 */  j          .L8018FC9C
    /* 9DEB0 8018FAB0 21100000 */   addu      $v0, $zero, $zero
  .L8018FAB4:
    /* 9DEB4 8018FAB4 8F00028A */  lwl        $v0, 0x8F($s0)
    /* 9DEB8 8018FAB8 8C00029A */  lwr        $v0, 0x8C($s0)
    /* 9DEBC 8018FABC 00000000 */  nop
    /* 9DEC0 8018FAC0 1B00A2AB */  swl        $v0, 0x1B($sp)
    /* 9DEC4 8018FAC4 1800A2BB */  swr        $v0, 0x18($sp)
    /* 9DEC8 8018FAC8 01000424 */  addiu      $a0, $zero, 0x1
    /* 9DECC 8018FACC 1800A58F */  lw         $a1, 0x18($sp)
    /* 9DED0 8018FAD0 0140060C */  jal        func_80190004
    /* 9DED4 8018FAD4 21300002 */   addu      $a2, $s0, $zero
    /* 9DED8 8018FAD8 0C005110 */  beq        $v0, $s1, .L8018FB0C
    /* 9DEDC 8018FADC 00000000 */   nop
    /* 9DEE0 8018FAE0 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DEE4 8018FAE4 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DEE8 8018FAE8 00000000 */  nop
    /* 9DEEC 8018FAEC 6B004018 */  blez       $v0, .L8018FC9C
    /* 9DEF0 8018FAF0 21100000 */   addu      $v0, $zero, $zero
    /* 9DEF4 8018FAF4 1800A58F */  lw         $a1, 0x18($sp)
    /* 9DEF8 8018FAF8 0F80043C */  lui        $a0, %hi(D_800F3320)
    /* 9DEFC 8018FAFC 323C060C */  jal        func_8018F0C8
    /* 9DF00 8018FB00 20338424 */   addiu     $a0, $a0, %lo(D_800F3320)
    /* 9DF04 8018FB04 273F0608 */  j          .L8018FC9C
    /* 9DF08 8018FB08 21100000 */   addu      $v0, $zero, $zero
  .L8018FB0C:
    /* 9DF0C 8018FB0C 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DF10 8018FB10 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DF14 8018FB14 00000000 */  nop
    /* 9DF18 8018FB18 02004228 */  slti       $v0, $v0, 0x2
    /* 9DF1C 8018FB1C 04004014 */  bnez       $v0, .L8018FB30
    /* 9DF20 8018FB20 21880002 */   addu      $s1, $s0, $zero
    /* 9DF24 8018FB24 0F80043C */  lui        $a0, %hi(D_800F3344)
    /* 9DF28 8018FB28 323C060C */  jal        func_8018F0C8
    /* 9DF2C 8018FB2C 44338424 */   addiu     $a0, $a0, %lo(D_800F3344)
  .L8018FB30:
    /* 9DF30 8018FB30 00082326 */  addiu      $v1, $s1, 0x800
    /* 9DF34 8018FB34 2B102302 */  sltu       $v0, $s1, $v1
    /* 9DF38 8018FB38 42004010 */  beqz       $v0, .L8018FC44
    /* 9DF3C 8018FB3C 21380000 */   addu      $a3, $zero, $zero
    /* 9DF40 8018FB40 1F80143C */  lui        $s4, %hi(D_801F7118)
    /* 9DF44 8018FB44 18719426 */  addiu      $s4, $s4, %lo(D_801F7118)
    /* 9DF48 8018FB48 04009626 */  addiu      $s6, $s4, 0x4
    /* 9DF4C 8018FB4C 21A86000 */  addu       $s5, $v1, $zero
  .L8018FB50:
    /* 9DF50 8018FB50 00002292 */  lbu        $v0, 0x0($s1)
    /* 9DF54 8018FB54 00000000 */  nop
    /* 9DF58 8018FB58 3A004010 */  beqz       $v0, .L8018FC44
    /* 9DF5C 8018FB5C 40100700 */   sll       $v0, $a3, 1
    /* 9DF60 8018FB60 21104700 */  addu       $v0, $v0, $a3
    /* 9DF64 8018FB64 80100200 */  sll        $v0, $v0, 2
    /* 9DF68 8018FB68 23104700 */  subu       $v0, $v0, $a3
    /* 9DF6C 8018FB6C 80800200 */  sll        $s0, $v0, 2
    /* 9DF70 8018FB70 21101402 */  addu       $v0, $s0, $s4
    /* 9DF74 8018FB74 0500238A */  lwl        $v1, 0x5($s1)
    /* 9DF78 8018FB78 0200239A */  lwr        $v1, 0x2($s1)
    /* 9DF7C 8018FB7C 00000000 */  nop
    /* 9DF80 8018FB80 030043A8 */  swl        $v1, 0x3($v0)
    /* 9DF84 8018FB84 000043B8 */  swr        $v1, 0x0($v0)
    /* 9DF88 8018FB88 21901602 */  addu       $s2, $s0, $s6
    /* 9DF8C 8018FB8C 21204002 */  addu       $a0, $s2, $zero
    /* 9DF90 8018FB90 06002292 */  lbu        $v0, 0x6($s1)
    /* 9DF94 8018FB94 0100F324 */  addiu      $s3, $a3, 0x1
    /* 9DF98 8018FB98 1F80013C */  lui        $at, %hi(D_801F7110)
    /* 9DF9C 8018FB9C 21083000 */  addu       $at, $at, $s0
    /* 9DFA0 8018FBA0 107133AC */  sw         $s3, %lo(D_801F7110)($at)
    /* 9DFA4 8018FBA4 1F80013C */  lui        $at, %hi(D_801F7114)
    /* 9DFA8 8018FBA8 21083000 */  addu       $at, $at, $s0
    /* 9DFAC 8018FBAC 147122AC */  sw         $v0, %lo(D_801F7114)($at)
    /* 9DFB0 8018FBB0 00002692 */  lbu        $a2, 0x0($s1)
    /* 9DFB4 8018FBB4 2240060C */  jal        func_80190088
    /* 9DFB8 8018FBB8 08002526 */   addiu     $a1, $s1, 0x8
    /* 9DFBC 8018FBBC 00002292 */  lbu        $v0, 0x0($s1)
    /* 9DFC0 8018FBC0 00000000 */  nop
    /* 9DFC4 8018FBC4 21104202 */  addu       $v0, $s2, $v0
    /* 9DFC8 8018FBC8 000040A0 */  sb         $zero, 0x0($v0)
    /* 9DFCC 8018FBCC 00002392 */  lbu        $v1, 0x0($s1)
    /* 9DFD0 8018FBD0 00000000 */  nop
    /* 9DFD4 8018FBD4 01006230 */  andi       $v0, $v1, 0x1
    /* 9DFD8 8018FBD8 08004224 */  addiu      $v0, $v0, 0x8
    /* 9DFDC 8018FBDC 21186200 */  addu       $v1, $v1, $v0
    /* 9DFE0 8018FBE0 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9DFE4 8018FBE4 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9DFE8 8018FBE8 00000000 */  nop
    /* 9DFEC 8018FBEC 02004228 */  slti       $v0, $v0, 0x2
    /* 9DFF0 8018FBF0 0E004014 */  bnez       $v0, .L8018FC2C
    /* 9DFF4 8018FBF4 21882302 */   addu      $s1, $s1, $v1
    /* 9DFF8 8018FBF8 1F80053C */  lui        $a1, %hi(D_801F7118)
    /* 9DFFC 8018FBFC 2128B000 */  addu       $a1, $a1, $s0
    /* 9E000 8018FC00 1871A58C */  lw         $a1, %lo(D_801F7118)($a1)
    /* 9E004 8018FC04 1F80063C */  lui        $a2, %hi(D_801F7110)
    /* 9E008 8018FC08 2130D000 */  addu       $a2, $a2, $s0
    /* 9E00C 8018FC0C 1071C68C */  lw         $a2, %lo(D_801F7110)($a2)
    /* 9E010 8018FC10 1F80073C */  lui        $a3, %hi(D_801F7114)
    /* 9E014 8018FC14 2138F000 */  addu       $a3, $a3, $s0
    /* 9E018 8018FC18 1471E78C */  lw         $a3, %lo(D_801F7114)($a3)
    /* 9E01C 8018FC1C 0F80043C */  lui        $a0, %hi(D_800F3364)
    /* 9E020 8018FC20 64338424 */  addiu      $a0, $a0, %lo(D_800F3364)
    /* 9E024 8018FC24 323C060C */  jal        func_8018F0C8
    /* 9E028 8018FC28 1000B2AF */   sw        $s2, 0x10($sp)
  .L8018FC2C:
    /* 9E02C 8018FC2C 21386002 */  addu       $a3, $s3, $zero
    /* 9E030 8018FC30 8000E228 */  slti       $v0, $a3, 0x80
    /* 9E034 8018FC34 0D004010 */  beqz       $v0, .L8018FC6C
    /* 9E038 8018FC38 2B103502 */   sltu      $v0, $s1, $s5
    /* 9E03C 8018FC3C C4FF4014 */  bnez       $v0, .L8018FB50
    /* 9E040 8018FC40 00000000 */   nop
  .L8018FC44:
    /* 9E044 8018FC44 8000E228 */  slti       $v0, $a3, 0x80
    /* 9E048 8018FC48 08004010 */  beqz       $v0, .L8018FC6C
    /* 9E04C 8018FC4C 40100700 */   sll       $v0, $a3, 1
    /* 9E050 8018FC50 21104700 */  addu       $v0, $v0, $a3
    /* 9E054 8018FC54 80100200 */  sll        $v0, $v0, 2
    /* 9E058 8018FC58 23104700 */  subu       $v0, $v0, $a3
    /* 9E05C 8018FC5C 80100200 */  sll        $v0, $v0, 2
    /* 9E060 8018FC60 1F80013C */  lui        $at, %hi(D_801F7114)
    /* 9E064 8018FC64 21082200 */  addu       $at, $at, $v0
    /* 9E068 8018FC68 147120AC */  sw         $zero, %lo(D_801F7114)($at)
  .L8018FC6C:
    /* 9E06C 8018FC6C 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9E070 8018FC70 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9E074 8018FC74 1A80013C */  lui        $at, %hi(D_8019B9D4)
    /* 9E078 8018FC78 D4B920AC */  sw         $zero, %lo(D_8019B9D4)($at)
    /* 9E07C 8018FC7C 02004228 */  slti       $v0, $v0, 0x2
    /* 9E080 8018FC80 06004014 */  bnez       $v0, .L8018FC9C
    /* 9E084 8018FC84 01000224 */   addiu     $v0, $zero, 0x1
    /* 9E088 8018FC88 0F80043C */  lui        $a0, %hi(D_800F3378)
    /* 9E08C 8018FC8C 78338424 */  addiu      $a0, $a0, %lo(D_800F3378)
    /* 9E090 8018FC90 323C060C */  jal        func_8018F0C8
    /* 9E094 8018FC94 2128E000 */   addu      $a1, $a3, $zero
    /* 9E098 8018FC98 01000224 */  addiu      $v0, $zero, 0x1
  .L8018FC9C:
    /* 9E09C 8018FC9C 3C00BF8F */  lw         $ra, 0x3C($sp)
    /* 9E0A0 8018FCA0 3800B68F */  lw         $s6, 0x38($sp)
    /* 9E0A4 8018FCA4 3400B58F */  lw         $s5, 0x34($sp)
    /* 9E0A8 8018FCA8 3000B48F */  lw         $s4, 0x30($sp)
    /* 9E0AC 8018FCAC 2C00B38F */  lw         $s3, 0x2C($sp)
    /* 9E0B0 8018FCB0 2800B28F */  lw         $s2, 0x28($sp)
    /* 9E0B4 8018FCB4 2400B18F */  lw         $s1, 0x24($sp)
    /* 9E0B8 8018FCB8 2000B08F */  lw         $s0, 0x20($sp)
    /* 9E0BC 8018FCBC 0800E003 */  jr         $ra
    /* 9E0C0 8018FCC0 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_8018FA00
