nonmatching func_80100B30, 0xB0

glabel func_80100B30
    /* EF30 80100B30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* EF34 80100B34 1000BFAF */  sw         $ra, 0x10($sp)
    /* EF38 80100B38 59D9030C */  jal        func_800F6564
    /* EF3C 80100B3C 02170424 */   addiu     $a0, $zero, 0x1702
    /* EF40 80100B40 93E0030C */  jal        func_800F824C
    /* EF44 80100B44 3D000424 */   addiu     $a0, $zero, 0x3D
    /* EF48 80100B48 EEE3030C */  jal        func_800F8FB8
    /* EF4C 80100B4C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* EF50 80100B50 0FCF030C */  jal        func_800F3C3C
    /* EF54 80100B54 3D000424 */   addiu     $a0, $zero, 0x3D
    /* EF58 80100B58 CAD3030C */  jal        func_800F4F28
    /* EF5C 80100B5C 21204000 */   addu      $a0, $v0, $zero
    /* EF60 80100B60 D3D3030C */  jal        func_800F4F4C
    /* EF64 80100B64 00000000 */   nop
    /* EF68 80100B68 0FCF030C */  jal        func_800F3C3C
    /* EF6C 80100B6C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* EF70 80100B70 90DE030C */  jal        func_800F7A40
    /* EF74 80100B74 21204000 */   addu      $a0, $v0, $zero
    /* EF78 80100B78 59D9030C */  jal        func_800F6564
    /* EF7C 80100B7C 01170424 */   addiu     $a0, $zero, 0x1701
    /* EF80 80100B80 0DD9030C */  jal        func_800F6434
    /* EF84 80100B84 02000424 */   addiu     $a0, $zero, 0x2
    /* EF88 80100B88 05004014 */  bnez       $v0, .L80100BA0
    /* EF8C 80100B8C 00000000 */   nop
    /* EF90 80100B90 AFD8030C */  jal        func_800F62BC
    /* EF94 80100B94 3E000424 */   addiu     $a0, $zero, 0x3E
    /* EF98 80100B98 AFD8030C */  jal        func_800F62BC
    /* EF9C 80100B9C 3E000424 */   addiu     $a0, $zero, 0x3E
  .L80100BA0:
    /* EFA0 80100BA0 9CDC030C */  jal        func_800F7270
    /* EFA4 80100BA4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* EFA8 80100BA8 1500043C */  lui        $a0, (0x158200 >> 16)
    /* EFAC 80100BAC 1ADB030C */  jal        func_800F6C68
    /* EFB0 80100BB0 00828434 */   ori       $a0, $a0, (0x158200 & 0xFFFF)
    /* EFB4 80100BB4 93E0030C */  jal        func_800F824C
    /* EFB8 80100BB8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* EFBC 80100BBC 1500043C */  lui        $a0, (0x158201 >> 16)
    /* EFC0 80100BC0 1ADB030C */  jal        func_800F6C68
    /* EFC4 80100BC4 01828434 */   ori       $a0, $a0, (0x158201 & 0xFFFF)
    /* EFC8 80100BC8 93E0030C */  jal        func_800F824C
    /* EFCC 80100BCC 3E000424 */   addiu     $a0, $zero, 0x3E
    /* EFD0 80100BD0 1000BF8F */  lw         $ra, 0x10($sp)
    /* EFD4 80100BD4 00000000 */  nop
    /* EFD8 80100BD8 0800E003 */  jr         $ra
    /* EFDC 80100BDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80100B30
