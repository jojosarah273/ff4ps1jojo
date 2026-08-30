nonmatching func_80131CD8, 0x120

glabel func_80131CD8
    /* 400D8 80131CD8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 400DC 80131CDC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 400E0 80131CE0 80E4030C */  jal        func_800F9200
    /* 400E4 80131CE4 00000000 */   nop
    /* 400E8 80131CE8 3489040C */  jal        func_801224D0
    /* 400EC 80131CEC 00000000 */   nop
    /* 400F0 80131CF0 DADA030C */  jal        func_800F6B68
    /* 400F4 80131CF4 8B1B0424 */   addiu     $a0, $zero, 0x1B8B
    /* 400F8 80131CF8 0DD9030C */  jal        func_800F6434
    /* 400FC 80131CFC 02000424 */   addiu     $a0, $zero, 0x2
    /* 40100 80131D00 37004014 */  bnez       $v0, .L80131DE0
    /* 40104 80131D04 00000000 */   nop
    /* 40108 80131D08 6DC8040C */  jal        func_801321B4
    /* 4010C 80131D0C 00000000 */   nop
    /* 40110 80131D10 DADA030C */  jal        func_800F6B68
    /* 40114 80131D14 03000424 */   addiu     $a0, $zero, 0x3
    /* 40118 80131D18 0DD9030C */  jal        func_800F6434
    /* 4011C 80131D1C 80800434 */   ori       $a0, $zero, 0x8080
    /* 40120 80131D20 2F004014 */  bnez       $v0, .L80131DE0
    /* 40124 80131D24 00000000 */   nop
    /* 40128 80131D28 92D0030C */  jal        func_800F4248
    /* 4012C 80131D2C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 40130 80131D30 DAE1030C */  jal        func_800F8768
    /* 40134 80131D34 03000424 */   addiu     $a0, $zero, 0x3
    /* 40138 80131D38 DADA030C */  jal        func_800F6B68
    /* 4013C 80131D3C 16000424 */   addiu     $a0, $zero, 0x16
    /* 40140 80131D40 93E0030C */  jal        func_800F824C
    /* 40144 80131D44 43000424 */   addiu     $a0, $zero, 0x43
    /* 40148 80131D48 91E5030C */  jal        func_800F9644
    /* 4014C 80131D4C 20000424 */   addiu     $a0, $zero, 0x20
    /* 40150 80131D50 96D9030C */  jal        func_800F6658
    /* 40154 80131D54 43000424 */   addiu     $a0, $zero, 0x43
    /* 40158 80131D58 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4015C 80131D5C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 40160 80131D60 00000000 */  nop
    /* 40164 80131D64 00006294 */  lhu        $v0, 0x0($v1)
    /* 40168 80131D68 00000000 */  nop
    /* 4016C 80131D6C 40100200 */  sll        $v0, $v0, 1
    /* 40170 80131D70 5BD4030C */  jal        func_800F516C
    /* 40174 80131D74 000062A4 */   sh        $v0, 0x0($v1)
    /* 40178 80131D78 14D4030C */  jal        func_800F5050
    /* 4017C 80131D7C 00000000 */   nop
    /* 40180 80131D80 0FCF030C */  jal        func_800F3C3C
    /* 40184 80131D84 43000424 */   addiu     $a0, $zero, 0x43
    /* 40188 80131D88 E5CF030C */  jal        func_800F3F94
    /* 4018C 80131D8C 21204000 */   addu      $a0, $v0, $zero
    /* 40190 80131D90 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 40194 80131D94 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 40198 80131D98 00000000 */  nop
    /* 4019C 80131D9C 00004494 */  lhu        $a0, 0x0($v0)
    /* 401A0 80131DA0 C1CE030C */  jal        func_800F3B04
    /* 401A4 80131DA4 09008424 */   addiu     $a0, $a0, 0x9
    /* 401A8 80131DA8 48D5030C */  jal        func_800F5520
    /* 401AC 80131DAC 21204000 */   addu      $a0, $v0, $zero
    /* 401B0 80131DB0 F0D4030C */  jal        func_800F53C0
    /* 401B4 80131DB4 00000000 */   nop
    /* 401B8 80131DB8 03004010 */  beqz       $v0, .L80131DC8
    /* 401BC 80131DBC 00000000 */   nop
    /* 401C0 80131DC0 F8DA030C */  jal        func_800F6BE0
    /* 401C4 80131DC4 09000424 */   addiu     $a0, $zero, 0x9
  .L80131DC8:
    /* 401C8 80131DC8 F7E1030C */  jal        func_800F87DC
    /* 401CC 80131DCC 07000424 */   addiu     $a0, $zero, 0x7
    /* 401D0 80131DD0 98E5030C */  jal        func_800F9660
    /* 401D4 80131DD4 20000424 */   addiu     $a0, $zero, 0x20
    /* 401D8 80131DD8 90D8030C */  jal        func_800F6240
    /* 401DC 80131DDC BD1B0424 */   addiu     $a0, $zero, 0x1BBD
  .L80131DE0:
    /* 401E0 80131DE0 F7E4030C */  jal        func_800F93DC
    /* 401E4 80131DE4 00000000 */   nop
    /* 401E8 80131DE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 401EC 80131DEC 00000000 */  nop
    /* 401F0 80131DF0 0800E003 */  jr         $ra
    /* 401F4 80131DF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131CD8
