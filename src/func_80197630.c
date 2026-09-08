#include "common.h"
void func_80197630(void) {
    __asm__ __volatile__("addiu $t2, $0, 0xA0\n\tjr $t2\n\taddiu $t1, $0, 0x72\n\tnop\n\tnop\n\tnop");
    __builtin_unreachable();
}
