nonmatching func_800F9784, 0x4C

glabel func_800F9784
    /* 7B84 800F9784 00008590 */  lbu        $a1, 0x0($a0)
    /* 7B88 800F9788 01008690 */  lbu        $a2, 0x1($a0)
    /* 7B8C 800F978C 6C00878F */  lw         $a3, %gp_rel(D_8019ED68)($gp)
    /* 7B90 800F9790 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 7B94 800F9794 00320600 */  sll        $a2, $a2, 8
    /* 7B98 800F9798 2528A600 */  or         $a1, $a1, $a2
    /* 7B9C 800F979C 0000E290 */  lbu        $v0, 0x0($a3)
    /* 7BA0 800F97A0 00006494 */  lhu        $a0, 0x0($v1)
    /* 7BA4 800F97A4 FD004230 */  andi       $v0, $v0, 0xFD
    /* 7BA8 800F97A8 FF008438 */  xori       $a0, $a0, 0xFF
    /* 7BAC 800F97AC 0000E2A0 */  sb         $v0, 0x0($a3)
    /* 7BB0 800F97B0 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 7BB4 800F97B4 2428A400 */  and        $a1, $a1, $a0
    /* 7BB8 800F97B8 00006290 */  lbu        $v0, 0x0($v1)
    /* 7BBC 800F97BC 0200A014 */  bnez       $a1, .L800F97C8
    /* 7BC0 800F97C0 00000000 */   nop
    /* 7BC4 800F97C4 02004234 */  ori        $v0, $v0, 0x2
  .L800F97C8:
    /* 7BC8 800F97C8 0800E003 */  jr         $ra
    /* 7BCC 800F97CC 000062A0 */   sb        $v0, 0x0($v1)
endlabel func_800F9784
