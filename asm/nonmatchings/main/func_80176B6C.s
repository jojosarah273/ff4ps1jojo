nonmatching func_80176B6C, 0x90

glabel func_80176B6C
    /* 84F6C 80176B6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 84F70 80176B70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 84F74 80176B74 8CD9030C */  jal        func_800F6630
    /* 84F78 80176B78 E2000424 */   addiu     $a0, $zero, 0xE2
    /* 84F7C 80176B7C 5DD5030C */  jal        func_800F5574
    /* 84F80 80176B80 11000424 */   addiu     $a0, $zero, 0x11
    /* 84F84 80176B84 F5D4030C */  jal        func_800F53D4
    /* 84F88 80176B88 00000000 */   nop
    /* 84F8C 80176B8C 17004014 */  bnez       $v0, .L80176BEC
    /* 84F90 80176B90 00000000 */   nop
    /* 84F94 80176B94 53D9030C */  jal        func_800F654C
    /* 84F98 80176B98 0A000424 */   addiu     $a0, $zero, 0xA
    /* 84F9C 80176B9C 93E0030C */  jal        func_800F824C
    /* 84FA0 80176BA0 45000424 */   addiu     $a0, $zero, 0x45
    /* 84FA4 80176BA4 59D9030C */  jal        func_800F6564
    /* 84FA8 80176BA8 B21B0424 */   addiu     $a0, $zero, 0x1BB2
    /* 84FAC 80176BAC 33D7030C */  jal        func_800F5CCC
    /* 84FB0 80176BB0 00000000 */   nop
  .L80176BB4:
    /* 84FB4 80176BB4 80E4030C */  jal        func_800F9200
    /* 84FB8 80176BB8 00000000 */   nop
    /* 84FBC 80176BBC 1BDB050C */  jal        func_80176C6C
    /* 84FC0 80176BC0 00000000 */   nop
    /* 84FC4 80176BC4 F7E4030C */  jal        func_800F93DC
    /* 84FC8 80176BC8 00000000 */   nop
    /* 84FCC 80176BCC 7AD8030C */  jal        func_800F61E8
    /* 84FD0 80176BD0 00000000 */   nop
    /* 84FD4 80176BD4 68D7030C */  jal        func_800F5DA0
    /* 84FD8 80176BD8 45000424 */   addiu     $a0, $zero, 0x45
    /* 84FDC 80176BDC E3D6030C */  jal        func_800F5B8C
    /* 84FE0 80176BE0 02020424 */   addiu     $a0, $zero, 0x202
    /* 84FE4 80176BE4 F3FF4014 */  bnez       $v0, .L80176BB4
    /* 84FE8 80176BE8 00000000 */   nop
  .L80176BEC:
    /* 84FEC 80176BEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 84FF0 80176BF0 00000000 */  nop
    /* 84FF4 80176BF4 0800E003 */  jr         $ra
    /* 84FF8 80176BF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80176B6C
