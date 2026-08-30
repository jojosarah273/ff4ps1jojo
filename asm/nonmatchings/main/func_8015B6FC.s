nonmatching func_8015B6FC, 0x1E8

glabel func_8015B6FC
    /* 69AFC 8015B6FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 69B00 8015B700 1000BFAF */  sw         $ra, 0x10($sp)
    /* 69B04 8015B704 EEE3030C */  jal        func_800F8FB8
    /* 69B08 8015B708 B5000424 */   addiu     $a0, $zero, 0xB5
    /* 69B0C 8015B70C CCE4030C */  jal        func_800F9330
    /* 69B10 8015B710 00000000 */   nop
    /* 69B14 8015B714 DADA030C */  jal        func_800F6B68
    /* 69B18 8015B718 03330424 */   addiu     $a0, $zero, 0x3303
    /* 69B1C 8015B71C 5DD5030C */  jal        func_800F5574
    /* 69B20 8015B720 05000424 */   addiu     $a0, $zero, 0x5
    /* 69B24 8015B724 F5D4030C */  jal        func_800F53D4
    /* 69B28 8015B728 00000000 */   nop
    /* 69B2C 8015B72C 13004014 */  bnez       $v0, .L8015B77C
    /* 69B30 8015B730 00000000 */   nop
    /* 69B34 8015B734 5DD5030C */  jal        func_800F5574
    /* 69B38 8015B738 08000424 */   addiu     $a0, $zero, 0x8
    /* 69B3C 8015B73C F5D4030C */  jal        func_800F53D4
    /* 69B40 8015B740 00000000 */   nop
    /* 69B44 8015B744 0D004014 */  bnez       $v0, .L8015B77C
    /* 69B48 8015B748 00000000 */   nop
    /* 69B4C 8015B74C 5DD5030C */  jal        func_800F5574
    /* 69B50 8015B750 0C000424 */   addiu     $a0, $zero, 0xC
    /* 69B54 8015B754 F5D4030C */  jal        func_800F53D4
    /* 69B58 8015B758 00000000 */   nop
    /* 69B5C 8015B75C 07004014 */  bnez       $v0, .L8015B77C
    /* 69B60 8015B760 00000000 */   nop
    /* 69B64 8015B764 5DD5030C */  jal        func_800F5574
    /* 69B68 8015B768 10000424 */   addiu     $a0, $zero, 0x10
    /* 69B6C 8015B76C F5D4030C */  jal        func_800F53D4
    /* 69B70 8015B770 00000000 */   nop
    /* 69B74 8015B774 09004010 */  beqz       $v0, .L8015B79C
    /* 69B78 8015B778 00000000 */   nop
  .L8015B77C:
    /* 69B7C 8015B77C 396E050C */  jal        func_8015B8E4
    /* 69B80 8015B780 00000000 */   nop
    /* 69B84 8015B784 8CD9030C */  jal        func_800F6630
    /* 69B88 8015B788 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 69B8C 8015B78C 0DD9030C */  jal        func_800F6434
    /* 69B90 8015B790 02020424 */   addiu     $a0, $zero, 0x202
    /* 69B94 8015B794 2B004014 */  bnez       $v0, .L8015B844
    /* 69B98 8015B798 00000000 */   nop
  .L8015B79C:
    /* 69B9C 8015B79C 68E5030C */  jal        func_800F95A0
    /* 69BA0 8015B7A0 00000000 */   nop
    /* 69BA4 8015B7A4 CCE4030C */  jal        func_800F9330
    /* 69BA8 8015B7A8 00000000 */   nop
    /* 69BAC 8015B7AC DADA030C */  jal        func_800F6B68
    /* 69BB0 8015B7B0 03330424 */   addiu     $a0, $zero, 0x3303
    /* 69BB4 8015B7B4 50D4030C */  jal        func_800F5140
    /* 69BB8 8015B7B8 00000000 */   nop
    /* 69BBC 8015B7BC 1300043C */  lui        $a0, (0x13FD19 >> 16)
    /* 69BC0 8015B7C0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 69BC4 8015B7C4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 69BC8 8015B7C8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 69BCC 8015B7CC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 69BD0 8015B7D0 00004394 */  lhu        $v1, 0x0($v0)
    /* 69BD4 8015B7D4 19FD8434 */  ori        $a0, $a0, (0x13FD19 & 0xFFFF)
    /* 69BD8 8015B7D8 1ADB030C */  jal        func_800F6C68
    /* 69BDC 8015B7DC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 69BE0 8015B7E0 93E0030C */  jal        func_800F824C
    /* 69BE4 8015B7E4 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 69BE8 8015B7E8 1300043C */  lui        $a0, (0x13FD1A >> 16)
    /* 69BEC 8015B7EC 1ADB030C */  jal        func_800F6C68
    /* 69BF0 8015B7F0 1AFD8434 */   ori       $a0, $a0, (0x13FD1A & 0xFFFF)
    /* 69BF4 8015B7F4 93E0030C */  jal        func_800F824C
    /* 69BF8 8015B7F8 B4000424 */   addiu     $a0, $zero, 0xB4
    /* 69BFC 8015B7FC 9CDC030C */  jal        func_800F7270
    /* 69C00 8015B800 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 69C04 8015B804 DADA030C */  jal        func_800F6B68
    /* 69C08 8015B808 03200424 */   addiu     $a0, $zero, 0x2003
    /* 69C0C 8015B80C DCD0030C */  jal        func_800F4370
    /* 69C10 8015B810 B3000424 */   addiu     $a0, $zero, 0xB3
    /* 69C14 8015B814 48D0030C */  jal        func_800F4120
    /* 69C18 8015B818 02020424 */   addiu     $a0, $zero, 0x202
    /* 69C1C 8015B81C 09004014 */  bnez       $v0, .L8015B844
    /* 69C20 8015B820 00000000 */   nop
    /* 69C24 8015B824 DADA030C */  jal        func_800F6B68
    /* 69C28 8015B828 04200424 */   addiu     $a0, $zero, 0x2004
    /* 69C2C 8015B82C DCD0030C */  jal        func_800F4370
    /* 69C30 8015B830 B4000424 */   addiu     $a0, $zero, 0xB4
    /* 69C34 8015B834 48D0030C */  jal        func_800F4120
    /* 69C38 8015B838 02000424 */   addiu     $a0, $zero, 0x2
    /* 69C3C 8015B83C 05004014 */  bnez       $v0, .L8015B854
    /* 69C40 8015B840 00000000 */   nop
  .L8015B844:
    /* 69C44 8015B844 53D9030C */  jal        func_800F654C
    /* 69C48 8015B848 80000424 */   addiu     $a0, $zero, 0x80
    /* 69C4C 8015B84C 93E0030C */  jal        func_800F824C
    /* 69C50 8015B850 B5000424 */   addiu     $a0, $zero, 0xB5
  .L8015B854:
    /* 69C54 8015B854 68E5030C */  jal        func_800F95A0
    /* 69C58 8015B858 00000000 */   nop
    /* 69C5C 8015B85C DADA030C */  jal        func_800F6B68
    /* 69C60 8015B860 02330424 */   addiu     $a0, $zero, 0x3302
    /* 69C64 8015B864 80E4030C */  jal        func_800F9200
    /* 69C68 8015B868 00000000 */   nop
    /* 69C6C 8015B86C 92D0030C */  jal        func_800F4248
    /* 69C70 8015B870 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 69C74 8015B874 0FCF030C */  jal        func_800F3C3C
    /* 69C78 8015B878 B5000424 */   addiu     $a0, $zero, 0xB5
    /* 69C7C 8015B87C 31DE030C */  jal        func_800F78C4
    /* 69C80 8015B880 21204000 */   addu      $a0, $v0, $zero
    /* 69C84 8015B884 DAE1030C */  jal        func_800F8768
    /* 69C88 8015B888 02330424 */   addiu     $a0, $zero, 0x3302
    /* 69C8C 8015B88C F7E4030C */  jal        func_800F93DC
    /* 69C90 8015B890 00000000 */   nop
    /* 69C94 8015B894 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 69C98 8015B898 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 69C9C 8015B89C 00000000 */  nop
    /* 69CA0 8015B8A0 00004494 */  lhu        $a0, 0x0($v0)
    /* 69CA4 8015B8A4 C1CE030C */  jal        func_800F3B04
    /* 69CA8 8015B8A8 02338424 */   addiu     $a0, $a0, 0x3302
    /* 69CAC 8015B8AC 35D5030C */  jal        func_800F54D4
    /* 69CB0 8015B8B0 21204000 */   addu      $a0, $v0, $zero
    /* 69CB4 8015B8B4 F5D4030C */  jal        func_800F53D4
    /* 69CB8 8015B8B8 00000000 */   nop
    /* 69CBC 8015B8BC 05004014 */  bnez       $v0, .L8015B8D4
    /* 69CC0 8015B8C0 00000000 */   nop
    /* 69CC4 8015B8C4 53D9030C */  jal        func_800F654C
    /* 69CC8 8015B8C8 01000424 */   addiu     $a0, $zero, 0x1
    /* 69CCC 8015B8CC 93E0030C */  jal        func_800F824C
    /* 69CD0 8015B8D0 AA000424 */   addiu     $a0, $zero, 0xAA
  .L8015B8D4:
    /* 69CD4 8015B8D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 69CD8 8015B8D8 00000000 */  nop
    /* 69CDC 8015B8DC 0800E003 */  jr         $ra
    /* 69CE0 8015B8E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015B6FC
