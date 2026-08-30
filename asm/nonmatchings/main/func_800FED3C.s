nonmatching func_800FED3C, 0xF8

glabel func_800FED3C
    /* D13C 800FED3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D140 800FED40 1000BFAF */  sw         $ra, 0x10($sp)
    /* D144 800FED44 53D9030C */  jal        func_800F654C
    /* D148 800FED48 01000424 */   addiu     $a0, $zero, 0x1
    /* D14C 800FED4C 93E0030C */  jal        func_800F824C
    /* D150 800FED50 D9000424 */   addiu     $a0, $zero, 0xD9
    /* D154 800FED54 EEE3030C */  jal        func_800F8FB8
    /* D158 800FED58 7A000424 */   addiu     $a0, $zero, 0x7A
    /* D15C 800FED5C 53D9030C */  jal        func_800F654C
    /* D160 800FED60 1F000424 */   addiu     $a0, $zero, 0x1F
    /* D164 800FED64 93E0030C */  jal        func_800F824C
    /* D168 800FED68 79000424 */   addiu     $a0, $zero, 0x79
    /* D16C 800FED6C 53D9030C */  jal        func_800F654C
    /* D170 800FED70 80000424 */   addiu     $a0, $zero, 0x80
    /* D174 800FED74 62E0030C */  jal        func_800F8188
    /* D178 800FED78 00210424 */   addiu     $a0, $zero, 0x2100
    /* D17C 800FED7C 53D9030C */  jal        func_800F654C
    /* D180 800FED80 81000424 */   addiu     $a0, $zero, 0x81
    /* D184 800FED84 62E0030C */  jal        func_800F8188
    /* D188 800FED88 00420424 */   addiu     $a0, $zero, 0x4200
    /* D18C 800FED8C 12D5030C */  jal        func_800F5448
    /* D190 800FED90 00000000 */   nop
  .L800FED94:
    /* D194 800FED94 DEF9030C */  jal        func_800FE778
    /* D198 800FED98 00000000 */   nop
    /* D19C 800FED9C 8CD9030C */  jal        func_800F6630
    /* D1A0 800FEDA0 79000424 */   addiu     $a0, $zero, 0x79
    /* D1A4 800FEDA4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* D1A8 800FEDA8 00000000 */  nop
    /* D1AC 800FEDAC 00004490 */  lbu        $a0, 0x0($v0)
    /* D1B0 800FEDB0 1F000324 */  addiu      $v1, $zero, 0x1F
    /* D1B4 800FEDB4 03008314 */  bne        $a0, $v1, .L800FEDC4
    /* D1B8 800FEDB8 00000000 */   nop
    /* D1BC 800FEDBC EDE2050C */  jal        func_80178BB4
    /* D1C0 800FEDC0 00000000 */   nop
  .L800FEDC4:
    /* D1C4 800FEDC4 68D7030C */  jal        func_800F5DA0
    /* D1C8 800FEDC8 79000424 */   addiu     $a0, $zero, 0x79
    /* D1CC 800FEDCC 68D7030C */  jal        func_800F5DA0
    /* D1D0 800FEDD0 79000424 */   addiu     $a0, $zero, 0x79
    /* D1D4 800FEDD4 E3D6030C */  jal        func_800F5B8C
    /* D1D8 800FEDD8 80800434 */   ori       $a0, $zero, 0x8080
    /* D1DC 800FEDDC EDFF4014 */  bnez       $v0, .L800FED94
    /* D1E0 800FEDE0 00000000 */   nop
    /* D1E4 800FEDE4 EEE3030C */  jal        func_800F8FB8
    /* D1E8 800FEDE8 D9000424 */   addiu     $a0, $zero, 0xD9
    /* D1EC 800FEDEC 8CD9030C */  jal        func_800F6630
    /* D1F0 800FEDF0 B1000424 */   addiu     $a0, $zero, 0xB1
    /* D1F4 800FEDF4 0DD9030C */  jal        func_800F6434
    /* D1F8 800FEDF8 02020424 */   addiu     $a0, $zero, 0x202
    /* D1FC 800FEDFC 05004014 */  bnez       $v0, .L800FEE14
    /* D200 800FEE00 00000000 */   nop
    /* D204 800FEE04 53D9030C */  jal        func_800F654C
    /* D208 800FEE08 0F000424 */   addiu     $a0, $zero, 0xF
    /* D20C 800FEE0C 87FB0308 */  j          .L800FEE1C
    /* D210 800FEE10 00000000 */   nop
  .L800FEE14:
    /* D214 800FEE14 8CD9030C */  jal        func_800F6630
    /* D218 800FEE18 80000424 */   addiu     $a0, $zero, 0x80
  .L800FEE1C:
    /* D21C 800FEE1C 62E0030C */  jal        func_800F8188
    /* D220 800FEE20 00210424 */   addiu     $a0, $zero, 0x2100
    /* D224 800FEE24 1000BF8F */  lw         $ra, 0x10($sp)
    /* D228 800FEE28 00000000 */  nop
    /* D22C 800FEE2C 0800E003 */  jr         $ra
    /* D230 800FEE30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FED3C
