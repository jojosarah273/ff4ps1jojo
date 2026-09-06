nonmatching func_80148E80, 0x50

glabel func_80148E80
    /* 57280 80148E80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 57284 80148E84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57288 80148E88 77DC030C */  jal        func_800F71DC
    /* 5728C 80148E8C 21200000 */   addu      $a0, $zero, $zero
  .L80148E90:
    /* 57290 80148E90 DAE1030C */  jal        func_800F8768
    /* 57294 80148E94 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 57298 80148E98 DAE1030C */  jal        func_800F8768
    /* 5729C 80148E9C F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 572A0 80148EA0 D9D8030C */  jal        func_800F6364
    /* 572A4 80148EA4 00000000 */   nop
    /* 572A8 80148EA8 56D6030C */  jal        func_800F5958
    /* 572AC 80148EAC 08000424 */   addiu     $a0, $zero, 0x8
    /* 572B0 80148EB0 F5D4030C */  jal        func_800F53D4
    /* 572B4 80148EB4 00000000 */   nop
    /* 572B8 80148EB8 F5FF4010 */  beqz       $v0, .L80148E90
    /* 572BC 80148EBC 00000000 */   nop
    /* 572C0 80148EC0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 572C4 80148EC4 00000000 */  nop
    /* 572C8 80148EC8 0800E003 */  jr         $ra
    /* 572CC 80148ECC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148E80
