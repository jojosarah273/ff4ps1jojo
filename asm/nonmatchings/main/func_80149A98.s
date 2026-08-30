nonmatching func_80149A98, 0x14C

glabel func_80149A98
    /* 57E98 80149A98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 57E9C 80149A9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57EA0 80149AA0 80E4030C */  jal        func_800F9200
    /* 57EA4 80149AA4 00000000 */   nop
    /* 57EA8 80149AA8 53D9030C */  jal        func_800F654C
    /* 57EAC 80149AAC 20000424 */   addiu     $a0, $zero, 0x20
    /* 57EB0 80149AB0 93E0030C */  jal        func_800F824C
    /* 57EB4 80149AB4 28000424 */   addiu     $a0, $zero, 0x28
    /* 57EB8 80149AB8 F7E4030C */  jal        func_800F93DC
    /* 57EBC 80149ABC 00000000 */   nop
    /* 57EC0 80149AC0 F023050C */  jal        func_80148FC0
    /* 57EC4 80149AC4 00000000 */   nop
    /* 57EC8 80149AC8 93E0030C */  jal        func_800F824C
    /* 57ECC 80149ACC 04000424 */   addiu     $a0, $zero, 0x4
    /* 57ED0 80149AD0 0FCF030C */  jal        func_800F3C3C
    /* 57ED4 80149AD4 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 57ED8 80149AD8 CAD3030C */  jal        func_800F4F28
    /* 57EDC 80149ADC 21204000 */   addu      $a0, $v0, $zero
    /* 57EE0 80149AE0 D3D3030C */  jal        func_800F4F4C
    /* 57EE4 80149AE4 00000000 */   nop
    /* 57EE8 80149AE8 0FCF030C */  jal        func_800F3C3C
    /* 57EEC 80149AEC 05000424 */   addiu     $a0, $zero, 0x5
    /* 57EF0 80149AF0 90DE030C */  jal        func_800F7A40
    /* 57EF4 80149AF4 21204000 */   addu      $a0, $v0, $zero
    /* 57EF8 80149AF8 8CD9030C */  jal        func_800F6630
    /* 57EFC 80149AFC 05000424 */   addiu     $a0, $zero, 0x5
    /* 57F00 80149B00 92D0030C */  jal        func_800F4248
    /* 57F04 80149B04 01000424 */   addiu     $a0, $zero, 0x1
    /* 57F08 80149B08 93E0030C */  jal        func_800F824C
    /* 57F0C 80149B0C 05000424 */   addiu     $a0, $zero, 0x5
    /* 57F10 80149B10 40DD030C */  jal        func_800F7500
    /* 57F14 80149B14 18000424 */   addiu     $a0, $zero, 0x18
    /* 57F18 80149B18 AFE3030C */  jal        func_800F8EBC
    /* 57F1C 80149B1C 21200000 */   addu      $a0, $zero, $zero
    /* 57F20 80149B20 8CD9030C */  jal        func_800F6630
    /* 57F24 80149B24 02000424 */   addiu     $a0, $zero, 0x2
    /* 57F28 80149B28 91E5030C */  jal        func_800F9644
    /* 57F2C 80149B2C 20000424 */   addiu     $a0, $zero, 0x20
    /* 57F30 80149B30 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 57F34 80149B34 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 57F38 80149B38 00000000 */  nop
    /* 57F3C 80149B3C 00006294 */  lhu        $v0, 0x0($v1)
    /* 57F40 80149B40 00000000 */  nop
    /* 57F44 80149B44 80100200 */  sll        $v0, $v0, 2
    /* 57F48 80149B48 000062A4 */  sh         $v0, 0x0($v1)
    /* 57F4C 80149B4C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 57F50 80149B50 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 57F54 80149B54 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 57F58 80149B58 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 57F5C 80149B5C 00008294 */  lhu        $v0, 0x0($a0)
    /* 57F60 80149B60 04000424 */  addiu      $a0, $zero, 0x4
    /* 57F64 80149B64 96D9030C */  jal        func_800F6658
    /* 57F68 80149B68 000062A4 */   sh        $v0, 0x0($v1)
  .L80149B6C:
    /* 57F6C 80149B6C 75E2030C */  jal        func_800F89D4
    /* 57F70 80149B70 12760424 */   addiu     $a0, $zero, 0x7612
    /* 57F74 80149B74 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 57F78 80149B78 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 57F7C 80149B7C 00000000 */  nop
    /* 57F80 80149B80 00006294 */  lhu        $v0, 0x0($v1)
    /* 57F84 80149B84 21200000 */  addu       $a0, $zero, $zero
    /* 57F88 80149B88 04004224 */  addiu      $v0, $v0, 0x4
    /* 57F8C 80149B8C 75D7030C */  jal        func_800F5DD4
    /* 57F90 80149B90 000062A4 */   sh        $v0, 0x0($v1)
    /* 57F94 80149B94 19D7030C */  jal        func_800F5C64
    /* 57F98 80149B98 02020424 */   addiu     $a0, $zero, 0x202
    /* 57F9C 80149B9C F3FF4014 */  bnez       $v0, .L80149B6C
    /* 57FA0 80149BA0 00000000 */   nop
    /* 57FA4 80149BA4 C7E5030C */  jal        func_800F971C
    /* 57FA8 80149BA8 00000000 */   nop
    /* 57FAC 80149BAC 98E5030C */  jal        func_800F9660
    /* 57FB0 80149BB0 20000424 */   addiu     $a0, $zero, 0x20
    /* 57FB4 80149BB4 8CD9030C */  jal        func_800F6630
    /* 57FB8 80149BB8 02000424 */   addiu     $a0, $zero, 0x2
    /* 57FBC 80149BBC 04D5030C */  jal        func_800F5410
    /* 57FC0 80149BC0 00000000 */   nop
    /* 57FC4 80149BC4 02D0030C */  jal        func_800F4008
    /* 57FC8 80149BC8 18000424 */   addiu     $a0, $zero, 0x18
    /* 57FCC 80149BCC 93E0030C */  jal        func_800F824C
    /* 57FD0 80149BD0 02000424 */   addiu     $a0, $zero, 0x2
    /* 57FD4 80149BD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57FD8 80149BD8 00000000 */  nop
    /* 57FDC 80149BDC 0800E003 */  jr         $ra
    /* 57FE0 80149BE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80149A98
