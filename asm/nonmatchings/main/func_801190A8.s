nonmatching func_801190A8, 0x80

glabel func_801190A8
    /* 274A8 801190A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 274AC 801190AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 274B0 801190B0 655D040C */  jal        func_80117594
    /* 274B4 801190B4 00000000 */   nop
    /* 274B8 801190B8 93E0030C */  jal        func_800F824C
    /* 274BC 801190BC 06000424 */   addiu     $a0, $zero, 0x6
    /* 274C0 801190C0 77DC030C */  jal        func_800F71DC
    /* 274C4 801190C4 21200000 */   addu      $a0, $zero, $zero
  .L801190C8:
    /* 274C8 801190C8 DADA030C */  jal        func_800F6B68
    /* 274CC 801190CC 03100424 */   addiu     $a0, $zero, 0x1003
    /* 274D0 801190D0 DCD0030C */  jal        func_800F4370
    /* 274D4 801190D4 06000424 */   addiu     $a0, $zero, 0x6
    /* 274D8 801190D8 DAE1030C */  jal        func_800F8768
    /* 274DC 801190DC 03100424 */   addiu     $a0, $zero, 0x1003
    /* 274E0 801190E0 7E5F040C */  jal        func_80117DF8
    /* 274E4 801190E4 00000000 */   nop
    /* 274E8 801190E8 56D6030C */  jal        func_800F5958
    /* 274EC 801190EC 40010424 */   addiu     $a0, $zero, 0x140
    /* 274F0 801190F0 F5D4030C */  jal        func_800F53D4
    /* 274F4 801190F4 00000000 */   nop
    /* 274F8 801190F8 F3FF4010 */  beqz       $v0, .L801190C8
    /* 274FC 801190FC 00000000 */   nop
    /* 27500 80119100 53D9030C */  jal        func_800F654C
    /* 27504 80119104 01000424 */   addiu     $a0, $zero, 0x1
    /* 27508 80119108 93E0030C */  jal        func_800F824C
    /* 2750C 8011910C CC000424 */   addiu     $a0, $zero, 0xCC
    /* 27510 80119110 DEF9030C */  jal        func_800FE778
    /* 27514 80119114 00000000 */   nop
    /* 27518 80119118 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2751C 8011911C 00000000 */  nop
    /* 27520 80119120 0800E003 */  jr         $ra
    /* 27524 80119124 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801190A8
