#include "common.h"
__attribute__((naked)) long func_801982E8(void) {
    __asm__ __volatile__(
      ".word 0x0000414D\n\t"
      "beqz $v0, 1f\n\t"
      "addu $v0, $v1, $zero\n\t"
      "addiu $v0, $zero, -1\n\t"
      "1:\n\t"
      "jr $ra\n\t"
      "nop");
    __builtin_unreachable();
}
