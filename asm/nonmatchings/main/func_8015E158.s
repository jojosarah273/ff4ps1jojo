nonmatching func_8015E158, 0x30C

glabel func_8015E158
    /* 6C558 8015E158 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6C55C 8015E15C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6C560 8015E160 84DC030C */  jal        func_800F7210
    /* 6C564 8015E164 36350424 */   addiu     $a0, $zero, 0x3536
    /* 6C568 8015E168 5BE3030C */  jal        func_800F8D6C
    /* 6C56C 8015E16C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6C570 8015E170 40DD030C */  jal        func_800F7500
    /* 6C574 8015E174 30000424 */   addiu     $a0, $zero, 0x30
  .L8015E178:
    /* 6C578 8015E178 DADA030C */  jal        func_800F6B68
    /* 6C57C 8015E17C 7A2C0424 */   addiu     $a0, $zero, 0x2C7A
    /* 6C580 8015E180 0DD9030C */  jal        func_800F6434
    /* 6C584 8015E184 80800434 */   ori       $a0, $zero, 0x8080
    /* 6C588 8015E188 13004014 */  bnez       $v0, .L8015E1D8
    /* 6C58C 8015E18C 00000000 */   nop
    /* 6C590 8015E190 D9D8030C */  jal        func_800F6364
    /* 6C594 8015E194 00000000 */   nop
    /* 6C598 8015E198 D9D8030C */  jal        func_800F6364
    /* 6C59C 8015E19C 00000000 */   nop
    /* 6C5A0 8015E1A0 D9D8030C */  jal        func_800F6364
    /* 6C5A4 8015E1A4 00000000 */   nop
    /* 6C5A8 8015E1A8 D9D8030C */  jal        func_800F6364
    /* 6C5AC 8015E1AC 00000000 */   nop
    /* 6C5B0 8015E1B0 A8D7030C */  jal        func_800F5EA0
    /* 6C5B4 8015E1B4 00000000 */   nop
    /* 6C5B8 8015E1B8 19D7030C */  jal        func_800F5C64
    /* 6C5BC 8015E1BC 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C5C0 8015E1C0 EDFF4014 */  bnez       $v0, .L8015E178
    /* 6C5C4 8015E1C4 00000000 */   nop
    /* 6C5C8 8015E1C8 AFD8030C */  jal        func_800F62BC
    /* 6C5CC 8015E1CC 90000424 */   addiu     $a0, $zero, 0x90
    /* 6C5D0 8015E1D0 15790508 */  j          .L8015E454
    /* 6C5D4 8015E1D4 00000000 */   nop
  .L8015E1D8:
    /* 6C5D8 8015E1D8 C7E5030C */  jal        func_800F971C
    /* 6C5DC 8015E1DC 00000000 */   nop
    /* 6C5E0 8015E1E0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C5E4 8015E1E4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C5E8 8015E1E8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C5EC 8015E1EC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C5F0 8015E1F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C5F4 8015E1F4 2F000424 */  addiu      $a0, $zero, 0x2F
    /* 6C5F8 8015E1F8 53D9030C */  jal        func_800F654C
    /* 6C5FC 8015E1FC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6C600 8015E200 8948050C */  jal        func_80152224
    /* 6C604 8015E204 00000000 */   nop
    /* 6C608 8015E208 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C60C 8015E20C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C610 8015E210 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C614 8015E214 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C618 8015E218 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C61C 8015E21C 3D390424 */  addiu      $a0, $zero, 0x393D
    /* 6C620 8015E220 40E3030C */  jal        func_800F8D00
    /* 6C624 8015E224 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6C628 8015E228 77DC030C */  jal        func_800F71DC
    /* 6C62C 8015E22C 04000424 */   addiu     $a0, $zero, 0x4
    /* 6C630 8015E230 40E3030C */  jal        func_800F8D00
    /* 6C634 8015E234 3F390424 */   addiu     $a0, $zero, 0x393F
    /* 6C638 8015E238 DB48050C */  jal        func_8015236C
    /* 6C63C 8015E23C 00000000 */   nop
    /* 6C640 8015E240 04D5030C */  jal        func_800F5410
    /* 6C644 8015E244 00000000 */   nop
    /* 6C648 8015E248 8CD9030C */  jal        func_800F6630
    /* 6C64C 8015E24C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6C650 8015E250 C1CE030C */  jal        func_800F3B04
    /* 6C654 8015E254 41390424 */   addiu     $a0, $zero, 0x3941
    /* 6C658 8015E258 CECF030C */  jal        func_800F3F38
    /* 6C65C 8015E25C 21204000 */   addu      $a0, $v0, $zero
    /* 6C660 8015E260 93E0030C */  jal        func_800F824C
    /* 6C664 8015E264 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6C668 8015E268 8CD9030C */  jal        func_800F6630
    /* 6C66C 8015E26C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6C670 8015E270 C1CE030C */  jal        func_800F3B04
    /* 6C674 8015E274 42390424 */   addiu     $a0, $zero, 0x3942
    /* 6C678 8015E278 CECF030C */  jal        func_800F3F38
    /* 6C67C 8015E27C 21204000 */   addu      $a0, $v0, $zero
    /* 6C680 8015E280 93E0030C */  jal        func_800F824C
    /* 6C684 8015E284 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 6C688 8015E288 9CDC030C */  jal        func_800F7270
    /* 6C68C 8015E28C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6C690 8015E290 DADA030C */  jal        func_800F6B68
    /* 6C694 8015E294 7A2C0424 */   addiu     $a0, $zero, 0x2C7A
    /* 6C698 8015E298 93E0030C */  jal        func_800F824C
    /* 6C69C 8015E29C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6C6A0 8015E2A0 0DD9030C */  jal        func_800F6434
    /* 6C6A4 8015E2A4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6C6A8 8015E2A8 CBFF4014 */  bnez       $v0, .L8015E1D8
    /* 6C6AC 8015E2AC 00000000 */   nop
    /* 6C6B0 8015E2B0 DADA030C */  jal        func_800F6B68
    /* 6C6B4 8015E2B4 7B2C0424 */   addiu     $a0, $zero, 0x2C7B
    /* 6C6B8 8015E2B8 9CDC030C */  jal        func_800F7270
    /* 6C6BC 8015E2BC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C6C0 8015E2C0 DAE1030C */  jal        func_800F8768
    /* 6C6C4 8015E2C4 52200424 */   addiu     $a0, $zero, 0x2052
    /* 6C6C8 8015E2C8 53D9030C */  jal        func_800F654C
    /* 6C6CC 8015E2CC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6C6D0 8015E2D0 DAE1030C */  jal        func_800F8768
    /* 6C6D4 8015E2D4 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6C6D8 8015E2D8 53D9030C */  jal        func_800F654C
    /* 6C6DC 8015E2DC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C6E0 8015E2E0 DAE1030C */  jal        func_800F8768
    /* 6C6E4 8015E2E4 51200424 */   addiu     $a0, $zero, 0x2051
    /* 6C6E8 8015E2E8 8CD9030C */  jal        func_800F6630
    /* 6C6EC 8015E2EC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6C6F0 8015E2F0 92D0030C */  jal        func_800F4248
    /* 6C6F4 8015E2F4 40000424 */   addiu     $a0, $zero, 0x40
    /* 6C6F8 8015E2F8 48D0030C */  jal        func_800F4120
    /* 6C6FC 8015E2FC 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C700 8015E300 32004014 */  bnez       $v0, .L8015E3CC
    /* 6C704 8015E304 00000000 */   nop
    /* 6C708 8015E308 8CD9030C */  jal        func_800F6630
    /* 6C70C 8015E30C AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6C710 8015E310 92D0030C */  jal        func_800F4248
    /* 6C714 8015E314 10000424 */   addiu     $a0, $zero, 0x10
    /* 6C718 8015E318 48D0030C */  jal        func_800F4120
    /* 6C71C 8015E31C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C720 8015E320 22004014 */  bnez       $v0, .L8015E3AC
    /* 6C724 8015E324 00000000 */   nop
  .L8015E328:
    /* 6C728 8015E328 5B4C050C */  jal        func_8015316C
    /* 6C72C 8015E32C 00000000 */   nop
    /* 6C730 8015E330 93E0030C */  jal        func_800F824C
    /* 6C734 8015E334 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6C738 8015E338 04D5030C */  jal        func_800F5410
    /* 6C73C 8015E33C 00000000 */   nop
    /* 6C740 8015E340 02D0030C */  jal        func_800F4008
    /* 6C744 8015E344 05000424 */   addiu     $a0, $zero, 0x5
    /* 6C748 8015E348 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C74C 8015E34C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C750 8015E350 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C754 8015E354 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C758 8015E358 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C75C 8015E35C 40350424 */  addiu      $a0, $zero, 0x3540
    /* 6C760 8015E360 DADA030C */  jal        func_800F6B68
    /* 6C764 8015E364 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6C768 8015E368 0DD9030C */  jal        func_800F6434
    /* 6C76C 8015E36C 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C770 8015E370 EDFF4014 */  bnez       $v0, .L8015E328
    /* 6C774 8015E374 00000000 */   nop
    /* 6C778 8015E378 8CD9030C */  jal        func_800F6630
    /* 6C77C 8015E37C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6C780 8015E380 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C784 8015E384 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C788 8015E388 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6C78C 8015E38C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6C790 8015E390 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C794 8015E394 C7E5030C */  jal        func_800F971C
    /* 6C798 8015E398 000083A4 */   sh        $v1, 0x0($a0)
    /* 6C79C 8015E39C 264C050C */  jal        func_80153098
    /* 6C7A0 8015E3A0 00000000 */   nop
    /* 6C7A4 8015E3A4 ED780508 */  j          .L8015E3B4
    /* 6C7A8 8015E3A8 00000000 */   nop
  .L8015E3AC:
    /* 6C7AC 8015E3AC 53D9030C */  jal        func_800F654C
    /* 6C7B0 8015E3B0 FF000424 */   addiu     $a0, $zero, 0xFF
  .L8015E3B4:
    /* 6C7B4 8015E3B4 9CDC030C */  jal        func_800F7270
    /* 6C7B8 8015E3B8 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C7BC 8015E3BC DAE1030C */  jal        func_800F8768
    /* 6C7C0 8015E3C0 53200424 */   addiu     $a0, $zero, 0x2053
    /* 6C7C4 8015E3C4 15790508 */  j          .L8015E454
    /* 6C7C8 8015E3C8 00000000 */   nop
  .L8015E3CC:
    /* 6C7CC 8015E3CC 8CD9030C */  jal        func_800F6630
    /* 6C7D0 8015E3D0 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 6C7D4 8015E3D4 92D0030C */  jal        func_800F4248
    /* 6C7D8 8015E3D8 10000424 */   addiu     $a0, $zero, 0x10
    /* 6C7DC 8015E3DC 48D0030C */  jal        func_800F4120
    /* 6C7E0 8015E3E0 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C7E4 8015E3E4 15004014 */  bnez       $v0, .L8015E43C
    /* 6C7E8 8015E3E8 00000000 */   nop
  .L8015E3EC:
    /* 6C7EC 8015E3EC 674C050C */  jal        func_8015319C
    /* 6C7F0 8015E3F0 00000000 */   nop
    /* 6C7F4 8015E3F4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C7F8 8015E3F8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C7FC 8015E3FC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C800 8015E400 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C804 8015E404 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C808 8015E408 40350424 */  addiu      $a0, $zero, 0x3540
    /* 6C80C 8015E40C DADA030C */  jal        func_800F6B68
    /* 6C810 8015E410 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6C814 8015E414 0DD9030C */  jal        func_800F6434
    /* 6C818 8015E418 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C81C 8015E41C F3FF4014 */  bnez       $v0, .L8015E3EC
    /* 6C820 8015E420 00000000 */   nop
    /* 6C824 8015E424 C7E5030C */  jal        func_800F971C
    /* 6C828 8015E428 00000000 */   nop
    /* 6C82C 8015E42C 264C050C */  jal        func_80153098
    /* 6C830 8015E430 00000000 */   nop
    /* 6C834 8015E434 11790508 */  j          .L8015E444
    /* 6C838 8015E438 00000000 */   nop
  .L8015E43C:
    /* 6C83C 8015E43C 53D9030C */  jal        func_800F654C
    /* 6C840 8015E440 F8000424 */   addiu     $a0, $zero, 0xF8
  .L8015E444:
    /* 6C844 8015E444 9CDC030C */  jal        func_800F7270
    /* 6C848 8015E448 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C84C 8015E44C DAE1030C */  jal        func_800F8768
    /* 6C850 8015E450 54200424 */   addiu     $a0, $zero, 0x2054
  .L8015E454:
    /* 6C854 8015E454 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6C858 8015E458 00000000 */  nop
    /* 6C85C 8015E45C 0800E003 */  jr         $ra
    /* 6C860 8015E460 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E158
