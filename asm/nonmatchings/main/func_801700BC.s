nonmatching func_801700BC, 0xDC

glabel func_801700BC
    /* 7E4BC 801700BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7E4C0 801700C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7E4C4 801700C4 CCE4030C */  jal        func_800F9330
    /* 7E4C8 801700C8 00000000 */   nop
    /* 7E4CC 801700CC 91E5030C */  jal        func_800F9644
    /* 7E4D0 801700D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 7E4D4 801700D4 C7E5030C */  jal        func_800F971C
    /* 7E4D8 801700D8 00000000 */   nop
    /* 7E4DC 801700DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7E4E0 801700E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7E4E4 801700E4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7E4E8 801700E8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7E4EC 801700EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 7E4F0 801700F0 00000000 */  nop
    /* 7E4F4 801700F4 000083A4 */  sh         $v1, 0x0($a0)
  .L801700F8:
    /* 7E4F8 801700F8 96D9030C */  jal        func_800F6658
    /* 7E4FC 801700FC 21200000 */   addu      $a0, $zero, $zero
    /* 7E500 80170100 F7E1030C */  jal        func_800F87DC
    /* 7E504 80170104 19330424 */   addiu     $a0, $zero, 0x3319
    /* 7E508 80170108 96D9030C */  jal        func_800F6658
    /* 7E50C 8017010C 06000424 */   addiu     $a0, $zero, 0x6
    /* 7E510 80170110 F7E1030C */  jal        func_800F87DC
    /* 7E514 80170114 1B370424 */   addiu     $a0, $zero, 0x371B
    /* 7E518 80170118 96D9030C */  jal        func_800F6658
    /* 7E51C 8017011C 02000424 */   addiu     $a0, $zero, 0x2
    /* 7E520 80170120 F7E1030C */  jal        func_800F87DC
    /* 7E524 80170124 1B330424 */   addiu     $a0, $zero, 0x331B
    /* 7E528 80170128 96D9030C */  jal        func_800F6658
    /* 7E52C 8017012C 04000424 */   addiu     $a0, $zero, 0x4
    /* 7E530 80170130 F7E1030C */  jal        func_800F87DC
    /* 7E534 80170134 19370424 */   addiu     $a0, $zero, 0x3719
    /* 7E538 80170138 D9D8030C */  jal        func_800F6364
    /* 7E53C 8017013C 00000000 */   nop
    /* 7E540 80170140 D9D8030C */  jal        func_800F6364
    /* 7E544 80170144 00000000 */   nop
    /* 7E548 80170148 D9D8030C */  jal        func_800F6364
    /* 7E54C 8017014C 00000000 */   nop
    /* 7E550 80170150 D9D8030C */  jal        func_800F6364
    /* 7E554 80170154 00000000 */   nop
    /* 7E558 80170158 56D6030C */  jal        func_800F5958
    /* 7E55C 8017015C 00040424 */   addiu     $a0, $zero, 0x400
    /* 7E560 80170160 F5D4030C */  jal        func_800F53D4
    /* 7E564 80170164 00000000 */   nop
    /* 7E568 80170168 E3FF4010 */  beqz       $v0, .L801700F8
    /* 7E56C 8017016C 00000000 */   nop
    /* 7E570 80170170 C7E5030C */  jal        func_800F971C
    /* 7E574 80170174 00000000 */   nop
    /* 7E578 80170178 98E5030C */  jal        func_800F9660
    /* 7E57C 8017017C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7E580 80170180 68E5030C */  jal        func_800F95A0
    /* 7E584 80170184 00000000 */   nop
    /* 7E588 80170188 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7E58C 8017018C 00000000 */  nop
    /* 7E590 80170190 0800E003 */  jr         $ra
    /* 7E594 80170194 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801700BC
