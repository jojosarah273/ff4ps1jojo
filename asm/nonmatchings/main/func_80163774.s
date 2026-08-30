nonmatching func_80163774, 0x98

glabel func_80163774
    /* 71B74 80163774 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71B78 80163778 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71B7C 8016377C 53D9030C */  jal        func_800F654C
    /* 71B80 80163780 11000424 */   addiu     $a0, $zero, 0x11
    /* 71B84 80163784 62E0030C */  jal        func_800F8188
    /* 71B88 80163788 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 71B8C 8016378C 53D9030C */  jal        func_800F654C
    /* 71B90 80163790 10000424 */   addiu     $a0, $zero, 0x10
    /* 71B94 80163794 62E0030C */  jal        func_800F8188
    /* 71B98 80163798 C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 71B9C 8016379C 9CDC030C */  jal        func_800F7270
    /* 71BA0 801637A0 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 71BA4 801637A4 04D5030C */  jal        func_800F5410
    /* 71BA8 801637A8 00000000 */   nop
    /* 71BAC 801637AC DADA030C */  jal        func_800F6B68
    /* 71BB0 801637B0 17200424 */   addiu     $a0, $zero, 0x2017
    /* 71BB4 801637B4 02D0030C */  jal        func_800F4008
    /* 71BB8 801637B8 10000424 */   addiu     $a0, $zero, 0x10
    /* 71BBC 801637BC 5DD5030C */  jal        func_800F5574
    /* 71BC0 801637C0 63000424 */   addiu     $a0, $zero, 0x63
    /* 71BC4 801637C4 F0D4030C */  jal        func_800F53C0
    /* 71BC8 801637C8 00000000 */   nop
    /* 71BCC 801637CC 03004010 */  beqz       $v0, .L801637DC
    /* 71BD0 801637D0 00000000 */   nop
    /* 71BD4 801637D4 53D9030C */  jal        func_800F654C
    /* 71BD8 801637D8 63000424 */   addiu     $a0, $zero, 0x63
  .L801637DC:
    /* 71BDC 801637DC DAE1030C */  jal        func_800F8768
    /* 71BE0 801637E0 17200424 */   addiu     $a0, $zero, 0x2017
    /* 71BE4 801637E4 53D9030C */  jal        func_800F654C
    /* 71BE8 801637E8 12000424 */   addiu     $a0, $zero, 0x12
    /* 71BEC 801637EC 62E0030C */  jal        func_800F8188
    /* 71BF0 801637F0 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 71BF4 801637F4 A74C050C */  jal        func_8015329C
    /* 71BF8 801637F8 00000000 */   nop
    /* 71BFC 801637FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 71C00 80163800 00000000 */  nop
    /* 71C04 80163804 0800E003 */  jr         $ra
    /* 71C08 80163808 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80163774
