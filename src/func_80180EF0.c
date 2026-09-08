#include "common.h"
__asm__(
  ".globl func_80180EF0\n"
  ".type func_80180EF0, @function\n"
  "func_80180EF0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a2, $a0, 0xFFFF\n\tsll $a1, $a1, 16\n\tlui $a0, D_8019EE26\n\tlhu $a0, D_8019EE26($a0)\n\tnop\n\tsltiu $v0, $a0, 0x20\n\tbeqz $v0, .L80180F68\n\tsra $a3, $a1, 16\n\tsltiu $v0, $a2, 0x6000\n\tbeqz $v0, .L80180F68\n\tandi $v1, $a0, 0xFFFF\n\taddu $a1, $v1, $0\n\taddiu $v0, $a0, 0x1\n\tlui $a0, D_801DFDE8\n\taddiu $a0, $a0, D_801DFDE8\n\tsll $v1, $v1, 2\n\taddu $v1, $v1, $a0\n\tlui $at, D_8019EE26\n\tsh $v0, D_8019EE26($at)\n\tandi $v0, $a2, 0xFFF0\n\tsll $a1, $a1, 2\n\taddu $a1, $a0, $a1\n\tsh $v0, 0x0($v1)\n\tlui $v0, D_8019EE26\n\tlhu $v0, D_8019EE26($v0)\n\taddiu $v1, $0, -0x1\n\tsh $a3, 0x2($a1)\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $a0\n\tsh $v1, 0x0($v0)\n\t.L80180F68:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80180EF0, .-func_80180EF0\n"
);
