nonmatching func_80140AC0, 0xE0

glabel func_80140AC0
    /* 4EEC0 80140AC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EEC4 80140AC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EEC8 80140AC8 C7E5030C */  jal        func_800F971C
    /* 4EECC 80140ACC 00000000 */   nop
    /* 4EED0 80140AD0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4EED4 80140AD4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4EED8 80140AD8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4EEDC 80140ADC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4EEE0 80140AE0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4EEE4 80140AE4 00000000 */  nop
    /* 4EEE8 80140AE8 000083A4 */  sh         $v1, 0x0($a0)
  .L80140AEC:
    /* 4EEEC 80140AEC 1A80033C */  lui        $v1, %hi(D_8019ED60)
    /* 4EEF0 80140AF0 60ED638C */  lw         $v1, %lo(D_8019ED60)($v1)
    /* 4EEF4 80140AF4 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 4EEF8 80140AF8 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 4EEFC 80140AFC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4EF00 80140B00 00000000 */  nop
    /* 4EF04 80140B04 000082A0 */  sb         $v0, 0x0($a0)
    /* 4EF08 80140B08 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4EF0C 80140B0C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4EF10 80140B10 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4EF14 80140B14 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4EF18 80140B18 00006294 */  lhu        $v0, 0x0($v1)
    /* 4EF1C 80140B1C 051D050C */  jal        func_80147414
    /* 4EF20 80140B20 000082A4 */   sh        $v0, 0x0($a0)
    /* 4EF24 80140B24 DADA030C */  jal        func_800F6B68
    /* 4EF28 80140B28 01200424 */   addiu     $a0, $zero, 0x2001
    /* 4EF2C 80140B2C 92D0030C */  jal        func_800F4248
    /* 4EF30 80140B30 0F000424 */   addiu     $a0, $zero, 0xF
    /* 4EF34 80140B34 5DD5030C */  jal        func_800F5574
    /* 4EF38 80140B38 0B000424 */   addiu     $a0, $zero, 0xB
    /* 4EF3C 80140B3C F5D4030C */  jal        func_800F53D4
    /* 4EF40 80140B40 00000000 */   nop
    /* 4EF44 80140B44 12004014 */  bnez       $v0, .L80140B90
    /* 4EF48 80140B48 00000000 */   nop
    /* 4EF4C 80140B4C EFD8030C */  jal        func_800F63BC
    /* 4EF50 80140B50 00000000 */   nop
    /* 4EF54 80140B54 A4D6030C */  jal        func_800F5A90
    /* 4EF58 80140B58 05000424 */   addiu     $a0, $zero, 0x5
    /* 4EF5C 80140B5C F5D4030C */  jal        func_800F53D4
    /* 4EF60 80140B60 00000000 */   nop
    /* 4EF64 80140B64 E1FF4010 */  beqz       $v0, .L80140AEC
    /* 4EF68 80140B68 00000000 */   nop
    /* 4EF6C 80140B6C C7E5030C */  jal        func_800F971C
    /* 4EF70 80140B70 00000000 */   nop
    /* 4EF74 80140B74 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4EF78 80140B78 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4EF7C 80140B7C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4EF80 80140B80 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4EF84 80140B84 00004394 */  lhu        $v1, 0x0($v0)
    /* 4EF88 80140B88 00000000 */  nop
    /* 4EF8C 80140B8C 000083A4 */  sh         $v1, 0x0($a0)
  .L80140B90:
    /* 4EF90 80140B90 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EF94 80140B94 00000000 */  nop
    /* 4EF98 80140B98 0800E003 */  jr         $ra
    /* 4EF9C 80140B9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140AC0
