nonmatching func_8011E16C, 0x1AC

glabel func_8011E16C
    /* 2C56C 8011E16C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C570 8011E170 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C574 8011E174 9CDC030C */  jal        func_800F7270
    /* 2C578 8011E178 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C57C 8011E17C 1600043C */  lui        $a0, (0x168200 >> 16)
    /* 2C580 8011E180 1ADB030C */  jal        func_800F6C68
    /* 2C584 8011E184 00828434 */   ori       $a0, $a0, (0x168200 & 0xFFFF)
    /* 2C588 8011E188 93E0030C */  jal        func_800F824C
    /* 2C58C 8011E18C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C590 8011E190 1600043C */  lui        $a0, (0x168201 >> 16)
    /* 2C594 8011E194 1ADB030C */  jal        func_800F6C68
    /* 2C598 8011E198 01828434 */   ori       $a0, $a0, (0x168201 & 0xFFFF)
    /* 2C59C 8011E19C 93E0030C */  jal        func_800F824C
    /* 2C5A0 8011E1A0 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C5A4 8011E1A4 9CDC030C */  jal        func_800F7270
    /* 2C5A8 8011E1A8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C5AC 8011E1AC 1600043C */  lui        $a0, (0x16C480 >> 16)
  .L8011E1B0:
    /* 2C5B0 8011E1B0 1ADB030C */  jal        func_800F6C68
    /* 2C5B4 8011E1B4 80C48434 */   ori       $a0, $a0, (0x16C480 & 0xFFFF)
    /* 2C5B8 8011E1B8 0DD9030C */  jal        func_800F6434
    /* 2C5BC 8011E1BC 80800434 */   ori       $a0, $zero, 0x8080
    /* 2C5C0 8011E1C0 36004014 */  bnez       $v0, .L8011E29C
    /* 2C5C4 8011E1C4 00000000 */   nop
    /* 2C5C8 8011E1C8 92D0030C */  jal        func_800F4248
    /* 2C5CC 8011E1CC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2C5D0 8011E1D0 80E4030C */  jal        func_800F9200
    /* 2C5D4 8011E1D4 00000000 */   nop
    /* 2C5D8 8011E1D8 1600043C */  lui        $a0, (0x16C481 >> 16)
    /* 2C5DC 8011E1DC 1ADB030C */  jal        func_800F6C68
    /* 2C5E0 8011E1E0 81C48434 */   ori       $a0, $a0, (0x16C481 & 0xFFFF)
    /* 2C5E4 8011E1E4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2C5E8 8011E1E8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2C5EC 8011E1EC 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2C5F0 8011E1F0 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2C5F4 8011E1F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 2C5F8 8011E1F8 EFD8030C */  jal        func_800F63BC
    /* 2C5FC 8011E1FC 000083A4 */   sh        $v1, 0x0($a0)
    /* 2C600 8011E200 F7E4030C */  jal        func_800F93DC
    /* 2C604 8011E204 00000000 */   nop
    /* 2C608 8011E208 9CDC030C */  jal        func_800F7270
    /* 2C60C 8011E20C 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C610 8011E210 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
  .L8011E214:
    /* 2C614 8011E214 17E2030C */  jal        func_800F885C
    /* 2C618 8011E218 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2C61C 8011E21C D9D8030C */  jal        func_800F6364
    /* 2C620 8011E220 00000000 */   nop
    /* 2C624 8011E224 A8D7030C */  jal        func_800F5EA0
    /* 2C628 8011E228 00000000 */   nop
    /* 2C62C 8011E22C 19D7030C */  jal        func_800F5C64
    /* 2C630 8011E230 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C634 8011E234 F7FF4014 */  bnez       $v0, .L8011E214
    /* 2C638 8011E238 7F00043C */   lui       $a0, (0x7F5C71 >> 16)
    /* 2C63C 8011E23C 5BE3030C */  jal        func_800F8D6C
    /* 2C640 8011E240 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C644 8011E244 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 2C648 8011E248 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2C64C 8011E24C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2C650 8011E250 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2C654 8011E254 00004390 */  lbu        $v1, 0x0($v0)
    /* 2C658 8011E258 02000424 */  addiu      $a0, $zero, 0x2
    /* 2C65C 8011E25C 0DD9030C */  jal        func_800F6434
    /* 2C660 8011E260 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 2C664 8011E264 28004014 */  bnez       $v0, .L8011E308
    /* 2C668 8011E268 00000000 */   nop
    /* 2C66C 8011E26C 9CDC030C */  jal        func_800F7270
    /* 2C670 8011E270 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C674 8011E274 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2C678 8011E278 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2C67C 8011E27C 00000000 */  nop
    /* 2C680 8011E280 00006294 */  lhu        $v0, 0x0($v1)
    /* 2C684 8011E284 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2C688 8011E288 02004224 */  addiu      $v0, $v0, 0x2
    /* 2C68C 8011E28C 5BE3030C */  jal        func_800F8D6C
    /* 2C690 8011E290 000062A4 */   sh        $v0, 0x0($v1)
    /* 2C694 8011E294 6C780408 */  j          .L8011E1B0
    /* 2C698 8011E298 1600043C */   lui       $a0, (0x16C480 >> 16)
  .L8011E29C:
    /* 2C69C 8011E29C 9CDC030C */  jal        func_800F7270
    /* 2C6A0 8011E2A0 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C6A4 8011E2A4 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2C6A8 8011E2A8 17E2030C */  jal        func_800F885C
    /* 2C6AC 8011E2AC 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2C6B0 8011E2B0 D9D8030C */  jal        func_800F6364
    /* 2C6B4 8011E2B4 00000000 */   nop
    /* 2C6B8 8011E2B8 5BE3030C */  jal        func_800F8D6C
    /* 2C6BC 8011E2BC 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C6C0 8011E2C0 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 2C6C4 8011E2C4 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2C6C8 8011E2C8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2C6CC 8011E2CC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2C6D0 8011E2D0 00004390 */  lbu        $v1, 0x0($v0)
    /* 2C6D4 8011E2D4 02000424 */  addiu      $a0, $zero, 0x2
    /* 2C6D8 8011E2D8 0DD9030C */  jal        func_800F6434
    /* 2C6DC 8011E2DC 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 2C6E0 8011E2E0 09004014 */  bnez       $v0, .L8011E308
    /* 2C6E4 8011E2E4 00000000 */   nop
    /* 2C6E8 8011E2E8 9CDC030C */  jal        func_800F7270
    /* 2C6EC 8011E2EC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C6F0 8011E2F0 D9D8030C */  jal        func_800F6364
    /* 2C6F4 8011E2F4 00000000 */   nop
    /* 2C6F8 8011E2F8 5BE3030C */  jal        func_800F8D6C
    /* 2C6FC 8011E2FC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C700 8011E300 6C780408 */  j          .L8011E1B0
    /* 2C704 8011E304 1600043C */   lui       $a0, (0x16C480 >> 16)
  .L8011E308:
    /* 2C708 8011E308 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2C70C 8011E30C 00000000 */  nop
    /* 2C710 8011E310 0800E003 */  jr         $ra
    /* 2C714 8011E314 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011E16C
