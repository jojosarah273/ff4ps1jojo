#include "common.h"
__asm__(
  ".globl func_80180D64\n"
  ".type func_80180D64, @function\n"
  "func_80180D64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a1, (0x80012800 >> 16)\n\tori $a1, $a1, (0x80012800 & 0xFFFF)\n\taddu $t0, $zero, $zero\n\tsll $a0, $a0, 16\n\tsra $a0, $a0, 16\n\tsll $t6, $a0, 1\n\taddiu $t7, $zero, 0x7\n\tlui $t4, (0x10000 >> 16)\n\tlw $v0, %gp_rel(D_8019EEA8)($gp)\n\tsll $t3, $a0, 5\n\tsw $ra, 0x10($sp)\n\taddu $t5, $t3, $v0\n\taddu $t1, $zero, $zero\n\t.L80180D9C:\n\taddiu $t2, $t0, 0x1\n\tlui $a3, (0x10000 >> 16)\n\tsubu $v0, $t7, $t0\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $t3\n\taddu $a2, $v0, $a1\n\tsll $v1, $t0, 2\n\taddu $t0, $v1, $t5\n\t.L80180DBC:\n\taddu $a0, $a3, $zero\n\taddu $a3, $a3, $t4\n\taddu $v0, $t0, $t1\n\tsra $t1, $a0, 16\n\tlbu $v1, 0x0($v0)\n\tslti $v0, $t1, 0x4\n\tsb $v1, 0x0($a2)\n\tbnez $v0, .L80180DBC\n\taddiu $a2, $a2, 0x1\n\tsll $v0, $t2, 16\n\tsra $t0, $v0, 16\n\tslti $v1, $t0, 0x8\n\tbnez $v1, .L80180D9C\n\taddu $t1, $zero, $zero\n\taddiu $a0, $gp, %gp_rel(D_8019EE90)\n\tlhu $v0, %gp_rel(D_8019EE9E)($gp)\n\tlhu $v1, %gp_rel(D_8019EEA0)($gp)\n\taddiu $v0, $v0, 0x80\n\taddu $v0, $v0, $t6\n\tsh $v0, %gp_rel(D_8019EE90)($gp)\n\tsh $v1, %gp_rel(D_8019EE92)($gp)\n\tjal func_80194640\n\taddu $a1, $a1, $t3\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80180D64, .-func_80180D64\n"
);
