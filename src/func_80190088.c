#include "common.h"
void func_80190088(void) {
    __asm__ __volatile__("addiu $t2, $0, 0xA0\n\tjr $t2\n\taddiu $t1, $0, 0x2A\n\tnop");
    __builtin_unreachable();
}
