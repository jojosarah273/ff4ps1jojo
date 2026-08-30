nonmatching func_8013CB94, 0x5C

glabel func_8013CB94
    /* 4AF94 8013CB94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4AF98 8013CB98 1000B0AF */  sw         $s0, 0x10($sp)
    /* 4AF9C 8013CB9C 1A80103C */  lui        $s0, %hi(D_80199190)
    /* 4AFA0 8013CBA0 90911026 */  addiu      $s0, $s0, %lo(D_80199190)
    /* 4AFA4 8013CBA4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4AFA8 8013CBA8 D0000496 */  lhu        $a0, 0xD0($s0)
    /* 4AFAC 8013CBAC 40DD030C */  jal        func_800F7500
    /* 4AFB0 8013CBB0 00000000 */   nop
    /* 4AFB4 8013CBB4 CC7B040C */  jal        func_8011EF30
    /* 4AFB8 8013CBB8 00000000 */   nop
    /* 4AFBC 8013CBBC D4000496 */  lhu        $a0, 0xD4($s0)
    /* 4AFC0 8013CBC0 40DD030C */  jal        func_800F7500
    /* 4AFC4 8013CBC4 00000000 */   nop
    /* 4AFC8 8013CBC8 DD7E040C */  jal        func_8011FB74
    /* 4AFCC 8013CBCC 00000000 */   nop
    /* 4AFD0 8013CBD0 FC98040C */  jal        func_801263F0
    /* 4AFD4 8013CBD4 00000000 */   nop
    /* 4AFD8 8013CBD8 20D5030C */  jal        func_800F5480
    /* 4AFDC 8013CBDC 00000000 */   nop
    /* 4AFE0 8013CBE0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4AFE4 8013CBE4 1000B08F */  lw         $s0, 0x10($sp)
    /* 4AFE8 8013CBE8 0800E003 */  jr         $ra
    /* 4AFEC 8013CBEC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013CB94
