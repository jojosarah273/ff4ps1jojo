nonmatching func_8016A208, 0x188

glabel func_8016A208
    /* 78608 8016A208 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7860C 8016A20C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78610 8016A210 77DC030C */  jal        func_800F71DC
    /* 78614 8016A214 00FE0434 */   ori       $a0, $zero, 0xFE00
    /* 78618 8016A218 5BE3030C */  jal        func_800F8D6C
    /* 7861C 8016A21C 66000424 */   addiu     $a0, $zero, 0x66
    /* 78620 8016A220 77DC030C */  jal        func_800F71DC
    /* 78624 8016A224 00800434 */   ori       $a0, $zero, 0x8000
    /* 78628 8016A228 5BE3030C */  jal        func_800F8D6C
    /* 7862C 8016A22C 53000424 */   addiu     $a0, $zero, 0x53
    /* 78630 8016A230 53D9030C */  jal        func_800F654C
    /* 78634 8016A234 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 78638 8016A238 93E0030C */  jal        func_800F824C
    /* 7863C 8016A23C 55000424 */   addiu     $a0, $zero, 0x55
    /* 78640 8016A240 77DC030C */  jal        func_800F71DC
    /* 78644 8016A244 21200000 */   addu      $a0, $zero, $zero
  .L8016A248:
    /* 78648 8016A248 CCE4030C */  jal        func_800F9330
    /* 7864C 8016A24C 00000000 */   nop
    /* 78650 8016A250 39A9050C */  jal        func_8016A4E4
    /* 78654 8016A254 00000000 */   nop
    /* 78658 8016A258 77DC030C */  jal        func_800F71DC
    /* 7865C 8016A25C 032F0424 */   addiu     $a0, $zero, 0x2F03
    /* 78660 8016A260 5BE3030C */  jal        func_800F8D6C
    /* 78664 8016A264 21200000 */   addu      $a0, $zero, $zero
    /* 78668 8016A268 C7E5030C */  jal        func_800F971C
    /* 7866C 8016A26C 00000000 */   nop
    /* 78670 8016A270 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 78674 8016A274 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 78678 8016A278 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7867C 8016A27C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 78680 8016A280 00004394 */  lhu        $v1, 0x0($v0)
    /* 78684 8016A284 0A000424 */  addiu      $a0, $zero, 0xA
    /* 78688 8016A288 5BE3030C */  jal        func_800F8D6C
    /* 7868C 8016A28C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016A290:
    /* 78690 8016A290 65DD030C */  jal        func_800F7594
    /* 78694 8016A294 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78698 8016A298 53D9030C */  jal        func_800F654C
    /* 7869C 8016A29C 20000424 */   addiu     $a0, $zero, 0x20
    /* 786A0 8016A2A0 93E0030C */  jal        func_800F824C
    /* 786A4 8016A2A4 08000424 */   addiu     $a0, $zero, 0x8
  .L8016A2A8:
    /* 786A8 8016A2A8 B6D9030C */  jal        func_800F66D8
    /* 786AC 8016A2AC 21200000 */   addu      $a0, $zero, $zero
    /* 786B0 8016A2B0 A3E2030C */  jal        func_800F8A8C
    /* 786B4 8016A2B4 53000424 */   addiu     $a0, $zero, 0x53
    /* 786B8 8016A2B8 91E5030C */  jal        func_800F9644
    /* 786BC 8016A2BC 20000424 */   addiu     $a0, $zero, 0x20
    /* 786C0 8016A2C0 BCD8030C */  jal        func_800F62F0
    /* 786C4 8016A2C4 53000424 */   addiu     $a0, $zero, 0x53
    /* 786C8 8016A2C8 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 786CC 8016A2CC 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 786D0 8016A2D0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 786D4 8016A2D4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 786D8 8016A2D8 00006294 */  lhu        $v0, 0x0($v1)
    /* 786DC 8016A2DC 04D5030C */  jal        func_800F5410
    /* 786E0 8016A2E0 000082A4 */   sh        $v0, 0x0($a0)
    /* 786E4 8016A2E4 19D0030C */  jal        func_800F4064
    /* 786E8 8016A2E8 20000424 */   addiu     $a0, $zero, 0x20
    /* 786EC 8016A2EC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 786F0 8016A2F0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 786F4 8016A2F4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 786F8 8016A2F8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 786FC 8016A2FC 00006294 */  lhu        $v0, 0x0($v1)
    /* 78700 8016A300 C7E5030C */  jal        func_800F971C
    /* 78704 8016A304 000082A4 */   sh        $v0, 0x0($a0)
    /* 78708 8016A308 98E5030C */  jal        func_800F9660
    /* 7870C 8016A30C 20000424 */   addiu     $a0, $zero, 0x20
    /* 78710 8016A310 D9D8030C */  jal        func_800F6364
    /* 78714 8016A314 00000000 */   nop
    /* 78718 8016A318 68D7030C */  jal        func_800F5DA0
    /* 7871C 8016A31C 08000424 */   addiu     $a0, $zero, 0x8
    /* 78720 8016A320 E3D6030C */  jal        func_800F5B8C
    /* 78724 8016A324 02020424 */   addiu     $a0, $zero, 0x202
    /* 78728 8016A328 DFFF4014 */  bnez       $v0, .L8016A2A8
    /* 7872C 8016A32C 00000000 */   nop
    /* 78730 8016A330 AFD8030C */  jal        func_800F62BC
    /* 78734 8016A334 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78738 8016A338 8CD9030C */  jal        func_800F6630
    /* 7873C 8016A33C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 78740 8016A340 5DD5030C */  jal        func_800F5574
    /* 78744 8016A344 20000424 */   addiu     $a0, $zero, 0x20
    /* 78748 8016A348 F5D4030C */  jal        func_800F53D4
    /* 7874C 8016A34C 00000000 */   nop
    /* 78750 8016A350 CFFF4010 */  beqz       $v0, .L8016A290
    /* 78754 8016A354 00000000 */   nop
    /* 78758 8016A358 68E5030C */  jal        func_800F95A0
    /* 7875C 8016A35C 00000000 */   nop
    /* 78760 8016A360 D9D8030C */  jal        func_800F6364
    /* 78764 8016A364 00000000 */   nop
    /* 78768 8016A368 56D6030C */  jal        func_800F5958
    /* 7876C 8016A36C 20000424 */   addiu     $a0, $zero, 0x20
    /* 78770 8016A370 F5D4030C */  jal        func_800F53D4
    /* 78774 8016A374 00000000 */   nop
    /* 78778 8016A378 B3FF4010 */  beqz       $v0, .L8016A248
    /* 7877C 8016A37C 00000000 */   nop
    /* 78780 8016A380 1000BF8F */  lw         $ra, 0x10($sp)
    /* 78784 8016A384 00000000 */  nop
    /* 78788 8016A388 0800E003 */  jr         $ra
    /* 7878C 8016A38C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016A208
