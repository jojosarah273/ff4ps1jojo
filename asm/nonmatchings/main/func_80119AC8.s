nonmatching func_80119AC8, 0x114

glabel func_80119AC8
    /* 27EC8 80119AC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27ECC 80119ACC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27ED0 80119AD0 7536040C */  jal        func_8010D9D4
    /* 27ED4 80119AD4 00000000 */   nop
    /* 27ED8 80119AD8 5DD5030C */  jal        func_800F5574
    /* 27EDC 80119ADC 80000424 */   addiu     $a0, $zero, 0x80
    /* 27EE0 80119AE0 F0D4030C */  jal        func_800F53C0
    /* 27EE4 80119AE4 00000000 */   nop
    /* 27EE8 80119AE8 38004014 */  bnez       $v0, .L80119BCC
    /* 27EEC 80119AEC 00000000 */   nop
    /* 27EF0 80119AF0 8CD9030C */  jal        func_800F6630
    /* 27EF4 80119AF4 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 27EF8 80119AF8 04D5030C */  jal        func_800F5410
    /* 27EFC 80119AFC 00000000 */   nop
    /* 27F00 80119B00 02D0030C */  jal        func_800F4008
    /* 27F04 80119B04 08000424 */   addiu     $a0, $zero, 0x8
    /* 27F08 80119B08 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 27F0C 80119B0C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 27F10 80119B10 00000000 */  nop
    /* 27F14 80119B14 00004390 */  lbu        $v1, 0x0($v0)
    /* 27F18 80119B18 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 27F1C 80119B1C 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 27F20 80119B20 8CD9030C */  jal        func_800F6630
    /* 27F24 80119B24 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 27F28 80119B28 02D0030C */  jal        func_800F4008
    /* 27F2C 80119B2C 21200000 */   addu      $a0, $zero, $zero
    /* 27F30 80119B30 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 27F34 80119B34 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 27F38 80119B38 00000000 */  nop
    /* 27F3C 80119B3C 0000A290 */  lbu        $v0, 0x0($a1)
    /* 27F40 80119B40 1A80033C */  lui        $v1, %hi(D_8019EE68)
    /* 27F44 80119B44 68EE6394 */  lhu        $v1, %lo(D_8019EE68)($v1)
    /* 27F48 80119B48 00120200 */  sll        $v0, $v0, 8
    /* 27F4C 80119B4C 25186200 */  or         $v1, $v1, $v0
    /* 27F50 80119B50 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 27F54 80119B54 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 27F58 80119B58 8CD9030C */  jal        func_800F6630
    /* 27F5C 80119B5C 60000424 */   addiu     $a0, $zero, 0x60
    /* 27F60 80119B60 04D5030C */  jal        func_800F5410
    /* 27F64 80119B64 00000000 */   nop
    /* 27F68 80119B68 02D0030C */  jal        func_800F4008
    /* 27F6C 80119B6C 08000424 */   addiu     $a0, $zero, 0x8
    /* 27F70 80119B70 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 27F74 80119B74 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 27F78 80119B78 00000000 */  nop
    /* 27F7C 80119B7C 00004390 */  lbu        $v1, 0x0($v0)
    /* 27F80 80119B80 1A80013C */  lui        $at, %hi(D_8019EE6A)
    /* 27F84 80119B84 6AEE23A4 */  sh         $v1, %lo(D_8019EE6A)($at)
    /* 27F88 80119B88 8CD9030C */  jal        func_800F6630
    /* 27F8C 80119B8C 61000424 */   addiu     $a0, $zero, 0x61
    /* 27F90 80119B90 02D0030C */  jal        func_800F4008
    /* 27F94 80119B94 21200000 */   addu      $a0, $zero, $zero
    /* 27F98 80119B98 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 27F9C 80119B9C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 27FA0 80119BA0 00000000 */  nop
    /* 27FA4 80119BA4 00004490 */  lbu        $a0, 0x0($v0)
    /* 27FA8 80119BA8 1A80023C */  lui        $v0, %hi(D_8019EE6A)
    /* 27FAC 80119BAC 6AEE4294 */  lhu        $v0, %lo(D_8019EE6A)($v0)
    /* 27FB0 80119BB0 11000324 */  addiu      $v1, $zero, 0x11
    /* 27FB4 80119BB4 1A80013C */  lui        $at, %hi(D_8019ECFE)
    /* 27FB8 80119BB8 FEEC23A0 */  sb         $v1, %lo(D_8019ECFE)($at)
    /* 27FBC 80119BBC 00220400 */  sll        $a0, $a0, 8
    /* 27FC0 80119BC0 25104400 */  or         $v0, $v0, $a0
    /* 27FC4 80119BC4 1A80013C */  lui        $at, %hi(D_8019EE6A)
    /* 27FC8 80119BC8 6AEE22A4 */  sh         $v0, %lo(D_8019EE6A)($at)
  .L80119BCC:
    /* 27FCC 80119BCC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27FD0 80119BD0 00000000 */  nop
    /* 27FD4 80119BD4 0800E003 */  jr         $ra
    /* 27FD8 80119BD8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119AC8
