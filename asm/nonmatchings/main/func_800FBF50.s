nonmatching func_800FBF50, 0x12C

glabel func_800FBF50
    /* A350 800FBF50 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A354 800FBF54 80000424 */  addiu      $a0, $zero, 0x80
    /* A358 800FBF58 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* A35C 800FBF5C 1800B2AF */  sw         $s2, 0x18($sp)
    /* A360 800FBF60 1400B1AF */  sw         $s1, 0x14($sp)
    /* A364 800FBF64 53D9030C */  jal        func_800F654C
    /* A368 800FBF68 1000B0AF */   sw        $s0, 0x10($sp)
    /* A36C 800FBF6C 62E0030C */  jal        func_800F8188
    /* A370 800FBF70 15210424 */   addiu     $a0, $zero, 0x2115
    /* A374 800FBF74 9CDC030C */  jal        func_800F7270
    /* A378 800FBF78 47000424 */   addiu     $a0, $zero, 0x47
    /* A37C 800FBF7C 3D000424 */  addiu      $a0, $zero, 0x3D
    /* A380 800FBF80 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* A384 800FBF84 00000000 */  nop
    /* A388 800FBF88 00005194 */  lhu        $s1, 0x0($v0)
    /* A38C 800FBF8C 9CDC030C */  jal        func_800F7270
    /* A390 800FBF90 1D80123C */   lui       $s2, %hi(D_801CFD68)
  .L800FBF94:
    /* A394 800FBF94 1ADB030C */  jal        func_800F6C68
    /* A398 800FBF98 0800043C */   lui       $a0, (0x80000 >> 16)
    /* A39C 800FBF9C 0800043C */  lui        $a0, (0x80001 >> 16)
    /* A3A0 800FBFA0 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* A3A4 800FBFA4 00000000 */  nop
    /* A3A8 800FBFA8 00005090 */  lbu        $s0, 0x0($v0)
    /* A3AC 800FBFAC 1ADB030C */  jal        func_800F6C68
    /* A3B0 800FBFB0 01008434 */   ori       $a0, $a0, (0x80001 & 0xFFFF)
    /* A3B4 800FBFB4 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* A3B8 800FBFB8 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* A3BC 800FBFBC 00006290 */  lbu        $v0, 0x0($v1)
    /* A3C0 800FBFC0 68FD4326 */  addiu      $v1, $s2, %lo(D_801CFD68)
    /* A3C4 800FBFC4 00120200 */  sll        $v0, $v0, 8
    /* A3C8 800FBFC8 25800202 */  or         $s0, $s0, $v0
    /* A3CC 800FBFCC 40101100 */  sll        $v0, $s1, 1
    /* A3D0 800FBFD0 21104300 */  addu       $v0, $v0, $v1
    /* A3D4 800FBFD4 01002326 */  addiu      $v1, $s1, 0x1
    /* A3D8 800FBFD8 000050A4 */  sh         $s0, 0x0($v0)
    /* A3DC 800FBFDC 00008294 */  lhu        $v0, 0x0($a0)
    /* A3E0 800FBFE0 FFFF7130 */  andi       $s1, $v1, 0xFFFF
    /* A3E4 800FBFE4 02004224 */  addiu      $v0, $v0, 0x2
    /* A3E8 800FBFE8 000082A4 */  sh         $v0, 0x0($a0)
    /* A3EC 800FBFEC 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* A3F0 800FBFF0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* A3F4 800FBFF4 00006290 */  lbu        $v0, 0x0($v1)
    /* A3F8 800FBFF8 07000424 */  addiu      $a0, $zero, 0x7
    /* A3FC 800FBFFC 92D0030C */  jal        func_800F4248
    /* A400 800FC000 0000A2A0 */   sb        $v0, 0x0($a1)
    /* A404 800FC004 48D0030C */  jal        func_800F4120
    /* A408 800FC008 02020424 */   addiu     $a0, $zero, 0x202
    /* A40C 800FC00C E1FF4014 */  bnez       $v0, .L800FBF94
    /* A410 800FC010 00000000 */   nop
    /* A414 800FC014 91E5030C */  jal        func_800F9644
    /* A418 800FC018 20000424 */   addiu     $a0, $zero, 0x20
    /* A41C 800FC01C 96D9030C */  jal        func_800F6658
    /* A420 800FC020 3D000424 */   addiu     $a0, $zero, 0x3D
    /* A424 800FC024 04D5030C */  jal        func_800F5410
    /* A428 800FC028 00000000 */   nop
    /* A42C 800FC02C 19D0030C */  jal        func_800F4064
    /* A430 800FC030 08000424 */   addiu     $a0, $zero, 0x8
    /* A434 800FC034 9DE0030C */  jal        func_800F8274
    /* A438 800FC038 3D000424 */   addiu     $a0, $zero, 0x3D
    /* A43C 800FC03C C7E5030C */  jal        func_800F971C
    /* A440 800FC040 00000000 */   nop
    /* A444 800FC044 52CF030C */  jal        func_800F3D48
    /* A448 800FC048 00000000 */   nop
    /* A44C 800FC04C 98E5030C */  jal        func_800F9660
    /* A450 800FC050 20000424 */   addiu     $a0, $zero, 0x20
    /* A454 800FC054 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* A458 800FC058 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* A45C 800FC05C 1800B28F */  lw         $s2, 0x18($sp)
    /* A460 800FC060 1400B18F */  lw         $s1, 0x14($sp)
    /* A464 800FC064 00006294 */  lhu        $v0, 0x0($v1)
    /* A468 800FC068 1000B08F */  lw         $s0, 0x10($sp)
    /* A46C 800FC06C 02004224 */  addiu      $v0, $v0, 0x2
    /* A470 800FC070 000062A4 */  sh         $v0, 0x0($v1)
    /* A474 800FC074 0800E003 */  jr         $ra
    /* A478 800FC078 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_800FBF50
