nonmatching func_8014E38C, 0x98

glabel func_8014E38C
    /* 5C78C 8014E38C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5C790 8014E390 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5C794 8014E394 C7E5030C */  jal        func_800F971C
    /* 5C798 8014E398 00000000 */   nop
    /* 5C79C 8014E39C 62E0030C */  jal        func_800F8188
    /* 5C7A0 8014E3A0 2EF40434 */   ori       $a0, $zero, 0xF42E
    /* 5C7A4 8014E3A4 62E0030C */  jal        func_800F8188
    /* 5C7A8 8014E3A8 C7EF0434 */   ori       $a0, $zero, 0xEFC7
    /* 5C7AC 8014E3AC 62E0030C */  jal        func_800F8188
    /* 5C7B0 8014E3B0 D7EF0434 */   ori       $a0, $zero, 0xEFD7
    /* 5C7B4 8014E3B4 62E0030C */  jal        func_800F8188
    /* 5C7B8 8014E3B8 E7EF0434 */   ori       $a0, $zero, 0xEFE7
    /* 5C7BC 8014E3BC 62E0030C */  jal        func_800F8188
    /* 5C7C0 8014E3C0 F7EF0434 */   ori       $a0, $zero, 0xEFF7
    /* 5C7C4 8014E3C4 62E0030C */  jal        func_800F8188
    /* 5C7C8 8014E3C8 07F00434 */   ori       $a0, $zero, 0xF007
    /* 5C7CC 8014E3CC 62E0030C */  jal        func_800F8188
    /* 5C7D0 8014E3D0 81F20434 */   ori       $a0, $zero, 0xF281
    /* 5C7D4 8014E3D4 62E0030C */  jal        func_800F8188
    /* 5C7D8 8014E3D8 83F20434 */   ori       $a0, $zero, 0xF283
    /* 5C7DC 8014E3DC 62E0030C */  jal        func_800F8188
    /* 5C7E0 8014E3E0 51F40434 */   ori       $a0, $zero, 0xF451
    /* 5C7E4 8014E3E4 59D9030C */  jal        func_800F6564
    /* 5C7E8 8014E3E8 4EF40434 */   ori       $a0, $zero, 0xF44E
    /* 5C7EC 8014E3EC 0DD9030C */  jal        func_800F6434
    /* 5C7F0 8014E3F0 02000424 */   addiu     $a0, $zero, 0x2
    /* 5C7F4 8014E3F4 03004014 */  bnez       $v0, .L8014E404
    /* 5C7F8 8014E3F8 00000000 */   nop
    /* 5C7FC 8014E3FC DDE3030C */  jal        func_800F8F74
    /* 5C800 8014E400 87EF0434 */   ori       $a0, $zero, 0xEF87
  .L8014E404:
    /* 5C804 8014E404 59D9030C */  jal        func_800F6564
    /* 5C808 8014E408 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5C80C 8014E40C 62E0030C */  jal        func_800F8188
    /* 5C810 8014E410 66F40434 */   ori       $a0, $zero, 0xF466
    /* 5C814 8014E414 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5C818 8014E418 00000000 */  nop
    /* 5C81C 8014E41C 0800E003 */  jr         $ra
    /* 5C820 8014E420 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014E38C
