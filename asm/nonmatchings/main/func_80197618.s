nonmatching func_80197618, 0x18

glabel func_80197618
    /* A5A18 80197618 A0000A24 */  addiu      $t2, $zero, 0xA0
    /* A5A1C 8019761C 08004001 */  jr         $t2
    /* A5A20 80197620 49000924 */   addiu     $t1, $zero, 0x49
    /* A5A24 80197624 00000000 */  nop
    /* A5A28 80197628 50730000 */  .word      0x00007350                    # mfhi       $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    /* A5A2C 8019762C 00004700 */  .word      0x00470000                    # sll        $zero, $a3, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
endlabel func_80197618
