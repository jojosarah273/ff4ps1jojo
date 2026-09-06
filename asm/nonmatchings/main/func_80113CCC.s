nonmatching func_80113CCC, 0x100

glabel func_80113CCC
    /* 220CC 80113CCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 220D0 80113CD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 220D4 80113CD4 EEE3030C */  jal        func_800F8FB8
    /* 220D8 80113CD8 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 220DC 80113CDC 77DC030C */  jal        func_800F71DC
    /* 220E0 80113CE0 21200000 */   addu      $a0, $zero, $zero
    /* 220E4 80113CE4 40E3030C */  jal        func_800F8D00
    /* 220E8 80113CE8 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 220EC 80113CEC 5BE3030C */  jal        func_800F8D6C
    /* 220F0 80113CF0 24000424 */   addiu     $a0, $zero, 0x24
    /* 220F4 80113CF4 53D9030C */  jal        func_800F654C
    /* 220F8 80113CF8 C4000424 */   addiu     $a0, $zero, 0xC4
    /* 220FC 80113CFC 93E0030C */  jal        func_800F824C
    /* 22100 80113D00 8F000424 */   addiu     $a0, $zero, 0x8F
    /* 22104 80113D04 53D9030C */  jal        func_800F654C
    /* 22108 80113D08 08000424 */   addiu     $a0, $zero, 0x8
    /* 2210C 80113D0C 93E0030C */  jal        func_800F824C
    /* 22110 80113D10 90000424 */   addiu     $a0, $zero, 0x90
    /* 22114 80113D14 53D9030C */  jal        func_800F654C
    /* 22118 80113D18 39000424 */   addiu     $a0, $zero, 0x39
    /* 2211C 80113D1C 93E0030C */  jal        func_800F824C
    /* 22120 80113D20 91000424 */   addiu     $a0, $zero, 0x91
  .L80113D24:
    /* 22124 80113D24 ECF9030C */  jal        func_800FE7B0
    /* 22128 80113D28 00000000 */   nop
    /* 2212C 80113D2C CF4F040C */  jal        func_80113F3C
    /* 22130 80113D30 00000000 */   nop
    /* 22134 80113D34 91E5030C */  jal        func_800F9644
    /* 22138 80113D38 20000424 */   addiu     $a0, $zero, 0x20
    /* 2213C 80113D3C 63D9030C */  jal        func_800F658C
    /* 22140 80113D40 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 22144 80113D44 85D8030C */  jal        func_800F6214
    /* 22148 80113D48 00000000 */   nop
    /* 2214C 80113D4C 6CE0030C */  jal        func_800F81B0
    /* 22150 80113D50 FB060424 */   addiu     $a0, $zero, 0x6FB
    /* 22154 80113D54 96D9030C */  jal        func_800F6658
    /* 22158 80113D58 24000424 */   addiu     $a0, $zero, 0x24
    /* 2215C 80113D5C 85D8030C */  jal        func_800F6214
    /* 22160 80113D60 00000000 */   nop
    /* 22164 80113D64 9DE0030C */  jal        func_800F8274
    /* 22168 80113D68 24000424 */   addiu     $a0, $zero, 0x24
    /* 2216C 80113D6C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 22170 80113D70 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 22174 80113D74 00000000 */  nop
    /* 22178 80113D78 00006294 */  lhu        $v0, 0x0($v1)
    /* 2217C 80113D7C FF000424 */  addiu      $a0, $zero, 0xFF
    /* 22180 80113D80 82100200 */  srl        $v0, $v0, 2
    /* 22184 80113D84 99D0030C */  jal        func_800F4264
    /* 22188 80113D88 000062A4 */   sh        $v0, 0x0($v1)
    /* 2218C 80113D8C 98E5030C */  jal        func_800F9660
    /* 22190 80113D90 20000424 */   addiu     $a0, $zero, 0x20
    /* 22194 80113D94 93E0030C */  jal        func_800F824C
    /* 22198 80113D98 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 2219C 80113D9C 5DD5030C */  jal        func_800F5574
    /* 221A0 80113DA0 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 221A4 80113DA4 F5D4030C */  jal        func_800F53D4
    /* 221A8 80113DA8 00000000 */   nop
    /* 221AC 80113DAC DDFF4010 */  beqz       $v0, .L80113D24
    /* 221B0 80113DB0 00000000 */   nop
    /* 221B4 80113DB4 977A040C */  jal        func_8011EA5C
    /* 221B8 80113DB8 00000000 */   nop
    /* 221BC 80113DBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 221C0 80113DC0 00000000 */  nop
    /* 221C4 80113DC4 0800E003 */  jr         $ra
    /* 221C8 80113DC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113CCC
