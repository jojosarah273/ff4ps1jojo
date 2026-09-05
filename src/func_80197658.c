#include "common.h"
void func_80197658(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xB0\n\tjr $t2\n\taddiu $t1, $zero, 0x8\n\tnop");
    __builtin_unreachable();
}
