nonmatching func_800FE110, 0x4C4

glabel func_800FE110
    /* C510 800FE110 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* C514 800FE114 7C000424 */  addiu      $a0, $zero, 0x7C
    /* C518 800FE118 1400BFAF */  sw         $ra, 0x14($sp)
    /* C51C 800FE11C 8CD9030C */  jal        func_800F6630
    /* C520 800FE120 1000B0AF */   sw        $s0, 0x10($sp)
    /* C524 800FE124 92D0030C */  jal        func_800F4248
    /* C528 800FE128 01000424 */   addiu     $a0, $zero, 0x1
    /* C52C 800FE12C 48D0030C */  jal        func_800F4120
    /* C530 800FE130 02000424 */   addiu     $a0, $zero, 0x2
    /* C534 800FE134 5D004010 */  beqz       $v0, .L800FE2AC
    /* C538 800FE138 1A80103C */   lui       $s0, %hi(D_80198A94)
    /* C53C 800FE13C 8CD9030C */  jal        func_800F6630
    /* C540 800FE140 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C544 800FE144 19DE030C */  jal        func_800F7864
    /* C548 800FE148 00000000 */   nop
    /* C54C 800FE14C 92D0030C */  jal        func_800F4248
    /* C550 800FE150 0F000424 */   addiu     $a0, $zero, 0xF
    /* C554 800FE154 A4E5030C */  jal        func_800F9690
    /* C558 800FE158 00000000 */   nop
    /* C55C 800FE15C 1A80023C */  lui        $v0, %hi(D_80198AA4)
    /* C560 800FE160 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* C564 800FE164 A48A4224 */  addiu      $v0, $v0, %lo(D_80198AA4)
    /* C568 800FE168 00008394 */  lhu        $v1, 0x0($a0)
    /* C56C 800FE16C 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C570 800FE170 21186200 */  addu       $v1, $v1, $v0
    /* C574 800FE174 00006290 */  lbu        $v0, 0x0($v1)
    /* C578 800FE178 00000000 */  nop
    /* C57C 800FE17C 000082A0 */  sb         $v0, 0x0($a0)
    /* C580 800FE180 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* C584 800FE184 00000000 */  nop
    /* C588 800FE188 00006290 */  lbu        $v0, 0x0($v1)
    /* C58C 800FE18C 00000000 */  nop
    /* C590 800FE190 07004234 */  ori        $v0, $v0, 0x7
    /* C594 800FE194 A4E5030C */  jal        func_800F9690
    /* C598 800FE198 000062A0 */   sb        $v0, 0x0($v1)
    /* C59C 800FE19C 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C5A0 800FE1A0 1ADB030C */  jal        func_800F6C68
    /* C5A4 800FE1A4 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C5A8 800FE1A8 93E0030C */  jal        func_800F824C
    /* C5AC 800FE1AC 06000424 */   addiu     $a0, $zero, 0x6
    /* C5B0 800FE1B0 40DD030C */  jal        func_800F7500
    /* C5B4 800FE1B4 07000424 */   addiu     $a0, $zero, 0x7
  .L800FE1B8:
    /* C5B8 800FE1B8 7F00043C */  lui        $a0, (0x7F57FF >> 16)
    /* C5BC 800FE1BC 1ADB030C */  jal        func_800F6C68
    /* C5C0 800FE1C0 FF578434 */   ori       $a0, $a0, (0x7F57FF & 0xFFFF)
    /* C5C4 800FE1C4 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C5C8 800FE1C8 17E2030C */  jal        func_800F885C
    /* C5CC 800FE1CC 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C5D0 800FE1D0 92D7030C */  jal        func_800F5E48
    /* C5D4 800FE1D4 00000000 */   nop
    /* C5D8 800FE1D8 A8D7030C */  jal        func_800F5EA0
    /* C5DC 800FE1DC 00000000 */   nop
    /* C5E0 800FE1E0 19D7030C */  jal        func_800F5C64
    /* C5E4 800FE1E4 02020424 */   addiu     $a0, $zero, 0x202
    /* C5E8 800FE1E8 F3FF4014 */  bnez       $v0, .L800FE1B8
    /* C5EC 800FE1EC 00000000 */   nop
    /* C5F0 800FE1F0 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C5F4 800FE1F4 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C5F8 800FE1F8 00004390 */  lbu        $v1, 0x0($v0)
    /* C5FC 800FE1FC F8000424 */  addiu      $a0, $zero, 0xF8
    /* C600 800FE200 92D0030C */  jal        func_800F4248
    /* C604 800FE204 0000A3A0 */   sb        $v1, 0x0($a1)
    /* C608 800FE208 04D5030C */  jal        func_800F5410
    /* C60C 800FE20C 00000000 */   nop
    /* C610 800FE210 02D0030C */  jal        func_800F4008
    /* C614 800FE214 47000424 */   addiu     $a0, $zero, 0x47
    /* C618 800FE218 A4E5030C */  jal        func_800F9690
    /* C61C 800FE21C 00000000 */   nop
    /* C620 800FE220 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C624 800FE224 1ADB030C */  jal        func_800F6C68
    /* C628 800FE228 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C62C 800FE22C 7F00043C */  lui        $a0, (0x7F57B9 >> 16)
    /* C630 800FE230 17E2030C */  jal        func_800F885C
    /* C634 800FE234 B9578434 */   ori       $a0, $a0, (0x7F57B9 & 0xFFFF)
    /* C638 800FE238 40DD030C */  jal        func_800F7500
    /* C63C 800FE23C 07000424 */   addiu     $a0, $zero, 0x7
  .L800FE240:
    /* C640 800FE240 7F00043C */  lui        $a0, (0x7F57FF >> 16)
    /* C644 800FE244 1ADB030C */  jal        func_800F6C68
    /* C648 800FE248 FF578434 */   ori       $a0, $a0, (0x7F57FF & 0xFFFF)
    /* C64C 800FE24C 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C650 800FE250 17E2030C */  jal        func_800F885C
    /* C654 800FE254 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C658 800FE258 92D7030C */  jal        func_800F5E48
    /* C65C 800FE25C 00000000 */   nop
    /* C660 800FE260 A8D7030C */  jal        func_800F5EA0
    /* C664 800FE264 00000000 */   nop
    /* C668 800FE268 19D7030C */  jal        func_800F5C64
    /* C66C 800FE26C 02020424 */   addiu     $a0, $zero, 0x202
    /* C670 800FE270 F3FF4014 */  bnez       $v0, .L800FE240
    /* C674 800FE274 00000000 */   nop
    /* C678 800FE278 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C67C 800FE27C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C680 800FE280 00004390 */  lbu        $v1, 0x0($v0)
    /* C684 800FE284 F8000424 */  addiu      $a0, $zero, 0xF8
    /* C688 800FE288 92D0030C */  jal        func_800F4248
    /* C68C 800FE28C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* C690 800FE290 A4E5030C */  jal        func_800F9690
    /* C694 800FE294 00000000 */   nop
    /* C698 800FE298 8CD9030C */  jal        func_800F6630
    /* C69C 800FE29C 06000424 */   addiu     $a0, $zero, 0x6
    /* C6A0 800FE2A0 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C6A4 800FE2A4 17E2030C */  jal        func_800F885C
    /* C6A8 800FE2A8 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
  .L800FE2AC:
    /* C6AC 800FE2AC 8CD9030C */  jal        func_800F6630
    /* C6B0 800FE2B0 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C6B4 800FE2B4 92D0030C */  jal        func_800F4248
    /* C6B8 800FE2B8 0F000424 */   addiu     $a0, $zero, 0xF
    /* C6BC 800FE2BC A4E5030C */  jal        func_800F9690
    /* C6C0 800FE2C0 00000000 */   nop
    /* C6C4 800FE2C4 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* C6C8 800FE2C8 948A0426 */  addiu      $a0, $s0, %lo(D_80198A94)
    /* C6CC 800FE2CC 00004394 */  lhu        $v1, 0x0($v0)
    /* C6D0 800FE2D0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C6D4 800FE2D4 21186400 */  addu       $v1, $v1, $a0
    /* C6D8 800FE2D8 00006290 */  lbu        $v0, 0x0($v1)
    /* C6DC 800FE2DC 04D5030C */  jal        func_800F5410
    /* C6E0 800FE2E0 0000A2A0 */   sb        $v0, 0x0($a1)
    /* C6E4 800FE2E4 02D0030C */  jal        func_800F4008
    /* C6E8 800FE2E8 38000424 */   addiu     $a0, $zero, 0x38
    /* C6EC 800FE2EC A4E5030C */  jal        func_800F9690
    /* C6F0 800FE2F0 00000000 */   nop
    /* C6F4 800FE2F4 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C6F8 800FE2F8 1ADB030C */  jal        func_800F6C68
    /* C6FC 800FE2FC 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C700 800FE300 93E0030C */  jal        func_800F824C
    /* C704 800FE304 06000424 */   addiu     $a0, $zero, 0x6
    /* C708 800FE308 40DD030C */  jal        func_800F7500
    /* C70C 800FE30C 07000424 */   addiu     $a0, $zero, 0x7
  .L800FE310:
    /* C710 800FE310 7F00043C */  lui        $a0, (0x7F58F8 >> 16)
    /* C714 800FE314 1ADB030C */  jal        func_800F6C68
    /* C718 800FE318 F8588434 */   ori       $a0, $a0, (0x7F58F8 & 0xFFFF)
    /* C71C 800FE31C 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C720 800FE320 17E2030C */  jal        func_800F885C
    /* C724 800FE324 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C728 800FE328 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C72C 800FE32C 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C730 800FE330 00004390 */  lbu        $v1, 0x0($v0)
    /* C734 800FE334 20D5030C */  jal        func_800F5480
    /* C738 800FE338 000083A0 */   sb        $v1, 0x0($a0)
    /* C73C 800FE33C 16E0030C */  jal        func_800F8058
    /* C740 800FE340 08000424 */   addiu     $a0, $zero, 0x8
    /* C744 800FE344 A4E5030C */  jal        func_800F9690
    /* C748 800FE348 00000000 */   nop
    /* C74C 800FE34C A8D7030C */  jal        func_800F5EA0
    /* C750 800FE350 00000000 */   nop
    /* C754 800FE354 19D7030C */  jal        func_800F5C64
    /* C758 800FE358 02020424 */   addiu     $a0, $zero, 0x202
    /* C75C 800FE35C ECFF4014 */  bnez       $v0, .L800FE310
    /* C760 800FE360 00000000 */   nop
    /* C764 800FE364 8CD9030C */  jal        func_800F6630
    /* C768 800FE368 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C76C 800FE36C 92D0030C */  jal        func_800F4248
    /* C770 800FE370 0F000424 */   addiu     $a0, $zero, 0xF
    /* C774 800FE374 A4E5030C */  jal        func_800F9690
    /* C778 800FE378 00000000 */   nop
    /* C77C 800FE37C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* C780 800FE380 948A0426 */  addiu      $a0, $s0, %lo(D_80198A94)
    /* C784 800FE384 00004394 */  lhu        $v1, 0x0($v0)
    /* C788 800FE388 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C78C 800FE38C 21186400 */  addu       $v1, $v1, $a0
    /* C790 800FE390 00006290 */  lbu        $v0, 0x0($v1)
    /* C794 800FE394 04D5030C */  jal        func_800F5410
    /* C798 800FE398 0000A2A0 */   sb        $v0, 0x0($a1)
    /* C79C 800FE39C 02D0030C */  jal        func_800F4008
    /* C7A0 800FE3A0 B8000424 */   addiu     $a0, $zero, 0xB8
    /* C7A4 800FE3A4 A4E5030C */  jal        func_800F9690
    /* C7A8 800FE3A8 00000000 */   nop
    /* C7AC 800FE3AC 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C7B0 800FE3B0 1ADB030C */  jal        func_800F6C68
    /* C7B4 800FE3B4 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C7B8 800FE3B8 7F00043C */  lui        $a0, (0x7F5848 >> 16)
    /* C7BC 800FE3BC 17E2030C */  jal        func_800F885C
    /* C7C0 800FE3C0 48588434 */   ori       $a0, $a0, (0x7F5848 & 0xFFFF)
    /* C7C4 800FE3C4 40DD030C */  jal        func_800F7500
    /* C7C8 800FE3C8 07000424 */   addiu     $a0, $zero, 0x7
  .L800FE3CC:
    /* C7CC 800FE3CC 7F00043C */  lui        $a0, (0x7F58F8 >> 16)
    /* C7D0 800FE3D0 1ADB030C */  jal        func_800F6C68
    /* C7D4 800FE3D4 F8588434 */   ori       $a0, $a0, (0x7F58F8 & 0xFFFF)
    /* C7D8 800FE3D8 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C7DC 800FE3DC 17E2030C */  jal        func_800F885C
    /* C7E0 800FE3E0 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C7E4 800FE3E4 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C7E8 800FE3E8 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C7EC 800FE3EC 00004390 */  lbu        $v1, 0x0($v0)
    /* C7F0 800FE3F0 20D5030C */  jal        func_800F5480
    /* C7F4 800FE3F4 000083A0 */   sb        $v1, 0x0($a0)
    /* C7F8 800FE3F8 16E0030C */  jal        func_800F8058
    /* C7FC 800FE3FC 08000424 */   addiu     $a0, $zero, 0x8
    /* C800 800FE400 A4E5030C */  jal        func_800F9690
    /* C804 800FE404 00000000 */   nop
    /* C808 800FE408 A8D7030C */  jal        func_800F5EA0
    /* C80C 800FE40C 00000000 */   nop
    /* C810 800FE410 19D7030C */  jal        func_800F5C64
    /* C814 800FE414 02020424 */   addiu     $a0, $zero, 0x202
    /* C818 800FE418 ECFF4014 */  bnez       $v0, .L800FE3CC
    /* C81C 800FE41C 00000000 */   nop
    /* C820 800FE420 8CD9030C */  jal        func_800F6630
    /* C824 800FE424 06000424 */   addiu     $a0, $zero, 0x6
    /* C828 800FE428 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C82C 800FE42C 17E2030C */  jal        func_800F885C
    /* C830 800FE430 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C834 800FE434 8CD9030C */  jal        func_800F6630
    /* C838 800FE438 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C83C 800FE43C 92D0030C */  jal        func_800F4248
    /* C840 800FE440 0F000424 */   addiu     $a0, $zero, 0xF
    /* C844 800FE444 A4E5030C */  jal        func_800F9690
    /* C848 800FE448 00000000 */   nop
    /* C84C 800FE44C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* C850 800FE450 948A0426 */  addiu      $a0, $s0, %lo(D_80198A94)
    /* C854 800FE454 00004394 */  lhu        $v1, 0x0($v0)
    /* C858 800FE458 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C85C 800FE45C 21186400 */  addu       $v1, $v1, $a0
    /* C860 800FE460 00006290 */  lbu        $v0, 0x0($v1)
    /* C864 800FE464 04D5030C */  jal        func_800F5410
    /* C868 800FE468 0000A2A0 */   sb        $v0, 0x0($a1)
    /* C86C 800FE46C 02D0030C */  jal        func_800F4008
    /* C870 800FE470 38000424 */   addiu     $a0, $zero, 0x38
    /* C874 800FE474 A4E5030C */  jal        func_800F9690
    /* C878 800FE478 00000000 */   nop
    /* C87C 800FE47C 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C880 800FE480 1ADB030C */  jal        func_800F6C68
    /* C884 800FE484 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C888 800FE488 93E0030C */  jal        func_800F824C
    /* C88C 800FE48C 06000424 */   addiu     $a0, $zero, 0x6
    /* C890 800FE490 40DD030C */  jal        func_800F7500
    /* C894 800FE494 07000424 */   addiu     $a0, $zero, 0x7
  .L800FE498:
    /* C898 800FE498 7F00043C */  lui        $a0, (0x7F58F8 >> 16)
    /* C89C 800FE49C 1ADB030C */  jal        func_800F6C68
    /* C8A0 800FE4A0 F8588434 */   ori       $a0, $a0, (0x7F58F8 & 0xFFFF)
    /* C8A4 800FE4A4 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C8A8 800FE4A8 17E2030C */  jal        func_800F885C
    /* C8AC 800FE4AC 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C8B0 800FE4B0 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C8B4 800FE4B4 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C8B8 800FE4B8 00004390 */  lbu        $v1, 0x0($v0)
    /* C8BC 800FE4BC 20D5030C */  jal        func_800F5480
    /* C8C0 800FE4C0 000083A0 */   sb        $v1, 0x0($a0)
    /* C8C4 800FE4C4 16E0030C */  jal        func_800F8058
    /* C8C8 800FE4C8 08000424 */   addiu     $a0, $zero, 0x8
    /* C8CC 800FE4CC A4E5030C */  jal        func_800F9690
    /* C8D0 800FE4D0 00000000 */   nop
    /* C8D4 800FE4D4 A8D7030C */  jal        func_800F5EA0
    /* C8D8 800FE4D8 00000000 */   nop
    /* C8DC 800FE4DC 19D7030C */  jal        func_800F5C64
    /* C8E0 800FE4E0 02020424 */   addiu     $a0, $zero, 0x202
    /* C8E4 800FE4E4 ECFF4014 */  bnez       $v0, .L800FE498
    /* C8E8 800FE4E8 00000000 */   nop
    /* C8EC 800FE4EC 8CD9030C */  jal        func_800F6630
    /* C8F0 800FE4F0 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C8F4 800FE4F4 92D0030C */  jal        func_800F4248
    /* C8F8 800FE4F8 0F000424 */   addiu     $a0, $zero, 0xF
    /* C8FC 800FE4FC A4E5030C */  jal        func_800F9690
    /* C900 800FE500 00000000 */   nop
    /* C904 800FE504 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* C908 800FE508 948A0426 */  addiu      $a0, $s0, %lo(D_80198A94)
    /* C90C 800FE50C 00004394 */  lhu        $v1, 0x0($v0)
    /* C910 800FE510 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C914 800FE514 21186400 */  addu       $v1, $v1, $a0
    /* C918 800FE518 00006290 */  lbu        $v0, 0x0($v1)
    /* C91C 800FE51C 04D5030C */  jal        func_800F5410
    /* C920 800FE520 0000A2A0 */   sb        $v0, 0x0($a1)
    /* C924 800FE524 02D0030C */  jal        func_800F4008
    /* C928 800FE528 B8000424 */   addiu     $a0, $zero, 0xB8
    /* C92C 800FE52C A4E5030C */  jal        func_800F9690
    /* C930 800FE530 00000000 */   nop
    /* C934 800FE534 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C938 800FE538 1ADB030C */  jal        func_800F6C68
    /* C93C 800FE53C 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C940 800FE540 7F00043C */  lui        $a0, (0x7F5848 >> 16)
    /* C944 800FE544 17E2030C */  jal        func_800F885C
    /* C948 800FE548 48588434 */   ori       $a0, $a0, (0x7F5848 & 0xFFFF)
    /* C94C 800FE54C 40DD030C */  jal        func_800F7500
    /* C950 800FE550 07000424 */   addiu     $a0, $zero, 0x7
  .L800FE554:
    /* C954 800FE554 7F00043C */  lui        $a0, (0x7F58F8 >> 16)
    /* C958 800FE558 1ADB030C */  jal        func_800F6C68
    /* C95C 800FE55C F8588434 */   ori       $a0, $a0, (0x7F58F8 & 0xFFFF)
    /* C960 800FE560 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C964 800FE564 17E2030C */  jal        func_800F885C
    /* C968 800FE568 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C96C 800FE56C 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* C970 800FE570 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C974 800FE574 00004390 */  lbu        $v1, 0x0($v0)
    /* C978 800FE578 20D5030C */  jal        func_800F5480
    /* C97C 800FE57C 000083A0 */   sb        $v1, 0x0($a0)
    /* C980 800FE580 16E0030C */  jal        func_800F8058
    /* C984 800FE584 08000424 */   addiu     $a0, $zero, 0x8
    /* C988 800FE588 A4E5030C */  jal        func_800F9690
    /* C98C 800FE58C 00000000 */   nop
    /* C990 800FE590 A8D7030C */  jal        func_800F5EA0
    /* C994 800FE594 00000000 */   nop
    /* C998 800FE598 19D7030C */  jal        func_800F5C64
    /* C99C 800FE59C 02020424 */   addiu     $a0, $zero, 0x202
    /* C9A0 800FE5A0 ECFF4014 */  bnez       $v0, .L800FE554
    /* C9A4 800FE5A4 00000000 */   nop
    /* C9A8 800FE5A8 8CD9030C */  jal        func_800F6630
    /* C9AC 800FE5AC 06000424 */   addiu     $a0, $zero, 0x6
    /* C9B0 800FE5B0 7F00043C */  lui        $a0, (0x7F5900 >> 16)
    /* C9B4 800FE5B4 17E2030C */  jal        func_800F885C
    /* C9B8 800FE5B8 00598434 */   ori       $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C9BC 800FE5BC AFD8030C */  jal        func_800F62BC
    /* C9C0 800FE5C0 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C9C4 800FE5C4 1400BF8F */  lw         $ra, 0x14($sp)
    /* C9C8 800FE5C8 1000B08F */  lw         $s0, 0x10($sp)
    /* C9CC 800FE5CC 0800E003 */  jr         $ra
    /* C9D0 800FE5D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE110
