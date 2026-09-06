nonmatching func_8016688C, 0x60

glabel func_8016688C
    /* 74C8C 8016688C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 74C90 80166890 00200424 */  addiu      $a0, $zero, 0x2000
    /* 74C94 80166894 1400BFAF */  sw         $ra, 0x14($sp)
    /* 74C98 80166898 C1CE030C */  jal        func_800F3B04
    /* 74C9C 8016689C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 74CA0 801668A0 00800434 */  ori        $a0, $zero, 0x8000
    /* 74CA4 801668A4 C1CE030C */  jal        func_800F3B04
    /* 74CA8 801668A8 21804000 */   addu      $s0, $v0, $zero
    /* 74CAC 801668AC 21384000 */  addu       $a3, $v0, $zero
    /* 74CB0 801668B0 21100000 */  addu       $v0, $zero, $zero
    /* 74CB4 801668B4 08000824 */  addiu      $t0, $zero, 0x8
  .L801668B8:
    /* 74CB8 801668B8 21284700 */  addu       $a1, $v0, $a3
    /* 74CBC 801668BC 21305000 */  addu       $a2, $v0, $s0
    /* 74CC0 801668C0 01004224 */  addiu      $v0, $v0, 0x1
    /* 74CC4 801668C4 B509C390 */  lbu        $v1, 0x9B5($a2)
    /* 74CC8 801668C8 2371A490 */  lbu        $a0, 0x7123($a1)
    /* 74CCC 801668CC FFFF4230 */  andi       $v0, $v0, 0xFFFF
    /* 74CD0 801668D0 2B71A3A0 */  sb         $v1, 0x712B($a1)
    /* 74CD4 801668D4 F8FF4814 */  bne        $v0, $t0, .L801668B8
    /* 74CD8 801668D8 B509C4A0 */   sb        $a0, 0x9B5($a2)
    /* 74CDC 801668DC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 74CE0 801668E0 1000B08F */  lw         $s0, 0x10($sp)
    /* 74CE4 801668E4 0800E003 */  jr         $ra
    /* 74CE8 801668E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016688C
