nonmatching func_800FB09C, 0xC4

glabel func_800FB09C
    /* 949C 800FB09C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 94A0 800FB0A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 94A4 800FB0A4 18E9030C */  jal        func_800FA460
    /* 94A8 800FB0A8 00000000 */   nop
    /* 94AC 800FB0AC BAEC030C */  jal        func_800FB2E8
    /* 94B0 800FB0B0 00000000 */   nop
    /* 94B4 800FB0B4 DDE3030C */  jal        func_800F8F74
    /* 94B8 800FB0B8 01170424 */   addiu     $a0, $zero, 0x1701
    /* 94BC 800FB0BC DDE3030C */  jal        func_800F8F74
    /* 94C0 800FB0C0 FA060424 */   addiu     $a0, $zero, 0x6FA
    /* 94C4 800FB0C4 0AF8030C */  jal        func_800FE028
    /* 94C8 800FB0C8 00000000 */   nop
    /* 94CC 800FB0CC 53D9030C */  jal        func_800F654C
    /* 94D0 800FB0D0 14000424 */   addiu     $a0, $zero, 0x14
    /* 94D4 800FB0D4 77DC030C */  jal        func_800F71DC
    /* 94D8 800FB0D8 00890434 */   ori       $a0, $zero, 0x8900
    /* 94DC 800FB0DC 5EFA030C */  jal        func_800FE978
    /* 94E0 800FB0E0 00000000 */   nop
    /* 94E4 800FB0E4 53D9030C */  jal        func_800F654C
    /* 94E8 800FB0E8 14000424 */   addiu     $a0, $zero, 0x14
    /* 94EC 800FB0EC 40DD030C */  jal        func_800F7500
    /* 94F0 800FB0F0 00800434 */   ori       $a0, $zero, 0x8000
    /* 94F4 800FB0F4 7E70040C */  jal        func_8011C1F8
    /* 94F8 800FB0F8 00000000 */   nop
    /* 94FC 800FB0FC 77DC030C */  jal        func_800F71DC
    /* 9500 800FB100 21200000 */   addu      $a0, $zero, $zero
    /* 9504 800FB104 1400043C */  lui        $a0, (0x148A80 >> 16)
  .L800FB108:
    /* 9508 800FB108 1ADB030C */  jal        func_800F6C68
    /* 950C 800FB10C 808A8434 */   ori       $a0, $a0, (0x148A80 & 0xFFFF)
    /* 9510 800FB110 DAE1030C */  jal        func_800F8768
    /* 9514 800FB114 DB0E0424 */   addiu     $a0, $zero, 0xEDB
    /* 9518 800FB118 D9D8030C */  jal        func_800F6364
    /* 951C 800FB11C 00000000 */   nop
    /* 9520 800FB120 56D6030C */  jal        func_800F5958
    /* 9524 800FB124 00010424 */   addiu     $a0, $zero, 0x100
    /* 9528 800FB128 F5D4030C */  jal        func_800F53D4
    /* 952C 800FB12C 00000000 */   nop
    /* 9530 800FB130 F5FF4010 */  beqz       $v0, .L800FB108
    /* 9534 800FB134 1400043C */   lui       $a0, (0x148A80 >> 16)
    /* 9538 800FB138 B7FE030C */  jal        func_800FFADC
    /* 953C 800FB13C 00000000 */   nop
    /* 9540 800FB140 8674040C */  jal        func_8011D218
    /* 9544 800FB144 00000000 */   nop
    /* 9548 800FB148 F8D0050C */  jal        func_801743E0
    /* 954C 800FB14C 00000000 */   nop
    /* 9550 800FB150 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9554 800FB154 00000000 */  nop
    /* 9558 800FB158 0800E003 */  jr         $ra
    /* 955C 800FB15C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FB09C
