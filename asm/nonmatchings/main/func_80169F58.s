nonmatching func_80169F58, 0x128

glabel func_80169F58
    /* 78358 80169F58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7835C 80169F5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78360 80169F60 28B1050C */  jal        func_8016C4A0
    /* 78364 80169F64 00000000 */   nop
    /* 78368 80169F68 77DC030C */  jal        func_800F71DC
    /* 7836C 80169F6C 00CC0434 */   ori       $a0, $zero, 0xCC00
    /* 78370 80169F70 5BE3030C */  jal        func_800F8D6C
    /* 78374 80169F74 21200000 */   addu      $a0, $zero, $zero
    /* 78378 80169F78 53D9030C */  jal        func_800F654C
    /* 7837C 80169F7C 15000424 */   addiu     $a0, $zero, 0x15
    /* 78380 80169F80 93E0030C */  jal        func_800F824C
    /* 78384 80169F84 02000424 */   addiu     $a0, $zero, 0x2
    /* 78388 80169F88 C7E5030C */  jal        func_800F971C
    /* 7838C 80169F8C 00000000 */   nop
    /* 78390 80169F90 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 78394 80169F94 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 78398 80169F98 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7839C 80169F9C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 783A0 80169FA0 00004394 */  lhu        $v1, 0x0($v0)
    /* 783A4 80169FA4 0A000424 */  addiu      $a0, $zero, 0xA
    /* 783A8 80169FA8 5BE3030C */  jal        func_800F8D6C
    /* 783AC 80169FAC 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80169FB0:
    /* 783B0 80169FB0 65DD030C */  jal        func_800F7594
    /* 783B4 80169FB4 0A000424 */   addiu     $a0, $zero, 0xA
    /* 783B8 80169FB8 53D9030C */  jal        func_800F654C
    /* 783BC 80169FBC 20000424 */   addiu     $a0, $zero, 0x20
    /* 783C0 80169FC0 93E0030C */  jal        func_800F824C
    /* 783C4 80169FC4 08000424 */   addiu     $a0, $zero, 0x8
  .L80169FC8:
    /* 783C8 80169FC8 FFD9030C */  jal        func_800F67FC
    /* 783CC 80169FCC 21200000 */   addu      $a0, $zero, $zero
    /* 783D0 80169FD0 DAE1030C */  jal        func_800F8768
    /* 783D4 80169FD4 03270424 */   addiu     $a0, $zero, 0x2703
    /* 783D8 80169FD8 91E5030C */  jal        func_800F9644
    /* 783DC 80169FDC 20000424 */   addiu     $a0, $zero, 0x20
    /* 783E0 80169FE0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 783E4 80169FE4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 783E8 80169FE8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 783EC 80169FEC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 783F0 80169FF0 00006294 */  lhu        $v0, 0x0($v1)
    /* 783F4 80169FF4 04D5030C */  jal        func_800F5410
    /* 783F8 80169FF8 000082A4 */   sh        $v0, 0x0($a0)
    /* 783FC 80169FFC 19D0030C */  jal        func_800F4064
    /* 78400 8016A000 20000424 */   addiu     $a0, $zero, 0x20
    /* 78404 8016A004 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 78408 8016A008 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7840C 8016A00C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 78410 8016A010 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 78414 8016A014 00006294 */  lhu        $v0, 0x0($v1)
    /* 78418 8016A018 C7E5030C */  jal        func_800F971C
    /* 7841C 8016A01C 000082A4 */   sh        $v0, 0x0($a0)
    /* 78420 8016A020 98E5030C */  jal        func_800F9660
    /* 78424 8016A024 20000424 */   addiu     $a0, $zero, 0x20
    /* 78428 8016A028 D9D8030C */  jal        func_800F6364
    /* 7842C 8016A02C 00000000 */   nop
    /* 78430 8016A030 68D7030C */  jal        func_800F5DA0
    /* 78434 8016A034 08000424 */   addiu     $a0, $zero, 0x8
    /* 78438 8016A038 E3D6030C */  jal        func_800F5B8C
    /* 7843C 8016A03C 02020424 */   addiu     $a0, $zero, 0x202
    /* 78440 8016A040 E1FF4014 */  bnez       $v0, .L80169FC8
    /* 78444 8016A044 00000000 */   nop
    /* 78448 8016A048 AFD8030C */  jal        func_800F62BC
    /* 7844C 8016A04C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78450 8016A050 8CD9030C */  jal        func_800F6630
    /* 78454 8016A054 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78458 8016A058 5DD5030C */  jal        func_800F5574
    /* 7845C 8016A05C 20000424 */   addiu     $a0, $zero, 0x20
    /* 78460 8016A060 F5D4030C */  jal        func_800F53D4
    /* 78464 8016A064 00000000 */   nop
    /* 78468 8016A068 D1FF4010 */  beqz       $v0, .L80169FB0
    /* 7846C 8016A06C 00000000 */   nop
    /* 78470 8016A070 1000BF8F */  lw         $ra, 0x10($sp)
    /* 78474 8016A074 00000000 */  nop
    /* 78478 8016A078 0800E003 */  jr         $ra
    /* 7847C 8016A07C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80169F58
