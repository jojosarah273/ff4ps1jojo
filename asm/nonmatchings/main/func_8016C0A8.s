nonmatching func_8016C0A8, 0x80

glabel func_8016C0A8
    /* 7A4A8 8016C0A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A4AC 8016C0AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A4B0 8016C0B0 8CD9030C */  jal        func_800F6630
    /* 7A4B4 8016C0B4 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7A4B8 8016C0B8 92D0030C */  jal        func_800F4248
    /* 7A4BC 8016C0BC 07000424 */   addiu     $a0, $zero, 0x7
    /* 7A4C0 8016C0C0 48D0030C */  jal        func_800F4120
    /* 7A4C4 8016C0C4 02000424 */   addiu     $a0, $zero, 0x2
    /* 7A4C8 8016C0C8 13004014 */  bnez       $v0, .L8016C118
    /* 7A4CC 8016C0CC 00000000 */   nop
    /* 7A4D0 8016C0D0 9CDC030C */  jal        func_800F7270
    /* 7A4D4 8016C0D4 70000424 */   addiu     $a0, $zero, 0x70
    /* 7A4D8 8016C0D8 5BE3030C */  jal        func_800F8D6C
    /* 7A4DC 8016C0DC 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 7A4E0 8016C0E0 9CDC030C */  jal        func_800F7270
    /* 7A4E4 8016C0E4 72000424 */   addiu     $a0, $zero, 0x72
    /* 7A4E8 8016C0E8 5BE3030C */  jal        func_800F8D6C
    /* 7A4EC 8016C0EC 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 7A4F0 8016C0F0 53D9030C */  jal        func_800F654C
    /* 7A4F4 8016C0F4 30000424 */   addiu     $a0, $zero, 0x30
    /* 7A4F8 8016C0F8 93E0030C */  jal        func_800F824C
    /* 7A4FC 8016C0FC 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7A500 8016C100 53D9030C */  jal        func_800F654C
    /* 7A504 8016C104 18000424 */   addiu     $a0, $zero, 0x18
    /* 7A508 8016C108 93E0030C */  jal        func_800F824C
    /* 7A50C 8016C10C 51000424 */   addiu     $a0, $zero, 0x51
    /* 7A510 8016C110 D8DB050C */  jal        func_80176F60
    /* 7A514 8016C114 00000000 */   nop
  .L8016C118:
    /* 7A518 8016C118 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A51C 8016C11C 00000000 */  nop
    /* 7A520 8016C120 0800E003 */  jr         $ra
    /* 7A524 8016C124 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016C0A8
