#include "common.h"
__asm__(
  ".globl func_80180F70\n"
  ".type func_80180F70, @function\n"
  "func_80180F70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801DFDE8)\n\tlh $a2, %lo(D_801DFDE8)($v0)\n\taddiu $sp, $sp, -0x38\n\tsw $s5, 0x24($sp)\n\taddu $s5, $zero, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $zero, $zero\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $zero, $zero\n\tsw $s2, 0x18($sp)\n\tandi $s2, $a0, 0xFFFF\n\tsw $ra, 0x34($sp)\n\tsw $fp, 0x30($sp)\n\tsw $s7, 0x2C($sp)\n\tsw $s6, 0x28($sp)\n\tsw $s1, 0x14($sp)\n\tbltz $a2, .L80181088\n\tsw $s0, 0x10($sp)\n\tlui $s6, %hi(D_801CFD68)\n\taddiu $fp, $s6, %lo(D_801CFD68)\n\taddiu $s1, $v0, %lo(D_801DFDE8)\n\tsll $s7, $s2, 1\n\t.L80180FC8:\n\tlh $v0, 0x2($s1)\n\tnop\n\tbgez $v0, .L80180FDC\n\taddu $v1, $v0, $zero\n\taddiu $v1, $v0, 0xF\n\t.L80180FDC:\n\tsra $v0, $v1, 4\n\tbeqz $v0, .L80180FEC\n\taddiu $s0, $zero, 0x1\n\taddu $s0, $v0, $zero\n\t.L80180FEC:\n\tslti $v0, $a2, 0x2000\n\tbeqz $v0, .L8018102C\n\tslti $v0, $a2, 0x5000\n\tbgez $a2, .L80181004\n\taddu $v0, $a2, $zero\n\taddiu $v0, $a2, 0xF\n\t.L80181004:\n\taddu $a0, $s4, $zero\n\taddiu $a1, $s6, %lo(D_801CFD68)\n\tsll $a2, $v0, 12\n\tsra $a2, $a2, 16\n\tjal func_801811F0\n\taddu $a3, $s0, $zero\n\taddu $v0, $s4, $s0\n\tsll $v0, $v0, 16\n\tj .L80181060\n\tsra $s4, $v0, 16\n\t.L8018102C:\n\tbeqz $v0, .L80181060\n\tsubu $v0, $a2, $s2\n\tbgez $v0, .L80181040\n\taddu $a0, $s5, $zero\n\taddiu $v0, $v0, 0xF\n\t.L80181040:\n\taddu $a1, $s7, $fp\n\tsll $a2, $v0, 12\n\tsra $a2, $a2, 16\n\tjal func_801810B8\n\taddu $a3, $s0, $zero\n\taddu $v0, $s5, $s0\n\tsll $v0, $v0, 16\n\tsra $s5, $v0, 16\n\t.L80181060:\n\taddiu $v0, $s3, 0x1\n\tsll $v0, $v0, 16\n\tsra $s3, $v0, 16\n\tslti $v1, $s3, 0x20\n\tbeqz $v1, .L80181088\n\taddiu $s1, $s1, 0x4\n\tlh $a2, 0x0($s1)\n\tnop\n\tbgez $a2, .L80180FC8\n\tnop\n\t.L80181088:\n\tlw $ra, 0x34($sp)\n\tlw $fp, 0x30($sp)\n\tlw $s7, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x38\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80180F70, .-func_80180F70\n"
);
