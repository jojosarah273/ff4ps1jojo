nonmatching func_8016762C, 0x38

glabel func_8016762C
    /* 75A2C 8016762C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 75A30 80167630 1000BFAF */  sw         $ra, 0x10($sp)
  .L80167634:
    /* 75A34 80167634 5DC0010C */  jal        func_80070174
    /* 75A38 80167638 00000000 */   nop
    /* 75A3C 8016763C 92D7030C */  jal        func_800F5E48
    /* 75A40 80167640 00000000 */   nop
    /* 75A44 80167644 19D7030C */  jal        func_800F5C64
    /* 75A48 80167648 02020424 */   addiu     $a0, $zero, 0x202
    /* 75A4C 8016764C F9FF4014 */  bnez       $v0, .L80167634
    /* 75A50 80167650 00000000 */   nop
    /* 75A54 80167654 1000BF8F */  lw         $ra, 0x10($sp)
    /* 75A58 80167658 00000000 */  nop
    /* 75A5C 8016765C 0800E003 */  jr         $ra
    /* 75A60 80167660 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016762C
