nonmatching func_800FC110, 0xBC

glabel func_800FC110
    /* A510 800FC110 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A514 800FC114 1000BFAF */  sw         $ra, 0x10($sp)
    /* A518 800FC118 53D9030C */  jal        func_800F654C
    /* A51C 800FC11C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* A520 800FC120 01F6030C */  jal        func_800FD804
    /* A524 800FC124 00000000 */   nop
    /* A528 800FC128 53D9030C */  jal        func_800F654C
    /* A52C 800FC12C 01000424 */   addiu     $a0, $zero, 0x1
    /* A530 800FC130 62E0030C */  jal        func_800F8188
    /* A534 800FC134 2C210424 */   addiu     $a0, $zero, 0x212C
    /* A538 800FC138 EEE3030C */  jal        func_800F8FB8
    /* A53C 800FC13C 79000424 */   addiu     $a0, $zero, 0x79
  .L800FC140:
    /* A540 800FC140 ECF9030C */  jal        func_800FE7B0
    /* A544 800FC144 00000000 */   nop
    /* A548 800FC148 DDE3030C */  jal        func_800F8F74
    /* A54C 800FC14C 0C420424 */   addiu     $a0, $zero, 0x420C
    /* A550 800FC150 8CD9030C */  jal        func_800F6630
    /* A554 800FC154 79000424 */   addiu     $a0, $zero, 0x79
    /* A558 800FC158 A4E5030C */  jal        func_800F9690
    /* A55C 800FC15C 00000000 */   nop
    /* A560 800FC160 1400043C */  lui        $a0, (0x14FB5E >> 16)
    /* A564 800FC164 1ADB030C */  jal        func_800F6C68
    /* A568 800FC168 5EFB8434 */   ori       $a0, $a0, (0x14FB5E & 0xFFFF)
    /* A56C 800FC16C 93E0030C */  jal        func_800F824C
    /* A570 800FC170 AD000424 */   addiu     $a0, $zero, 0xAD
    /* A574 800FC174 75F9030C */  jal        func_800FE5D4
    /* A578 800FC178 00000000 */   nop
    /* A57C 800FC17C B9F9030C */  jal        func_800FE6E4
    /* A580 800FC180 00000000 */   nop
    /* A584 800FC184 AFD8030C */  jal        func_800F62BC
    /* A588 800FC188 79000424 */   addiu     $a0, $zero, 0x79
    /* A58C 800FC18C 8CD9030C */  jal        func_800F6630
    /* A590 800FC190 79000424 */   addiu     $a0, $zero, 0x79
    /* A594 800FC194 5DD5030C */  jal        func_800F5574
    /* A598 800FC198 28000424 */   addiu     $a0, $zero, 0x28
    /* A59C 800FC19C F5D4030C */  jal        func_800F53D4
    /* A5A0 800FC1A0 00000000 */   nop
    /* A5A4 800FC1A4 E6FF4010 */  beqz       $v0, .L800FC140
    /* A5A8 800FC1A8 00000000 */   nop
    /* A5AC 800FC1AC 1A80013C */  lui        $at, %hi(D_8019EE28)
    /* A5B0 800FC1B0 28EE20AC */  sw         $zero, %lo(D_8019EE28)($at)
    /* A5B4 800FC1B4 ABF0030C */  jal        func_800FC2AC
    /* A5B8 800FC1B8 00000000 */   nop
    /* A5BC 800FC1BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* A5C0 800FC1C0 00000000 */  nop
    /* A5C4 800FC1C4 0800E003 */  jr         $ra
    /* A5C8 800FC1C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC110
