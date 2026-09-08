#include "common.h"
void func_80197618(void) {
    __asm__ __volatile__("addiu $t2, $0, 0xA0\n\tjr $t2\n\taddiu $t1, $0, 0x49\n\tnop\n\t.word 0x00007350 # mfhi $t6 # 00000340 <InstrIdType: CPU_SPECIAL>\n\t.word 0x00470000 # sll $0, $a3, 0 # 00400000 <InstrIdType: CPU_SPECIAL>");
    __builtin_unreachable();
}
