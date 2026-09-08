#include "common.h"
void func_80197D48(void) {
    __asm__ __volatile__("addiu $t2, $0, 0xC0\n\tjr $t2\n\taddiu $t1, $0, 0x3\n\tnop");
    __builtin_unreachable();
}
