#include "common.h"
void func_8018F098(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0x2B\n\tnop\n\taddiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0x2F\n\tnop\n\taddiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0x30\n\tnop");
    __builtin_unreachable();
}
