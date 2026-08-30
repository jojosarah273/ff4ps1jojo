nonmatching func_801971E8, 0x18

glabel func_801971E8
    /* A55E8 801971E8 80110500 */  sll        $v0, $a1, 6
    /* A55EC 801971EC 03210400 */  sra        $a0, $a0, 4
    /* A55F0 801971F0 3F008430 */  andi       $a0, $a0, 0x3F
    /* A55F4 801971F4 25104400 */  or         $v0, $v0, $a0
    /* A55F8 801971F8 0800E003 */  jr         $ra
    /* A55FC 801971FC FFFF4230 */   andi      $v0, $v0, 0xFFFF
endlabel func_801971E8
    /* A5600 80197200 00000000 */  nop
    /* A5604 80197204 00000000 */  nop
