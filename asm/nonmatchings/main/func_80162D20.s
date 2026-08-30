nonmatching func_80162D20, 0xD8

glabel func_80162D20
    /* 71120 80162D20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 71124 80162D24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 71128 80162D28 8CD9030C */  jal        func_800F6630
    /* 7112C 80162D2C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 71130 80162D30 0DD9030C */  jal        func_800F6434
    /* 71134 80162D34 80000424 */   addiu     $a0, $zero, 0x80
    /* 71138 80162D38 25004014 */  bnez       $v0, .L80162DD0
    /* 7113C 80162D3C 00000000 */   nop
    /* 71140 80162D40 91E5030C */  jal        func_800F9644
    /* 71144 80162D44 20000424 */   addiu     $a0, $zero, 0x20
    /* 71148 80162D48 9CDC030C */  jal        func_800F7270
    /* 7114C 80162D4C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 71150 80162D50 F8DA030C */  jal        func_800F6BE0
    /* 71154 80162D54 09200424 */   addiu     $a0, $zero, 0x2009
    /* 71158 80162D58 F14A050C */  jal        func_80152BC4
    /* 7115C 80162D5C 00000000 */   nop
    /* 71160 80162D60 9DE0030C */  jal        func_800F8274
    /* 71164 80162D64 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 71168 80162D68 20D5030C */  jal        func_800F5480
    /* 7116C 80162D6C 00000000 */   nop
    /* 71170 80162D70 F8DA030C */  jal        func_800F6BE0
    /* 71174 80162D74 07200424 */   addiu     $a0, $zero, 0x2007
    /* 71178 80162D78 0FCF030C */  jal        func_800F3C3C
    /* 7117C 80162D7C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 71180 80162D80 F3DF030C */  jal        func_800F7FCC
    /* 71184 80162D84 21204000 */   addu      $a0, $v0, $zero
    /* 71188 80162D88 F7E1030C */  jal        func_800F87DC
    /* 7118C 80162D8C 07200424 */   addiu     $a0, $zero, 0x2007
    /* 71190 80162D90 F0D4030C */  jal        func_800F53C0
    /* 71194 80162D94 00000000 */   nop
    /* 71198 80162D98 09004014 */  bnez       $v0, .L80162DC0
    /* 7119C 80162D9C 00000000 */   nop
    /* 711A0 80162DA0 56D9030C */  jal        func_800F6558
    /* 711A4 80162DA4 21200000 */   addu      $a0, $zero, $zero
    /* 711A8 80162DA8 F7E1030C */  jal        func_800F87DC
    /* 711AC 80162DAC 07200424 */   addiu     $a0, $zero, 0x2007
    /* 711B0 80162DB0 56D9030C */  jal        func_800F6558
    /* 711B4 80162DB4 80000424 */   addiu     $a0, $zero, 0x80
    /* 711B8 80162DB8 F7E1030C */  jal        func_800F87DC
    /* 711BC 80162DBC 03200424 */   addiu     $a0, $zero, 0x2003
  .L80162DC0:
    /* 711C0 80162DC0 C7E5030C */  jal        func_800F971C
    /* 711C4 80162DC4 00000000 */   nop
    /* 711C8 80162DC8 98E5030C */  jal        func_800F9660
    /* 711CC 80162DCC 20000424 */   addiu     $a0, $zero, 0x20
  .L80162DD0:
    /* 711D0 80162DD0 53D9030C */  jal        func_800F654C
    /* 711D4 80162DD4 01000424 */   addiu     $a0, $zero, 0x1
    /* 711D8 80162DD8 93E0030C */  jal        func_800F824C
    /* 711DC 80162DDC C1000424 */   addiu     $a0, $zero, 0xC1
    /* 711E0 80162DE0 7E8B050C */  jal        func_80162DF8
    /* 711E4 80162DE4 00000000 */   nop
    /* 711E8 80162DE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 711EC 80162DEC 00000000 */  nop
    /* 711F0 80162DF0 0800E003 */  jr         $ra
    /* 711F4 80162DF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80162D20
