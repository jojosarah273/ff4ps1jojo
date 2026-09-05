#include "common.h"
__asm__(
  ".globl func_8016BB84\n"
  ".type func_8016BB84, @function\n"
  "func_8016BB84:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x64\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016BBB4\n\tnop\n\tjal func_8016DD9C\n\tnop\n\t.L8016BBB4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BB84, .-func_8016BB84\n"
);
