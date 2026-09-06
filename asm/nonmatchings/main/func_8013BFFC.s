nonmatching func_8013BFFC, 0x98

glabel func_8013BFFC
    /* 4A3FC 8013BFFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A400 8013C000 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4A404 8013C004 59D9030C */  jal        func_800F6564
    /* 4A408 8013C008 831A0424 */   addiu     $a0, $zero, 0x1A83
    /* 4A40C 8013C00C DDE3030C */  jal        func_800F8F74
    /* 4A410 8013C010 831A0424 */   addiu     $a0, $zero, 0x1A83
    /* 4A414 8013C014 0DD9030C */  jal        func_800F6434
    /* 4A418 8013C018 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A41C 8013C01C 15004014 */  bnez       $v0, .L8013C074
    /* 4A420 8013C020 00000000 */   nop
  .L8013C024:
    /* 4A424 8013C024 BFF0040C */  jal        func_8013C2FC
    /* 4A428 8013C028 00000000 */   nop
    /* 4A42C 8013C02C 8CD9030C */  jal        func_800F6630
    /* 4A430 8013C030 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A434 8013C034 0DD9030C */  jal        func_800F6434
    /* 4A438 8013C038 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A43C 8013C03C 09004014 */  bnez       $v0, .L8013C064
    /* 4A440 8013C040 00000000 */   nop
    /* 4A444 8013C044 9CF2040C */  jal        func_8013CA70
    /* 4A448 8013C048 00000000 */   nop
    /* 4A44C 8013C04C F0D4030C */  jal        func_800F53C0
    /* 4A450 8013C050 00000000 */   nop
    /* 4A454 8013C054 F3FF4014 */  bnez       $v0, .L8013C024
    /* 4A458 8013C058 00000000 */   nop
    /* 4A45C 8013C05C 21F00408 */  j          .L8013C084
    /* 4A460 8013C060 00000000 */   nop
  .L8013C064:
    /* 4A464 8013C064 41EF040C */  jal        func_8013BD04
    /* 4A468 8013C068 00000000 */   nop
    /* 4A46C 8013C06C 21F00408 */  j          .L8013C084
    /* 4A470 8013C070 00000000 */   nop
  .L8013C074:
    /* 4A474 8013C074 43F1040C */  jal        func_8013C50C
    /* 4A478 8013C078 00000000 */   nop
    /* 4A47C 8013C07C 09F00408 */  j          .L8013C024
    /* 4A480 8013C080 00000000 */   nop
  .L8013C084:
    /* 4A484 8013C084 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A488 8013C088 00000000 */  nop
    /* 4A48C 8013C08C 0800E003 */  jr         $ra
    /* 4A490 8013C090 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013BFFC
