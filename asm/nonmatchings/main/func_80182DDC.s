nonmatching func_80182DDC, 0x3C

glabel func_80182DDC
    /* 911DC 80182DDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 911E0 80182DE0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 911E4 80182DE4 21808000 */  addu       $s0, $a0, $zero
    /* 911E8 80182DE8 00240500 */  sll        $a0, $a1, 16
    /* 911EC 80182DEC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 911F0 80182DF0 EE5F060C */  jal        func_80197FB8
    /* 911F4 80182DF4 03240400 */   sra       $a0, $a0, 16
    /* 911F8 80182DF8 18000202 */  mult       $s0, $v0
    /* 911FC 80182DFC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 91200 80182E00 12800000 */  mflo       $s0
    /* 91204 80182E04 00811000 */  sll        $s0, $s0, 4
    /* 91208 80182E08 03141000 */  sra        $v0, $s0, 16
    /* 9120C 80182E0C 1000B08F */  lw         $s0, 0x10($sp)
    /* 91210 80182E10 0800E003 */  jr         $ra
    /* 91214 80182E14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80182DDC
