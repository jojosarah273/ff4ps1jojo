nonmatching func_80126D48, 0xC0

glabel func_80126D48
    /* 35148 80126D48 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3514C 80126D4C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 35150 80126D50 EEE3030C */  jal        func_800F8FB8
    /* 35154 80126D54 48000424 */   addiu     $a0, $zero, 0x48
  .L80126D58:
    /* 35158 80126D58 8CD9030C */  jal        func_800F6630
    /* 3515C 80126D5C 48000424 */   addiu     $a0, $zero, 0x48
    /* 35160 80126D60 5EC8040C */  jal        func_80132178
    /* 35164 80126D64 00000000 */   nop
    /* 35168 80126D68 DADA030C */  jal        func_800F6B68
    /* 3516C 80126D6C 21200000 */   addu      $a0, $zero, $zero
    /* 35170 80126D70 92D0030C */  jal        func_800F4248
    /* 35174 80126D74 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 35178 80126D78 48D0030C */  jal        func_800F4120
    /* 3517C 80126D7C 02020424 */   addiu     $a0, $zero, 0x202
    /* 35180 80126D80 0B004014 */  bnez       $v0, .L80126DB0
    /* 35184 80126D84 00000000 */   nop
    /* 35188 80126D88 AFD8030C */  jal        func_800F62BC
    /* 3518C 80126D8C 48000424 */   addiu     $a0, $zero, 0x48
    /* 35190 80126D90 8CD9030C */  jal        func_800F6630
    /* 35194 80126D94 48000424 */   addiu     $a0, $zero, 0x48
    /* 35198 80126D98 5DD5030C */  jal        func_800F5574
    /* 3519C 80126D9C 05000424 */   addiu     $a0, $zero, 0x5
    /* 351A0 80126DA0 F5D4030C */  jal        func_800F53D4
    /* 351A4 80126DA4 00000000 */   nop
    /* 351A8 80126DA8 EBFF4010 */  beqz       $v0, .L80126D58
    /* 351AC 80126DAC 00000000 */   nop
  .L80126DB0:
    /* 351B0 80126DB0 8CD9030C */  jal        func_800F6630
    /* 351B4 80126DB4 48000424 */   addiu     $a0, $zero, 0x48
    /* 351B8 80126DB8 93E0030C */  jal        func_800F824C
    /* 351BC 80126DBC E7000424 */   addiu     $a0, $zero, 0xE7
    /* 351C0 80126DC0 62E0030C */  jal        func_800F8188
    /* 351C4 80126DC4 3E1B0424 */   addiu     $a0, $zero, 0x1B3E
    /* 351C8 80126DC8 62E0030C */  jal        func_800F8188
    /* 351CC 80126DCC 8A1B0424 */   addiu     $a0, $zero, 0x1B8A
    /* 351D0 80126DD0 77DC030C */  jal        func_800F71DC
    /* 351D4 80126DD4 D8FF0434 */   ori       $a0, $zero, 0xFFD8
    /* 351D8 80126DD8 40E3030C */  jal        func_800F8D00
    /* 351DC 80126DDC A51B0424 */   addiu     $a0, $zero, 0x1BA5
    /* 351E0 80126DE0 59D9030C */  jal        func_800F6564
    /* 351E4 80126DE4 A9160424 */   addiu     $a0, $zero, 0x16A9
    /* 351E8 80126DE8 FED8030C */  jal        func_800F63F8
    /* 351EC 80126DEC 00000000 */   nop
    /* 351F0 80126DF0 93E0030C */  jal        func_800F824C
    /* 351F4 80126DF4 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 351F8 80126DF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 351FC 80126DFC 00000000 */  nop
    /* 35200 80126E00 0800E003 */  jr         $ra
    /* 35204 80126E04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126D48
