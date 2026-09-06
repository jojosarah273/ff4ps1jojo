nonmatching func_800FD37C, 0x88

glabel func_800FD37C
    /* B77C 800FD37C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* B780 800FD380 1000BFAF */  sw         $ra, 0x10($sp)
    /* B784 800FD384 59D9030C */  jal        func_800F6564
    /* B788 800FD388 01170424 */   addiu     $a0, $zero, 0x1701
    /* B78C 800FD38C 0DD9030C */  jal        func_800F6434
    /* B790 800FD390 02000424 */   addiu     $a0, $zero, 0x2
    /* B794 800FD394 03004014 */  bnez       $v0, .L800FD3A4
    /* B798 800FD398 00000000 */   nop
    /* B79C 800FD39C 53D9030C */  jal        func_800F654C
    /* B7A0 800FD3A0 01000424 */   addiu     $a0, $zero, 0x1
  .L800FD3A4:
    /* B7A4 800FD3A4 62E0030C */  jal        func_800F8188
    /* B7A8 800FD3A8 01180424 */   addiu     $a0, $zero, 0x1801
    /* B7AC 800FD3AC 01F5030C */  jal        func_800FD404
    /* B7B0 800FD3B0 00000000 */   nop
    /* B7B4 800FD3B4 53D9030C */  jal        func_800F654C
    /* B7B8 800FD3B8 E1000424 */   addiu     $a0, $zero, 0xE1
    /* B7BC 800FD3BC AD6D040C */  jal        func_8011B6B4
    /* B7C0 800FD3C0 00000000 */   nop
    /* B7C4 800FD3C4 5DD5030C */  jal        func_800F5574
    /* B7C8 800FD3C8 21200000 */   addu      $a0, $zero, $zero
    /* B7CC 800FD3CC F5D4030C */  jal        func_800F53D4
    /* B7D0 800FD3D0 00000000 */   nop
    /* B7D4 800FD3D4 07004010 */  beqz       $v0, .L800FD3F4
    /* B7D8 800FD3D8 00000000 */   nop
    /* B7DC 800FD3DC 59D9030C */  jal        func_800F6564
    /* B7E0 800FD3E0 02180424 */   addiu     $a0, $zero, 0x1802
    /* B7E4 800FD3E4 92D0030C */  jal        func_800F4248
    /* B7E8 800FD3E8 7F000424 */   addiu     $a0, $zero, 0x7F
    /* B7EC 800FD3EC 62E0030C */  jal        func_800F8188
    /* B7F0 800FD3F0 02180424 */   addiu     $a0, $zero, 0x1802
  .L800FD3F4:
    /* B7F4 800FD3F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* B7F8 800FD3F8 00000000 */  nop
    /* B7FC 800FD3FC 0800E003 */  jr         $ra
    /* B800 800FD400 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD37C
