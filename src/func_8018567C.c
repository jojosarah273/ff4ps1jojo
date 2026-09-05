#include "common.h"
__asm__(
  ".globl func_8018567C\n"
  ".type func_8018567C, @function\n"
  "func_8018567C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tsll $v0, $a1, 2\n\taddu $a0, $v0, $a0\n\tsll $a2, $a2, 16\n\tj .L80185694\n\tsra $a2, $a2, 16\n\t.L80185690:\n\taddiu $a1, $a1, 0x1\n\t.L80185694:\n\tslti $v0, $a1, 0xE0\n\tbeqz $v0, .L801856C4\n\tnop\n\tlh $v1, 0x2($a0)\n\tnop\n\taddu $v0, $v1, $a1\n\tbeq $v0, $a2, .L801856C4\n\tnop\n\tlh $v0, 0x6($a0)\n\tnop\n\tbeq $v1, $v0, .L80185690\n\taddiu $a0, $a0, 0x4\n\t.L801856C4:\n\tjr $ra\n\taddiu $v0, $a1, 0x1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018567C, .-func_8018567C\n"
);
