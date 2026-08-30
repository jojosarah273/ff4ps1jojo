nonmatching func_80188EA8, 0x50

glabel func_80188EA8
    /* 972A8 80188EA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 972AC 80188EAC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 972B0 80188EB0 21808000 */  addu       $s0, $a0, $zero
    /* 972B4 80188EB4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 972B8 80188EB8 01000424 */  addiu      $a0, $zero, 0x1
  .L80188EBC:
    /* 972BC 80188EBC FE45060C */  jal        func_801917F8
    /* 972C0 80188EC0 21280002 */   addu      $a1, $s0, $zero
    /* 972C4 80188EC4 FDFF4014 */  bnez       $v0, .L80188EBC
    /* 972C8 80188EC8 01000424 */   addiu     $a0, $zero, 0x1
    /* 972CC 80188ECC 10000424 */  addiu      $a0, $zero, 0x10
  .L80188ED0:
    /* 972D0 80188ED0 21280000 */  addu       $a1, $zero, $zero
    /* 972D4 80188ED4 1E46060C */  jal        func_80191878
    /* 972D8 80188ED8 21300002 */   addu      $a2, $s0, $zero
    /* 972DC 80188EDC FCFF4014 */  bnez       $v0, .L80188ED0
    /* 972E0 80188EE0 10000424 */   addiu     $a0, $zero, 0x10
    /* 972E4 80188EE4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 972E8 80188EE8 1000B08F */  lw         $s0, 0x10($sp)
    /* 972EC 80188EEC 21100000 */  addu       $v0, $zero, $zero
    /* 972F0 80188EF0 0800E003 */  jr         $ra
    /* 972F4 80188EF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80188EA8
