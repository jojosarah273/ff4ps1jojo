nonmatching func_8015D310, 0xD8

glabel func_8015D310
    /* 6B710 8015D310 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B714 8015D314 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B718 8015D318 9CDC030C */  jal        func_800F7270
    /* 6B71C 8015D31C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6B720 8015D320 DADA030C */  jal        func_800F6B68
    /* 6B724 8015D324 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6B728 8015D328 92D0030C */  jal        func_800F4248
    /* 6B72C 8015D32C BF000424 */   addiu     $a0, $zero, 0xBF
    /* 6B730 8015D330 DAE1030C */  jal        func_800F8768
    /* 6B734 8015D334 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6B738 8015D338 84DC030C */  jal        func_800F7210
    /* 6B73C 8015D33C 30350424 */   addiu     $a0, $zero, 0x3530
    /* 6B740 8015D340 3BE4030C */  jal        func_800F90EC
    /* 6B744 8015D344 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6B748 8015D348 53D9030C */  jal        func_800F654C
    /* 6B74C 8015D34C 03000424 */   addiu     $a0, $zero, 0x3
    /* 6B750 8015D350 434C050C */  jal        func_8015310C
    /* 6B754 8015D354 00000000 */   nop
    /* 6B758 8015D358 84DC030C */  jal        func_800F7210
    /* 6B75C 8015D35C 98350424 */   addiu     $a0, $zero, 0x3598
    /* 6B760 8015D360 DADA030C */  jal        func_800F6B68
    /* 6B764 8015D364 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6B768 8015D368 0DD9030C */  jal        func_800F6434
    /* 6B76C 8015D36C 80800434 */   ori       $a0, $zero, 0x8080
    /* 6B770 8015D370 09004014 */  bnez       $v0, .L8015D398
    /* 6B774 8015D374 00000000 */   nop
    /* 6B778 8015D378 3BE4030C */  jal        func_800F90EC
    /* 6B77C 8015D37C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6B780 8015D380 53D9030C */  jal        func_800F654C
    /* 6B784 8015D384 01000424 */   addiu     $a0, $zero, 0x1
    /* 6B788 8015D388 DAE1030C */  jal        func_800F8768
    /* 6B78C 8015D38C 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6B790 8015D390 3BE4030C */  jal        func_800F90EC
    /* 6B794 8015D394 052A0424 */   addiu     $a0, $zero, 0x2A05
  .L8015D398:
    /* 6B798 8015D398 8CD9030C */  jal        func_800F6630
    /* 6B79C 8015D39C D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6B7A0 8015D3A0 50D4030C */  jal        func_800F5140
    /* 6B7A4 8015D3A4 00000000 */   nop
    /* 6B7A8 8015D3A8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B7AC 8015D3AC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B7B0 8015D3B0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6B7B4 8015D3B4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6B7B8 8015D3B8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B7BC 8015D3BC EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6B7C0 8015D3C0 DADA030C */  jal        func_800F6B68
    /* 6B7C4 8015D3C4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B7C8 8015D3C8 92D0030C */  jal        func_800F4248
    /* 6B7CC 8015D3CC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6B7D0 8015D3D0 DAE1030C */  jal        func_800F8768
    /* 6B7D4 8015D3D4 EB290424 */   addiu     $a0, $zero, 0x29EB
    /* 6B7D8 8015D3D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B7DC 8015D3DC 00000000 */  nop
    /* 6B7E0 8015D3E0 0800E003 */  jr         $ra
    /* 6B7E4 8015D3E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D310
