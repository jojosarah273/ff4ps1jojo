nonmatching func_8016C4A0, 0x184

glabel func_8016C4A0
    /* 7A8A0 8016C4A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A8A4 8016C4A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A8A8 8016C4A8 53D9030C */  jal        func_800F654C
    /* 7A8AC 8016C4AC 48000424 */   addiu     $a0, $zero, 0x48
    /* 7A8B0 8016C4B0 93E0030C */  jal        func_800F824C
    /* 7A8B4 8016C4B4 50000424 */   addiu     $a0, $zero, 0x50
    /* 7A8B8 8016C4B8 C7E5030C */  jal        func_800F971C
    /* 7A8BC 8016C4BC 00000000 */   nop
    /* 7A8C0 8016C4C0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7A8C4 8016C4C4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7A8C8 8016C4C8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7A8CC 8016C4CC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7A8D0 8016C4D0 00004394 */  lhu        $v1, 0x0($v0)
    /* 7A8D4 8016C4D4 00000000 */  nop
    /* 7A8D8 8016C4D8 000083A4 */  sh         $v1, 0x0($a0)
  .L8016C4DC:
    /* 7A8DC 8016C4DC 90D8030C */  jal        func_800F6240
    /* 7A8E0 8016C4E0 277D0424 */   addiu     $a0, $zero, 0x7D27
    /* 7A8E4 8016C4E4 80E4030C */  jal        func_800F9200
    /* 7A8E8 8016C4E8 00000000 */   nop
    /* 7A8EC 8016C4EC CCE4030C */  jal        func_800F9330
    /* 7A8F0 8016C4F0 00000000 */   nop
    /* 7A8F4 8016C4F4 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* 7A8F8 8016C4F8 1ADB030C */  jal        func_800F6C68
    /* 7A8FC 8016C4FC 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* 7A900 8016C500 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7A904 8016C504 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7A908 8016C508 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 7A90C 8016C50C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 7A910 8016C510 00004394 */  lhu        $v1, 0x0($v0)
    /* 7A914 8016C514 4B000424 */  addiu      $a0, $zero, 0x4B
    /* 7A918 8016C518 AFE3030C */  jal        func_800F8EBC
    /* 7A91C 8016C51C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7A920 8016C520 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* 7A924 8016C524 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7A928 8016C528 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7A92C 8016C52C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7A930 8016C530 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7A934 8016C534 00004394 */  lhu        $v1, 0x0($v0)
    /* 7A938 8016C538 00EE8434 */  ori        $a0, $a0, (0x14EE00 & 0xFFFF)
    /* 7A93C 8016C53C 1ADB030C */  jal        func_800F6C68
    /* 7A940 8016C540 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7A944 8016C544 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7A948 8016C548 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7A94C 8016C54C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 7A950 8016C550 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 7A954 8016C554 00004394 */  lhu        $v1, 0x0($v0)
    /* 7A958 8016C558 4D000424 */  addiu      $a0, $zero, 0x4D
    /* 7A95C 8016C55C AFE3030C */  jal        func_800F8EBC
    /* 7A960 8016C560 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7A964 8016C564 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 7A968 8016C568 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 7A96C 8016C56C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7A970 8016C570 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7A974 8016C574 00004390 */  lbu        $v1, 0x0($v0)
    /* 7A978 8016C578 277D0424 */  addiu      $a0, $zero, 0x7D27
    /* 7A97C 8016C57C 59D9030C */  jal        func_800F6564
    /* 7A980 8016C580 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 7A984 8016C584 92D0030C */  jal        func_800F4248
    /* 7A988 8016C588 07000424 */   addiu     $a0, $zero, 0x7
    /* 7A98C 8016C58C 48D0030C */  jal        func_800F4120
    /* 7A990 8016C590 02000424 */   addiu     $a0, $zero, 0x2
    /* 7A994 8016C594 03004014 */  bnez       $v0, .L8016C5A4
    /* 7A998 8016C598 00000000 */   nop
    /* 7A99C 8016C59C 53D9030C */  jal        func_800F654C
    /* 7A9A0 8016C5A0 01000424 */   addiu     $a0, $zero, 0x1
  .L8016C5A4:
    /* 7A9A4 8016C5A4 04D5030C */  jal        func_800F5410
    /* 7A9A8 8016C5A8 00000000 */   nop
    /* 7A9AC 8016C5AC 02D0030C */  jal        func_800F4008
    /* 7A9B0 8016C5B0 50000424 */   addiu     $a0, $zero, 0x50
    /* 7A9B4 8016C5B4 93E0030C */  jal        func_800F824C
    /* 7A9B8 8016C5B8 4F000424 */   addiu     $a0, $zero, 0x4F
    /* 7A9BC 8016C5BC 53D9030C */  jal        func_800F654C
    /* 7A9C0 8016C5C0 01000424 */   addiu     $a0, $zero, 0x1
    /* 7A9C4 8016C5C4 93E0030C */  jal        func_800F824C
    /* 7A9C8 8016C5C8 51000424 */   addiu     $a0, $zero, 0x51
    /* 7A9CC 8016C5CC D8DB050C */  jal        func_80176F60
    /* 7A9D0 8016C5D0 00000000 */   nop
    /* 7A9D4 8016C5D4 68E5030C */  jal        func_800F95A0
    /* 7A9D8 8016C5D8 00000000 */   nop
    /* 7A9DC 8016C5DC D9D8030C */  jal        func_800F6364
    /* 7A9E0 8016C5E0 00000000 */   nop
    /* 7A9E4 8016C5E4 D9D8030C */  jal        func_800F6364
    /* 7A9E8 8016C5E8 00000000 */   nop
    /* 7A9EC 8016C5EC F7E4030C */  jal        func_800F93DC
    /* 7A9F0 8016C5F0 00000000 */   nop
    /* 7A9F4 8016C5F4 7AD8030C */  jal        func_800F61E8
    /* 7A9F8 8016C5F8 00000000 */   nop
    /* 7A9FC 8016C5FC 5DD5030C */  jal        func_800F5574
    /* 7AA00 8016C600 38000424 */   addiu     $a0, $zero, 0x38
    /* 7AA04 8016C604 F5D4030C */  jal        func_800F53D4
    /* 7AA08 8016C608 00000000 */   nop
    /* 7AA0C 8016C60C B3FF4010 */  beqz       $v0, .L8016C4DC
    /* 7AA10 8016C610 00000000 */   nop
    /* 7AA14 8016C614 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7AA18 8016C618 00000000 */  nop
    /* 7AA1C 8016C61C 0800E003 */  jr         $ra
    /* 7AA20 8016C620 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016C4A0
