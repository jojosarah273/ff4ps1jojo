nonmatching func_80174F64, 0xA0

glabel func_80174F64
    /* 83364 80174F64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 83368 80174F68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8336C 80174F6C 59D9030C */  jal        func_800F6564
    /* 83370 80174F70 04170424 */   addiu     $a0, $zero, 0x1704
    /* 83374 80174F74 5DD5030C */  jal        func_800F5574
    /* 83378 80174F78 06000424 */   addiu     $a0, $zero, 0x6
    /* 8337C 80174F7C F5D4030C */  jal        func_800F53D4
    /* 83380 80174F80 00000000 */   nop
    /* 83384 80174F84 1B004010 */  beqz       $v0, .L80174FF4
    /* 83388 80174F88 00000000 */   nop
    /* 8338C 80174F8C 8CD9030C */  jal        func_800F6630
    /* 83390 80174F90 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 83394 80174F94 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 83398 80174F98 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 8339C 80174F9C 00000000 */  nop
    /* 833A0 80174FA0 00006290 */  lbu        $v0, 0x0($v1)
    /* 833A4 80174FA4 0E000424 */  addiu      $a0, $zero, 0xE
    /* 833A8 80174FA8 82100200 */  srl        $v0, $v0, 2
    /* 833AC 80174FAC 92D0030C */  jal        func_800F4248
    /* 833B0 80174FB0 000062A0 */   sb        $v0, 0x0($v1)
    /* 833B4 80174FB4 1500043C */  lui        $a0, (0x15C3DA >> 16)
    /* 833B8 80174FB8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 833BC 80174FBC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 833C0 80174FC0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 833C4 80174FC4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 833C8 80174FC8 00004394 */  lhu        $v1, 0x0($v0)
    /* 833CC 80174FCC DAC38434 */  ori        $a0, $a0, (0x15C3DA & 0xFFFF)
    /* 833D0 80174FD0 1ADB030C */  jal        func_800F6C68
    /* 833D4 80174FD4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 833D8 80174FD8 62E0030C */  jal        func_800F8188
    /* 833DC 80174FDC C70E0424 */   addiu     $a0, $zero, 0xEC7
    /* 833E0 80174FE0 1500043C */  lui        $a0, (0x15C3DB >> 16)
    /* 833E4 80174FE4 1ADB030C */  jal        func_800F6C68
    /* 833E8 80174FE8 DBC38434 */   ori       $a0, $a0, (0x15C3DB & 0xFFFF)
    /* 833EC 80174FEC 62E0030C */  jal        func_800F8188
    /* 833F0 80174FF0 C80E0424 */   addiu     $a0, $zero, 0xEC8
  .L80174FF4:
    /* 833F4 80174FF4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 833F8 80174FF8 00000000 */  nop
    /* 833FC 80174FFC 0800E003 */  jr         $ra
    /* 83400 80175000 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80174F64
