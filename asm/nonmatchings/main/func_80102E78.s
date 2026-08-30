nonmatching func_80102E78, 0x60

glabel func_80102E78
    /* 11278 80102E78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1127C 80102E7C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 11280 80102E80 53D9030C */  jal        func_800F654C
    /* 11284 80102E84 03000424 */   addiu     $a0, $zero, 0x3
    /* 11288 80102E88 62E0030C */  jal        func_800F8188
    /* 1128C 80102E8C 05170424 */   addiu     $a0, $zero, 0x1705
  .L80102E90:
    /* 11290 80102E90 1CFA030C */  jal        func_800FE870
    /* 11294 80102E94 00000000 */   nop
    /* 11298 80102E98 09FC030C */  jal        func_800FF024
    /* 1129C 80102E9C 00000000 */   nop
    /* 112A0 80102EA0 F6F9030C */  jal        func_800FE7D8
    /* 112A4 80102EA4 00000000 */   nop
    /* 112A8 80102EA8 8CD9030C */  jal        func_800F6630
    /* 112AC 80102EAC 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 112B0 80102EB0 92D0030C */  jal        func_800F4248
    /* 112B4 80102EB4 03000424 */   addiu     $a0, $zero, 0x3
    /* 112B8 80102EB8 48D0030C */  jal        func_800F4120
    /* 112BC 80102EBC 02020424 */   addiu     $a0, $zero, 0x202
    /* 112C0 80102EC0 F3FF4014 */  bnez       $v0, .L80102E90
    /* 112C4 80102EC4 00000000 */   nop
    /* 112C8 80102EC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 112CC 80102ECC 00000000 */  nop
    /* 112D0 80102ED0 0800E003 */  jr         $ra
    /* 112D4 80102ED4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80102E78
