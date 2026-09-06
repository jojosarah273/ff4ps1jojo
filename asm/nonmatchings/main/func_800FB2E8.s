nonmatching func_800FB2E8, 0xB8

glabel func_800FB2E8
    /* 96E8 800FB2E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 96EC 800FB2EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 96F0 800FB2F0 E8EC030C */  jal        func_800FB3A0
    /* 96F4 800FB2F4 00000000 */   nop
    /* 96F8 800FB2F8 EEE3030C */  jal        func_800F8FB8
    /* 96FC 800FB2FC D1000424 */   addiu     $a0, $zero, 0xD1
    /* 9700 800FB300 8CD9030C */  jal        func_800F6630
    /* 9704 800FB304 85000424 */   addiu     $a0, $zero, 0x85
    /* 9708 800FB308 0DD9030C */  jal        func_800F6434
    /* 970C 800FB30C 02020424 */   addiu     $a0, $zero, 0x202
    /* 9710 800FB310 05004014 */  bnez       $v0, .L800FB328
    /* 9714 800FB314 00000000 */   nop
    /* 9718 800FB318 53D9030C */  jal        func_800F654C
    /* 971C 800FB31C 02000424 */   addiu     $a0, $zero, 0x2
    /* 9720 800FB320 62E0030C */  jal        func_800F8188
    /* 9724 800FB324 05170424 */   addiu     $a0, $zero, 0x1705
  .L800FB328:
    /* 9728 800FB328 EEE3030C */  jal        func_800F8FB8
    /* 972C 800FB32C 85000424 */   addiu     $a0, $zero, 0x85
    /* 9730 800FB330 53D9030C */  jal        func_800F654C
    /* 9734 800FB334 07000424 */   addiu     $a0, $zero, 0x7
    /* 9738 800FB338 62E0030C */  jal        func_800F8188
    /* 973C 800FB33C 05210424 */   addiu     $a0, $zero, 0x2105
    /* 9740 800FB340 53D9030C */  jal        func_800F654C
    /* 9744 800FB344 11000424 */   addiu     $a0, $zero, 0x11
    /* 9748 800FB348 62E0030C */  jal        func_800F8188
    /* 974C 800FB34C 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 9750 800FB350 DDE3030C */  jal        func_800F8F74
    /* 9754 800FB354 30210424 */   addiu     $a0, $zero, 0x2130
    /* 9758 800FB358 DDE3030C */  jal        func_800F8F74
    /* 975C 800FB35C 31210424 */   addiu     $a0, $zero, 0x2131
    /* 9760 800FB360 8CD9030C */  jal        func_800F6630
    /* 9764 800FB364 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 9768 800FB368 0DD9030C */  jal        func_800F6434
    /* 976C 800FB36C 02020424 */   addiu     $a0, $zero, 0x202
    /* 9770 800FB370 03004014 */  bnez       $v0, .L800FB380
    /* 9774 800FB374 00000000 */   nop
    /* 9778 800FB378 C6F5030C */  jal        func_800FD718
    /* 977C 800FB37C 00000000 */   nop
  .L800FB380:
    /* 9780 800FB380 79C2050C */  jal        func_801709E4
    /* 9784 800FB384 00000000 */   nop
    /* 9788 800FB388 E9D5050C */  jal        func_801757A4
    /* 978C 800FB38C 00000000 */   nop
    /* 9790 800FB390 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9794 800FB394 00000000 */  nop
    /* 9798 800FB398 0800E003 */  jr         $ra
    /* 979C 800FB39C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FB2E8
