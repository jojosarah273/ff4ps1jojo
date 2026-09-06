#include "common.h"
__attribute__((naked)) void func_8018F0E8(u32 a0) {
    __asm__ __volatile__(
      "addiu $t2, $zero, 0xA0\n\t"
      "jr $t2\n\t"
      "addiu $t1, $zero, 0xAB\n\t"
      "nop\n\t"
      "addiu $t2, $zero, 0xA0\n\t"
      "jr $t2\n\t"
      "addiu $t1, $zero, 0xAC\n\t"
      "nop\n\t"
      "addiu $sp, $sp, -0x18\n\t"
      "sw $s0, 0x10($sp)\n\t"
      "sw $ra, 0x14($sp)\n\t"
      "jal func_8018F158\n\t"
      "addu $s0, $a0, $zero\n\t"
      "addu $a0, $s0, $zero\n\t"
      "addiu $a1, $zero, 0x3F\n\t"
      "jal func_8018F148\n\t"
      "addu $a2, $zero, $zero\n\t"
      "lw $ra, 0x14($sp)\n\t"
      "lw $s0, 0x10($sp)\n\t"
      "jr $ra\n\t"
      "addiu $sp, $sp, 0x18\n\tnop\n\tnop\n\t"
    );
    __builtin_unreachable();
}
