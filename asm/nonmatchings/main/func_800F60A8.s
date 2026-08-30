nonmatching func_800F60A8, 0x5C

glabel func_800F60A8
    /* 44A8 800F60A8 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 44AC 800F60AC 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 44B0 800F60B0 0000C390 */  lbu        $v1, 0x0($a2)
    /* 44B4 800F60B4 0000A290 */  lbu        $v0, 0x0($a1)
    /* 44B8 800F60B8 7D006330 */  andi       $v1, $v1, 0x7D
    /* 44BC 800F60BC 80004230 */  andi       $v0, $v0, 0x80
    /* 44C0 800F60C0 25106200 */  or         $v0, $v1, $v0
    /* 44C4 800F60C4 FF004330 */  andi       $v1, $v0, 0xFF
    /* 44C8 800F60C8 0000A290 */  lbu        $v0, 0x0($a1)
    /* 44CC 800F60CC 00000000 */  nop
    /* 44D0 800F60D0 03004014 */  bnez       $v0, .L800F60E0
    /* 44D4 800F60D4 00000000 */   nop
    /* 44D8 800F60D8 39D80308 */  j          .L800F60E4
    /* 44DC 800F60DC 02006234 */   ori       $v0, $v1, 0x2
  .L800F60E0:
    /* 44E0 800F60E0 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F60E4:
    /* 44E4 800F60E4 21184000 */  addu       $v1, $v0, $zero
    /* 44E8 800F60E8 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 44EC 800F60EC FF008230 */  andi       $v0, $a0, 0xFF
    /* 44F0 800F60F0 24186200 */  and        $v1, $v1, $v0
    /* 44F4 800F60F4 03120400 */  sra        $v0, $a0, 8
    /* 44F8 800F60F8 26106200 */  xor        $v0, $v1, $v0
    /* 44FC 800F60FC 0800E003 */  jr         $ra
    /* 4500 800F6100 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F60A8
