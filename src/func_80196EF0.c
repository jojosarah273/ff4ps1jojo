#include "common.h"
__asm__(
  ".globl func_80196EF0\n"
  ".type func_80196EF0, @function\n"
  "func_80196EF0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a2, .L80196F0C\n\taddiu $v0, $a2, -0x1\n\taddiu $v1, $zero, -0x1\n\t.L80196EFC:\n\tsb $a1, 0x0($a0)\n\taddiu $v0, $v0, -0x1\n\tbne $v0, $v1, .L80196EFC\n\taddiu $a0, $a0, 0x1\n\t.L80196F0C:\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196EF0, .-func_80196EF0\n"
);
