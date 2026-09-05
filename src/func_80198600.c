#include "common.h"
__attribute__((naked)) int func_80198600(u32 a, u32 b) {
    __asm__ __volatile__(
      ".set noreorder\n\t"
      ".set\tnoreorder\n\t"
      "beq $a0, $a1, 2f\n\t"
      "lui $v1, 0x7FFF\n\t"
      "ori $v1, $v1, 0xFFFF\n\t"
      "and $v0, $a0, $v1\n\t"
      "bnez $v0, 1f\n\t"
      "addiu $v0, $zero, 1\n\t"
      "and $v0, $a1, $v1\n\t"
      "bnez $v0, 1f\n\t"
      "addiu $v0, $zero, 1\n\t"
      "2:\n\t"
      "addu $v0, $zero, $zero\n\t"
      "1:\n\t"
      "jr $ra\n\t"
      "nop\n\t"
      ".set\treorder");
    __builtin_unreachable();
}
