#include "common.h"
__asm__(
  ".globl func_801811F0\n"
  ".type func_801811F0, @function\n"
  "func_801811F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsll $a3, $a3, 16\n\tsw $s3, 0x1C($sp)\n\tsra $s3, $a3, 16\n\tsll $a0, $a0, 16\n\tsll $a2, $a2, 16\n\tsra $a3, $a2, 16\n\taddu $v0, $a3, $s3\n\tslti $v0, $v0, 0x200\n\tsw $ra, 0x20($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tsw $a1, %gp_rel(D_8019EEA4)($gp)\n\tbnez $v0, .L80181240\n\tsra $t0, $a0, 16\n\taddiu $v0, $zero, 0x1FF\n\tsubu $v0, $v0, $a3\n\tsll $v0, $v0, 16\n\tsra $s3, $v0, 16\n\t.L80181240:\n\tandi $a0, $a3, 0xF\n\tsll $a0, $a0, 1\n\taddiu $a0, $a0, 0x300\n\tsrl $v0, $a2, 31\n\taddu $v0, $a3, $v0\n\tsra $v0, $v0, 1\n\taddiu $v1, $zero, -0x8\n\tand $a2, $v0, $v1\n\taddiu $v0, $zero, 0x2\n\taddiu $v1, $zero, 0x8\n\tsh $a0, %gp_rel(D_8019EE9E)($gp)\n\tsh $a0, %gp_rel(D_8019EE90)($gp)\n\tsll $a0, $t0, 5\n\tsh $v0, %gp_rel(D_8019EE94)($gp)\n\tlui $v0, %hi(D_801E05C8)\n\taddiu $v0, $v0, %lo(D_801E05C8)\n\taddu $a0, $a0, $v0\n\tsh $a2, %gp_rel(D_8019EEA0)($gp)\n\tsh $a2, %gp_rel(D_8019EE92)($gp)\n\tsh $v1, %gp_rel(D_8019EE96)($gp)\n\tsw $a0, %gp_rel(D_8019EEA8)($gp)\n\tblez $s3, .L801812E4\n\taddu $a1, $zero, $zero\n\tslti $v0, $a2, 0xF9\n\tbeqz $v0, .L801812E4\n\tlui $s1, (0x10000 >> 16)\n\tsll $s0, $a3, 16\n\tlui $s2, (0x10000 >> 16)\n\t.L801812B0:\n\tjal func_80180BB4\n\tsra $a0, $s0, 16\n\taddu $v1, $s1, $zero\n\taddu $s1, $s1, $s2\n\tsra $a1, $v1, 16\n\tslt $v0, $a1, $s3\n\tbeqz $v0, .L801812E4\n\taddu $s0, $s0, $s2\n\tlh $v0, %gp_rel(D_8019EE92)($gp)\n\tnop\n\tslti $v0, $v0, 0xF9\n\tbnez $v0, .L801812B0\n\tnop\n\t.L801812E4:\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801811F0, .-func_801811F0\n"
);
