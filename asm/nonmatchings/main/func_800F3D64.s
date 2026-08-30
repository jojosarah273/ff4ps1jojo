nonmatching func_800F3D64, 0xEC

glabel func_800F3D64
    /* 2164 800F3D64 7400828F */  lw         $v0, %gp_rel(D_8019ED70)($gp)
    /* 2168 800F3D68 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 216C 800F3D6C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 2170 800F3D70 21808000 */  addu       $s0, $a0, $zero
    /* 2174 800F3D74 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2178 800F3D78 000050A0 */  sb         $s0, 0x0($v0)
    /* 217C 800F3D7C 7400838F */  lw         $v1, %gp_rel(D_8019ED70)($gp)
    /* 2180 800F3D80 00000000 */  nop
    /* 2184 800F3D84 00006290 */  lbu        $v0, 0x0($v1)
    /* 2188 800F3D88 7000848F */  lw         $a0, %gp_rel(D_8019ED6C)($gp)
    /* 218C 800F3D8C 00140200 */  sll        $v0, $v0, 16
    /* 2190 800F3D90 000082AC */  sw         $v0, 0x0($a0)
    /* 2194 800F3D94 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 2198 800F3D98 7000828F */  lw         $v0, %gp_rel(D_8019ED6C)($gp)
    /* 219C 800F3D9C 00006694 */  lhu        $a2, 0x0($v1)
    /* 21A0 800F3DA0 0000448C */  lw         $a0, 0x0($v0)
    /* 21A4 800F3DA4 21280000 */  addu       $a1, $zero, $zero
    /* 21A8 800F3DA8 E7CE030C */  jal        func_800F3B9C
    /* 21AC 800F3DAC 21208600 */   addu      $a0, $a0, $a2
    /* 21B0 800F3DB0 21280000 */  addu       $a1, $zero, $zero
    /* 21B4 800F3DB4 00821000 */  sll        $s0, $s0, 8
    /* 21B8 800F3DB8 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 21BC 800F3DBC FF00063C */  lui        $a2, (0xFF0000 >> 16)
    /* 21C0 800F3DC0 00006494 */  lhu        $a0, 0x0($v1)
    /* 21C4 800F3DC4 24800602 */  and        $s0, $s0, $a2
    /* 21C8 800F3DC8 25200402 */  or         $a0, $s0, $a0
    /* 21CC 800F3DCC E7CE030C */  jal        func_800F3B9C
    /* 21D0 800F3DD0 21804000 */   addu      $s0, $v0, $zero
    /* 21D4 800F3DD4 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 21D8 800F3DD8 21280000 */  addu       $a1, $zero, $zero
    /* 21DC 800F3DDC 00006494 */  lhu        $a0, 0x0($v1)
    /* 21E0 800F3DE0 00000000 */  nop
    /* 21E4 800F3DE4 01008624 */  addiu      $a2, $a0, 0x1
    /* 21E8 800F3DE8 0800C010 */  beqz       $a2, .L800F3E0C
    /* 21EC 800F3DEC 21384000 */   addu      $a3, $v0, $zero
  .L800F3DF0:
    /* 21F0 800F3DF0 21200502 */  addu       $a0, $s0, $a1
    /* 21F4 800F3DF4 2110E500 */  addu       $v0, $a3, $a1
    /* 21F8 800F3DF8 0100A524 */  addiu      $a1, $a1, 0x1
    /* 21FC 800F3DFC 00004390 */  lbu        $v1, 0x0($v0)
    /* 2200 800F3E00 2A10A600 */  slt        $v0, $a1, $a2
    /* 2204 800F3E04 FAFF4014 */  bnez       $v0, .L800F3DF0
    /* 2208 800F3E08 000083A0 */   sb        $v1, 0x0($a0)
  .L800F3E0C:
    /* 220C 800F3E0C 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 2210 800F3E10 00000000 */  nop
    /* 2214 800F3E14 00006294 */  lhu        $v0, 0x0($v1)
    /* 2218 800F3E18 00000000 */  nop
    /* 221C 800F3E1C 21104600 */  addu       $v0, $v0, $a2
    /* 2220 800F3E20 000062A4 */  sh         $v0, 0x0($v1)
    /* 2224 800F3E24 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 2228 800F3E28 1400BF8F */  lw         $ra, 0x14($sp)
    /* 222C 800F3E2C 00008294 */  lhu        $v0, 0x0($a0)
    /* 2230 800F3E30 1000B08F */  lw         $s0, 0x10($sp)
    /* 2234 800F3E34 21104600 */  addu       $v0, $v0, $a2
    /* 2238 800F3E38 000082A4 */  sh         $v0, 0x0($a0)
    /* 223C 800F3E3C 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 2240 800F3E40 FFFF0234 */  ori        $v0, $zero, 0xFFFF
    /* 2244 800F3E44 000062A4 */  sh         $v0, 0x0($v1)
    /* 2248 800F3E48 0800E003 */  jr         $ra
    /* 224C 800F3E4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F3D64
