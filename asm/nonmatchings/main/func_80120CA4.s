nonmatching func_80120CA4, 0x110

glabel func_80120CA4
    /* 2F0A4 80120CA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F0A8 80120CA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F0AC 80120CAC 53D9030C */  jal        func_800F654C
    /* 2F0B0 80120CB0 19000424 */   addiu     $a0, $zero, 0x19
    /* 2F0B4 80120CB4 93E0030C */  jal        func_800F824C
    /* 2F0B8 80120CB8 45000424 */   addiu     $a0, $zero, 0x45
    /* 2F0BC 80120CBC 91E5030C */  jal        func_800F9644
    /* 2F0C0 80120CC0 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F0C4 80120CC4 96D9030C */  jal        func_800F6658
    /* 2F0C8 80120CC8 35000424 */   addiu     $a0, $zero, 0x35
    /* 2F0CC 80120CCC 04D5030C */  jal        func_800F5410
    /* 2F0D0 80120CD0 00000000 */   nop
    /* 2F0D4 80120CD4 19D0030C */  jal        func_800F4064
    /* 2F0D8 80120CD8 00060424 */   addiu     $a0, $zero, 0x600
    /* 2F0DC 80120CDC 9DE0030C */  jal        func_800F8274
    /* 2F0E0 80120CE0 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2F0E4 80120CE4 96D9030C */  jal        func_800F6658
    /* 2F0E8 80120CE8 29000424 */   addiu     $a0, $zero, 0x29
    /* 2F0EC 80120CEC 04D5030C */  jal        func_800F5410
    /* 2F0F0 80120CF0 00000000 */   nop
    /* 2F0F4 80120CF4 19D0030C */  jal        func_800F4064
    /* 2F0F8 80120CF8 000C0424 */   addiu     $a0, $zero, 0xC00
    /* 2F0FC 80120CFC 9DE0030C */  jal        func_800F8274
    /* 2F100 80120D00 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2F104 80120D04 98E5030C */  jal        func_800F9660
    /* 2F108 80120D08 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F10C 80120D0C 53D9030C */  jal        func_800F654C
    /* 2F110 80120D10 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 2F114 80120D14 93E0030C */  jal        func_800F824C
    /* 2F118 80120D18 21000424 */   addiu     $a0, $zero, 0x21
    /* 2F11C 80120D1C 77DC030C */  jal        func_800F71DC
    /* 2F120 80120D20 80000424 */   addiu     $a0, $zero, 0x80
    /* 2F124 80120D24 5BE3030C */  jal        func_800F8D6C
    /* 2F128 80120D28 22000424 */   addiu     $a0, $zero, 0x22
  .L80120D2C:
    /* 2F12C 80120D2C C87C040C */  jal        func_8011F320
    /* 2F130 80120D30 00000000 */   nop
    /* 2F134 80120D34 8D7B040C */  jal        func_8011EE34
    /* 2F138 80120D38 00000000 */   nop
    /* 2F13C 80120D3C 91E5030C */  jal        func_800F9644
    /* 2F140 80120D40 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F144 80120D44 96D9030C */  jal        func_800F6658
    /* 2F148 80120D48 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2F14C 80120D4C 20D5030C */  jal        func_800F5480
    /* 2F150 80120D50 00000000 */   nop
    /* 2F154 80120D54 34E0030C */  jal        func_800F80D0
    /* 2F158 80120D58 40000424 */   addiu     $a0, $zero, 0x40
    /* 2F15C 80120D5C 9DE0030C */  jal        func_800F8274
    /* 2F160 80120D60 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2F164 80120D64 96D9030C */  jal        func_800F6658
    /* 2F168 80120D68 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2F16C 80120D6C 20D5030C */  jal        func_800F5480
    /* 2F170 80120D70 00000000 */   nop
    /* 2F174 80120D74 34E0030C */  jal        func_800F80D0
    /* 2F178 80120D78 80000424 */   addiu     $a0, $zero, 0x80
    /* 2F17C 80120D7C 9DE0030C */  jal        func_800F8274
    /* 2F180 80120D80 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2F184 80120D84 98E5030C */  jal        func_800F9660
    /* 2F188 80120D88 20000424 */   addiu     $a0, $zero, 0x20
    /* 2F18C 80120D8C 68D7030C */  jal        func_800F5DA0
    /* 2F190 80120D90 45000424 */   addiu     $a0, $zero, 0x45
    /* 2F194 80120D94 E3D6030C */  jal        func_800F5B8C
    /* 2F198 80120D98 02020424 */   addiu     $a0, $zero, 0x202
    /* 2F19C 80120D9C E3FF4014 */  bnez       $v0, .L80120D2C
    /* 2F1A0 80120DA0 00000000 */   nop
    /* 2F1A4 80120DA4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F1A8 80120DA8 00000000 */  nop
    /* 2F1AC 80120DAC 0800E003 */  jr         $ra
    /* 2F1B0 80120DB0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120CA4
