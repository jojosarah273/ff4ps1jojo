#include "common.h"
__asm__(
  ".globl func_80180BB4\n"
  ".type func_80180BB4, @function\n"
  "func_80180BB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x38\n\taddu $a2, $zero, $zero\n\tsll $a0, $a0, 16\n\tsw $s2, 0x20($sp)\n\tsra $s2, $a0, 11\n\tsll $a1, $a1, 16\n\tsw $s4, 0x28($sp)\n\tsra $s4, $a1, 16\n\tsw $s3, 0x24($sp)\n\tsll $s3, $s4, 5\n\tsw $s1, 0x1C($sp)\n\taddu $s1, $s3, $zero\n\tsw $s0, 0x18($sp)\n\tlui $s0, (0x10000 >> 16)\n\tsw $s5, 0x2C($sp)\n\tlui $s5, (0x10000 >> 16)\n\tsw $ra, 0x30($sp)\n\t.L80180BF8:\n\tsll $v0, $a2, 1\n\tlw $v1, %gp_rel(D_8019EEA4)($gp)\n\tlw $t0, %gp_rel(D_8019EEA8)($gp)\n\taddu $v1, $v1, $s2\n\taddu $v1, $v1, $v0\n\tsll $v0, $a2, 2\n\taddu $t0, $t0, $v0\n\tlbu $a0, 0x0($v1)\n\tlbu $a1, 0x1($v1)\n\tlbu $a2, 0x10($v1)\n\tlbu $a3, 0x11($v1)\n\taddu $t0, $t0, $s1\n\tjal func_801824D8\n\tsw $t0, 0x10($sp)\n\taddu $v1, $s0, $zero\n\tsra $a2, $v1, 16\n\tslti $v0, $a2, 0x8\n\tbnez $v0, .L80180BF8\n\taddu $s0, $s0, $s5\n\taddiu $a0, $gp, %gp_rel(D_8019EE90)\n\tsll $v1, $s4, 1\n\tlw $a1, %gp_rel(D_8019EEA8)($gp)\n\tlhu $v0, %gp_rel(D_8019EE9E)($gp)\n\tlhu $a2, %gp_rel(D_8019EEA0)($gp)\n\taddu $v0, $v0, $v1\n\tsh $v0, %gp_rel(D_8019EE90)($gp)\n\tsh $a2, %gp_rel(D_8019EE92)($gp)\n\tjal func_80194640\n\taddu $a1, $a1, $s3\n\tlw $ra, 0x30($sp)\n\tlw $s5, 0x2C($sp)\n\tlw $s4, 0x28($sp)\n\tlw $s3, 0x24($sp)\n\tlw $s2, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x38\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80180BB4, .-func_80180BB4\n"
);
