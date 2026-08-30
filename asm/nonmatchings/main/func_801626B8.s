nonmatching func_801626B8, 0x140

glabel func_801626B8
    /* 70AB8 801626B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 70ABC 801626BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70AC0 801626C0 9CDC030C */  jal        func_800F7270
    /* 70AC4 801626C4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 70AC8 801626C8 DADA030C */  jal        func_800F6B68
    /* 70ACC 801626CC 06200424 */   addiu     $a0, $zero, 0x2006
    /* 70AD0 801626D0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 70AD4 801626D4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 70AD8 801626D8 00000000 */  nop
    /* 70ADC 801626DC 00006290 */  lbu        $v0, 0x0($v1)
    /* 70AE0 801626E0 06200424 */  addiu      $a0, $zero, 0x2006
    /* 70AE4 801626E4 80004234 */  ori        $v0, $v0, 0x80
    /* 70AE8 801626E8 DAE1030C */  jal        func_800F8768
    /* 70AEC 801626EC 000062A0 */   sb        $v0, 0x0($v1)
    /* 70AF0 801626F0 84DC030C */  jal        func_800F7210
    /* 70AF4 801626F4 34350424 */   addiu     $a0, $zero, 0x3534
    /* 70AF8 801626F8 EEE3030C */  jal        func_800F8FB8
    /* 70AFC 801626FC A9000424 */   addiu     $a0, $zero, 0xA9
  .L80162700:
    /* 70B00 80162700 DADA030C */  jal        func_800F6B68
    /* 70B04 80162704 03330424 */   addiu     $a0, $zero, 0x3303
    /* 70B08 80162708 5DD5030C */  jal        func_800F5574
    /* 70B0C 8016270C 09000424 */   addiu     $a0, $zero, 0x9
    /* 70B10 80162710 F5D4030C */  jal        func_800F53D4
    /* 70B14 80162714 00000000 */   nop
    /* 70B18 80162718 07004010 */  beqz       $v0, .L80162738
    /* 70B1C 8016271C 00000000 */   nop
    /* 70B20 80162720 53D9030C */  jal        func_800F654C
    /* 70B24 80162724 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 70B28 80162728 DAE1030C */  jal        func_800F8768
    /* 70B2C 8016272C 03330424 */   addiu     $a0, $zero, 0x3303
    /* 70B30 80162730 D8890508 */  j          .L80162760
    /* 70B34 80162734 00000000 */   nop
  .L80162738:
    /* 70B38 80162738 DADA030C */  jal        func_800F6B68
    /* 70B3C 8016273C 02330424 */   addiu     $a0, $zero, 0x3302
    /* 70B40 80162740 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 70B44 80162744 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 70B48 80162748 00000000 */  nop
    /* 70B4C 8016274C 00006290 */  lbu        $v0, 0x0($v1)
    /* 70B50 80162750 02330424 */  addiu      $a0, $zero, 0x3302
    /* 70B54 80162754 80004234 */  ori        $v0, $v0, 0x80
    /* 70B58 80162758 DAE1030C */  jal        func_800F8768
    /* 70B5C 8016275C 000062A0 */   sb        $v0, 0x0($v1)
  .L80162760:
    /* 70B60 80162760 D9D8030C */  jal        func_800F6364
    /* 70B64 80162764 00000000 */   nop
    /* 70B68 80162768 D9D8030C */  jal        func_800F6364
    /* 70B6C 8016276C 00000000 */   nop
    /* 70B70 80162770 D9D8030C */  jal        func_800F6364
    /* 70B74 80162774 00000000 */   nop
    /* 70B78 80162778 D9D8030C */  jal        func_800F6364
    /* 70B7C 8016277C 00000000 */   nop
    /* 70B80 80162780 AFD8030C */  jal        func_800F62BC
    /* 70B84 80162784 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 70B88 80162788 8CD9030C */  jal        func_800F6630
    /* 70B8C 8016278C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 70B90 80162790 5DD5030C */  jal        func_800F5574
    /* 70B94 80162794 05000424 */   addiu     $a0, $zero, 0x5
    /* 70B98 80162798 F5D4030C */  jal        func_800F53D4
    /* 70B9C 8016279C 00000000 */   nop
    /* 70BA0 801627A0 D7FF4010 */  beqz       $v0, .L80162700
    /* 70BA4 801627A4 00000000 */   nop
    /* 70BA8 801627A8 8CD9030C */  jal        func_800F6630
    /* 70BAC 801627AC CD000424 */   addiu     $a0, $zero, 0xCD
    /* 70BB0 801627B0 93E0030C */  jal        func_800F824C
    /* 70BB4 801627B4 21200000 */   addu      $a0, $zero, $zero
    /* 70BB8 801627B8 53D9030C */  jal        func_800F654C
    /* 70BBC 801627BC 09000424 */   addiu     $a0, $zero, 0x9
    /* 70BC0 801627C0 0E43050C */  jal        func_80150C38
    /* 70BC4 801627C4 00000000 */   nop
    /* 70BC8 801627C8 53D9030C */  jal        func_800F654C
    /* 70BCC 801627CC 09000424 */   addiu     $a0, $zero, 0x9
    /* 70BD0 801627D0 62E0030C */  jal        func_800F8188
    /* 70BD4 801627D4 C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 70BD8 801627D8 53D9030C */  jal        func_800F654C
    /* 70BDC 801627DC 10000424 */   addiu     $a0, $zero, 0x10
    /* 70BE0 801627E0 62E0030C */  jal        func_800F8188
    /* 70BE4 801627E4 C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 70BE8 801627E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 70BEC 801627EC 00000000 */  nop
    /* 70BF0 801627F0 0800E003 */  jr         $ra
    /* 70BF4 801627F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801626B8
