nonmatching func_8017EA90, 0x38

glabel func_8017EA90
    /* 8CE90 8017EA90 FF008430 */  andi       $a0, $a0, 0xFF
    /* 8CE94 8017EA94 80008230 */  andi       $v0, $a0, 0x80
    /* 8CE98 8017EA98 02004010 */  beqz       $v0, .L8017EAA4
    /* 8CE9C 8017EA9C 1F008330 */   andi      $v1, $a0, 0x1F
    /* 8CEA0 8017EAA0 7E0183A7 */  sh         $v1, %gp_rel(D_8019EE7A)($gp)
  .L8017EAA4:
    /* 8CEA4 8017EAA4 40008230 */  andi       $v0, $a0, 0x40
    /* 8CEA8 8017EAA8 02004010 */  beqz       $v0, .L8017EAB4
    /* 8CEAC 8017EAAC 20008230 */   andi      $v0, $a0, 0x20
    /* 8CEB0 8017EAB0 800183A7 */  sh         $v1, %gp_rel(D_8019EE7C)($gp)
  .L8017EAB4:
    /* 8CEB4 8017EAB4 02004010 */  beqz       $v0, .L8017EAC0
    /* 8CEB8 8017EAB8 00000000 */   nop
    /* 8CEBC 8017EABC 820183A7 */  sh         $v1, %gp_rel(D_8019EE7E)($gp)
  .L8017EAC0:
    /* 8CEC0 8017EAC0 0800E003 */  jr         $ra
    /* 8CEC4 8017EAC4 00000000 */   nop
endlabel func_8017EA90
