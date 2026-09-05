#include "common.h"
__asm__(
  ".globl func_8014B5A8\n"
  ".type func_8014B5A8, @function\n"
  "func_8014B5A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L8014B5B0:\n\tjal func_8007259C\n\tnop\n\tjal func_80149394\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8014B5E8\n\tnop\n\tjal func_800F7210\n\tori $a0, $zero, 0xF118\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF321\n\tj .L8014B5B0\n\tnop\n\t.L8014B5E8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B5A8, .-func_8014B5A8\n"
);
