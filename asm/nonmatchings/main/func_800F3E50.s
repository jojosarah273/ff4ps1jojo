nonmatching func_800F3E50, 0xE8

glabel func_800F3E50
    /* 2250 800F3E50 7400828F */  lw         $v0, %gp_rel(D_8019ED70)($gp)
    /* 2254 800F3E54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2258 800F3E58 1000B0AF */  sw         $s0, 0x10($sp)
    /* 225C 800F3E5C 21808000 */  addu       $s0, $a0, $zero
    /* 2260 800F3E60 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2264 800F3E64 000050A0 */  sb         $s0, 0x0($v0)
    /* 2268 800F3E68 7400838F */  lw         $v1, %gp_rel(D_8019ED70)($gp)
    /* 226C 800F3E6C 00000000 */  nop
    /* 2270 800F3E70 00006290 */  lbu        $v0, 0x0($v1)
    /* 2274 800F3E74 7000848F */  lw         $a0, %gp_rel(D_8019ED6C)($gp)
    /* 2278 800F3E78 00140200 */  sll        $v0, $v0, 16
    /* 227C 800F3E7C 000082AC */  sw         $v0, 0x0($a0)
    /* 2280 800F3E80 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 2284 800F3E84 7000828F */  lw         $v0, %gp_rel(D_8019ED6C)($gp)
    /* 2288 800F3E88 00006694 */  lhu        $a2, 0x0($v1)
    /* 228C 800F3E8C 0000448C */  lw         $a0, 0x0($v0)
    /* 2290 800F3E90 21280000 */  addu       $a1, $zero, $zero
    /* 2294 800F3E94 E7CE030C */  jal        func_800F3B9C
    /* 2298 800F3E98 21208600 */   addu      $a0, $a0, $a2
    /* 229C 800F3E9C 21280000 */  addu       $a1, $zero, $zero
    /* 22A0 800F3EA0 00821000 */  sll        $s0, $s0, 8
    /* 22A4 800F3EA4 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 22A8 800F3EA8 FF00063C */  lui        $a2, (0xFF0000 >> 16)
    /* 22AC 800F3EAC 00006494 */  lhu        $a0, 0x0($v1)
    /* 22B0 800F3EB0 24800602 */  and        $s0, $s0, $a2
    /* 22B4 800F3EB4 25200402 */  or         $a0, $s0, $a0
    /* 22B8 800F3EB8 E7CE030C */  jal        func_800F3B9C
    /* 22BC 800F3EBC 21804000 */   addu      $s0, $v0, $zero
    /* 22C0 800F3EC0 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 22C4 800F3EC4 00000000 */  nop
    /* 22C8 800F3EC8 00006494 */  lhu        $a0, 0x0($v1)
    /* 22CC 800F3ECC 21384000 */  addu       $a3, $v0, $zero
    /* 22D0 800F3ED0 01008624 */  addiu      $a2, $a0, 0x1
    /* 22D4 800F3ED4 0700C004 */  bltz       $a2, .L800F3EF4
    /* 22D8 800F3ED8 2128C000 */   addu      $a1, $a2, $zero
  .L800F3EDC:
    /* 22DC 800F3EDC 21100502 */  addu       $v0, $s0, $a1
    /* 22E0 800F3EE0 2118E500 */  addu       $v1, $a3, $a1
    /* 22E4 800F3EE4 00006490 */  lbu        $a0, 0x0($v1)
    /* 22E8 800F3EE8 FFFFA524 */  addiu      $a1, $a1, -0x1
    /* 22EC 800F3EEC FBFFA104 */  bgez       $a1, .L800F3EDC
    /* 22F0 800F3EF0 000044A0 */   sb        $a0, 0x0($v0)
  .L800F3EF4:
    /* 22F4 800F3EF4 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 22F8 800F3EF8 00000000 */  nop
    /* 22FC 800F3EFC 00006294 */  lhu        $v0, 0x0($v1)
    /* 2300 800F3F00 00000000 */  nop
    /* 2304 800F3F04 23104600 */  subu       $v0, $v0, $a2
    /* 2308 800F3F08 000062A4 */  sh         $v0, 0x0($v1)
    /* 230C 800F3F0C 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* 2310 800F3F10 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2314 800F3F14 00008294 */  lhu        $v0, 0x0($a0)
    /* 2318 800F3F18 1000B08F */  lw         $s0, 0x10($sp)
    /* 231C 800F3F1C 23104600 */  subu       $v0, $v0, $a2
    /* 2320 800F3F20 000082A4 */  sh         $v0, 0x0($a0)
    /* 2324 800F3F24 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 2328 800F3F28 FFFF0234 */  ori        $v0, $zero, 0xFFFF
    /* 232C 800F3F2C 000062A4 */  sh         $v0, 0x0($v1)
    /* 2330 800F3F30 0800E003 */  jr         $ra
    /* 2334 800F3F34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F3E50
