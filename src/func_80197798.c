#include "common.h"
void func_80197798(void) {
    __asm__ __volatile__("addiu $t2, $0, 0xB0\n\tjr $t2\n\taddiu $t1, $0, 0x5B\n\tnop");
    __builtin_unreachable();
}
