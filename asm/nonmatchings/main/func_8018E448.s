nonmatching func_8018E448, 0x3C

glabel func_8018E448
    /* 9C848 8018E448 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9C84C 8018E44C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9C850 8018E450 1A80103C */  lui        $s0, %hi(D_8019B150)
    /* 9C854 8018E454 50B1108E */  lw         $s0, %lo(D_8019B150)($s0)
    /* 9C858 8018E458 00000000 */  nop
    /* 9C85C 8018E45C 04009010 */  beq        $a0, $s0, .L8018E470
    /* 9C860 8018E460 1400BFAF */   sw        $ra, 0x14($sp)
    /* 9C864 8018E464 1A80013C */  lui        $at, %hi(D_8019B150)
    /* 9C868 8018E468 2239060C */  jal        func_8018E488
    /* 9C86C 8018E46C 50B124AC */   sw        $a0, %lo(D_8019B150)($at)
  .L8018E470:
    /* 9C870 8018E470 21100002 */  addu       $v0, $s0, $zero
    /* 9C874 8018E474 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9C878 8018E478 1000B08F */  lw         $s0, 0x10($sp)
    /* 9C87C 8018E47C 0800E003 */  jr         $ra
    /* 9C880 8018E480 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018E448
    /* 9C884 8018E484 00000000 */  nop
