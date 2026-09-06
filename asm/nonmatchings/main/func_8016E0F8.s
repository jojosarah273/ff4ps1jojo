nonmatching func_8016E0F8, 0x260

glabel func_8016E0F8
    /* 7C4F8 8016E0F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7C4FC 8016E0FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7C500 8016E100 8CD9030C */  jal        func_800F6630
    /* 7C504 8016E104 95000424 */   addiu     $a0, $zero, 0x95
    /* 7C508 8016E108 0DD9030C */  jal        func_800F6434
    /* 7C50C 8016E10C 02020424 */   addiu     $a0, $zero, 0x202
    /* 7C510 8016E110 8D004010 */  beqz       $v0, .L8016E348
    /* 7C514 8016E114 00000000 */   nop
    /* 7C518 8016E118 EEE3030C */  jal        func_800F8FB8
    /* 7C51C 8016E11C 95000424 */   addiu     $a0, $zero, 0x95
    /* 7C520 8016E120 94AD050C */  jal        func_8016B650
    /* 7C524 8016E124 00000000 */   nop
    /* 7C528 8016E128 C7E5030C */  jal        func_800F971C
    /* 7C52C 8016E12C 00000000 */   nop
    /* 7C530 8016E130 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C534 8016E134 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C538 8016E138 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7C53C 8016E13C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7C540 8016E140 00006294 */  lhu        $v0, 0x0($v1)
    /* 7C544 8016E144 00000000 */  nop
    /* 7C548 8016E148 000082A4 */  sh         $v0, 0x0($a0)
    /* 7C54C 8016E14C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C550 8016E150 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C554 8016E154 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 7C558 8016E158 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 7C55C 8016E15C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7C560 8016E160 00000000 */  nop
    /* 7C564 8016E164 000082A4 */  sh         $v0, 0x0($a0)
  .L8016E168:
    /* 7C568 8016E168 CCE4030C */  jal        func_800F9330
    /* 7C56C 8016E16C 00000000 */   nop
    /* 7C570 8016E170 DADA030C */  jal        func_800F6B68
    /* 7C574 8016E174 03230424 */   addiu     $a0, $zero, 0x2303
    /* 7C578 8016E178 0DD9030C */  jal        func_800F6434
    /* 7C57C 8016E17C 02000424 */   addiu     $a0, $zero, 0x2
    /* 7C580 8016E180 65004014 */  bnez       $v0, .L8016E318
    /* 7C584 8016E184 00000000 */   nop
    /* 7C588 8016E188 CCE4030C */  jal        func_800F9330
    /* 7C58C 8016E18C 00000000 */   nop
    /* 7C590 8016E190 1A80033C */  lui        $v1, %hi(D_8019ED5C)
    /* 7C594 8016E194 5CED638C */  lw         $v1, %lo(D_8019ED5C)($v1)
    /* 7C598 8016E198 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 7C59C 8016E19C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 7C5A0 8016E1A0 00006290 */  lbu        $v0, 0x0($v1)
    /* 7C5A4 8016E1A4 50D4030C */  jal        func_800F5140
    /* 7C5A8 8016E1A8 000082A0 */   sb        $v0, 0x0($a0)
    /* 7C5AC 8016E1AC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7C5B0 8016E1B0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7C5B4 8016E1B4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7C5B8 8016E1B8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7C5BC 8016E1BC 00004394 */  lhu        $v1, 0x0($v0)
    /* 7C5C0 8016E1C0 84230424 */  addiu      $a0, $zero, 0x2384
    /* 7C5C4 8016E1C4 DADA030C */  jal        func_800F6B68
    /* 7C5C8 8016E1C8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7C5CC 8016E1CC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7C5D0 8016E1D0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7C5D4 8016E1D4 00000000 */  nop
    /* 7C5D8 8016E1D8 00004494 */  lhu        $a0, 0x0($v0)
    /* 7C5DC 8016E1DC C1CE030C */  jal        func_800F3B04
    /* 7C5E0 8016E1E0 84248424 */   addiu     $a0, $a0, 0x2484
    /* 7C5E4 8016E1E4 31DE030C */  jal        func_800F78C4
    /* 7C5E8 8016E1E8 21204000 */   addu      $a0, $v0, $zero
    /* 7C5EC 8016E1EC 46DE030C */  jal        func_800F7918
    /* 7C5F0 8016E1F0 02000424 */   addiu     $a0, $zero, 0x2
    /* 7C5F4 8016E1F4 09004014 */  bnez       $v0, .L8016E21C
    /* 7C5F8 8016E1F8 00000000 */   nop
    /* 7C5FC 8016E1FC 53D9030C */  jal        func_800F654C
    /* 7C600 8016E200 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 7C604 8016E204 58E2030C */  jal        func_800F8960
    /* 7C608 8016E208 00030424 */   addiu     $a0, $zero, 0x300
    /* 7C60C 8016E20C 58E2030C */  jal        func_800F8960
    /* 7C610 8016E210 01030424 */   addiu     $a0, $zero, 0x301
    /* 7C614 8016E214 8FB80508 */  j          .L8016E23C
    /* 7C618 8016E218 00000000 */   nop
  .L8016E21C:
    /* 7C61C 8016E21C DADA030C */  jal        func_800F6B68
    /* 7C620 8016E220 83230424 */   addiu     $a0, $zero, 0x2383
    /* 7C624 8016E224 58E2030C */  jal        func_800F8960
    /* 7C628 8016E228 00030424 */   addiu     $a0, $zero, 0x300
    /* 7C62C 8016E22C DADA030C */  jal        func_800F6B68
    /* 7C630 8016E230 83240424 */   addiu     $a0, $zero, 0x2483
    /* 7C634 8016E234 58E2030C */  jal        func_800F8960
    /* 7C638 8016E238 01030424 */   addiu     $a0, $zero, 0x301
  .L8016E23C:
    /* 7C63C 8016E23C 68E5030C */  jal        func_800F95A0
    /* 7C640 8016E240 00000000 */   nop
    /* 7C644 8016E244 DADA030C */  jal        func_800F6B68
    /* 7C648 8016E248 83260424 */   addiu     $a0, $zero, 0x2683
    /* 7C64C 8016E24C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7C650 8016E250 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7C654 8016E254 00000000 */  nop
    /* 7C658 8016E258 00006290 */  lbu        $v0, 0x0($v1)
    /* 7C65C 8016E25C 00000000 */  nop
    /* 7C660 8016E260 00110200 */  sll        $v0, $v0, 4
    /* 7C664 8016E264 04D5030C */  jal        func_800F5410
    /* 7C668 8016E268 000062A0 */   sb        $v0, 0x0($v1)
    /* 7C66C 8016E26C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 7C670 8016E270 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 7C674 8016E274 00000000 */  nop
    /* 7C678 8016E278 00004494 */  lhu        $a0, 0x0($v0)
    /* 7C67C 8016E27C C1CE030C */  jal        func_800F3B04
    /* 7C680 8016E280 03278424 */   addiu     $a0, $a0, 0x2703
    /* 7C684 8016E284 CECF030C */  jal        func_800F3F38
    /* 7C688 8016E288 21204000 */   addu      $a0, $v0, $zero
    /* 7C68C 8016E28C 1300043C */  lui        $a0, (0x13EDC7 >> 16)
    /* 7C690 8016E290 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7C694 8016E294 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7C698 8016E298 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7C69C 8016E29C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7C6A0 8016E2A0 00004394 */  lhu        $v1, 0x0($v0)
    /* 7C6A4 8016E2A4 C7ED8434 */  ori        $a0, $a0, (0x13EDC7 & 0xFFFF)
    /* 7C6A8 8016E2A8 1ADB030C */  jal        func_800F6C68
    /* 7C6AC 8016E2AC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7C6B0 8016E2B0 93E0030C */  jal        func_800F824C
    /* 7C6B4 8016E2B4 28000424 */   addiu     $a0, $zero, 0x28
    /* 7C6B8 8016E2B8 92D0030C */  jal        func_800F4248
    /* 7C6BC 8016E2BC 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 7C6C0 8016E2C0 58E2030C */  jal        func_800F8960
    /* 7C6C4 8016E2C4 02030424 */   addiu     $a0, $zero, 0x302
    /* 7C6C8 8016E2C8 8CD9030C */  jal        func_800F6630
    /* 7C6CC 8016E2CC 28000424 */   addiu     $a0, $zero, 0x28
    /* 7C6D0 8016E2D0 92D0030C */  jal        func_800F4248
    /* 7C6D4 8016E2D4 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 7C6D8 8016E2D8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7C6DC 8016E2DC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7C6E0 8016E2E0 00000000 */  nop
    /* 7C6E4 8016E2E4 00006290 */  lbu        $v0, 0x0($v1)
    /* 7C6E8 8016E2E8 03030424 */  addiu      $a0, $zero, 0x303
    /* 7C6EC 8016E2EC 0E004234 */  ori        $v0, $v0, 0xE
    /* 7C6F0 8016E2F0 58E2030C */  jal        func_800F8960
    /* 7C6F4 8016E2F4 000062A0 */   sb        $v0, 0x0($v1)
    /* 7C6F8 8016E2F8 EFD8030C */  jal        func_800F63BC
    /* 7C6FC 8016E2FC 00000000 */   nop
    /* 7C700 8016E300 EFD8030C */  jal        func_800F63BC
    /* 7C704 8016E304 00000000 */   nop
    /* 7C708 8016E308 EFD8030C */  jal        func_800F63BC
    /* 7C70C 8016E30C 00000000 */   nop
    /* 7C710 8016E310 EFD8030C */  jal        func_800F63BC
    /* 7C714 8016E314 00000000 */   nop
  .L8016E318:
    /* 7C718 8016E318 68E5030C */  jal        func_800F95A0
    /* 7C71C 8016E31C 00000000 */   nop
    /* 7C720 8016E320 D9D8030C */  jal        func_800F6364
    /* 7C724 8016E324 00000000 */   nop
    /* 7C728 8016E328 0FCF030C */  jal        func_800F3C3C
    /* 7C72C 8016E32C 96000424 */   addiu     $a0, $zero, 0x96
    /* 7C730 8016E330 ABD5030C */  jal        func_800F56AC
    /* 7C734 8016E334 21204000 */   addu      $a0, $v0, $zero
    /* 7C738 8016E338 F5D4030C */  jal        func_800F53D4
    /* 7C73C 8016E33C 00000000 */   nop
    /* 7C740 8016E340 89FF4010 */  beqz       $v0, .L8016E168
    /* 7C744 8016E344 00000000 */   nop
  .L8016E348:
    /* 7C748 8016E348 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7C74C 8016E34C 00000000 */  nop
    /* 7C750 8016E350 0800E003 */  jr         $ra
    /* 7C754 8016E354 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E0F8
