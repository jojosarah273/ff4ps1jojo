#include "common.h"
void func_8018F078(void) {
    __asm__ __volatile__("addiu $t2, $0, 0xA0\n\tjr $t2\n\taddiu $t1, $0, 0x17\n\tnop\n\taddiu $t2, $0, 0xA0\n\tjr $t2\n\taddiu $t1, $0, 0x19\n\tnop");
    __builtin_unreachable();
}
