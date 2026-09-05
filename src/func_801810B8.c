#include "common.h"
__asm__(
  ".globl func_801810B8\n"
  ".type func_801810B8, @function\n"
  "func_801810B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsll $a3, $a3, 16\n\tsw $s4, 0x20($sp)\n\tsra $s4, $a3, 16\n\tsll $a0, $a0, 16\n\tsll $a2, $a2, 16\n\tsra $a2, $a2, 16\n\taddu $v0, $a2, $s4\n\tslti $v0, $v0, 0x300\n\tsw $ra, 0x24($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tsw $a1, %gp_rel(D_8019EEA4)($gp)\n\tbnez $v0, .L8018110C\n\tsra $a0, $a0, 16\n\taddiu $v0, $zero, 0x2FF\n\tsubu $v0, $v0, $a2\n\tsll $v0, $v0, 16\n\tsra $s4, $v0, 16\n\t.L8018110C:\n\tandi $v0, $a2, 0x1F\n\tsll $v0, $v0, 1\n\taddiu $a3, $v0, 0x200\n\tsh $a3, %gp_rel(D_8019EE9E)($gp)\n\tbgez $a2, .L80181128\n\taddu $v1, $a2, $zero\n\taddiu $v1, $a2, 0x3\n\t.L80181128:\n\tsra $v1, $v1, 2\n\taddiu $v0, $zero, -0x8\n\tand $a1, $v1, $v0\n\taddiu $v0, $zero, 0x2\n\taddiu $v1, $zero, 0x8\n\tsll $a0, $a0, 5\n\tsh $v0, %gp_rel(D_8019EE94)($gp)\n\tlui $v0, %hi(D_801E01C8)\n\taddiu $v0, $v0, %lo(D_801E01C8)\n\taddu $a0, $a0, $v0\n\tsh $a1, %gp_rel(D_8019EEA0)($gp)\n\tsh $a3, %gp_rel(D_8019EE90)($gp)\n\tsh $a1, %gp_rel(D_8019EE92)($gp)\n\tsh $v1, %gp_rel(D_8019EE96)($gp)\n\tsw $a0, %gp_rel(D_8019EEA8)($gp)\n\tblez $s4, .L801811D0\n\taddu $s0, $zero, $zero\n\tslti $v0, $a1, 0xB9\n\tbeqz $v0, .L801811D0\n\tlui $s2, (0x10000 >> 16)\n\tsll $s1, $a2, 16\n\tlui $s3, (0x10000 >> 16)\n\t.L80181180:\n\tsra $a0, $s1, 16\n\tjal func_80180BB4\n\taddu $a1, $s0, $zero\n\tjal func_80180E28\n\taddu $a0, $s0, $zero\n\tjal func_80180D64\n\taddu $a0, $s0, $zero\n\tjal func_80180C90\n\taddu $a0, $s0, $zero\n\taddu $v1, $s2, $zero\n\taddu $s2, $s2, $s3\n\tsra $s0, $v1, 16\n\tslt $v0, $s0, $s4\n\tbeqz $v0, .L801811D0\n\taddu $s1, $s1, $s3\n\tlh $v0, %gp_rel(D_8019EE92)($gp)\n\tnop\n\tslti $v0, $v0, 0xB9\n\tbnez $v0, .L80181180\n\tnop\n\t.L801811D0:\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801810B8, .-func_801810B8\n"
);
