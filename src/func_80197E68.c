#include "common.h"
void func_80197E68(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xB0\n\tjr $t2\n\taddiu $t1, $zero, 0x14\n\tnop");
    __builtin_unreachable();
}
