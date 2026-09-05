#include "common.h"
__asm__(
  ".globl func_80193194\n"
  ".type func_80193194, @function\n"
  "func_80193194:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a1, .L801931B0\n\taddiu $v0, $a1, -0x1\n\taddiu $v1, $zero, -0x1\n\t.L801931A0:\n\tsw $zero, 0x0($a0)\n\taddiu $v0, $v0, -0x1\n\tbne $v0, $v1, .L801931A0\n\taddiu $a0, $a0, 0x4\n\t.L801931B0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80193194, .-func_80193194\n"
);
