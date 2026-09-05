#include "common.h"
__asm__(
  ".globl func_80180504\n"
  ".type func_80180504, @function\n"
  "func_80180504:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $t4, (0x80013000 >> 16)\n\tori $t4, $t4, (0x80013000 & 0xFFFF)\n\tlui $t5, (0x10000 >> 16)\n\tsw $ra, 0x10($sp)\n\tsh $zero, %gp_rel(D_8019EE9A)($gp)\n\taddu $v0, $zero, $zero\n\taddu $a3, $zero, $zero\n\t.L80180524:\n\taddiu $t3, $v0, 0x1\n\tsll $t0, $v0, 7\n\taddu $t2, $t0, $t4\n\tlui $t1, (0x10000 >> 16)\n\t.L80180534:\n\taddu $a2, $t1, $zero\n\taddu $t1, $t1, $t5\n\tlw $v0, %gp_rel(D_8019EEA8)($gp)\n\tlh $a0, %gp_rel(D_8019EE9A)($gp)\n\taddu $v0, $v0, $t0\n\tsll $a0, $a0, 2\n\taddu $v0, $v0, $a0\n\tsubu $v0, $v0, $a3\n\taddu $a0, $a0, $a3\n\tsra $a3, $a2, 16\n\taddu $a0, $t2, $a0\n\tlbu $a1, 0x3($v0)\n\tslti $v0, $a3, 0x4\n\tandi $v1, $a1, 0xF\n\tsll $v1, $v1, 4\n\tsrl $a1, $a1, 4\n\tor $v1, $v1, $a1\n\tbnez $v0, .L80180534\n\tsb $v1, 0x0($a0)\n\tsll $v0, $t3, 16\n\tsra $v0, $v0, 16\n\tslti $v1, $v0, 0x8\n\tbnez $v1, .L80180524\n\taddu $a3, $zero, $zero\n\tlhu $v0, %gp_rel(D_8019EE9A)($gp)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsh $v0, %gp_rel(D_8019EE9A)($gp)\n\tsll $v0, $v0, 16\n\tsra $v0, $v0, 16\n\tslti $v0, $v0, 0x20\n\tbnez $v0, .L80180524\n\taddu $v0, $zero, $zero\n\tlui $a1, (0x80013000 >> 16)\n\taddiu $a0, $gp, %gp_rel(D_8019EE90)\n\tlhu $v0, %gp_rel(D_8019EE9E)($gp)\n\tlh $v1, %gp_rel(D_8019EE9C)($gp)\n\taddiu $v0, $v0, 0x40\n\tsh $v0, %gp_rel(D_8019EE90)($gp)\n\tlhu $v0, %gp_rel(D_8019EEA0)($gp)\n\tsll $v1, $v1, 3\n\taddu $v0, $v0, $v1\n\tsh $v0, %gp_rel(D_8019EE92)($gp)\n\tjal func_80194640\n\tori $a1, $a1, (0x80013000 & 0xFFFF)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80180504, .-func_80180504\n"
);
