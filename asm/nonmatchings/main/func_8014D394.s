nonmatching func_8014D394, 0x80

glabel func_8014D394
    /* 5B794 8014D394 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B798 8014D398 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B79C 8014D39C 59D9030C */  jal        func_800F6564
    /* 5B7A0 8014D3A0 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5B7A4 8014D3A4 0DD9030C */  jal        func_800F6434
    /* 5B7A8 8014D3A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B7AC 8014D3AC 07004014 */  bnez       $v0, .L8014D3CC
    /* 5B7B0 8014D3B0 00000000 */   nop
    /* 5B7B4 8014D3B4 53D9030C */  jal        func_800F654C
    /* 5B7B8 8014D3B8 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B7BC 8014D3BC 62E0030C */  jal        func_800F8188
    /* 5B7C0 8014D3C0 83F20434 */   ori       $a0, $zero, 0xF283
    /* 5B7C4 8014D3C4 01350508 */  j          .L8014D404
    /* 5B7C8 8014D3C8 00000000 */   nop
  .L8014D3CC:
    /* 5B7CC 8014D3CC 59D9030C */  jal        func_800F6564
    /* 5B7D0 8014D3D0 82F20434 */   ori       $a0, $zero, 0xF282
    /* 5B7D4 8014D3D4 0DD9030C */  jal        func_800F6434
    /* 5B7D8 8014D3D8 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B7DC 8014D3DC 09004014 */  bnez       $v0, .L8014D404
    /* 5B7E0 8014D3E0 00000000 */   nop
    /* 5B7E4 8014D3E4 53D9030C */  jal        func_800F654C
    /* 5B7E8 8014D3E8 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B7EC 8014D3EC 62E0030C */  jal        func_800F8188
    /* 5B7F0 8014D3F0 82F20434 */   ori       $a0, $zero, 0xF282
    /* 5B7F4 8014D3F4 53D9030C */  jal        func_800F654C
    /* 5B7F8 8014D3F8 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B7FC 8014D3FC 7266020C */  jal        func_800999C8
    /* 5B800 8014D400 00000000 */   nop
  .L8014D404:
    /* 5B804 8014D404 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B808 8014D408 00000000 */  nop
    /* 5B80C 8014D40C 0800E003 */  jr         $ra
    /* 5B810 8014D410 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D394
