#include "common.h"
__asm__(
  ".globl func_80149EE0\n"
  ".type func_80149EE0, @function\n"
  "func_80149EE0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF2D0\n\tjal func_800F6E30\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80149F10\n\tnop\n\tjal func_80149F20\n\tnop\n\t.L80149F10:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80149EE0, .-func_80149EE0\n"
);
