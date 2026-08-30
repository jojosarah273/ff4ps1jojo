nonmatching func_8017D078, 0x760

glabel func_8017D078
    /* 8B478 8017D078 B8F7BD27 */  addiu      $sp, $sp, -0x848
    /* 8B47C 8017D07C 3C08B7AF */  sw         $s7, 0x83C($sp)
    /* 8B480 8017D080 21B88000 */  addu       $s7, $a0, $zero
    /* 8B484 8017D084 1D80043C */  lui        $a0, %hi(D_801CFD68)
    /* 8B488 8017D088 68FD8324 */  addiu      $v1, $a0, %lo(D_801CFD68)
    /* 8B48C 8017D08C 00800234 */  ori        $v0, $zero, 0x8000
    /* 8B490 8017D090 21306200 */  addu       $a2, $v1, $v0
    /* 8B494 8017D094 4408BFAF */  sw         $ra, 0x844($sp)
    /* 8B498 8017D098 4008BEAF */  sw         $fp, 0x840($sp)
    /* 8B49C 8017D09C 3808B6AF */  sw         $s6, 0x838($sp)
    /* 8B4A0 8017D0A0 3408B5AF */  sw         $s5, 0x834($sp)
    /* 8B4A4 8017D0A4 3008B4AF */  sw         $s4, 0x830($sp)
    /* 8B4A8 8017D0A8 2C08B3AF */  sw         $s3, 0x82C($sp)
    /* 8B4AC 8017D0AC 2808B2AF */  sw         $s2, 0x828($sp)
    /* 8B4B0 8017D0B0 2408B1AF */  sw         $s1, 0x824($sp)
    /* 8B4B4 8017D0B4 2008B0AF */  sw         $s0, 0x820($sp)
    /* 8B4B8 8017D0B8 823FC794 */  lhu        $a3, 0x3F82($a2)
    /* 8B4BC 8017D0BC E9020224 */  addiu      $v0, $zero, 0x2E9
    /* 8B4C0 8017D0C0 1900E214 */  bne        $a3, $v0, .L8017D128
    /* 8B4C4 8017D0C4 FF00A530 */   andi      $a1, $a1, 0xFF
    /* 8B4C8 8017D0C8 8A3FC494 */  lhu        $a0, 0x3F8A($a2)
    /* 8B4CC 8017D0CC FB020224 */  addiu      $v0, $zero, 0x2FB
    /* 8B4D0 8017D0D0 16008214 */  bne        $a0, $v0, .L8017D12C
    /* 8B4D4 8017D0D4 7043F126 */   addiu     $s1, $s7, 0x4370
    /* 8B4D8 8017D0D8 F8020224 */  addiu      $v0, $zero, 0x2F8
    /* 8B4DC 8017D0DC F9020324 */  addiu      $v1, $zero, 0x2F9
    /* 8B4E0 8017D0E0 0A3FC2A4 */  sh         $v0, 0x3F0A($a2)
    /* 8B4E4 8017D0E4 FF020224 */  addiu      $v0, $zero, 0x2FF
    /* 8B4E8 8017D0E8 4A3FC2A4 */  sh         $v0, 0x3F4A($a2)
    /* 8B4EC 8017D0EC FD020224 */  addiu      $v0, $zero, 0x2FD
    /* 8B4F0 8017D0F0 0C3FC3A4 */  sh         $v1, 0x3F0C($a2)
    /* 8B4F4 8017D0F4 FE020324 */  addiu      $v1, $zero, 0x2FE
    /* 8B4F8 8017D0F8 CA3FC2A4 */  sh         $v0, 0x3FCA($a2)
    /* 8B4FC 8017D0FC EA020224 */  addiu      $v0, $zero, 0x2EA
    /* 8B500 8017D100 CC3FC3A4 */  sh         $v1, 0x3FCC($a2)
    /* 8B504 8017D104 EB020324 */  addiu      $v1, $zero, 0x2EB
    /* 8B508 8017D108 843FC2A4 */  sh         $v0, 0x3F84($a2)
    /* 8B50C 8017D10C EC020224 */  addiu      $v0, $zero, 0x2EC
    /* 8B510 8017D110 4C3FC4A4 */  sh         $a0, 0x3F4C($a2)
    /* 8B514 8017D114 8C3FC4A4 */  sh         $a0, 0x3F8C($a2)
    /* 8B518 8017D118 823FC7A4 */  sh         $a3, 0x3F82($a2)
    /* 8B51C 8017D11C 863FC3A4 */  sh         $v1, 0x3F86($a2)
    /* 8B520 8017D120 883FC3A4 */  sh         $v1, 0x3F88($a2)
    /* 8B524 8017D124 8A3FC2A4 */  sh         $v0, 0x3F8A($a2)
  .L8017D128:
    /* 8B528 8017D128 7043F126 */  addiu      $s1, $s7, 0x4370
  .L8017D12C:
    /* 8B52C 8017D12C 0100023C */  lui        $v0, (0x14D10 >> 16)
    /* 8B530 8017D130 104D4234 */  ori        $v0, $v0, (0x14D10 & 0xFFFF)
    /* 8B534 8017D134 1A80163C */  lui        $s6, %hi(D_8019EDF0)
    /* 8B538 8017D138 F0EDD626 */  addiu      $s6, $s6, %lo(D_8019EDF0)
    /* 8B53C 8017D13C 1A80043C */  lui        $a0, %hi(D_8019FFE8)
    /* 8B540 8017D140 E8FF8824 */  addiu      $t0, $a0, %lo(D_8019FFE8)
    /* 8B544 8017D144 2110E202 */  addu       $v0, $s7, $v0
    /* 8B548 8017D148 0400C8AE */  sw         $t0, 0x4($s6)
    /* 8B54C 8017D14C 0D80033C */  lui        $v1, %hi(D_800D2105)
    /* 8B550 8017D150 05216390 */  lbu        $v1, %lo(D_800D2105)($v1)
    /* 8B554 8017D154 8C0182AF */  sw         $v0, %gp_rel(D_8019EE88)($gp)
    /* 8B558 8017D158 07000224 */  addiu      $v0, $zero, 0x7
    /* 8B55C 8017D15C 07006730 */  andi       $a3, $v1, 0x7
    /* 8B560 8017D160 1B00E214 */  bne        $a3, $v0, .L8017D1D0
    /* 8B564 8017D164 1000B227 */   addiu     $s2, $sp, 0x10
    /* 8B568 8017D168 0100A230 */  andi       $v0, $a1, 0x1
    /* 8B56C 8017D16C 8E014010 */  beqz       $v0, .L8017D7A8
    /* 8B570 8017D170 21204002 */   addu      $a0, $s2, $zero
    /* 8B574 8017D174 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 8B578 8017D178 68FD4524 */  addiu      $a1, $v0, %lo(D_801CFD68)
    /* 8B57C 8017D17C 1A80023C */  lui        $v0, %hi(D_8019EE60)
    /* 8B580 8017D180 60EE4294 */  lhu        $v0, %lo(D_8019EE60)($v0)
    /* 8B584 8017D184 1A80033C */  lui        $v1, %hi(D_8019EE68)
    /* 8B588 8017D188 68EE6394 */  lhu        $v1, %lo(D_8019EE68)($v1)
    /* 8B58C 8017D18C 2130C002 */  addu       $a2, $s6, $zero
    /* 8B590 8017D190 1A80013C */  lui        $at, %hi(D_8019EDF0)
    /* 8B594 8017D194 F0ED27AC */  sw         $a3, %lo(D_8019EDF0)($at)
    /* 8B598 8017D198 1A80073C */  lui        $a3, %hi(D_8019FFE8)
    /* 8B59C 8017D19C E8FFE2A4 */  sh         $v0, %lo(D_8019FFE8)($a3)
    /* 8B5A0 8017D1A0 6E09060C */  jal        func_801825B8
    /* 8B5A4 8017D1A4 020003A5 */   sh        $v1, 0x2($t0)
    /* 8B5A8 8017D1A8 2120E002 */  addu       $a0, $s7, $zero
    /* 8B5AC 8017D1AC 21284002 */  addu       $a1, $s2, $zero
    /* 8B5B0 8017D1B0 21302002 */  addu       $a2, $s1, $zero
    /* 8B5B4 8017D1B4 1A80023C */  lui        $v0, %hi(D_8019EE2C)
    /* 8B5B8 8017D1B8 2CEE4294 */  lhu        $v0, %lo(D_8019EE2C)($v0)
    /* 8B5BC 8017D1BC 2138C002 */  addu       $a3, $s6, $zero
    /* 8B5C0 8017D1C0 82E8050C */  jal        func_8017A208
    /* 8B5C4 8017D1C4 0E08A2A7 */   sh        $v0, 0x80E($sp)
    /* 8B5C8 8017D1C8 EAF50508 */  j          .L8017D7A8
    /* 8B5CC 8017D1CC 00000000 */   nop
  .L8017D1D0:
    /* 8B5D0 8017D1D0 88018287 */  lh         $v0, %gp_rel(D_8019EE84)($gp)
    /* 8B5D4 8017D1D4 88018397 */  lhu        $v1, %gp_rel(D_8019EE84)($gp)
    /* 8B5D8 8017D1D8 02004010 */  beqz       $v0, .L8017D1E4
    /* 8B5DC 8017D1DC FFFF6224 */   addiu     $v0, $v1, -0x1
    /* 8B5E0 8017D1E0 880182A7 */  sh         $v0, %gp_rel(D_8019EE84)($gp)
  .L8017D1E4:
    /* 8B5E4 8017D1E4 0200A230 */  andi       $v0, $a1, 0x2
    /* 8B5E8 8017D1E8 0100A330 */  andi       $v1, $a1, 0x1
    /* 8B5EC 8017D1EC 0800A730 */  andi       $a3, $a1, 0x8
    /* 8B5F0 8017D1F0 0400A530 */  andi       $a1, $a1, 0x4
    /* 8B5F4 8017D1F4 1008A3AF */  sw         $v1, 0x810($sp)
    /* 8B5F8 8017D1F8 1808A7AF */  sw         $a3, 0x818($sp)
    /* 8B5FC 8017D1FC 45004010 */  beqz       $v0, .L8017D314
    /* 8B600 8017D200 1408A5AF */   sw        $a1, 0x814($sp)
    /* 8B604 8017D204 01000224 */  addiu      $v0, $zero, 0x1
    /* 8B608 8017D208 1A80013C */  lui        $at, %hi(D_8019EDF0)
    /* 8B60C 8017D20C F0ED22AC */  sw         $v0, %lo(D_8019EDF0)($at)
    /* 8B610 8017D210 02000224 */  addiu      $v0, $zero, 0x2
    /* 8B614 8017D214 0D80033C */  lui        $v1, %hi(D_800D0203)
    /* 8B618 8017D218 03026390 */  lbu        $v1, %lo(D_800D0203)($v1)
    /* 8B61C 8017D21C 0D80143C */  lui        $s4, %hi(D_800D2108)
    /* 8B620 8017D220 08219492 */  lbu        $s4, %lo(D_800D2108)($s4)
    /* 8B624 8017D224 02006210 */  beq        $v1, $v0, .L8017D230
    /* 8B628 8017D228 12001324 */   addiu     $s3, $zero, 0x12
    /* 8B62C 8017D22C 11001324 */  addiu      $s3, $zero, 0x11
  .L8017D230:
    /* 8B630 8017D230 2800622A */  slti       $v0, $s3, 0x28
    /* 8B634 8017D234 37004010 */  beqz       $v0, .L8017D314
    /* 8B638 8017D238 00000000 */   nop
    /* 8B63C 8017D23C 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8B640 8017D240 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8B644 8017D244 00000000 */  nop
    /* 8B648 8017D248 E1004228 */  slti       $v0, $v0, 0xE1
    /* 8B64C 8017D24C 31004010 */  beqz       $v0, .L8017D314
    /* 8B650 8017D250 1E80023C */   lui       $v0, %hi(D_801E01B8)
    /* 8B654 8017D254 B8014324 */  addiu      $v1, $v0, %lo(D_801E01B8)
    /* 8B658 8017D258 0400648C */  lw         $a0, 0x4($v1)
    /* 8B65C 8017D25C 00000000 */  nop
    /* 8B660 8017D260 2C009310 */  beq        $a0, $s3, .L8017D314
    /* 8B664 8017D264 00121400 */   sll       $v0, $s4, 8
    /* 8B668 8017D268 00FC4230 */  andi       $v0, $v0, 0xFC00
    /* 8B66C 8017D26C 40A80200 */  sll        $s5, $v0, 1
    /* 8B670 8017D270 C0181300 */  sll        $v1, $s3, 3
    /* 8B674 8017D274 23187300 */  subu       $v1, $v1, $s3
    /* 8B678 8017D278 40180300 */  sll        $v1, $v1, 1
    /* 8B67C 8017D27C 21806800 */  addu       $s0, $v1, $t0
    /* 8B680 8017D280 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 8B684 8017D284 68FD5E24 */  addiu      $fp, $v0, %lo(D_801CFD68)
    /* 8B688 8017D288 03008432 */  andi       $a0, $s4, 0x3
  .L8017D28C:
    /* 8B68C 8017D28C 21284002 */  addu       $a1, $s2, $zero
    /* 8B690 8017D290 2130BE02 */  addu       $a2, $s5, $fp
    /* 8B694 8017D294 2138C002 */  addu       $a3, $s6, $zero
    /* 8B698 8017D298 DFF6050C */  jal        func_8017DB7C
    /* 8B69C 8017D29C 0400D0AE */   sw        $s0, 0x4($s6)
    /* 8B6A0 8017D2A0 2120E002 */  addu       $a0, $s7, $zero
    /* 8B6A4 8017D2A4 21284002 */  addu       $a1, $s2, $zero
    /* 8B6A8 8017D2A8 21302002 */  addu       $a2, $s1, $zero
    /* 8B6AC 8017D2AC 2138C002 */  addu       $a3, $s6, $zero
    /* 8B6B0 8017D2B0 1A80023C */  lui        $v0, %hi(D_8019EE2E)
    /* 8B6B4 8017D2B4 2EEE4294 */  lhu        $v0, %lo(D_8019EE2E)($v0)
    /* 8B6B8 8017D2B8 01007326 */  addiu      $s3, $s3, 0x1
    /* 8B6BC 8017D2BC 82E8050C */  jal        func_8017A208
    /* 8B6C0 8017D2C0 0E08A2A7 */   sh        $v0, 0x80E($sp)
    /* 8B6C4 8017D2C4 21884000 */  addu       $s1, $v0, $zero
    /* 8B6C8 8017D2C8 2120E002 */  addu       $a0, $s7, $zero
    /* 8B6CC 8017D2CC 21280002 */  addu       $a1, $s0, $zero
    /* 8B6D0 8017D2D0 0A000686 */  lh         $a2, 0xA($s0)
    /* 8B6D4 8017D2D4 E5F9050C */  jal        func_8017E794
    /* 8B6D8 8017D2D8 0E001026 */   addiu     $s0, $s0, 0xE
    /* 8B6DC 8017D2DC 2800622A */  slti       $v0, $s3, 0x28
    /* 8B6E0 8017D2E0 0C004010 */  beqz       $v0, .L8017D314
    /* 8B6E4 8017D2E4 00000000 */   nop
    /* 8B6E8 8017D2E8 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8B6EC 8017D2EC 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8B6F0 8017D2F0 00000000 */  nop
    /* 8B6F4 8017D2F4 E1004228 */  slti       $v0, $v0, 0xE1
    /* 8B6F8 8017D2F8 06004010 */  beqz       $v0, .L8017D314
    /* 8B6FC 8017D2FC 1E80033C */   lui       $v1, %hi(D_801E01B8)
    /* 8B700 8017D300 B8016224 */  addiu      $v0, $v1, %lo(D_801E01B8)
    /* 8B704 8017D304 0400438C */  lw         $v1, 0x4($v0)
    /* 8B708 8017D308 00000000 */  nop
    /* 8B70C 8017D30C DFFF7314 */  bne        $v1, $s3, .L8017D28C
    /* 8B710 8017D310 03008432 */   andi      $a0, $s4, 0x3
  .L8017D314:
    /* 8B714 8017D314 1808A78F */  lw         $a3, 0x818($sp)
    /* 8B718 8017D318 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8B71C 8017D31C 70EE20A4 */  sh         $zero, %lo(D_8019EE70)($at)
    /* 8B720 8017D320 2400E010 */  beqz       $a3, .L8017D3B4
    /* 8B724 8017D324 00000000 */   nop
    /* 8B728 8017D328 0D80023C */  lui        $v0, %hi(D_800D2105)
    /* 8B72C 8017D32C 05214290 */  lbu        $v0, %lo(D_800D2105)($v0)
    /* 8B730 8017D330 00000000 */  nop
    /* 8B734 8017D334 07004230 */  andi       $v0, $v0, 0x7
    /* 8B738 8017D338 1E004014 */  bnez       $v0, .L8017D3B4
    /* 8B73C 8017D33C 21284002 */   addu      $a1, $s2, $zero
    /* 8B740 8017D340 2138C002 */  addu       $a3, $s6, $zero
    /* 8B744 8017D344 03000224 */  addiu      $v0, $zero, 0x3
    /* 8B748 8017D348 1A80103C */  lui        $s0, %hi(D_801A0218)
    /* 8B74C 8017D34C 18021026 */  addiu      $s0, $s0, %lo(D_801A0218)
    /* 8B750 8017D350 0D80143C */  lui        $s4, %hi(D_800D210A)
    /* 8B754 8017D354 0A219492 */  lbu        $s4, %lo(D_800D210A)($s4)
    /* 8B758 8017D358 1D80033C */  lui        $v1, %hi(D_801CFD68)
    /* 8B75C 8017D35C 0000C2AE */  sw         $v0, 0x0($s6)
    /* 8B760 8017D360 68FD6224 */  addiu      $v0, $v1, %lo(D_801CFD68)
    /* 8B764 8017D364 0400D0AE */  sw         $s0, 0x4($s6)
    /* 8B768 8017D368 03008432 */  andi       $a0, $s4, 0x3
    /* 8B76C 8017D36C 00321400 */  sll        $a2, $s4, 8
    /* 8B770 8017D370 00FCC630 */  andi       $a2, $a2, 0xFC00
    /* 8B774 8017D374 40300600 */  sll        $a2, $a2, 1
    /* 8B778 8017D378 DFF6050C */  jal        func_8017DB7C
    /* 8B77C 8017D37C 2130C200 */   addu      $a2, $a2, $v0
    /* 8B780 8017D380 2120E002 */  addu       $a0, $s7, $zero
    /* 8B784 8017D384 21284002 */  addu       $a1, $s2, $zero
    /* 8B788 8017D388 21302002 */  addu       $a2, $s1, $zero
    /* 8B78C 8017D38C 1A80023C */  lui        $v0, %hi(D_8019EE30)
    /* 8B790 8017D390 30EE4294 */  lhu        $v0, %lo(D_8019EE30)($v0)
    /* 8B794 8017D394 2138C002 */  addu       $a3, $s6, $zero
    /* 8B798 8017D398 82E8050C */  jal        func_8017A208
    /* 8B79C 8017D39C 0E08A2A7 */   sh        $v0, 0x80E($sp)
    /* 8B7A0 8017D3A0 21884000 */  addu       $s1, $v0, $zero
    /* 8B7A4 8017D3A4 21280002 */  addu       $a1, $s0, $zero
    /* 8B7A8 8017D3A8 0A00A684 */  lh         $a2, 0xA($a1)
    /* 8B7AC 8017D3AC E5F9050C */  jal        func_8017E794
    /* 8B7B0 8017D3B0 2120E002 */   addu      $a0, $s7, $zero
  .L8017D3B4:
    /* 8B7B4 8017D3B4 1408A78F */  lw         $a3, 0x814($sp)
    /* 8B7B8 8017D3B8 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8B7BC 8017D3BC 70EE20A4 */  sh         $zero, %lo(D_8019EE70)($at)
    /* 8B7C0 8017D3C0 B000E010 */  beqz       $a3, .L8017D684
    /* 8B7C4 8017D3C4 02000224 */   addiu     $v0, $zero, 0x2
    /* 8B7C8 8017D3C8 1A80033C */  lui        $v1, %hi(D_801A0012)
    /* 8B7CC 8017D3CC 0D80143C */  lui        $s4, %hi(D_800D2109)
    /* 8B7D0 8017D3D0 09219492 */  lbu        $s4, %lo(D_800D2109)($s4)
    /* 8B7D4 8017D3D4 12006324 */  addiu      $v1, $v1, %lo(D_801A0012)
    /* 8B7D8 8017D3D8 0000C2AE */  sw         $v0, 0x0($s6)
    /* 8B7DC 8017D3DC 01000224 */  addiu      $v0, $zero, 0x1
    /* 8B7E0 8017D3E0 03008432 */  andi       $a0, $s4, 0x3
    /* 8B7E4 8017D3E4 0D008214 */  bne        $a0, $v0, .L8017D41C
    /* 8B7E8 8017D3E8 0400C3AE */   sw        $v1, 0x4($s6)
    /* 8B7EC 8017D3EC 01000424 */  addiu      $a0, $zero, 0x1
    /* 8B7F0 8017D3F0 21284002 */  addu       $a1, $s2, $zero
    /* 8B7F4 8017D3F4 00821400 */  sll        $s0, $s4, 8
    /* 8B7F8 8017D3F8 00FC0632 */  andi       $a2, $s0, 0xFC00
    /* 8B7FC 8017D3FC 40300600 */  sll        $a2, $a2, 1
    /* 8B800 8017D400 1D80033C */  lui        $v1, %hi(D_801CFD68)
    /* 8B804 8017D404 68FD6224 */  addiu      $v0, $v1, %lo(D_801CFD68)
    /* 8B808 8017D408 2130C200 */  addu       $a2, $a2, $v0
    /* 8B80C 8017D40C 0AF7050C */  jal        func_8017DC28
    /* 8B810 8017D410 2138C002 */   addu      $a3, $s6, $zero
    /* 8B814 8017D414 11F50508 */  j          .L8017D444
    /* 8B818 8017D418 01000324 */   addiu     $v1, $zero, 0x1
  .L8017D41C:
    /* 8B81C 8017D41C 21284002 */  addu       $a1, $s2, $zero
    /* 8B820 8017D420 00821400 */  sll        $s0, $s4, 8
    /* 8B824 8017D424 00FC0632 */  andi       $a2, $s0, 0xFC00
    /* 8B828 8017D428 40300600 */  sll        $a2, $a2, 1
    /* 8B82C 8017D42C 1D80073C */  lui        $a3, %hi(D_801CFD68)
    /* 8B830 8017D430 68FDE224 */  addiu      $v0, $a3, %lo(D_801CFD68)
    /* 8B834 8017D434 2130C200 */  addu       $a2, $a2, $v0
    /* 8B838 8017D438 DFF6050C */  jal        func_8017DB7C
    /* 8B83C 8017D43C 2138C002 */   addu      $a3, $s6, $zero
    /* 8B840 8017D440 01000324 */  addiu      $v1, $zero, 0x1
  .L8017D444:
    /* 8B844 8017D444 1A80023C */  lui        $v0, %hi(D_8019EE30)
    /* 8B848 8017D448 30EE4294 */  lhu        $v0, %lo(D_8019EE30)($v0)
    /* 8B84C 8017D44C 03009532 */  andi       $s5, $s4, 0x3
    /* 8B850 8017D450 1E00A316 */  bne        $s5, $v1, .L8017D4CC
    /* 8B854 8017D454 0E08A2A7 */   sh        $v0, 0x80E($sp)
    /* 8B858 8017D458 1BF50508 */  j          .L8017D46C
    /* 8B85C 8017D45C 21200000 */   addu      $a0, $zero, $zero
  .L8017D460:
    /* 8B860 8017D460 20008228 */  slti       $v0, $a0, 0x20
    /* 8B864 8017D464 19004010 */  beqz       $v0, .L8017D4CC
    /* 8B868 8017D468 00000000 */   nop
  .L8017D46C:
    /* 8B86C 8017D46C 1A80023C */  lui        $v0, %hi(D_8019F628)
    /* 8B870 8017D470 28F64224 */  addiu      $v0, $v0, %lo(D_8019F628)
    /* 8B874 8017D474 40180400 */  sll        $v1, $a0, 1
    /* 8B878 8017D478 21186400 */  addu       $v1, $v1, $a0
    /* 8B87C 8017D47C 02006324 */  addiu      $v1, $v1, 0x2
    /* 8B880 8017D480 80280300 */  sll        $a1, $v1, 2
    /* 8B884 8017D484 2110A200 */  addu       $v0, $a1, $v0
    /* 8B888 8017D488 0000438C */  lw         $v1, 0x0($v0)
    /* 8B88C 8017D48C 00000000 */  nop
    /* 8B890 8017D490 07006014 */  bnez       $v1, .L8017D4B0
    /* 8B894 8017D494 1A80023C */   lui       $v0, %hi(D_8019F4A8)
    /* 8B898 8017D498 A8F44224 */  addiu      $v0, $v0, %lo(D_8019F4A8)
    /* 8B89C 8017D49C 2110A200 */  addu       $v0, $a1, $v0
    /* 8B8A0 8017D4A0 0000438C */  lw         $v1, 0x0($v0)
    /* 8B8A4 8017D4A4 00000000 */  nop
    /* 8B8A8 8017D4A8 EDFF6010 */  beqz       $v1, .L8017D460
    /* 8B8AC 8017D4AC 01008424 */   addiu     $a0, $a0, 0x1
  .L8017D4B0:
    /* 8B8B0 8017D4B0 2120E002 */  addu       $a0, $s7, $zero
    /* 8B8B4 8017D4B4 21284002 */  addu       $a1, $s2, $zero
    /* 8B8B8 8017D4B8 21302002 */  addu       $a2, $s1, $zero
    /* 8B8BC 8017D4BC B1EA050C */  jal        func_8017AAC4
    /* 8B8C0 8017D4C0 2138C002 */   addu      $a3, $s6, $zero
    /* 8B8C4 8017D4C4 39F50508 */  j          .L8017D4E4
    /* 8B8C8 8017D4C8 21884000 */   addu      $s1, $v0, $zero
  .L8017D4CC:
    /* 8B8CC 8017D4CC 2120E002 */  addu       $a0, $s7, $zero
    /* 8B8D0 8017D4D0 21284002 */  addu       $a1, $s2, $zero
    /* 8B8D4 8017D4D4 21302002 */  addu       $a2, $s1, $zero
    /* 8B8D8 8017D4D8 82E8050C */  jal        func_8017A208
    /* 8B8DC 8017D4DC 2138C002 */   addu      $a3, $s6, $zero
    /* 8B8E0 8017D4E0 21884000 */  addu       $s1, $v0, $zero
  .L8017D4E4:
    /* 8B8E4 8017D4E4 2120E002 */  addu       $a0, $s7, $zero
    /* 8B8E8 8017D4E8 1A80023C */  lui        $v0, %hi(D_8019FFE8)
    /* 8B8EC 8017D4EC E8FF5424 */  addiu      $s4, $v0, %lo(D_8019FFE8)
    /* 8B8F0 8017D4F0 2A008526 */  addiu      $a1, $s4, 0x2A
    /* 8B8F4 8017D4F4 34008686 */  lh         $a2, 0x34($s4)
    /* 8B8F8 8017D4F8 01000224 */  addiu      $v0, $zero, 0x1
    /* 8B8FC 8017D4FC E5F9050C */  jal        func_8017E794
    /* 8B900 8017D500 370082A2 */   sb        $v0, 0x37($s4)
    /* 8B904 8017D504 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8B908 8017D508 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8B90C 8017D50C 00000000 */  nop
    /* 8B910 8017D510 E1004228 */  slti       $v0, $v0, 0xE1
    /* 8B914 8017D514 5B004010 */  beqz       $v0, .L8017D684
    /* 8B918 8017D518 04001324 */   addiu     $s3, $zero, 0x4
    /* 8B91C 8017D51C 1E80023C */  lui        $v0, %hi(D_801E01B8)
    /* 8B920 8017D520 B8014324 */  addiu      $v1, $v0, %lo(D_801E01B8)
    /* 8B924 8017D524 0800648C */  lw         $a0, 0x8($v1)
    /* 8B928 8017D528 00000000 */  nop
    /* 8B92C 8017D52C 55009310 */  beq        $a0, $s3, .L8017D684
    /* 8B930 8017D530 00FC0232 */   andi      $v0, $s0, 0xFC00
    /* 8B934 8017D534 40800200 */  sll        $s0, $v0, 1
    /* 8B938 8017D538 42008326 */  addiu      $v1, $s4, 0x42
    /* 8B93C 8017D53C 1C08A3AF */  sw         $v1, 0x81C($sp)
    /* 8B940 8017D540 38009426 */  addiu      $s4, $s4, 0x38
    /* 8B944 8017D544 21F08002 */  addu       $fp, $s4, $zero
    /* 8B948 8017D548 04000224 */  addiu      $v0, $zero, 0x4
  .L8017D54C:
    /* 8B94C 8017D54C 24006216 */  bne        $s3, $v0, .L8017D5E0
    /* 8B950 8017D550 0400D4AE */   sw        $s4, 0x4($s6)
    /* 8B954 8017D554 1A80033C */  lui        $v1, %hi(D_8019EDE8)
    /* 8B958 8017D558 E8ED6384 */  lh         $v1, %lo(D_8019EDE8)($v1)
    /* 8B95C 8017D55C 01000224 */  addiu      $v0, $zero, 0x1
    /* 8B960 8017D560 06006214 */  bne        $v1, $v0, .L8017D57C
    /* 8B964 8017D564 2120A002 */   addu      $a0, $s5, $zero
    /* 8B968 8017D568 21284002 */  addu       $a1, $s2, $zero
    /* 8B96C 8017D56C 1D80073C */  lui        $a3, %hi(D_801CFD68)
    /* 8B970 8017D570 68FDE724 */  addiu      $a3, $a3, %lo(D_801CFD68)
    /* 8B974 8017D574 7DF50508 */  j          .L8017D5F4
    /* 8B978 8017D578 21300702 */   addu      $a2, $s0, $a3
  .L8017D57C:
    /* 8B97C 8017D57C 21284002 */  addu       $a1, $s2, $zero
    /* 8B980 8017D580 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 8B984 8017D584 68FD4224 */  addiu      $v0, $v0, %lo(D_801CFD68)
    /* 8B988 8017D588 21300202 */  addu       $a2, $s0, $v0
    /* 8B98C 8017D58C 7C0180A7 */  sh         $zero, %gp_rel(D_8019EE78)($gp)
    /* 8B990 8017D590 0AF7050C */  jal        func_8017DC28
    /* 8B994 8017D594 2138C002 */   addu      $a3, $s6, $zero
    /* 8B998 8017D598 1A80023C */  lui        $v0, %hi(D_8019EE30)
    /* 8B99C 8017D59C 30EE4294 */  lhu        $v0, %lo(D_8019EE30)($v0)
    /* 8B9A0 8017D5A0 7C018387 */  lh         $v1, %gp_rel(D_8019EE78)($gp)
    /* 8B9A4 8017D5A4 00000000 */  nop
    /* 8B9A8 8017D5A8 08006014 */  bnez       $v1, .L8017D5CC
    /* 8B9AC 8017D5AC 0E08A2A7 */   sh        $v0, 0x80E($sp)
    /* 8B9B0 8017D5B0 2120E002 */  addu       $a0, $s7, $zero
    /* 8B9B4 8017D5B4 21284002 */  addu       $a1, $s2, $zero
    /* 8B9B8 8017D5B8 21302002 */  addu       $a2, $s1, $zero
    /* 8B9BC 8017D5BC B1EA050C */  jal        func_8017AAC4
    /* 8B9C0 8017D5C0 2138C002 */   addu      $a3, $s6, $zero
    /* 8B9C4 8017D5C4 89F50508 */  j          .L8017D624
    /* 8B9C8 8017D5C8 21884000 */   addu      $s1, $v0, $zero
  .L8017D5CC:
    /* 8B9CC 8017D5CC 2120E002 */  addu       $a0, $s7, $zero
    /* 8B9D0 8017D5D0 21284002 */  addu       $a1, $s2, $zero
    /* 8B9D4 8017D5D4 21302002 */  addu       $a2, $s1, $zero
    /* 8B9D8 8017D5D8 86F50508 */  j          .L8017D618
    /* 8B9DC 8017D5DC 2138C002 */   addu      $a3, $s6, $zero
  .L8017D5E0:
    /* 8B9E0 8017D5E0 2120A002 */  addu       $a0, $s5, $zero
    /* 8B9E4 8017D5E4 21284002 */  addu       $a1, $s2, $zero
    /* 8B9E8 8017D5E8 1D80033C */  lui        $v1, %hi(D_801CFD68)
    /* 8B9EC 8017D5EC 68FD6324 */  addiu      $v1, $v1, %lo(D_801CFD68)
    /* 8B9F0 8017D5F0 21300302 */  addu       $a2, $s0, $v1
  .L8017D5F4:
    /* 8B9F4 8017D5F4 DFF6050C */  jal        func_8017DB7C
    /* 8B9F8 8017D5F8 2138C002 */   addu      $a3, $s6, $zero
    /* 8B9FC 8017D5FC 2120E002 */  addu       $a0, $s7, $zero
    /* 8BA00 8017D600 21284002 */  addu       $a1, $s2, $zero
    /* 8BA04 8017D604 21302002 */  addu       $a2, $s1, $zero
    /* 8BA08 8017D608 1A80023C */  lui        $v0, %hi(D_8019EE30)
    /* 8BA0C 8017D60C 30EE4294 */  lhu        $v0, %lo(D_8019EE30)($v0)
    /* 8BA10 8017D610 2138C002 */  addu       $a3, $s6, $zero
    /* 8BA14 8017D614 0E08A2A7 */  sh         $v0, 0x80E($sp)
  .L8017D618:
    /* 8BA18 8017D618 82E8050C */  jal        func_8017A208
    /* 8BA1C 8017D61C 00000000 */   nop
    /* 8BA20 8017D620 21884000 */  addu       $s1, $v0, $zero
  .L8017D624:
    /* 8BA24 8017D624 2120E002 */  addu       $a0, $s7, $zero
    /* 8BA28 8017D628 2128C003 */  addu       $a1, $fp, $zero
    /* 8BA2C 8017D62C 0E00DE27 */  addiu      $fp, $fp, 0xE
    /* 8BA30 8017D630 0E009426 */  addiu      $s4, $s4, 0xE
    /* 8BA34 8017D634 1C08A78F */  lw         $a3, 0x81C($sp)
    /* 8BA38 8017D638 01007326 */  addiu      $s3, $s3, 0x1
    /* 8BA3C 8017D63C 0000E684 */  lh         $a2, 0x0($a3)
    /* 8BA40 8017D640 0E00E724 */  addiu      $a3, $a3, 0xE
    /* 8BA44 8017D644 E5F9050C */  jal        func_8017E794
    /* 8BA48 8017D648 1C08A7AF */   sw        $a3, 0x81C($sp)
    /* 8BA4C 8017D64C 1100622A */  slti       $v0, $s3, 0x11
    /* 8BA50 8017D650 0C004010 */  beqz       $v0, .L8017D684
    /* 8BA54 8017D654 00000000 */   nop
    /* 8BA58 8017D658 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8BA5C 8017D65C 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8BA60 8017D660 00000000 */  nop
    /* 8BA64 8017D664 E1004228 */  slti       $v0, $v0, 0xE1
    /* 8BA68 8017D668 06004010 */  beqz       $v0, .L8017D684
    /* 8BA6C 8017D66C 1E80033C */   lui       $v1, %hi(D_801E01B8)
    /* 8BA70 8017D670 B8016224 */  addiu      $v0, $v1, %lo(D_801E01B8)
    /* 8BA74 8017D674 0800438C */  lw         $v1, 0x8($v0)
    /* 8BA78 8017D678 00000000 */  nop
    /* 8BA7C 8017D67C B3FF7314 */  bne        $v1, $s3, .L8017D54C
    /* 8BA80 8017D680 04000224 */   addiu     $v0, $zero, 0x4
  .L8017D684:
    /* 8BA84 8017D684 1008A78F */  lw         $a3, 0x810($sp)
    /* 8BA88 8017D688 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8BA8C 8017D68C 70EE20A4 */  sh         $zero, %lo(D_8019EE70)($at)
    /* 8BA90 8017D690 FF00E230 */  andi       $v0, $a3, 0xFF
    /* 8BA94 8017D694 44004010 */  beqz       $v0, .L8017D7A8
    /* 8BA98 8017D698 1E80023C */   lui       $v0, %hi(D_801E01B8)
    /* 8BA9C 8017D69C 0D80143C */  lui        $s4, %hi(D_800D2107)
    /* 8BAA0 8017D6A0 07219492 */  lbu        $s4, %lo(D_800D2107)($s4)
    /* 8BAA4 8017D6A4 B801438C */  lw         $v1, %lo(D_801E01B8)($v0)
    /* 8BAA8 8017D6A8 29001324 */  addiu      $s3, $zero, 0x29
    /* 8BAAC 8017D6AC 3E007310 */  beq        $v1, $s3, .L8017D7A8
    /* 8BAB0 8017D6B0 0000C0AE */   sw        $zero, 0x0($s6)
    /* 8BAB4 8017D6B4 00121400 */  sll        $v0, $s4, 8
    /* 8BAB8 8017D6B8 00FC4230 */  andi       $v0, $v0, 0xFC00
    /* 8BABC 8017D6BC 40F00200 */  sll        $fp, $v0, 1
    /* 8BAC0 8017D6C0 1A80033C */  lui        $v1, %hi(D_8019FFE8)
    /* 8BAC4 8017D6C4 E8FF6324 */  addiu      $v1, $v1, %lo(D_8019FFE8)
    /* 8BAC8 8017D6C8 48027024 */  addiu      $s0, $v1, 0x248
    /* 8BACC 8017D6CC 3E027524 */  addiu      $s5, $v1, 0x23E
    /* 8BAD0 8017D6D0 03008432 */  andi       $a0, $s4, 0x3
  .L8017D6D4:
    /* 8BAD4 8017D6D4 21284002 */  addu       $a1, $s2, $zero
    /* 8BAD8 8017D6D8 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 8BADC 8017D6DC 68FD4224 */  addiu      $v0, $v0, %lo(D_801CFD68)
    /* 8BAE0 8017D6E0 2130C203 */  addu       $a2, $fp, $v0
    /* 8BAE4 8017D6E4 2138C002 */  addu       $a3, $s6, $zero
    /* 8BAE8 8017D6E8 DFF6050C */  jal        func_8017DB7C
    /* 8BAEC 8017D6EC 0400D5AE */   sw        $s5, 0x4($s6)
    /* 8BAF0 8017D6F0 2120E002 */  addu       $a0, $s7, $zero
    /* 8BAF4 8017D6F4 21284002 */  addu       $a1, $s2, $zero
    /* 8BAF8 8017D6F8 21302002 */  addu       $a2, $s1, $zero
    /* 8BAFC 8017D6FC 1A80023C */  lui        $v0, %hi(D_8019EE2C)
    /* 8BB00 8017D700 2CEE4294 */  lhu        $v0, %lo(D_8019EE2C)($v0)
    /* 8BB04 8017D704 2138C002 */  addu       $a3, $s6, $zero
    /* 8BB08 8017D708 82E8050C */  jal        func_8017A208
    /* 8BB0C 8017D70C 0E08A2A7 */   sh        $v0, 0x80E($sp)
    /* 8BB10 8017D710 21884000 */  addu       $s1, $v0, $zero
    /* 8BB14 8017D714 0D80033C */  lui        $v1, %hi(D_800D0203)
    /* 8BB18 8017D718 03026390 */  lbu        $v1, %lo(D_800D0203)($v1)
    /* 8BB1C 8017D71C 02000224 */  addiu      $v0, $zero, 0x2
    /* 8BB20 8017D720 0E006214 */  bne        $v1, $v0, .L8017D75C
    /* 8BB24 8017D724 2120E002 */   addu      $a0, $s7, $zero
    /* 8BB28 8017D728 00000686 */  lh         $a2, 0x0($s0)
    /* 8BB2C 8017D72C E5F9050C */  jal        func_8017E794
    /* 8BB30 8017D730 2128A002 */   addu      $a1, $s5, $zero
    /* 8BB34 8017D734 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8BB38 8017D738 70EE4294 */  lhu        $v0, %lo(D_8019EE70)($v0)
    /* 8BB3C 8017D73C 00000496 */  lhu        $a0, 0x0($s0)
    /* 8BB40 8017D740 02000392 */  lbu        $v1, 0x2($s0)
    /* 8BB44 8017D744 23104400 */  subu       $v0, $v0, $a0
    /* 8BB48 8017D748 01006324 */  addiu      $v1, $v1, 0x1
    /* 8BB4C 8017D74C 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8BB50 8017D750 70EE22A4 */  sh         $v0, %lo(D_8019EE70)($at)
    /* 8BB54 8017D754 020003A2 */  sb         $v1, 0x2($s0)
    /* 8BB58 8017D758 2120E002 */  addu       $a0, $s7, $zero
  .L8017D75C:
    /* 8BB5C 8017D75C 2128A002 */  addu       $a1, $s5, $zero
    /* 8BB60 8017D760 00000686 */  lh         $a2, 0x0($s0)
    /* 8BB64 8017D764 0E001026 */  addiu      $s0, $s0, 0xE
    /* 8BB68 8017D768 0E00B526 */  addiu      $s5, $s5, 0xE
    /* 8BB6C 8017D76C E5F9050C */  jal        func_8017E794
    /* 8BB70 8017D770 01007326 */   addiu     $s3, $s3, 0x1
    /* 8BB74 8017D774 A000622A */  slti       $v0, $s3, 0xA0
    /* 8BB78 8017D778 0B004010 */  beqz       $v0, .L8017D7A8
    /* 8BB7C 8017D77C 00000000 */   nop
    /* 8BB80 8017D780 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8BB84 8017D784 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8BB88 8017D788 00000000 */  nop
    /* 8BB8C 8017D78C E1004228 */  slti       $v0, $v0, 0xE1
    /* 8BB90 8017D790 05004010 */  beqz       $v0, .L8017D7A8
    /* 8BB94 8017D794 1E80033C */   lui       $v1, %hi(D_801E01B8)
    /* 8BB98 8017D798 B801628C */  lw         $v0, %lo(D_801E01B8)($v1)
    /* 8BB9C 8017D79C 00000000 */  nop
    /* 8BBA0 8017D7A0 CCFF5314 */  bne        $v0, $s3, .L8017D6D4
    /* 8BBA4 8017D7A4 03008432 */   andi      $a0, $s4, 0x3
  .L8017D7A8:
    /* 8BBA8 8017D7A8 4408BF8F */  lw         $ra, 0x844($sp)
    /* 8BBAC 8017D7AC 4008BE8F */  lw         $fp, 0x840($sp)
    /* 8BBB0 8017D7B0 3C08B78F */  lw         $s7, 0x83C($sp)
    /* 8BBB4 8017D7B4 3808B68F */  lw         $s6, 0x838($sp)
    /* 8BBB8 8017D7B8 3408B58F */  lw         $s5, 0x834($sp)
    /* 8BBBC 8017D7BC 3008B48F */  lw         $s4, 0x830($sp)
    /* 8BBC0 8017D7C0 2C08B38F */  lw         $s3, 0x82C($sp)
    /* 8BBC4 8017D7C4 2808B28F */  lw         $s2, 0x828($sp)
    /* 8BBC8 8017D7C8 2408B18F */  lw         $s1, 0x824($sp)
    /* 8BBCC 8017D7CC 2008B08F */  lw         $s0, 0x820($sp)
    /* 8BBD0 8017D7D0 0800E003 */  jr         $ra
    /* 8BBD4 8017D7D4 4808BD27 */   addiu     $sp, $sp, 0x848
endlabel func_8017D078
