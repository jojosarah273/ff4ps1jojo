nonmatching func_8012D124, 0x70

glabel func_8012D124
    /* 3B524 8012D124 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B528 8012D128 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B52C 8012D12C 53D9030C */  jal        func_800F654C
    /* 3B530 8012D130 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 3B534 8012D134 9388040C */  jal        func_8012224C
    /* 3B538 8012D138 00000000 */   nop
    /* 3B53C 8012D13C 53D9030C */  jal        func_800F654C
    /* 3B540 8012D140 06000424 */   addiu     $a0, $zero, 0x6
    /* 3B544 8012D144 62E0030C */  jal        func_800F8188
    /* 3B548 8012D148 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 3B54C 8012D14C DDE3030C */  jal        func_800F8F74
    /* 3B550 8012D150 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 3B554 8012D154 9CDC030C */  jal        func_800F7270
    /* 3B558 8012D158 93000424 */   addiu     $a0, $zero, 0x93
    /* 3B55C 8012D15C 40E3030C */  jal        func_800F8D00
    /* 3B560 8012D160 A51B0424 */   addiu     $a0, $zero, 0x1BA5
    /* 3B564 8012D164 84DC030C */  jal        func_800F7210
    /* 3B568 8012D168 651A0424 */   addiu     $a0, $zero, 0x1A65
    /* 3B56C 8012D16C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3B570 8012D170 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3B574 8012D174 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 3B578 8012D178 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 3B57C 8012D17C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B580 8012D180 00004394 */  lhu        $v1, 0x0($v0)
    /* 3B584 8012D184 00000000 */  nop
    /* 3B588 8012D188 000083A4 */  sh         $v1, 0x0($a0)
    /* 3B58C 8012D18C 0800E003 */  jr         $ra
    /* 3B590 8012D190 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012D124
