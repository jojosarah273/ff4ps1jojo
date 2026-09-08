#include "common.h"
__asm__(
  ".globl func_801856CC\n"
  ".type func_801856CC, @function\n"
  "func_801856CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tsll $a2, $a2, 16\n\tslti $v0, $a1, 0xE0\n\tbeqz $v0, .L8018570C\n\tsra $a2, $a2, 16\n\tsll $v1, $a1, 2\n\tj .L801856F4\n\taddu $v1, $v1, $a0\n\t.L801856E8:\n\tslti $v0, $a1, 0xE0\n\tbeqz $v0, .L8018570C\n\taddiu $v1, $v1, 0x4\n\t.L801856F4:\n\tlh $v0, 0x0($v1)\n\tnop\n\taddu $v0, $v0, $a1\n\tbeq $v0, $a2, .L801856E8\n\taddiu $a1, $a1, 0x1\n\taddiu $a1, $a1, -0x1\n\t.L8018570C:\n\tjr $ra\n\taddu $v0, $a1, $0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801856CC, .-func_801856CC\n"
);
