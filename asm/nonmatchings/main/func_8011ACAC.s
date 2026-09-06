nonmatching func_8011ACAC, 0x68

glabel func_8011ACAC
    /* 290AC 8011ACAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 290B0 8011ACB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 290B4 8011ACB4 655D040C */  jal        func_80117594
    /* 290B8 8011ACB8 00000000 */   nop
    /* 290BC 8011ACBC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 290C0 8011ACC0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 290C4 8011ACC4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 290C8 8011ACC8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 290CC 8011ACCC 00004394 */  lhu        $v1, 0x0($v0)
    /* 290D0 8011ACD0 490A0424 */  addiu      $a0, $zero, 0xA49
    /* 290D4 8011ACD4 DADA030C */  jal        func_800F6B68
    /* 290D8 8011ACD8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 290DC 8011ACDC 93E0030C */  jal        func_800F824C
    /* 290E0 8011ACE0 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 290E4 8011ACE4 F11F040C */  jal        func_80107FC4
    /* 290E8 8011ACE8 00000000 */   nop
    /* 290EC 8011ACEC 261F040C */  jal        func_80107C98
    /* 290F0 8011ACF0 00000000 */   nop
    /* 290F4 8011ACF4 CF1F040C */  jal        func_80107F3C
    /* 290F8 8011ACF8 00000000 */   nop
    /* 290FC 8011ACFC DEF9030C */  jal        func_800FE778
    /* 29100 8011AD00 00000000 */   nop
    /* 29104 8011AD04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29108 8011AD08 00000000 */  nop
    /* 2910C 8011AD0C 0800E003 */  jr         $ra
    /* 29110 8011AD10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011ACAC
