nonmatching func_8014C4BC, 0xC0

glabel func_8014C4BC
    /* 5A8BC 8014C4BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A8C0 8014C4C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A8C4 8014C4C4 59D9030C */  jal        func_800F6564
    /* 5A8C8 8014C4C8 12F10434 */   ori       $a0, $zero, 0xF112
    /* 5A8CC 8014C4CC 92D0030C */  jal        func_800F4248
    /* 5A8D0 8014C4D0 40000424 */   addiu     $a0, $zero, 0x40
    /* 5A8D4 8014C4D4 48D0030C */  jal        func_800F4120
    /* 5A8D8 8014C4D8 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A8DC 8014C4DC 23004014 */  bnez       $v0, .L8014C56C
    /* 5A8E0 8014C4E0 00000000 */   nop
    /* 5A8E4 8014C4E4 77DC030C */  jal        func_800F71DC
    /* 5A8E8 8014C4E8 21200000 */   addu      $a0, $zero, $zero
  .L8014C4EC:
    /* 5A8EC 8014C4EC DADA030C */  jal        func_800F6B68
    /* 5A8F0 8014C4F0 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5A8F4 8014C4F4 93E0030C */  jal        func_800F824C
    /* 5A8F8 8014C4F8 21200000 */   addu      $a0, $zero, $zero
    /* 5A8FC 8014C4FC DADA030C */  jal        func_800F6B68
    /* 5A900 8014C500 71ED0434 */   ori       $a0, $zero, 0xED71
    /* 5A904 8014C504 93E0030C */  jal        func_800F824C
    /* 5A908 8014C508 01000424 */   addiu     $a0, $zero, 0x1
    /* 5A90C 8014C50C 53D9030C */  jal        func_800F654C
    /* 5A910 8014C510 01000424 */   addiu     $a0, $zero, 0x1
    /* 5A914 8014C514 4553020C */  jal        func_80094D14
    /* 5A918 8014C518 00000000 */   nop
    /* 5A91C 8014C51C 8CD9030C */  jal        func_800F6630
    /* 5A920 8014C520 21200000 */   addu      $a0, $zero, $zero
    /* 5A924 8014C524 DAE1030C */  jal        func_800F8768
    /* 5A928 8014C528 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5A92C 8014C52C 8CD9030C */  jal        func_800F6630
    /* 5A930 8014C530 01000424 */   addiu     $a0, $zero, 0x1
    /* 5A934 8014C534 DAE1030C */  jal        func_800F8768
    /* 5A938 8014C538 71ED0434 */   ori       $a0, $zero, 0xED71
    /* 5A93C 8014C53C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5A940 8014C540 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5A944 8014C544 00000000 */  nop
    /* 5A948 8014C548 00006294 */  lhu        $v0, 0x0($v1)
    /* 5A94C 8014C54C C0000424 */  addiu      $a0, $zero, 0xC0
    /* 5A950 8014C550 02004224 */  addiu      $v0, $v0, 0x2
    /* 5A954 8014C554 56D6030C */  jal        func_800F5958
    /* 5A958 8014C558 000062A4 */   sh        $v0, 0x0($v1)
    /* 5A95C 8014C55C F5D4030C */  jal        func_800F53D4
    /* 5A960 8014C560 00000000 */   nop
    /* 5A964 8014C564 E1FF4010 */  beqz       $v0, .L8014C4EC
    /* 5A968 8014C568 00000000 */   nop
  .L8014C56C:
    /* 5A96C 8014C56C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5A970 8014C570 00000000 */  nop
    /* 5A974 8014C574 0800E003 */  jr         $ra
    /* 5A978 8014C578 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C4BC
