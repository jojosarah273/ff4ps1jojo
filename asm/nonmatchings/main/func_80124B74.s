nonmatching func_80124B74, 0xF0

glabel func_80124B74
    /* 32F74 80124B74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 32F78 80124B78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 32F7C 80124B7C 5BE3030C */  jal        func_800F8D6C
    /* 32F80 80124B80 73000424 */   addiu     $a0, $zero, 0x73
    /* 32F84 80124B84 93E0030C */  jal        func_800F824C
    /* 32F88 80124B88 75000424 */   addiu     $a0, $zero, 0x75
    /* 32F8C 80124B8C 53D9030C */  jal        func_800F654C
    /* 32F90 80124B90 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 32F94 80124B94 9CDC030C */  jal        func_800F7270
    /* 32F98 80124B98 41000424 */   addiu     $a0, $zero, 0x41
  .L80124B9C:
    /* 32F9C 80124B9C DAE1030C */  jal        func_800F8768
    /* 32FA0 80124BA0 63010424 */   addiu     $a0, $zero, 0x163
    /* 32FA4 80124BA4 D9D8030C */  jal        func_800F6364
    /* 32FA8 80124BA8 00000000 */   nop
    /* 32FAC 80124BAC 56D6030C */  jal        func_800F5958
    /* 32FB0 80124BB0 07000424 */   addiu     $a0, $zero, 0x7
    /* 32FB4 80124BB4 F5D4030C */  jal        func_800F53D4
    /* 32FB8 80124BB8 00000000 */   nop
    /* 32FBC 80124BBC F7FF4010 */  beqz       $v0, .L80124B9C
    /* 32FC0 80124BC0 00000000 */   nop
    /* 32FC4 80124BC4 65DD030C */  jal        func_800F7594
    /* 32FC8 80124BC8 41000424 */   addiu     $a0, $zero, 0x41
  .L80124BCC:
    /* 32FCC 80124BCC 1993040C */  jal        func_80124C64
    /* 32FD0 80124BD0 00000000 */   nop
    /* 32FD4 80124BD4 8CD9030C */  jal        func_800F6630
    /* 32FD8 80124BD8 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 32FDC 80124BDC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 32FE0 80124BE0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 32FE4 80124BE4 00000000 */  nop
    /* 32FE8 80124BE8 00006290 */  lbu        $v0, 0x0($v1)
    /* 32FEC 80124BEC 63010424 */  addiu      $a0, $zero, 0x163
    /* 32FF0 80124BF0 80004234 */  ori        $v0, $v0, 0x80
    /* 32FF4 80124BF4 58E2030C */  jal        func_800F8960
    /* 32FF8 80124BF8 000062A0 */   sb        $v0, 0x0($v1)
    /* 32FFC 80124BFC EFD8030C */  jal        func_800F63BC
    /* 33000 80124C00 00000000 */   nop
    /* 33004 80124C04 8CD9030C */  jal        func_800F6630
    /* 33008 80124C08 73000424 */   addiu     $a0, $zero, 0x73
    /* 3300C 80124C0C 0FCF030C */  jal        func_800F3C3C
    /* 33010 80124C10 74000424 */   addiu     $a0, $zero, 0x74
    /* 33014 80124C14 31DE030C */  jal        func_800F78C4
    /* 33018 80124C18 21204000 */   addu      $a0, $v0, $zero
    /* 3301C 80124C1C 0FCF030C */  jal        func_800F3C3C
    /* 33020 80124C20 75000424 */   addiu     $a0, $zero, 0x75
    /* 33024 80124C24 31DE030C */  jal        func_800F78C4
    /* 33028 80124C28 21204000 */   addu      $a0, $v0, $zero
    /* 3302C 80124C2C 46DE030C */  jal        func_800F7918
    /* 33030 80124C30 02000424 */   addiu     $a0, $zero, 0x2
    /* 33034 80124C34 07004014 */  bnez       $v0, .L80124C54
    /* 33038 80124C38 00000000 */   nop
    /* 3303C 80124C3C A4D6030C */  jal        func_800F5A90
    /* 33040 80124C40 07000424 */   addiu     $a0, $zero, 0x7
    /* 33044 80124C44 F5D4030C */  jal        func_800F53D4
    /* 33048 80124C48 00000000 */   nop
    /* 3304C 80124C4C DFFF4010 */  beqz       $v0, .L80124BCC
    /* 33050 80124C50 00000000 */   nop
  .L80124C54:
    /* 33054 80124C54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 33058 80124C58 00000000 */  nop
    /* 3305C 80124C5C 0800E003 */  jr         $ra
    /* 33060 80124C60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124B74
