nonmatching func_80111DC8, 0x12C

glabel func_80111DC8
    /* 201C8 80111DC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 201CC 80111DCC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 201D0 80111DD0 8CD9030C */  jal        func_800F6630
    /* 201D4 80111DD4 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 201D8 80111DD8 92D0030C */  jal        func_800F4248
    /* 201DC 80111DDC 03000424 */   addiu     $a0, $zero, 0x3
    /* 201E0 80111DE0 48D0030C */  jal        func_800F4120
    /* 201E4 80111DE4 02020424 */   addiu     $a0, $zero, 0x202
    /* 201E8 80111DE8 3E004014 */  bnez       $v0, .L80111EE4
    /* 201EC 80111DEC 00000000 */   nop
    /* 201F0 80111DF0 AFD8030C */  jal        func_800F62BC
    /* 201F4 80111DF4 79000424 */   addiu     $a0, $zero, 0x79
    /* 201F8 80111DF8 8CD9030C */  jal        func_800F6630
    /* 201FC 80111DFC 79000424 */   addiu     $a0, $zero, 0x79
    /* 20200 80111E00 5DD5030C */  jal        func_800F5574
    /* 20204 80111E04 06000424 */   addiu     $a0, $zero, 0x6
    /* 20208 80111E08 F5D4030C */  jal        func_800F53D4
    /* 2020C 80111E0C 00000000 */   nop
    /* 20210 80111E10 03004010 */  beqz       $v0, .L80111E20
    /* 20214 80111E14 00000000 */   nop
    /* 20218 80111E18 EEE3030C */  jal        func_800F8FB8
    /* 2021C 80111E1C 79000424 */   addiu     $a0, $zero, 0x79
  .L80111E20:
    /* 20220 80111E20 77DC030C */  jal        func_800F71DC
    /* 20224 80111E24 21200000 */   addu      $a0, $zero, $zero
    /* 20228 80111E28 8CD9030C */  jal        func_800F6630
    /* 2022C 80111E2C 79000424 */   addiu     $a0, $zero, 0x79
    /* 20230 80111E30 50D4030C */  jal        func_800F5140
    /* 20234 80111E34 00000000 */   nop
    /* 20238 80111E38 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2023C 80111E3C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 20240 80111E40 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 20244 80111E44 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 20248 80111E48 00004394 */  lhu        $v1, 0x0($v0)
    /* 2024C 80111E4C 00000000 */  nop
    /* 20250 80111E50 000083A4 */  sh         $v1, 0x0($a0)
  .L80111E54:
    /* 20254 80111E54 5CDB030C */  jal        func_800F6D70
    /* 20258 80111E58 AF0A0424 */   addiu     $a0, $zero, 0xAAF
    /* 2025C 80111E5C DAE1030C */  jal        func_800F8768
    /* 20260 80111E60 1D0E0424 */   addiu     $a0, $zero, 0xE1D
    /* 20264 80111E64 5CDB030C */  jal        func_800F6D70
    /* 20268 80111E68 B00A0424 */   addiu     $a0, $zero, 0xAB0
    /* 2026C 80111E6C DAE1030C */  jal        func_800F8768
    /* 20270 80111E70 1E0E0424 */   addiu     $a0, $zero, 0xE1E
    /* 20274 80111E74 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 20278 80111E78 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2027C 80111E7C 00000000 */  nop
    /* 20280 80111E80 00006294 */  lhu        $v0, 0x0($v1)
    /* 20284 80111E84 0E000424 */  addiu      $a0, $zero, 0xE
    /* 20288 80111E88 02004224 */  addiu      $v0, $v0, 0x2
    /* 2028C 80111E8C 56D6030C */  jal        func_800F5958
    /* 20290 80111E90 000062A4 */   sh        $v0, 0x0($v1)
    /* 20294 80111E94 F5D4030C */  jal        func_800F53D4
    /* 20298 80111E98 00000000 */   nop
    /* 2029C 80111E9C 11004014 */  bnez       $v0, .L80111EE4
    /* 202A0 80111EA0 0E000424 */   addiu     $a0, $zero, 0xE
    /* 202A4 80111EA4 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 202A8 80111EA8 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 202AC 80111EAC 00000000 */  nop
    /* 202B0 80111EB0 00006294 */  lhu        $v0, 0x0($v1)
    /* 202B4 80111EB4 00000000 */  nop
    /* 202B8 80111EB8 02004224 */  addiu      $v0, $v0, 0x2
    /* 202BC 80111EBC A4D6030C */  jal        func_800F5A90
    /* 202C0 80111EC0 000062A4 */   sh        $v0, 0x0($v1)
    /* 202C4 80111EC4 F5D4030C */  jal        func_800F53D4
    /* 202C8 80111EC8 00000000 */   nop
    /* 202CC 80111ECC E1FF4010 */  beqz       $v0, .L80111E54
    /* 202D0 80111ED0 00000000 */   nop
    /* 202D4 80111ED4 40DD030C */  jal        func_800F7500
    /* 202D8 80111ED8 21200000 */   addu      $a0, $zero, $zero
    /* 202DC 80111EDC 95470408 */  j          .L80111E54
    /* 202E0 80111EE0 00000000 */   nop
  .L80111EE4:
    /* 202E4 80111EE4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 202E8 80111EE8 00000000 */  nop
    /* 202EC 80111EEC 0800E003 */  jr         $ra
    /* 202F0 80111EF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111DC8
