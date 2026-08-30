nonmatching func_8012C4F8, 0x8C

glabel func_8012C4F8
    /* 3A8F8 8012C4F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A8FC 8012C4FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3A900 8012C500 2AB0040C */  jal        func_8012C0A8
    /* 3A904 8012C504 00000000 */   nop
    /* 3A908 8012C508 02000324 */  addiu      $v1, $zero, 0x2
    /* 3A90C 8012C50C 19004310 */  beq        $v0, $v1, .L8012C574
    /* 3A910 8012C510 00000000 */   nop
    /* 3A914 8012C514 91E5030C */  jal        func_800F9644
    /* 3A918 8012C518 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A91C 8012C51C 40DD030C */  jal        func_800F7500
    /* 3A920 8012C520 09000424 */   addiu     $a0, $zero, 0x9
    /* 3A924 8012C524 D9D9030C */  jal        func_800F6764
    /* 3A928 8012C528 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A92C 8012C52C A8D7030C */  jal        func_800F5EA0
    /* 3A930 8012C530 00000000 */   nop
    /* 3A934 8012C534 A8D7030C */  jal        func_800F5EA0
    /* 3A938 8012C538 00000000 */   nop
    /* 3A93C 8012C53C DEE0030C */  jal        func_800F8378
    /* 3A940 8012C540 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A944 8012C544 40DD030C */  jal        func_800F7500
    /* 3A948 8012C548 0D000424 */   addiu     $a0, $zero, 0xD
    /* 3A94C 8012C54C D9D9030C */  jal        func_800F6764
    /* 3A950 8012C550 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A954 8012C554 A8D7030C */  jal        func_800F5EA0
    /* 3A958 8012C558 00000000 */   nop
    /* 3A95C 8012C55C A8D7030C */  jal        func_800F5EA0
    /* 3A960 8012C560 00000000 */   nop
    /* 3A964 8012C564 DEE0030C */  jal        func_800F8378
    /* 3A968 8012C568 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A96C 8012C56C 98E5030C */  jal        func_800F9660
    /* 3A970 8012C570 20000424 */   addiu     $a0, $zero, 0x20
  .L8012C574:
    /* 3A974 8012C574 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A978 8012C578 00000000 */  nop
    /* 3A97C 8012C57C 0800E003 */  jr         $ra
    /* 3A980 8012C580 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C4F8
