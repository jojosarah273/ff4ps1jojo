#include "common.h"
__attribute__((naked)) long func_801981D8(u32 a0, u32 a1) {
    __asm__ __volatile__(
      "addu $a2, $a1, $zero\n\t"
      "addu $a1, $a0, $zero\n\t"
      ".word 0x000040CD\n\t"
      "beqz $v0, 1f\n\t"
      "addu $v0, $v1, $zero\n\t"
      "addiu $v0, $zero, -1\n\t"
      "1:\n\t"
      "jr $ra\n\t"
      "nop");
    __builtin_unreachable();
}
