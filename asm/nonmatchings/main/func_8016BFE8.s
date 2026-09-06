nonmatching func_8016BFE8, 0xC0

glabel func_8016BFE8
    /* 7A3E8 8016BFE8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A3EC 8016BFEC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A3F0 8016BFF0 59D9030C */  jal        func_800F6564
    /* 7A3F4 8016BFF4 00210424 */   addiu     $a0, $zero, 0x2100
    /* 7A3F8 8016BFF8 0DD9030C */  jal        func_800F6434
    /* 7A3FC 8016BFFC 02000424 */   addiu     $a0, $zero, 0x2
    /* 7A400 8016C000 0F004014 */  bnez       $v0, .L8016C040
    /* 7A404 8016C004 00000000 */   nop
    /* 7A408 8016C008 D9AF050C */  jal        func_8016BF64
    /* 7A40C 8016C00C 00000000 */   nop
    /* 7A410 8016C010 53D9030C */  jal        func_800F654C
    /* 7A414 8016C014 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 7A418 8016C018 93E0030C */  jal        func_800F824C
    /* 7A41C 8016C01C 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7A420 8016C020 53D9030C */  jal        func_800F654C
    /* 7A424 8016C024 04000424 */   addiu     $a0, $zero, 0x4
    /* 7A428 8016C028 93E0030C */  jal        func_800F824C
    /* 7A42C 8016C02C 51000424 */   addiu     $a0, $zero, 0x51
    /* 7A430 8016C030 D8DB050C */  jal        func_80176F60
    /* 7A434 8016C034 00000000 */   nop
    /* 7A438 8016C038 26B00508 */  j          .L8016C098
    /* 7A43C 8016C03C 00000000 */   nop
  .L8016C040:
    /* 7A440 8016C040 D9AF050C */  jal        func_8016BF64
    /* 7A444 8016C044 00000000 */   nop
    /* 7A448 8016C048 53D9030C */  jal        func_800F654C
    /* 7A44C 8016C04C 52000424 */   addiu     $a0, $zero, 0x52
    /* 7A450 8016C050 93E0030C */  jal        func_800F824C
    /* 7A454 8016C054 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7A458 8016C058 53D9030C */  jal        func_800F654C
    /* 7A45C 8016C05C 0F000424 */   addiu     $a0, $zero, 0xF
    /* 7A460 8016C060 93E0030C */  jal        func_800F824C
    /* 7A464 8016C064 51000424 */   addiu     $a0, $zero, 0x51
    /* 7A468 8016C068 D8DB050C */  jal        func_80176F60
    /* 7A46C 8016C06C 00000000 */   nop
    /* 7A470 8016C070 D9AF050C */  jal        func_8016BF64
    /* 7A474 8016C074 00000000 */   nop
    /* 7A478 8016C078 EEE3030C */  jal        func_800F8FB8
    /* 7A47C 8016C07C 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7A480 8016C080 53D9030C */  jal        func_800F654C
    /* 7A484 8016C084 10000424 */   addiu     $a0, $zero, 0x10
    /* 7A488 8016C088 93E0030C */  jal        func_800F824C
    /* 7A48C 8016C08C 51000424 */   addiu     $a0, $zero, 0x51
    /* 7A490 8016C090 D8DB050C */  jal        func_80176F60
    /* 7A494 8016C094 00000000 */   nop
  .L8016C098:
    /* 7A498 8016C098 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A49C 8016C09C 00000000 */  nop
    /* 7A4A0 8016C0A0 0800E003 */  jr         $ra
    /* 7A4A4 8016C0A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BFE8
