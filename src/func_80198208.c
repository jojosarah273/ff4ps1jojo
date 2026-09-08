#include "common.h"
__attribute__((naked)) long func_80198208(u32 a0, u32 a1, u32 a2) {
    __asm__ __volatile__(
      "addu $a3, $a2, $0\n\t"
      "addu $a2, $a1, $0\n\t"
      "addu $a1, $a0, $0\n\t"
      ".word 0x000041CD\n\t"
      "beqz $v0, 1f\n\t"
      "addu $v0, $v1, $0\n\t"
      "addiu $v0, $0, -1\n\t"
      "1:\n\t"
      "jr $ra\n\t"
      "nop");
    __builtin_unreachable();
}
