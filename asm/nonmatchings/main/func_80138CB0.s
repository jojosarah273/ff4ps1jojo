nonmatching func_80138CB0, 0x74

glabel func_80138CB0
    /* 470B0 80138CB0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 470B4 80138CB4 C0480424 */  addiu      $a0, $zero, 0x48C0
    /* 470B8 80138CB8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 470BC 80138CBC 77DC030C */  jal        func_800F71DC
    /* 470C0 80138CC0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 470C4 80138CC4 40E3030C */  jal        func_800F8D00
    /* 470C8 80138CC8 711A0424 */   addiu     $a0, $zero, 0x1A71
    /* 470CC 80138CCC 1FA0040C */  jal        func_8012807C
    /* 470D0 80138CD0 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 470D4 80138CD4 EF95040C */  jal        func_801257BC
    /* 470D8 80138CD8 90911026 */   addiu     $s0, $s0, %lo(D_80199190)
    /* 470DC 80138CDC EEE3030C */  jal        func_800F8FB8
    /* 470E0 80138CE0 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 470E4 80138CE4 8B83040C */  jal        func_80120E2C
    /* 470E8 80138CE8 00000000 */   nop
    /* 470EC 80138CEC B6000496 */  lhu        $a0, 0xB6($s0)
    /* 470F0 80138CF0 40DD030C */  jal        func_800F7500
    /* 470F4 80138CF4 00000000 */   nop
    /* 470F8 80138CF8 CC7B040C */  jal        func_8011EF30
    /* 470FC 80138CFC 00000000 */   nop
    /* 47100 80138D00 BA000496 */  lhu        $a0, 0xBA($s0)
    /* 47104 80138D04 40DD030C */  jal        func_800F7500
    /* 47108 80138D08 00000000 */   nop
    /* 4710C 80138D0C DD7E040C */  jal        func_8011FB74
    /* 47110 80138D10 00000000 */   nop
    /* 47114 80138D14 1400BF8F */  lw         $ra, 0x14($sp)
    /* 47118 80138D18 1000B08F */  lw         $s0, 0x10($sp)
    /* 4711C 80138D1C 0800E003 */  jr         $ra
    /* 47120 80138D20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80138CB0
