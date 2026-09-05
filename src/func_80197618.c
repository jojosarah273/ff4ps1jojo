#include "common.h"
void func_80197618(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0x49\n\tnop\n\t.word 0x00007350 # mfhi $t6 # 00000340 <InstrIdType: CPU_SPECIAL>\n\t.word 0x00470000 # sll $zero, $a3, 0 # 00400000 <InstrIdType: CPU_SPECIAL>");
    __builtin_unreachable();
}
