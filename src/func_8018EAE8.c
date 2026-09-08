#include "common.h"
__asm__(
  ".globl func_8018EAE8\n"
  ".type func_8018EAE8, @function\n"
  "func_8018EAE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a3, $a3, $a1\n\tlui $a1, (0x2AAAAAAB >> 16)\n\tori $a1, $a1, (0x2AAAAAAB & 0xFFFF)\n\tandi $v1, $a3, 0xFFFF\n\tsrl $v0, $v1, 7\n\taddu $a2, $a2, $v0\n\tsubu $a2, $a2, $a0\n\tsll $a2, $a2, 16\n\tsra $a0, $a2, 16\n\tmult $a0, $a1\n\tandi $a3, $v1, 0x7F\n\tsra $a2, $a2, 31\n\tmfhi $t0\n\tsra $v0, $t0, 1\n\tsubu $a1, $v0, $a2\n\taddiu $a2, $a1, -0x2\n\tsll $v0, $a1, 1\n\taddu $v0, $v0, $a1\n\tsll $v0, $v0, 2\n\tsubu $a0, $a0, $v0\n\tsll $v0, $a0, 16\n\tbgez $v0, .L8018EB4C\n\taddu $v1, $a0, $0\n\taddiu $v1, $a0, 0xC\n\taddiu $a2, $a1, -0x3\n\t.L8018EB4C:\n\tsll $v1, $v1, 16\n\tsra $v1, $v1, 15\n\tandi $v0, $a3, 0xFFFF\n\tsll $v0, $v0, 1\n\tlui $at, D_8019B5B4\n\taddu $at, $at, $v1\n\tlhu $v1, D_8019B5B4($at)\n\tlui $at, D_8019B5CC\n\taddu $at, $at, $v0\n\tlhu $v0, D_8019B5CC($at)\n\tnop\n\tmult $v1, $v0\n\tsll $v0, $a2, 16\n\tsra $v0, $v0, 16\n\tmflo $t0\n\tbltz $v0, .L8018EB98\n\tsra $a1, $t0, 16\n\tj .L8018EBB0\n\taddiu $a1, $0, 0x3FFF\n\t.L8018EB98:\n\tnegu $a0, $v0\n\taddiu $v1, $a0, -0x1\n\taddiu $v0, $0, 0x1\n\tsllv $v0, $v0, $v1\n\taddu $a1, $a1, $v0\n\tsrlv $a1, $a1, $a0\n\t.L8018EBB0:\n\tjr $ra\n\tandi $v0, $a1, 0xFFFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018EAE8, .-func_8018EAE8\n"
);
