nonmatching func_800FBE44, 0x10C

glabel func_800FBE44
    /* A244 800FBE44 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A248 800FBE48 21200000 */  addu       $a0, $zero, $zero
    /* A24C 800FBE4C 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* A250 800FBE50 77DC030C */  jal        func_800F71DC
    /* A254 800FBE54 1800B0AF */   sw        $s0, 0x18($sp)
    /* A258 800FBE58 5BE3030C */  jal        func_800F8D6C
    /* A25C 800FBE5C 47000424 */   addiu     $a0, $zero, 0x47
    /* A260 800FBE60 77DC030C */  jal        func_800F71DC
    /* A264 800FBE64 00280424 */   addiu     $a0, $zero, 0x2800
    /* A268 800FBE68 5BE3030C */  jal        func_800F8D6C
    /* A26C 800FBE6C 45000424 */   addiu     $a0, $zero, 0x45
    /* A270 800FBE70 53D9030C */  jal        func_800F654C
    /* A274 800FBE74 08000424 */   addiu     $a0, $zero, 0x8
    /* A278 800FBE78 93E0030C */  jal        func_800F824C
    /* A27C 800FBE7C 3C000424 */   addiu     $a0, $zero, 0x3C
    /* A280 800FBE80 77DC030C */  jal        func_800F71DC
    /* A284 800FBE84 00C00434 */   ori       $a0, $zero, 0xC000
    /* A288 800FBE88 5BE3030C */  jal        func_800F8D6C
    /* A28C 800FBE8C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* A290 800FBE90 ACD9050C */  jal        func_801766B0
    /* A294 800FBE94 1D80103C */   lui       $s0, %hi(D_801CFD68)
    /* A298 800FBE98 77DC030C */  jal        func_800F71DC
    /* A29C 800FBE9C 00400424 */   addiu     $a0, $zero, 0x4000
    /* A2A0 800FBEA0 5BE3030C */  jal        func_800F8D6C
    /* A2A4 800FBEA4 47000424 */   addiu     $a0, $zero, 0x47
    /* A2A8 800FBEA8 ACD9050C */  jal        func_801766B0
    /* A2AC 800FBEAC 68FD1026 */   addiu     $s0, $s0, %lo(D_801CFD68)
    /* A2B0 800FBEB0 21200002 */  addu       $a0, $s0, $zero
    /* A2B4 800FBEB4 00020524 */  addiu      $a1, $zero, 0x200
    /* A2B8 800FBEB8 21300000 */  addu       $a2, $zero, $zero
    /* A2BC 800FBEBC 3EFE050C */  jal        func_8017F8F8
    /* A2C0 800FBEC0 21380000 */   addu      $a3, $zero, $zero
    /* A2C4 800FBEC4 21200002 */  addu       $a0, $s0, $zero
    /* A2C8 800FBEC8 00020524 */  addiu      $a1, $zero, 0x200
    /* A2CC 800FBECC 21300000 */  addu       $a2, $zero, $zero
    /* A2D0 800FBED0 3EFE050C */  jal        func_8017F8F8
    /* A2D4 800FBED4 11000724 */   addiu     $a3, $zero, 0x11
    /* A2D8 800FBED8 21200002 */  addu       $a0, $s0, $zero
    /* A2DC 800FBEDC 00030524 */  addiu      $a1, $zero, 0x300
    /* A2E0 800FBEE0 21300000 */  addu       $a2, $zero, $zero
    /* A2E4 800FBEE4 3EFE050C */  jal        func_8017F8F8
    /* A2E8 800FBEE8 FFFF0724 */   addiu     $a3, $zero, -0x1
    /* A2EC 800FBEEC 1000A427 */  addiu      $a0, $sp, 0x10
    /* A2F0 800FBEF0 1E020524 */  addiu      $a1, $zero, 0x21E
    /* A2F4 800FBEF4 30000624 */  addiu      $a2, $zero, 0x30
    /* A2F8 800FBEF8 DF000224 */  addiu      $v0, $zero, 0xDF
    /* A2FC 800FBEFC 40030324 */  addiu      $v1, $zero, 0x340
    /* A300 800FBF00 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* A304 800FBF04 30EE22A4 */  sh         $v0, %lo(D_8019EE30)($at)
    /* A308 800FBF08 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* A30C 800FBF0C 2EEE22A4 */  sh         $v0, %lo(D_8019EE2E)($at)
    /* A310 800FBF10 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* A314 800FBF14 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* A318 800FBF18 F0000224 */  addiu      $v0, $zero, 0xF0
    /* A31C 800FBF1C 1000A3A7 */  sh         $v1, 0x10($sp)
    /* A320 800FBF20 02000324 */  addiu      $v1, $zero, 0x2
    /* A324 800FBF24 1200A2A7 */  sh         $v0, 0x12($sp)
    /* A328 800FBF28 08000224 */  addiu      $v0, $zero, 0x8
    /* A32C 800FBF2C 1400A3A7 */  sh         $v1, 0x14($sp)
    /* A330 800FBF30 C051060C */  jal        func_80194700
    /* A334 800FBF34 1600A2A7 */   sh        $v0, 0x16($sp)
    /* A338 800FBF38 E550060C */  jal        func_80194394
    /* A33C 800FBF3C 21200000 */   addu      $a0, $zero, $zero
    /* A340 800FBF40 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* A344 800FBF44 1800B08F */  lw         $s0, 0x18($sp)
    /* A348 800FBF48 0800E003 */  jr         $ra
    /* A34C 800FBF4C 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_800FBE44
