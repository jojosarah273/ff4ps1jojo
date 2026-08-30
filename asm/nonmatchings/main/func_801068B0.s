nonmatching func_801068B0, 0x58

glabel func_801068B0
    /* 14CB0 801068B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 14CB4 801068B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 14CB8 801068B8 53D9030C */  jal        func_800F654C
    /* 14CBC 801068BC 08000424 */   addiu     $a0, $zero, 0x8
    /* 14CC0 801068C0 93E0030C */  jal        func_800F824C
    /* 14CC4 801068C4 07000424 */   addiu     $a0, $zero, 0x7
  .L801068C8:
    /* 14CC8 801068C8 DEF9030C */  jal        func_800FE778
    /* 14CCC 801068CC 00000000 */   nop
    /* 14CD0 801068D0 68D7030C */  jal        func_800F5DA0
    /* 14CD4 801068D4 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 14CD8 801068D8 68D7030C */  jal        func_800F5DA0
    /* 14CDC 801068DC BB000424 */   addiu     $a0, $zero, 0xBB
    /* 14CE0 801068E0 68D7030C */  jal        func_800F5DA0
    /* 14CE4 801068E4 07000424 */   addiu     $a0, $zero, 0x7
    /* 14CE8 801068E8 E3D6030C */  jal        func_800F5B8C
    /* 14CEC 801068EC 02020424 */   addiu     $a0, $zero, 0x202
    /* 14CF0 801068F0 F5FF4014 */  bnez       $v0, .L801068C8
    /* 14CF4 801068F4 00000000 */   nop
    /* 14CF8 801068F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 14CFC 801068FC 00000000 */  nop
    /* 14D00 80106900 0800E003 */  jr         $ra
    /* 14D04 80106904 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801068B0
