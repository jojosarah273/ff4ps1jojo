nonmatching func_8012AAC0, 0x58

glabel func_8012AAC0
    /* 38EC0 8012AAC0 1A80023C */  lui        $v0, %hi(D_801991A6)
    /* 38EC4 8012AAC4 A6914494 */  lhu        $a0, %lo(D_801991A6)($v0)
    /* 38EC8 8012AAC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38ECC 8012AACC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38ED0 8012AAD0 40DD030C */  jal        func_800F7500
    /* 38ED4 8012AAD4 00000000 */   nop
    /* 38ED8 8012AAD8 CC7B040C */  jal        func_8011EF30
    /* 38EDC 8012AADC 00000000 */   nop
    /* 38EE0 8012AAE0 77DC030C */  jal        func_800F71DC
    /* 38EE4 8012AAE4 40140424 */   addiu     $a0, $zero, 0x1440
    /* 38EE8 8012AAE8 5BE3030C */  jal        func_800F8D6C
    /* 38EEC 8012AAEC 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38EF0 8012AAF0 53D9030C */  jal        func_800F654C
    /* 38EF4 8012AAF4 30000424 */   addiu     $a0, $zero, 0x30
    /* 38EF8 8012AAF8 93E0030C */  jal        func_800F824C
    /* 38EFC 8012AAFC E1000424 */   addiu     $a0, $zero, 0xE1
    /* 38F00 8012AB00 2AAA040C */  jal        func_8012A8A8
    /* 38F04 8012AB04 00000000 */   nop
    /* 38F08 8012AB08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38F0C 8012AB0C 00000000 */  nop
    /* 38F10 8012AB10 0800E003 */  jr         $ra
    /* 38F14 8012AB14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012AAC0
