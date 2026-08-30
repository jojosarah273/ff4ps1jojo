nonmatching func_801668EC, 0x60

glabel func_801668EC
    /* 74CEC 801668EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 74CF0 801668F0 00200424 */  addiu      $a0, $zero, 0x2000
    /* 74CF4 801668F4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 74CF8 801668F8 C1CE030C */  jal        func_800F3B04
    /* 74CFC 801668FC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 74D00 80166900 00800434 */  ori        $a0, $zero, 0x8000
    /* 74D04 80166904 C1CE030C */  jal        func_800F3B04
    /* 74D08 80166908 21804000 */   addu      $s0, $v0, $zero
    /* 74D0C 8016690C 21384000 */  addu       $a3, $v0, $zero
    /* 74D10 80166910 21100000 */  addu       $v0, $zero, $zero
    /* 74D14 80166914 08000824 */  addiu      $t0, $zero, 0x8
  .L80166918:
    /* 74D18 80166918 21284700 */  addu       $a1, $v0, $a3
    /* 74D1C 8016691C 21305000 */  addu       $a2, $v0, $s0
    /* 74D20 80166920 01004224 */  addiu      $v0, $v0, 0x1
    /* 74D24 80166924 B509C390 */  lbu        $v1, 0x9B5($a2)
    /* 74D28 80166928 2B71A490 */  lbu        $a0, 0x712B($a1)
    /* 74D2C 8016692C FFFF4230 */  andi       $v0, $v0, 0xFFFF
    /* 74D30 80166930 2371A3A0 */  sb         $v1, 0x7123($a1)
    /* 74D34 80166934 F8FF4814 */  bne        $v0, $t0, .L80166918
    /* 74D38 80166938 B509C4A0 */   sb        $a0, 0x9B5($a2)
    /* 74D3C 8016693C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 74D40 80166940 1000B08F */  lw         $s0, 0x10($sp)
    /* 74D44 80166944 0800E003 */  jr         $ra
    /* 74D48 80166948 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801668EC
