#include "common.h"
__asm__(
  ".globl func_80180414\n"
  ".type func_80180414, @function\n"
  "func_80180414:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $t4, (0x80012800 >> 16)\n\tori $t4, $t4, (0x80012800 & 0xFFFF)\n\taddiu $t6, $zero, 0x7\n\tlui $t5, (0x10000 >> 16)\n\tsw $ra, 0x10($sp)\n\tsh $zero, %gp_rel(D_8019EE9A)($gp)\n\taddu $a0, $zero, $zero\n\taddu $a3, $zero, $zero\n\t.L80180438:\n\taddiu $t3, $a0, 0x1\n\tsll $v0, $a0, 7\n\taddu $t2, $v0, $t4\n\tsubu $v1, $t6, $a0\n\tsll $t1, $v1, 7\n\tlui $t0, (0x10000 >> 16)\n\t.L80180450:\n\taddu $a2, $t0, $zero\n\taddu $t0, $t0, $t5\n\tlh $v1, %gp_rel(D_8019EE9A)($gp)\n\tlw $v0, %gp_rel(D_8019EEA8)($gp)\n\tsll $v1, $v1, 2\n\taddu $a1, $v1, $a3\n\taddu $v0, $t1, $v0\n\taddu $v1, $v1, $v0\n\taddu $v1, $v1, $a3\n\tsra $a3, $a2, 16\n\taddu $a1, $t2, $a1\n\tlbu $a0, 0x0($v1)\n\tslti $v0, $a3, 0x4\n\tbnez $v0, .L80180450\n\tsb $a0, 0x0($a1)\n\tsll $v0, $t3, 16\n\tsra $a0, $v0, 16\n\tslti $v1, $a0, 0x8\n\tbnez $v1, .L80180438\n\taddu $a3, $zero, $zero\n\tlhu $v0, %gp_rel(D_8019EE9A)($gp)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsh $v0, %gp_rel(D_8019EE9A)($gp)\n\tsll $v0, $v0, 16\n\tsra $v0, $v0, 16\n\tslti $v0, $v0, 0x20\n\tbnez $v0, .L80180438\n\taddu $a0, $zero, $zero\n\tlui $a1, (0x80012800 >> 16)\n\taddiu $a0, $gp, %gp_rel(D_8019EE90)\n\tlhu $v0, %gp_rel(D_8019EE9E)($gp)\n\tlh $v1, %gp_rel(D_8019EE9C)($gp)\n\taddiu $v0, $v0, 0x80\n\tsh $v0, %gp_rel(D_8019EE90)($gp)\n\tlhu $v0, %gp_rel(D_8019EEA0)($gp)\n\tsll $v1, $v1, 3\n\taddu $v0, $v0, $v1\n\tsh $v0, %gp_rel(D_8019EE92)($gp)\n\tjal func_80194640\n\tori $a1, $a1, (0x80012800 & 0xFFFF)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80180414, .-func_80180414\n"
);
