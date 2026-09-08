#include "common.h"
__asm__(
  ".globl func_80195668\n"
  ".type func_80195668, @function\n"
  "func_80195668:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tsll $v0, $a0, 16\n\tsra $a2, $v0, 16\n\tbltz $a2, .L801956A0\n\taddu $v0, $0, $0\n\tlui $v0, D_8019DB58\n\tlh $v0, D_8019DB58($v0)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tslt $v0, $v0, $a2\n\tlui $a2, D_8019DB58\n\tlhu $a2, D_8019DB58($a2)\n\tbnez $v0, .L801956A0\n\taddiu $v0, $a2, -0x1\n\taddu $v0, $a0, $0\n\t.L801956A0:\n\taddu $a0, $v0, $0\n\tsll $v0, $a1, 16\n\tsra $a2, $v0, 16\n\tbltz $a2, .L801956E0\n\tnop\n\tlui $v0, D_8019DB5A\n\tlh $v0, D_8019DB5A($v0)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tslt $v0, $v0, $a2\n\tlui $a2, D_8019DB5A\n\tlhu $a2, D_8019DB5A($a2)\n\tbeqz $v0, .L801956E8\n\tandi $v1, $a1, 0x3FF\n\tj .L801956E4\n\taddiu $a1, $a2, -0x1\n\t.L801956E0:\n\taddu $a1, $0, $0\n\t.L801956E4:\n\tandi $v1, $a1, 0x3FF\n\t.L801956E8:\n\tsll $v1, $v1, 10\n\tandi $v0, $a0, 0x3FF\n\tlui $a0, (0xE3000000 >> 16)\n\tor $v0, $v0, $a0\n\tjr $ra\n\tor $v0, $v1, $v0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80195668, .-func_80195668\n"
);
