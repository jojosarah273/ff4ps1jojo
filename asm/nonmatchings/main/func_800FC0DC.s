nonmatching func_800FC0DC, 0x34

glabel func_800FC0DC
    /* A4DC 800FC0DC 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* A4E0 800FC0E0 00000000 */  nop
    /* A4E4 800FC0E4 00006294 */  lhu        $v0, 0x0($v1)
    /* A4E8 800FC0E8 00000000 */  nop
    /* A4EC 800FC0EC 04004224 */  addiu      $v0, $v0, 0x4
    /* A4F0 800FC0F0 000062A4 */  sh         $v0, 0x0($v1)
    /* A4F4 800FC0F4 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* A4F8 800FC0F8 00000000 */  nop
    /* A4FC 800FC0FC 00008294 */  lhu        $v0, 0x0($a0)
    /* A500 800FC100 00000000 */  nop
    /* A504 800FC104 04004224 */  addiu      $v0, $v0, 0x4
    /* A508 800FC108 0800E003 */  jr         $ra
    /* A50C 800FC10C 000082A4 */   sh        $v0, 0x0($a0)
endlabel func_800FC0DC
