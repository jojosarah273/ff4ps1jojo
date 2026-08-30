nonmatching func_80129E94, 0x60

glabel func_80129E94
    /* 38294 80129E94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38298 80129E98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3829C 80129E9C 59D9030C */  jal        func_800F6564
    /* 382A0 80129EA0 061B0424 */   addiu     $a0, $zero, 0x1B06
    /* 382A4 80129EA4 7AD8030C */  jal        func_800F61E8
    /* 382A8 80129EA8 00000000 */   nop
    /* 382AC 80129EAC 62E0030C */  jal        func_800F8188
    /* 382B0 80129EB0 061B0424 */   addiu     $a0, $zero, 0x1B06
    /* 382B4 80129EB4 5DD5030C */  jal        func_800F5574
    /* 382B8 80129EB8 03000424 */   addiu     $a0, $zero, 0x3
    /* 382BC 80129EBC F0D4030C */  jal        func_800F53C0
    /* 382C0 80129EC0 00000000 */   nop
    /* 382C4 80129EC4 03004010 */  beqz       $v0, .L80129ED4
    /* 382C8 80129EC8 00000000 */   nop
    /* 382CC 80129ECC C7E5030C */  jal        func_800F971C
    /* 382D0 80129ED0 00000000 */   nop
  .L80129ED4:
    /* 382D4 80129ED4 62E0030C */  jal        func_800F8188
    /* 382D8 80129ED8 061B0424 */   addiu     $a0, $zero, 0x1B06
    /* 382DC 80129EDC 02A6040C */  jal        func_80129808
    /* 382E0 80129EE0 00000000 */   nop
    /* 382E4 80129EE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 382E8 80129EE8 00000000 */  nop
    /* 382EC 80129EEC 0800E003 */  jr         $ra
    /* 382F0 80129EF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129E94
