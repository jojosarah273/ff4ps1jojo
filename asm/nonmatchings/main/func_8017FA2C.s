nonmatching func_8017FA2C, 0x224

glabel func_8017FA2C
    /* 8DE2C 8017FA2C D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* 8DE30 8017FA30 2800B4AF */  sw         $s4, 0x28($sp)
    /* 8DE34 8017FA34 21A08000 */  addu       $s4, $a0, $zero
    /* 8DE38 8017FA38 0180043C */  lui        $a0, (0x80012000 >> 16)
    /* 8DE3C 8017FA3C 00208434 */  ori        $a0, $a0, (0x80012000 & 0xFFFF)
    /* 8DE40 8017FA40 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 8DE44 8017FA44 94019127 */  addiu      $s1, $gp, %gp_rel(D_8019EE90)
    /* 8DE48 8017FA48 2400B3AF */  sw         $s3, 0x24($sp)
    /* 8DE4C 8017FA4C FFFFB330 */  andi       $s3, $a1, 0xFFFF
    /* 8DE50 8017FA50 2000B2AF */  sw         $s2, 0x20($sp)
    /* 8DE54 8017FA54 FFFFD230 */  andi       $s2, $a2, 0xFFFF
    /* 8DE58 8017FA58 80000224 */  addiu      $v0, $zero, 0x80
    /* 8DE5C 8017FA5C 08000324 */  addiu      $v1, $zero, 0x8
    /* 8DE60 8017FA60 980182A7 */  sh         $v0, %gp_rel(D_8019EE94)($gp)
    /* 8DE64 8017FA64 80006226 */  addiu      $v0, $s3, 0x80
    /* 8DE68 8017FA68 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 8DE6C 8017FA6C 40000224 */  addiu      $v0, $zero, 0x40
    /* 8DE70 8017FA70 9A0183A7 */  sh         $v1, %gp_rel(D_8019EE96)($gp)
    /* 8DE74 8017FA74 04000324 */  addiu      $v1, $zero, 0x4
    /* 8DE78 8017FA78 1400A2A7 */  sh         $v0, 0x14($sp)
    /* 8DE7C 8017FA7C 1E80023C */  lui        $v0, %hi(D_801E01C8)
    /* 8DE80 8017FA80 C8014224 */  addiu      $v0, $v0, %lo(D_801E01C8)
    /* 8DE84 8017FA84 2C00BFAF */  sw         $ra, 0x2C($sp)
    /* 8DE88 8017FA88 1800B0AF */  sw         $s0, 0x18($sp)
    /* 8DE8C 8017FA8C 940193A7 */  sh         $s3, %gp_rel(D_8019EE90)($gp)
    /* 8DE90 8017FA90 960192A7 */  sh         $s2, %gp_rel(D_8019EE92)($gp)
    /* 8DE94 8017FA94 1200B2A7 */  sh         $s2, 0x12($sp)
    /* 8DE98 8017FA98 1600A3A7 */  sh         $v1, 0x16($sp)
    /* 8DE9C 8017FA9C AC0182AF */  sw         $v0, %gp_rel(D_8019EEA8)($gp)
    /* 8DEA0 8017FAA0 B00184AF */  sw         $a0, %gp_rel(D_8019EEAC)($gp)
    /* 8DEA4 8017FAA4 A00180A7 */  sh         $zero, %gp_rel(D_8019EE9C)($gp)
  .L8017FAA8:
    /* 8DEA8 8017FAA8 A0018287 */  lh         $v0, %gp_rel(D_8019EE9C)($gp)
    /* 8DEAC 8017FAAC 9E0180A7 */  sh         $zero, %gp_rel(D_8019EE9A)($gp)
    /* 8DEB0 8017FAB0 00130200 */  sll        $v0, $v0, 12
    /* 8DEB4 8017FAB4 21488202 */  addu       $t1, $s4, $v0
  .L8017FAB8:
    /* 8DEB8 8017FAB8 21180000 */  addu       $v1, $zero, $zero
    /* 8DEBC 8017FABC 80002A25 */  addiu      $t2, $t1, 0x80
    /* 8DEC0 8017FAC0 21300000 */  addu       $a2, $zero, $zero
  .L8017FAC4:
    /* 8DEC4 8017FAC4 01006824 */  addiu      $t0, $v1, 0x1
    /* 8DEC8 8017FAC8 003A0300 */  sll        $a3, $v1, 8
    /* 8DECC 8017FACC 00110300 */  sll        $v0, $v1, 4
    /* 8DED0 8017FAD0 21284900 */  addu       $a1, $v0, $t1
  .L8017FAD4:
    /* 8DED4 8017FAD4 0000A494 */  lhu        $a0, 0x0($a1)
    /* 8DED8 8017FAD8 0200A524 */  addiu      $a1, $a1, 0x2
    /* 8DEDC 8017FADC 9E018387 */  lh         $v1, %gp_rel(D_8019EE9A)($gp)
    /* 8DEE0 8017FAE0 AC01828F */  lw         $v0, %gp_rel(D_8019EEA8)($gp)
    /* 8DEE4 8017FAE4 C0180300 */  sll        $v1, $v1, 3
    /* 8DEE8 8017FAE8 2110E200 */  addu       $v0, $a3, $v0
    /* 8DEEC 8017FAEC 21186200 */  addu       $v1, $v1, $v0
    /* 8DEF0 8017FAF0 21186600 */  addu       $v1, $v1, $a2
    /* 8DEF4 8017FAF4 0100C624 */  addiu      $a2, $a2, 0x1
    /* 8DEF8 8017FAF8 02220400 */  srl        $a0, $a0, 8
    /* 8DEFC 8017FAFC 0800C228 */  slti       $v0, $a2, 0x8
    /* 8DF00 8017FB00 F4FF4014 */  bnez       $v0, .L8017FAD4
    /* 8DF04 8017FB04 000064A0 */   sb        $a0, 0x0($v1)
    /* 8DF08 8017FB08 21180001 */  addu       $v1, $t0, $zero
    /* 8DF0C 8017FB0C 08006228 */  slti       $v0, $v1, 0x8
    /* 8DF10 8017FB10 ECFF4014 */  bnez       $v0, .L8017FAC4
    /* 8DF14 8017FB14 21300000 */   addu      $a2, $zero, $zero
    /* 8DF18 8017FB18 9E018297 */  lhu        $v0, %gp_rel(D_8019EE9A)($gp)
    /* 8DF1C 8017FB1C 00000000 */  nop
    /* 8DF20 8017FB20 01004224 */  addiu      $v0, $v0, 0x1
    /* 8DF24 8017FB24 9E0182A7 */  sh         $v0, %gp_rel(D_8019EE9A)($gp)
    /* 8DF28 8017FB28 00140200 */  sll        $v0, $v0, 16
    /* 8DF2C 8017FB2C 03140200 */  sra        $v0, $v0, 16
    /* 8DF30 8017FB30 20004228 */  slti       $v0, $v0, 0x20
    /* 8DF34 8017FB34 E0FF4014 */  bnez       $v0, .L8017FAB8
    /* 8DF38 8017FB38 21484001 */   addu      $t1, $t2, $zero
    /* 8DF3C 8017FB3C 21202002 */  addu       $a0, $s1, $zero
    /* 8DF40 8017FB40 AC01858F */  lw         $a1, %gp_rel(D_8019EEA8)($gp)
    /* 8DF44 8017FB44 A0018287 */  lh         $v0, %gp_rel(D_8019EE9C)($gp)
    /* 8DF48 8017FB48 940193A7 */  sh         $s3, %gp_rel(D_8019EE90)($gp)
    /* 8DF4C 8017FB4C C0100200 */  sll        $v0, $v0, 3
    /* 8DF50 8017FB50 21104202 */  addu       $v0, $s2, $v0
    /* 8DF54 8017FB54 960182A7 */  sh         $v0, %gp_rel(D_8019EE92)($gp)
    /* 8DF58 8017FB58 9051060C */  jal        func_80194640
    /* 8DF5C 8017FB5C 21800000 */   addu      $s0, $zero, $zero
    /* 8DF60 8017FB60 21300000 */  addu       $a2, $zero, $zero
  .L8017FB64:
    /* 8DF64 8017FB64 01000926 */  addiu      $t1, $s0, 0x1
    /* 8DF68 8017FB68 C0411000 */  sll        $t0, $s0, 7
    /* 8DF6C 8017FB6C 403A1000 */  sll        $a3, $s0, 9
  .L8017FB70:
    /* 8DF70 8017FB70 40180600 */  sll        $v1, $a2, 1
    /* 8DF74 8017FB74 B001858F */  lw         $a1, %gp_rel(D_8019EEAC)($gp)
    /* 8DF78 8017FB78 AC01828F */  lw         $v0, %gp_rel(D_8019EEA8)($gp)
    /* 8DF7C 8017FB7C 21280501 */  addu       $a1, $t0, $a1
    /* 8DF80 8017FB80 2128A600 */  addu       $a1, $a1, $a2
    /* 8DF84 8017FB84 2110E200 */  addu       $v0, $a3, $v0
    /* 8DF88 8017FB88 21186200 */  addu       $v1, $v1, $v0
    /* 8DF8C 8017FB8C 0100C624 */  addiu      $a2, $a2, 0x1
    /* 8DF90 8017FB90 00006490 */  lbu        $a0, 0x0($v1)
    /* 8DF94 8017FB94 8000C228 */  slti       $v0, $a2, 0x80
    /* 8DF98 8017FB98 F5FF4014 */  bnez       $v0, .L8017FB70
    /* 8DF9C 8017FB9C 0000A4A0 */   sb        $a0, 0x0($a1)
    /* 8DFA0 8017FBA0 21802001 */  addu       $s0, $t1, $zero
    /* 8DFA4 8017FBA4 0400022A */  slti       $v0, $s0, 0x4
    /* 8DFA8 8017FBA8 EEFF4014 */  bnez       $v0, .L8017FB64
    /* 8DFAC 8017FBAC 21300000 */   addu      $a2, $zero, $zero
    /* 8DFB0 8017FBB0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 8DFB4 8017FBB4 A0018287 */  lh         $v0, %gp_rel(D_8019EE9C)($gp)
    /* 8DFB8 8017FBB8 B001858F */  lw         $a1, %gp_rel(D_8019EEAC)($gp)
    /* 8DFBC 8017FBBC 80100200 */  sll        $v0, $v0, 2
    /* 8DFC0 8017FBC0 21104202 */  addu       $v0, $s2, $v0
    /* 8DFC4 8017FBC4 9051060C */  jal        func_80194640
    /* 8DFC8 8017FBC8 1200A2A7 */   sh        $v0, 0x12($sp)
    /* 8DFCC 8017FBCC A0018397 */  lhu        $v1, %gp_rel(D_8019EE9C)($gp)
    /* 8DFD0 8017FBD0 00000000 */  nop
    /* 8DFD4 8017FBD4 01006324 */  addiu      $v1, $v1, 0x1
    /* 8DFD8 8017FBD8 A00183A7 */  sh         $v1, %gp_rel(D_8019EE9C)($gp)
    /* 8DFDC 8017FBDC 001C0300 */  sll        $v1, $v1, 16
    /* 8DFE0 8017FBE0 031C0300 */  sra        $v1, $v1, 16
    /* 8DFE4 8017FBE4 08006328 */  slti       $v1, $v1, 0x8
    /* 8DFE8 8017FBE8 AFFF6014 */  bnez       $v1, .L8017FAA8
    /* 8DFEC 8017FBEC FFFF0324 */   addiu     $v1, $zero, -0x1
    /* 8DFF0 8017FBF0 9C0183A7 */  sh         $v1, %gp_rel(D_8019EE98)($gp)
    /* 8DFF4 8017FBF4 1A80023C */  lui        $v0, %hi(D_801A0A10)
    /* 8DFF8 8017FBF8 100A4224 */  addiu      $v0, $v0, %lo(D_801A0A10)
    /* 8DFFC 8017FBFC 10005124 */  addiu      $s1, $v0, 0x10
    /* 8E000 8017FC00 03001024 */  addiu      $s0, $zero, 0x3
  .L8017FC04:
    /* 8E004 8017FC04 01000424 */  addiu      $a0, $zero, 0x1
    /* 8E008 8017FC08 21280000 */  addu       $a1, $zero, $zero
    /* 8E00C 8017FC0C 21306002 */  addu       $a2, $s3, $zero
    /* 8E010 8017FC10 6A5C060C */  jal        func_801971A8
    /* 8E014 8017FC14 21384002 */   addu      $a3, $s2, $zero
    /* 8E018 8017FC18 000022A6 */  sh         $v0, 0x0($s1)
    /* 8E01C 8017FC1C FFFF1026 */  addiu      $s0, $s0, -0x1
    /* 8E020 8017FC20 F8FF0106 */  bgez       $s0, .L8017FC04
    /* 8E024 8017FC24 02003126 */   addiu     $s1, $s1, 0x2
    /* 8E028 8017FC28 7FFE050C */  jal        func_8017F9FC
    /* 8E02C 8017FC2C 00000000 */   nop
    /* 8E030 8017FC30 2C00BF8F */  lw         $ra, 0x2C($sp)
    /* 8E034 8017FC34 2800B48F */  lw         $s4, 0x28($sp)
    /* 8E038 8017FC38 2400B38F */  lw         $s3, 0x24($sp)
    /* 8E03C 8017FC3C 2000B28F */  lw         $s2, 0x20($sp)
    /* 8E040 8017FC40 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 8E044 8017FC44 1800B08F */  lw         $s0, 0x18($sp)
    /* 8E048 8017FC48 0800E003 */  jr         $ra
    /* 8E04C 8017FC4C 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_8017FA2C
