#include "common.h"
__asm__(
  ".globl func_801932B8\n"
  ".type func_801932B8, @function\n"
  "func_801932B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a1, .L801932D4\n\taddiu $v0, $a1, -0x1\n\taddiu $v1, $zero, -0x1\n\t.L801932C4:\n\tsw $zero, 0x0($a0)\n\taddiu $v0, $v0, -0x1\n\tbne $v0, $v1, .L801932C4\n\taddiu $a0, $a0, 0x4\n\t.L801932D4:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801932B8, .-func_801932B8\n"
);
