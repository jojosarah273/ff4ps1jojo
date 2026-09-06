nonmatching func_800FDB5C, 0x60

glabel func_800FDB5C
    /* BF5C 800FDB5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BF60 800FDB60 1000BFAF */  sw         $ra, 0x10($sp)
    /* BF64 800FDB64 59D9030C */  jal        func_800F6564
    /* BF68 800FDB68 00170424 */   addiu     $a0, $zero, 0x1700
    /* BF6C 800FDB6C 0DD9030C */  jal        func_800F6434
    /* BF70 800FDB70 02020424 */   addiu     $a0, $zero, 0x202
    /* BF74 800FDB74 05004014 */  bnez       $v0, .L800FDB8C
    /* BF78 800FDB78 00000000 */   nop
    /* BF7C 800FDB7C EFF6030C */  jal        func_800FDBBC
    /* BF80 800FDB80 00000000 */   nop
    /* BF84 800FDB84 EBF60308 */  j          .L800FDBAC
    /* BF88 800FDB88 00000000 */   nop
  .L800FDB8C:
    /* BF8C 800FDB8C 5DD5030C */  jal        func_800F5574
    /* BF90 800FDB90 01000424 */   addiu     $a0, $zero, 0x1
    /* BF94 800FDB94 F5D4030C */  jal        func_800F53D4
    /* BF98 800FDB98 00000000 */   nop
    /* BF9C 800FDB9C 03004010 */  beqz       $v0, .L800FDBAC
    /* BFA0 800FDBA0 00000000 */   nop
    /* BFA4 800FDBA4 CDF7030C */  jal        func_800FDF34
    /* BFA8 800FDBA8 00000000 */   nop
  .L800FDBAC:
    /* BFAC 800FDBAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* BFB0 800FDBB0 00000000 */  nop
    /* BFB4 800FDBB4 0800E003 */  jr         $ra
    /* BFB8 800FDBB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDB5C
