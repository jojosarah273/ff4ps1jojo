nonmatching func_8010E158, 0x120

glabel func_8010E158
    /* 1C558 8010E158 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C55C 8010E15C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C560 8010E160 EEE3030C */  jal        func_800F8FB8
    /* 1C564 8010E164 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 1C568 8010E168 EEE3030C */  jal        func_800F8FB8
    /* 1C56C 8010E16C 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1C570 8010E170 77DC030C */  jal        func_800F71DC
    /* 1C574 8010E174 64000424 */   addiu     $a0, $zero, 0x64
    /* 1C578 8010E178 5BE3030C */  jal        func_800F8D6C
    /* 1C57C 8010E17C 89000424 */   addiu     $a0, $zero, 0x89
  .L8010E180:
    /* 1C580 8010E180 DEF9030C */  jal        func_800FE778
    /* 1C584 8010E184 00000000 */   nop
    /* 1C588 8010E188 8CD9030C */  jal        func_800F6630
    /* 1C58C 8010E18C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C590 8010E190 5DD5030C */  jal        func_800F5574
    /* 1C594 8010E194 40000424 */   addiu     $a0, $zero, 0x40
    /* 1C598 8010E198 F0D4030C */  jal        func_800F53C0
    /* 1C59C 8010E19C 00000000 */   nop
    /* 1C5A0 8010E1A0 0F004014 */  bnez       $v0, .L8010E1E0
    /* 1C5A4 8010E1A4 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 1C5A8 8010E1A8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1C5AC 8010E1AC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1C5B0 8010E1B0 00000000 */  nop
    /* 1C5B4 8010E1B4 00006290 */  lbu        $v0, 0x0($v1)
    /* 1C5B8 8010E1B8 00000000 */  nop
    /* 1C5BC 8010E1BC 82100200 */  srl        $v0, $v0, 2
    /* 1C5C0 8010E1C0 93E0030C */  jal        func_800F824C
    /* 1C5C4 8010E1C4 000062A0 */   sb        $v0, 0x0($v1)
    /* 1C5C8 8010E1C8 04D5030C */  jal        func_800F5410
    /* 1C5CC 8010E1CC 00000000 */   nop
    /* 1C5D0 8010E1D0 02D0030C */  jal        func_800F4008
    /* 1C5D4 8010E1D4 10000424 */   addiu     $a0, $zero, 0x10
    /* 1C5D8 8010E1D8 93E0030C */  jal        func_800F824C
    /* 1C5DC 8010E1DC AD000424 */   addiu     $a0, $zero, 0xAD
  .L8010E1E0:
    /* 1C5E0 8010E1E0 53D9030C */  jal        func_800F654C
    /* 1C5E4 8010E1E4 01000424 */   addiu     $a0, $zero, 0x1
    /* 1C5E8 8010E1E8 93E0030C */  jal        func_800F824C
    /* 1C5EC 8010E1EC D5000424 */   addiu     $a0, $zero, 0xD5
    /* 1C5F0 8010E1F0 1CFA030C */  jal        func_800FE870
    /* 1C5F4 8010E1F4 00000000 */   nop
    /* 1C5F8 8010E1F8 53D9030C */  jal        func_800F654C
    /* 1C5FC 8010E1FC 02000424 */   addiu     $a0, $zero, 0x2
    /* 1C600 8010E200 93E0030C */  jal        func_800F824C
    /* 1C604 8010E204 05000424 */   addiu     $a0, $zero, 0x5
    /* 1C608 8010E208 EEE3030C */  jal        func_800F8FB8
    /* 1C60C 8010E20C 04000424 */   addiu     $a0, $zero, 0x4
    /* 1C610 8010E210 53D9030C */  jal        func_800F654C
    /* 1C614 8010E214 01000424 */   addiu     $a0, $zero, 0x1
    /* 1C618 8010E218 93E0030C */  jal        func_800F824C
    /* 1C61C 8010E21C D5000424 */   addiu     $a0, $zero, 0xD5
    /* 1C620 8010E220 0F15040C */  jal        func_8010543C
    /* 1C624 8010E224 00000000 */   nop
    /* 1C628 8010E228 DC09040C */  jal        func_80102770
    /* 1C62C 8010E22C 00000000 */   nop
    /* 1C630 8010E230 EACA050C */  jal        func_80172BA8
    /* 1C634 8010E234 00000000 */   nop
    /* 1C638 8010E238 9CDC030C */  jal        func_800F7270
    /* 1C63C 8010E23C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C640 8010E240 92D7030C */  jal        func_800F5E48
    /* 1C644 8010E244 00000000 */   nop
    /* 1C648 8010E248 5BE3030C */  jal        func_800F8D6C
    /* 1C64C 8010E24C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C650 8010E250 19D7030C */  jal        func_800F5C64
    /* 1C654 8010E254 02020424 */   addiu     $a0, $zero, 0x202
    /* 1C658 8010E258 C9FF4014 */  bnez       $v0, .L8010E180
    /* 1C65C 8010E25C 00000000 */   nop
    /* 1C660 8010E260 977A040C */  jal        func_8011EA5C
    /* 1C664 8010E264 00000000 */   nop
    /* 1C668 8010E268 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C66C 8010E26C 00000000 */  nop
    /* 1C670 8010E270 0800E003 */  jr         $ra
    /* 1C674 8010E274 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E158
