#include "common.h"
void func_80190088(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0x2A\n\tnop");
    __builtin_unreachable();
}
