nonmatching func_801107A0, 0x78

glabel func_801107A0
    /* 1EBA0 801107A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1EBA4 801107A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1EBA8 801107A8 CB43040C */  jal        func_80110F2C
    /* 1EBAC 801107AC 00000000 */   nop
  .L801107B0:
    /* 1EBB0 801107B0 E943040C */  jal        func_80110FA4
    /* 1EBB4 801107B4 00000000 */   nop
    /* 1EBB8 801107B8 8CD9030C */  jal        func_800F6630
    /* 1EBBC 801107BC 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1EBC0 801107C0 92D0030C */  jal        func_800F4248
    /* 1EBC4 801107C4 07000424 */   addiu     $a0, $zero, 0x7
    /* 1EBC8 801107C8 48D0030C */  jal        func_800F4120
    /* 1EBCC 801107CC 02020424 */   addiu     $a0, $zero, 0x202
    /* 1EBD0 801107D0 F7FF4014 */  bnez       $v0, .L801107B0
    /* 1EBD4 801107D4 00000000 */   nop
    /* 1EBD8 801107D8 AFD8030C */  jal        func_800F62BC
    /* 1EBDC 801107DC 24000424 */   addiu     $a0, $zero, 0x24
    /* 1EBE0 801107E0 8CD9030C */  jal        func_800F6630
    /* 1EBE4 801107E4 24000424 */   addiu     $a0, $zero, 0x24
    /* 1EBE8 801107E8 5DD5030C */  jal        func_800F5574
    /* 1EBEC 801107EC 30000424 */   addiu     $a0, $zero, 0x30
    /* 1EBF0 801107F0 F5D4030C */  jal        func_800F53D4
    /* 1EBF4 801107F4 00000000 */   nop
    /* 1EBF8 801107F8 EDFF4010 */  beqz       $v0, .L801107B0
    /* 1EBFC 801107FC 00000000 */   nop
    /* 1EC00 80110800 977A040C */  jal        func_8011EA5C
    /* 1EC04 80110804 00000000 */   nop
    /* 1EC08 80110808 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1EC0C 8011080C 00000000 */  nop
    /* 1EC10 80110810 0800E003 */  jr         $ra
    /* 1EC14 80110814 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801107A0
