nonmatching func_80129DFC, 0x98

glabel func_80129DFC
    /* 381FC 80129DFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38200 80129E00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38204 80129E04 77DC030C */  jal        func_800F71DC
    /* 38208 80129E08 04000424 */   addiu     $a0, $zero, 0x4
  .L80129E0C:
    /* 3820C 80129E0C AFD8030C */  jal        func_800F62BC
    /* 38210 80129E10 90000424 */   addiu     $a0, $zero, 0x90
    /* 38214 80129E14 B299040C */  jal        func_801266C8
    /* 38218 80129E18 00000000 */   nop
    /* 3821C 80129E1C 92D7030C */  jal        func_800F5E48
    /* 38220 80129E20 00000000 */   nop
    /* 38224 80129E24 19D7030C */  jal        func_800F5C64
    /* 38228 80129E28 02020424 */   addiu     $a0, $zero, 0x202
    /* 3822C 80129E2C F7FF4014 */  bnez       $v0, .L80129E0C
    /* 38230 80129E30 00000000 */   nop
    /* 38234 80129E34 9CDC030C */  jal        func_800F7270
    /* 38238 80129E38 90000424 */   addiu     $a0, $zero, 0x90
    /* 3823C 80129E3C 5BE3030C */  jal        func_800F8D6C
    /* 38240 80129E40 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 38244 80129E44 53D9030C */  jal        func_800F654C
    /* 38248 80129E48 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 3824C 80129E4C 7AE0030C */  jal        func_800F81E8
    /* 38250 80129E50 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 38254 80129E54 77DC030C */  jal        func_800F71DC
    /* 38258 80129E58 04000424 */   addiu     $a0, $zero, 0x4
  .L80129E5C:
    /* 3825C 80129E5C 68D7030C */  jal        func_800F5DA0
    /* 38260 80129E60 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 38264 80129E64 B299040C */  jal        func_801266C8
    /* 38268 80129E68 00000000 */   nop
    /* 3826C 80129E6C 92D7030C */  jal        func_800F5E48
    /* 38270 80129E70 00000000 */   nop
    /* 38274 80129E74 19D7030C */  jal        func_800F5C64
    /* 38278 80129E78 02020424 */   addiu     $a0, $zero, 0x202
    /* 3827C 80129E7C F7FF4014 */  bnez       $v0, .L80129E5C
    /* 38280 80129E80 00000000 */   nop
    /* 38284 80129E84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38288 80129E88 00000000 */  nop
    /* 3828C 80129E8C 0800E003 */  jr         $ra
    /* 38290 80129E90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129DFC
