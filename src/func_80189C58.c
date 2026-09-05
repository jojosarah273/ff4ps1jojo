#include "common.h"
__asm__(
  ".globl func_80189C58\n"
  ".type func_80189C58, @function\n"
  "func_80189C58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x40\n\tsw $s2, 0x30($sp)\n\taddu $s2, $a0, $zero\n\tsw $s3, 0x34($sp)\n\taddu $s3, $a1, $zero\n\tsll $a2, $a2, 16\n\tsw $s1, 0x2C($sp)\n\tsra $s1, $a2, 16\n\tlh $v0, %gp_rel(D_8019EF98)($gp)\n\tsll $a3, $a3, 16\n\tsw $s0, 0x28($sp)\n\tsra $s0, $a3, 16\n\tbnez $v0, .L80189CA8\n\tsw $ra, 0x38($sp)\n\tjal func_8018C3E8\n\taddiu $a0, $zero, 0x1\n\tlhu $v1, %gp_rel(D_8019EF98)($gp)\n\tnop\n\taddiu $v1, $v1, 0x1\n\tsh $v1, %gp_rel(D_8019EF98)($gp)\n\t.L80189CA8:\n\tlw $v0, 0x50($sp)\n\tlw $v1, 0x54($sp)\n\taddiu $a0, $sp, 0x10\n\tsw $s2, 0x10($sp)\n\tsw $s3, 0x14($sp)\n\tsh $s0, 0x1A($sp)\n\tsh $s1, 0x18($sp)\n\tsw $v0, 0x1C($sp)\n\tjal func_8018BA38\n\tsw $v1, 0x20($sp)\n\tjal func_8018B838\n\taddiu $a0, $zero, 0x1\n\tlw $ra, 0x38($sp)\n\tlw $s3, 0x34($sp)\n\tlw $s2, 0x30($sp)\n\tlw $s1, 0x2C($sp)\n\tlw $s0, 0x28($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x40\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189C58, .-func_80189C58\n"
);
