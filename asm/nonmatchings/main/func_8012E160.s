nonmatching func_8012E160, 0x60

glabel func_8012E160
    /* 3C560 8012E160 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3C564 8012E164 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3C568 8012E168 53D9030C */  jal        func_800F654C
    /* 3C56C 8012E16C 01000424 */   addiu     $a0, $zero, 0x1
    /* 3C570 8012E170 C1CE030C */  jal        func_800F3B04
    /* 3C574 8012E174 A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 3C578 8012E178 B3D7030C */  jal        func_800F5ECC
    /* 3C57C 8012E17C 21204000 */   addu      $a0, $v0, $zero
    /* 3C580 8012E180 62E0030C */  jal        func_800F8188
    /* 3C584 8012E184 A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 3C588 8012E188 AFD8030C */  jal        func_800F62BC
    /* 3C58C 8012E18C 84000424 */   addiu     $a0, $zero, 0x84
    /* 3C590 8012E190 A78A040C */  jal        func_80122A9C
    /* 3C594 8012E194 00000000 */   nop
    /* 3C598 8012E198 4E89040C */  jal        func_80122538
    /* 3C59C 8012E19C 00000000 */   nop
    /* 3C5A0 8012E1A0 4A99040C */  jal        func_80126528
    /* 3C5A4 8012E1A4 00000000 */   nop
    /* 3C5A8 8012E1A8 C37B040C */  jal        func_8011EF0C
    /* 3C5AC 8012E1AC 00000000 */   nop
    /* 3C5B0 8012E1B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3C5B4 8012E1B4 00000000 */  nop
    /* 3C5B8 8012E1B8 0800E003 */  jr         $ra
    /* 3C5BC 8012E1BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012E160
