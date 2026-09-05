#include "common.h"
void func_8018F0E8(void) {
    __asm__ __volatile__("addiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0xAB\n\tnop\n\taddiu $t2, $zero, 0xA0\n\tjr $t2\n\taddiu $t1, $zero, 0xAC\n\tnop");
    __builtin_unreachable();
}
