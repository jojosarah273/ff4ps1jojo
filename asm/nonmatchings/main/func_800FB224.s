nonmatching func_800FB224, 0xC4

glabel func_800FB224
    /* 9624 800FB224 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9628 800FB228 1000BFAF */  sw         $ra, 0x10($sp)
    /* 962C 800FB22C 18E9030C */  jal        func_800FA460
    /* 9630 800FB230 00000000 */   nop
    /* 9634 800FB234 BAEC030C */  jal        func_800FB2E8
    /* 9638 800FB238 00000000 */   nop
    /* 963C 800FB23C 53D9030C */  jal        func_800F654C
    /* 9640 800FB240 02000424 */   addiu     $a0, $zero, 0x2
    /* 9644 800FB244 62E0030C */  jal        func_800F8188
    /* 9648 800FB248 01170424 */   addiu     $a0, $zero, 0x1701
    /* 964C 800FB24C 53D9030C */  jal        func_800F654C
    /* 9650 800FB250 02000424 */   addiu     $a0, $zero, 0x2
    /* 9654 800FB254 62E0030C */  jal        func_800F8188
    /* 9658 800FB258 FA060424 */   addiu     $a0, $zero, 0x6FA
    /* 965C 800FB25C 53D9030C */  jal        func_800F654C
    /* 9660 800FB260 14000424 */   addiu     $a0, $zero, 0x14
    /* 9664 800FB264 77DC030C */  jal        func_800F71DC
    /* 9668 800FB268 008A0434 */   ori       $a0, $zero, 0x8A00
    /* 966C 800FB26C 5EFA030C */  jal        func_800FE978
    /* 9670 800FB270 00000000 */   nop
    /* 9674 800FB274 53D9030C */  jal        func_800F654C
    /* 9678 800FB278 14000424 */   addiu     $a0, $zero, 0x14
    /* 967C 800FB27C 40DD030C */  jal        func_800F7500
    /* 9680 800FB280 00840434 */   ori       $a0, $zero, 0x8400
    /* 9684 800FB284 7E70040C */  jal        func_8011C1F8
    /* 9688 800FB288 00000000 */   nop
    /* 968C 800FB28C 77DC030C */  jal        func_800F71DC
    /* 9690 800FB290 21200000 */   addu      $a0, $zero, $zero
    /* 9694 800FB294 1400043C */  lui        $a0, (0x148C80 >> 16)
  .L800FB298:
    /* 9698 800FB298 1ADB030C */  jal        func_800F6C68
    /* 969C 800FB29C 808C8434 */   ori       $a0, $a0, (0x148C80 & 0xFFFF)
    /* 96A0 800FB2A0 DAE1030C */  jal        func_800F8768
    /* 96A4 800FB2A4 DB0E0424 */   addiu     $a0, $zero, 0xEDB
    /* 96A8 800FB2A8 D9D8030C */  jal        func_800F6364
    /* 96AC 800FB2AC 00000000 */   nop
    /* 96B0 800FB2B0 56D6030C */  jal        func_800F5958
    /* 96B4 800FB2B4 00010424 */   addiu     $a0, $zero, 0x100
    /* 96B8 800FB2B8 F5D4030C */  jal        func_800F53D4
    /* 96BC 800FB2BC 00000000 */   nop
    /* 96C0 800FB2C0 F5FF4010 */  beqz       $v0, .L800FB298
    /* 96C4 800FB2C4 1400043C */   lui       $a0, (0x148C80 >> 16)
    /* 96C8 800FB2C8 B7FE030C */  jal        func_800FFADC
    /* 96CC 800FB2CC 00000000 */   nop
    /* 96D0 800FB2D0 8674040C */  jal        func_8011D218
    /* 96D4 800FB2D4 00000000 */   nop
    /* 96D8 800FB2D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 96DC 800FB2DC 00000000 */  nop
    /* 96E0 800FB2E0 0800E003 */  jr         $ra
    /* 96E4 800FB2E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FB224
