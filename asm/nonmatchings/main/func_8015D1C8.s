nonmatching func_8015D1C8, 0x148

glabel func_8015D1C8
    /* 6B5C8 8015D1C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B5CC 8015D1CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B5D0 8015D1D0 8D68010C */  jal        func_8005A234
    /* 6B5D4 8015D1D4 00000000 */   nop
    /* 6B5D8 8015D1D8 8CD9030C */  jal        func_800F6630
    /* 6B5DC 8015D1DC D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6B5E0 8015D1E0 374B050C */  jal        func_80152CDC
    /* 6B5E4 8015D1E4 00000000 */   nop
    /* 6B5E8 8015D1E8 8CD9030C */  jal        func_800F6630
    /* 6B5EC 8015D1EC D3000424 */   addiu     $a0, $zero, 0xD3
    /* 6B5F0 8015D1F0 93E0030C */  jal        func_800F824C
    /* 6B5F4 8015D1F4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6B5F8 8015D1F8 50D4030C */  jal        func_800F5140
    /* 6B5FC 8015D1FC 00000000 */   nop
    /* 6B600 8015D200 04D5030C */  jal        func_800F5410
    /* 6B604 8015D204 00000000 */   nop
    /* 6B608 8015D208 0FCF030C */  jal        func_800F3C3C
    /* 6B60C 8015D20C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6B610 8015D210 CECF030C */  jal        func_800F3F38
    /* 6B614 8015D214 21204000 */   addu      $a0, $v0, $zero
    /* 6B618 8015D218 434C050C */  jal        func_8015310C
    /* 6B61C 8015D21C 00000000 */   nop
    /* 6B620 8015D220 84DC030C */  jal        func_800F7210
    /* 6B624 8015D224 98350424 */   addiu     $a0, $zero, 0x3598
    /* 6B628 8015D228 40E3030C */  jal        func_800F8D00
    /* 6B62C 8015D22C 55350424 */   addiu     $a0, $zero, 0x3555
    /* 6B630 8015D230 8CD9030C */  jal        func_800F6630
    /* 6B634 8015D234 D3000424 */   addiu     $a0, $zero, 0xD3
    /* 6B638 8015D238 50D4030C */  jal        func_800F5140
    /* 6B63C 8015D23C 00000000 */   nop
    /* 6B640 8015D240 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6B644 8015D244 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6B648 8015D248 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6B64C 8015D24C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6B650 8015D250 00006294 */  lhu        $v0, 0x0($v1)
    /* 6B654 8015D254 00000000 */  nop
    /* 6B658 8015D258 000082A4 */  sh         $v0, 0x0($a0)
    /* 6B65C 8015D25C 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 6B660 8015D260 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 6B664 8015D264 00000000 */  nop
    /* 6B668 8015D268 00006390 */  lbu        $v1, 0x0($v1)
    /* 6B66C 8015D26C 00000000 */  nop
    /* 6B670 8015D270 0D00622C */  sltiu      $v0, $v1, 0xD
    /* 6B674 8015D274 22004010 */  beqz       $v0, .L8015D300
    /* 6B678 8015D278 0F80023C */   lui       $v0, %hi(jtbl_800F2D94)
    /* 6B67C 8015D27C 942D4224 */  addiu      $v0, $v0, %lo(jtbl_800F2D94)
    /* 6B680 8015D280 80180300 */  sll        $v1, $v1, 2
    /* 6B684 8015D284 21186200 */  addu       $v1, $v1, $v0
    /* 6B688 8015D288 0000648C */  lw         $a0, 0x0($v1)
    /* 6B68C 8015D28C 00000000 */  nop
    /* 6B690 8015D290 08008000 */  jr         $a0
    /* 6B694 8015D294 00000000 */   nop
  jlabel .L8015D298
    /* 6B698 8015D298 C474050C */  jal        func_8015D310
    /* 6B69C 8015D29C 00000000 */   nop
    /* 6B6A0 8015D2A0 C0740508 */  j          .L8015D300
    /* 6B6A4 8015D2A4 00000000 */   nop
  jlabel .L8015D2A8
    /* 6B6A8 8015D2A8 FA74050C */  jal        func_8015D3E8
    /* 6B6AC 8015D2AC 00000000 */   nop
    /* 6B6B0 8015D2B0 C0740508 */  j          .L8015D300
    /* 6B6B4 8015D2B4 00000000 */   nop
  jlabel .L8015D2B8
    /* 6B6B8 8015D2B8 1475050C */  jal        func_8015D450
    /* 6B6BC 8015D2BC 00000000 */   nop
    /* 6B6C0 8015D2C0 C0740508 */  j          .L8015D300
    /* 6B6C4 8015D2C4 00000000 */   nop
  jlabel .L8015D2C8
    /* 6B6C8 8015D2C8 3275050C */  jal        func_8015D4C8
    /* 6B6CC 8015D2CC 00000000 */   nop
    /* 6B6D0 8015D2D0 C0740508 */  j          .L8015D300
    /* 6B6D4 8015D2D4 00000000 */   nop
  jlabel .L8015D2D8
    /* 6B6D8 8015D2D8 B075050C */  jal        func_8015D6C0
    /* 6B6DC 8015D2DC 00000000 */   nop
    /* 6B6E0 8015D2E0 C0740508 */  j          .L8015D300
    /* 6B6E4 8015D2E4 00000000 */   nop
  jlabel .L8015D2E8
    /* 6B6E8 8015D2E8 1E76050C */  jal        func_8015D878
    /* 6B6EC 8015D2EC 00000000 */   nop
    /* 6B6F0 8015D2F0 C0740508 */  j          .L8015D300
    /* 6B6F4 8015D2F4 00000000 */   nop
  jlabel .L8015D2F8
    /* 6B6F8 8015D2F8 3C76050C */  jal        func_8015D8F0
    /* 6B6FC 8015D2FC 00000000 */   nop
  jlabel .L8015D300
    /* 6B700 8015D300 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B704 8015D304 00000000 */  nop
    /* 6B708 8015D308 0800E003 */  jr         $ra
    /* 6B70C 8015D30C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D1C8
