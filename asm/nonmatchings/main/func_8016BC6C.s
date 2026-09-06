nonmatching func_8016BC6C, 0xC0

glabel func_8016BC6C
    /* 7A06C 8016BC6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A070 8016BC70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A074 8016BC74 8CD9030C */  jal        func_800F6630
    /* 7A078 8016BC78 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7A07C 8016BC7C 92D0030C */  jal        func_800F4248
    /* 7A080 8016BC80 0F000424 */   addiu     $a0, $zero, 0xF
    /* 7A084 8016BC84 48D0030C */  jal        func_800F4120
    /* 7A088 8016BC88 02020424 */   addiu     $a0, $zero, 0x202
    /* 7A08C 8016BC8C 23004014 */  bnez       $v0, .L8016BD1C
    /* 7A090 8016BC90 00000000 */   nop
    /* 7A094 8016BC94 77DC030C */  jal        func_800F71DC
    /* 7A098 8016BC98 00040424 */   addiu     $a0, $zero, 0x400
    /* 7A09C 8016BC9C 5BE3030C */  jal        func_800F8D6C
    /* 7A0A0 8016BCA0 28000424 */   addiu     $a0, $zero, 0x28
    /* 7A0A4 8016BCA4 9CDC030C */  jal        func_800F7270
    /* 7A0A8 8016BCA8 57000424 */   addiu     $a0, $zero, 0x57
    /* 7A0AC 8016BCAC 40DD030C */  jal        func_800F7500
    /* 7A0B0 8016BCB0 00400424 */   addiu     $a0, $zero, 0x4000
    /* 7A0B4 8016BCB4 53D9030C */  jal        func_800F654C
    /* 7A0B8 8016BCB8 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 7A0BC 8016BCBC F3AE050C */  jal        func_8016BBCC
    /* 7A0C0 8016BCC0 00000000 */   nop
    /* 7A0C4 8016BCC4 91E5030C */  jal        func_800F9644
    /* 7A0C8 8016BCC8 20000424 */   addiu     $a0, $zero, 0x20
    /* 7A0CC 8016BCCC 96D9030C */  jal        func_800F6658
    /* 7A0D0 8016BCD0 57000424 */   addiu     $a0, $zero, 0x57
    /* 7A0D4 8016BCD4 04D5030C */  jal        func_800F5410
    /* 7A0D8 8016BCD8 00000000 */   nop
    /* 7A0DC 8016BCDC 19D0030C */  jal        func_800F4064
    /* 7A0E0 8016BCE0 00040424 */   addiu     $a0, $zero, 0x400
    /* 7A0E4 8016BCE4 99D0030C */  jal        func_800F4264
    /* 7A0E8 8016BCE8 FF7F0424 */   addiu     $a0, $zero, 0x7FFF
    /* 7A0EC 8016BCEC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7A0F0 8016BCF0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7A0F4 8016BCF4 00000000 */  nop
    /* 7A0F8 8016BCF8 00006294 */  lhu        $v0, 0x0($v1)
    /* 7A0FC 8016BCFC 57000424 */  addiu      $a0, $zero, 0x57
    /* 7A100 8016BD00 00804234 */  ori        $v0, $v0, 0x8000
    /* 7A104 8016BD04 9DE0030C */  jal        func_800F8274
    /* 7A108 8016BD08 000062A4 */   sh        $v0, 0x0($v1)
    /* 7A10C 8016BD0C C7E5030C */  jal        func_800F971C
    /* 7A110 8016BD10 00000000 */   nop
    /* 7A114 8016BD14 98E5030C */  jal        func_800F9660
    /* 7A118 8016BD18 20000424 */   addiu     $a0, $zero, 0x20
  .L8016BD1C:
    /* 7A11C 8016BD1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A120 8016BD20 00000000 */  nop
    /* 7A124 8016BD24 0800E003 */  jr         $ra
    /* 7A128 8016BD28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BC6C
