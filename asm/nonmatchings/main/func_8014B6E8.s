nonmatching func_8014B6E8, 0x11C

glabel func_8014B6E8
    /* 59AE8 8014B6E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59AEC 8014B6EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59AF0 8014B6F0 AF10050C */  jal        func_801442BC
    /* 59AF4 8014B6F4 00000000 */   nop
    /* 59AF8 8014B6F8 632E050C */  jal        func_8014B98C
    /* 59AFC 8014B6FC 00000000 */   nop
    /* 59B00 8014B700 2B23050C */  jal        func_80148CAC
    /* 59B04 8014B704 00000000 */   nop
    /* 59B08 8014B708 FD54020C */  jal        func_800953F4
    /* 59B0C 8014B70C 00000000 */   nop
    /* 59B10 8014B710 59D9030C */  jal        func_800F6564
    /* 59B14 8014B714 C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 59B18 8014B718 92D0030C */  jal        func_800F4248
    /* 59B1C 8014B71C 80000424 */   addiu     $a0, $zero, 0x80
    /* 59B20 8014B720 93E0030C */  jal        func_800F824C
    /* 59B24 8014B724 21200000 */   addu      $a0, $zero, $zero
    /* 59B28 8014B728 EEE3030C */  jal        func_800F8FB8
    /* 59B2C 8014B72C 01000424 */   addiu     $a0, $zero, 0x1
    /* 59B30 8014B730 40DD030C */  jal        func_800F7500
    /* 59B34 8014B734 21200000 */   addu      $a0, $zero, $zero
  .L8014B738:
    /* 59B38 8014B738 5CDB030C */  jal        func_800F6D70
    /* 59B3C 8014B73C C5290424 */   addiu     $a0, $zero, 0x29C5
    /* 59B40 8014B740 5DD5030C */  jal        func_800F5574
    /* 59B44 8014B744 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 59B48 8014B748 F5D4030C */  jal        func_800F53D4
    /* 59B4C 8014B74C 00000000 */   nop
    /* 59B50 8014B750 16004014 */  bnez       $v0, .L8014B7AC
    /* 59B54 8014B754 1600043C */   lui       $a0, (0x16FC7E >> 16)
    /* 59B58 8014B758 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 59B5C 8014B75C 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 59B60 8014B760 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 59B64 8014B764 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 59B68 8014B768 00004390 */  lbu        $v1, 0x0($v0)
    /* 59B6C 8014B76C 00000000 */  nop
    /* 59B70 8014B770 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 59B74 8014B774 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 59B78 8014B778 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 59B7C 8014B77C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 59B80 8014B780 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 59B84 8014B784 00004394 */  lhu        $v1, 0x0($v0)
    /* 59B88 8014B788 7EFC8434 */  ori        $a0, $a0, (0x16FC7E & 0xFFFF)
    /* 59B8C 8014B78C 1ADB030C */  jal        func_800F6C68
    /* 59B90 8014B790 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 59B94 8014B794 0FCF030C */  jal        func_800F3C3C
    /* 59B98 8014B798 01000424 */   addiu     $a0, $zero, 0x1
    /* 59B9C 8014B79C 31DE030C */  jal        func_800F78C4
    /* 59BA0 8014B7A0 21204000 */   addu      $a0, $v0, $zero
    /* 59BA4 8014B7A4 93E0030C */  jal        func_800F824C
    /* 59BA8 8014B7A8 01000424 */   addiu     $a0, $zero, 0x1
  .L8014B7AC:
    /* 59BAC 8014B7AC EFD8030C */  jal        func_800F63BC
    /* 59BB0 8014B7B0 00000000 */   nop
    /* 59BB4 8014B7B4 A4D6030C */  jal        func_800F5A90
    /* 59BB8 8014B7B8 05000424 */   addiu     $a0, $zero, 0x5
    /* 59BBC 8014B7BC F5D4030C */  jal        func_800F53D4
    /* 59BC0 8014B7C0 00000000 */   nop
    /* 59BC4 8014B7C4 DCFF4010 */  beqz       $v0, .L8014B738
    /* 59BC8 8014B7C8 00000000 */   nop
    /* 59BCC 8014B7CC EEE3030C */  jal        func_800F8FB8
    /* 59BD0 8014B7D0 02000424 */   addiu     $a0, $zero, 0x2
    /* 59BD4 8014B7D4 53D9030C */  jal        func_800F654C
    /* 59BD8 8014B7D8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 59BDC 8014B7DC 8B36050C */  jal        func_8014DA2C
    /* 59BE0 8014B7E0 00000000 */   nop
    /* 59BE4 8014B7E4 53D9030C */  jal        func_800F654C
    /* 59BE8 8014B7E8 21200000 */   addu      $a0, $zero, $zero
    /* 59BEC 8014B7EC 5A35050C */  jal        func_8014D568
    /* 59BF0 8014B7F0 00000000 */   nop
    /* 59BF4 8014B7F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59BF8 8014B7F8 00000000 */  nop
    /* 59BFC 8014B7FC 0800E003 */  jr         $ra
    /* 59C00 8014B800 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B6E8
