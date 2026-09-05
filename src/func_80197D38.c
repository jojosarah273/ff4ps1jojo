#include "common.h"
void func_80197D38(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xC0\n\tjr $t2\n\taddiu $t1, $zero, 0x2\n\tnop");
    __builtin_unreachable();
}
