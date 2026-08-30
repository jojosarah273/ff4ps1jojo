nonmatching func_801183D8, 0x50

glabel func_801183D8
    /* 267D8 801183D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 267DC 801183DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 267E0 801183E0 9CDC030C */  jal        func_800F7270
    /* 267E4 801183E4 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 267E8 801183E8 DADA030C */  jal        func_800F6B68
    /* 267EC 801183EC D5090424 */   addiu     $a0, $zero, 0x9D5
    /* 267F0 801183F0 33D7030C */  jal        func_800F5CCC
    /* 267F4 801183F4 00000000 */   nop
    /* 267F8 801183F8 5DD5030C */  jal        func_800F5574
    /* 267FC 801183FC 0B000424 */   addiu     $a0, $zero, 0xB
    /* 26800 80118400 F5D4030C */  jal        func_800F53D4
    /* 26804 80118404 00000000 */   nop
    /* 26808 80118408 03004014 */  bnez       $v0, .L80118418
    /* 2680C 8011840C 00000000 */   nop
    /* 26810 80118410 0A61040C */  jal        func_80118428
    /* 26814 80118414 00000000 */   nop
  .L80118418:
    /* 26818 80118418 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2681C 8011841C 00000000 */  nop
    /* 26820 80118420 0800E003 */  jr         $ra
    /* 26824 80118424 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801183D8
