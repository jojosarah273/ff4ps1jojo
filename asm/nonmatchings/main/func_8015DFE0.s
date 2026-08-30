nonmatching func_8015DFE0, 0x178

glabel func_8015DFE0
    /* 6C3E0 8015DFE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6C3E4 8015DFE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6C3E8 8015DFE8 9CDC030C */  jal        func_800F7270
    /* 6C3EC 8015DFEC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C3F0 8015DFF0 3BE4030C */  jal        func_800F90EC
    /* 6C3F4 8015DFF4 53200424 */   addiu     $a0, $zero, 0x2053
    /* 6C3F8 8015DFF8 3BE4030C */  jal        func_800F90EC
    /* 6C3FC 8015DFFC 54200424 */   addiu     $a0, $zero, 0x2054
    /* 6C400 8015E000 734C050C */  jal        func_801531CC
    /* 6C404 8015E004 00000000 */   nop
    /* 6C408 8015E008 5DD5030C */  jal        func_800F5574
    /* 6C40C 8015E00C 46000424 */   addiu     $a0, $zero, 0x46
    /* 6C410 8015E010 F0D4030C */  jal        func_800F53C0
    /* 6C414 8015E014 00000000 */   nop
    /* 6C418 8015E018 2D004014 */  bnez       $v0, .L8015E0D0
    /* 6C41C 8015E01C 00000000 */   nop
    /* 6C420 8015E020 84DC030C */  jal        func_800F7210
    /* 6C424 8015E024 34350424 */   addiu     $a0, $zero, 0x3534
    /* 6C428 8015E028 40DD030C */  jal        func_800F7500
    /* 6C42C 8015E02C 05000424 */   addiu     $a0, $zero, 0x5
  .L8015E030:
    /* 6C430 8015E030 DADA030C */  jal        func_800F6B68
    /* 6C434 8015E034 03330424 */   addiu     $a0, $zero, 0x3303
    /* 6C438 8015E038 5DD5030C */  jal        func_800F5574
    /* 6C43C 8015E03C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C440 8015E040 F5D4030C */  jal        func_800F53D4
    /* 6C444 8015E044 00000000 */   nop
    /* 6C448 8015E048 17004014 */  bnez       $v0, .L8015E0A8
    /* 6C44C 8015E04C 00000000 */   nop
    /* 6C450 8015E050 5DD5030C */  jal        func_800F5574
    /* 6C454 8015E054 03000424 */   addiu     $a0, $zero, 0x3
    /* 6C458 8015E058 F5D4030C */  jal        func_800F53D4
    /* 6C45C 8015E05C 00000000 */   nop
    /* 6C460 8015E060 11004014 */  bnez       $v0, .L8015E0A8
    /* 6C464 8015E064 00000000 */   nop
    /* 6C468 8015E068 D9D8030C */  jal        func_800F6364
    /* 6C46C 8015E06C 00000000 */   nop
    /* 6C470 8015E070 D9D8030C */  jal        func_800F6364
    /* 6C474 8015E074 00000000 */   nop
    /* 6C478 8015E078 D9D8030C */  jal        func_800F6364
    /* 6C47C 8015E07C 00000000 */   nop
    /* 6C480 8015E080 D9D8030C */  jal        func_800F6364
    /* 6C484 8015E084 00000000 */   nop
    /* 6C488 8015E088 A8D7030C */  jal        func_800F5EA0
    /* 6C48C 8015E08C 00000000 */   nop
    /* 6C490 8015E090 19D7030C */  jal        func_800F5C64
    /* 6C494 8015E094 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C498 8015E098 E5FF4014 */  bnez       $v0, .L8015E030
    /* 6C49C 8015E09C 00000000 */   nop
    /* 6C4A0 8015E0A0 34780508 */  j          .L8015E0D0
    /* 6C4A4 8015E0A4 00000000 */   nop
  .L8015E0A8:
    /* 6C4A8 8015E0A8 EEE3030C */  jal        func_800F8FB8
    /* 6C4AC 8015E0AC 90000424 */   addiu     $a0, $zero, 0x90
    /* 6C4B0 8015E0B0 5678050C */  jal        func_8015E158
    /* 6C4B4 8015E0B4 00000000 */   nop
    /* 6C4B8 8015E0B8 8CD9030C */  jal        func_800F6630
    /* 6C4BC 8015E0BC 90000424 */   addiu     $a0, $zero, 0x90
    /* 6C4C0 8015E0C0 0DD9030C */  jal        func_800F6434
    /* 6C4C4 8015E0C4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C4C8 8015E0C8 1F004010 */  beqz       $v0, .L8015E148
    /* 6C4CC 8015E0CC 00000000 */   nop
  .L8015E0D0:
    /* 6C4D0 8015E0D0 9CDC030C */  jal        func_800F7270
    /* 6C4D4 8015E0D4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C4D8 8015E0D8 53D9030C */  jal        func_800F654C
    /* 6C4DC 8015E0DC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6C4E0 8015E0E0 DAE1030C */  jal        func_800F8768
    /* 6C4E4 8015E0E4 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6C4E8 8015E0E8 3BE4030C */  jal        func_800F90EC
    /* 6C4EC 8015E0EC 51200424 */   addiu     $a0, $zero, 0x2051
  .L8015E0F0:
    /* 6C4F0 8015E0F0 674C050C */  jal        func_8015319C
    /* 6C4F4 8015E0F4 00000000 */   nop
    /* 6C4F8 8015E0F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C4FC 8015E0FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C500 8015E100 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C504 8015E104 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C508 8015E108 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C50C 8015E10C 40350424 */  addiu      $a0, $zero, 0x3540
    /* 6C510 8015E110 DADA030C */  jal        func_800F6B68
    /* 6C514 8015E114 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6C518 8015E118 0DD9030C */  jal        func_800F6434
    /* 6C51C 8015E11C 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C520 8015E120 F3FF4014 */  bnez       $v0, .L8015E0F0
    /* 6C524 8015E124 00000000 */   nop
    /* 6C528 8015E128 C7E5030C */  jal        func_800F971C
    /* 6C52C 8015E12C 00000000 */   nop
    /* 6C530 8015E130 264C050C */  jal        func_80153098
    /* 6C534 8015E134 00000000 */   nop
    /* 6C538 8015E138 9CDC030C */  jal        func_800F7270
    /* 6C53C 8015E13C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C540 8015E140 DAE1030C */  jal        func_800F8768
    /* 6C544 8015E144 54200424 */   addiu     $a0, $zero, 0x2054
  .L8015E148:
    /* 6C548 8015E148 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6C54C 8015E14C 00000000 */  nop
    /* 6C550 8015E150 0800E003 */  jr         $ra
    /* 6C554 8015E154 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015DFE0
