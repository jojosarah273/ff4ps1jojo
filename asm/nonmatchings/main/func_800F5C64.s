nonmatching func_800F5C64, 0x68

glabel func_800F5C64
    /* 4064 800F5C64 6C00868F */  lw         $a2, %gp_rel(D_8019ED68)($gp)
    /* 4068 800F5C68 5400858F */  lw         $a1, %gp_rel(D_8019ED50)($gp)
    /* 406C 800F5C6C 0000C390 */  lbu        $v1, 0x0($a2)
    /* 4070 800F5C70 0000A28C */  lw         $v0, 0x0($a1)
    /* 4074 800F5C74 00000000 */  nop
    /* 4078 800F5C78 00804230 */  andi       $v0, $v0, 0x8000
    /* 407C 800F5C7C 03004010 */  beqz       $v0, .L800F5C8C
    /* 4080 800F5C80 7D006330 */   andi      $v1, $v1, 0x7D
    /* 4084 800F5C84 24D70308 */  j          .L800F5C90
    /* 4088 800F5C88 80006334 */   ori       $v1, $v1, 0x80
  .L800F5C8C:
    /* 408C 800F5C8C FF006330 */  andi       $v1, $v1, 0xFF
  .L800F5C90:
    /* 4090 800F5C90 0000A294 */  lhu        $v0, 0x0($a1)
    /* 4094 800F5C94 00000000 */  nop
    /* 4098 800F5C98 03004014 */  bnez       $v0, .L800F5CA8
    /* 409C 800F5C9C 00000000 */   nop
    /* 40A0 800F5CA0 2BD70308 */  j          .L800F5CAC
    /* 40A4 800F5CA4 02006234 */   ori       $v0, $v1, 0x2
  .L800F5CA8:
    /* 40A8 800F5CA8 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F5CAC:
    /* 40AC 800F5CAC 21184000 */  addu       $v1, $v0, $zero
    /* 40B0 800F5CB0 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 40B4 800F5CB4 FF008230 */  andi       $v0, $a0, 0xFF
    /* 40B8 800F5CB8 24186200 */  and        $v1, $v1, $v0
    /* 40BC 800F5CBC 03120400 */  sra        $v0, $a0, 8
    /* 40C0 800F5CC0 26106200 */  xor        $v0, $v1, $v0
    /* 40C4 800F5CC4 0800E003 */  jr         $ra
    /* 40C8 800F5CC8 FF004230 */   andi      $v0, $v0, 0xFF
endlabel func_800F5C64
