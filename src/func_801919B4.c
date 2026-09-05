#include "common.h"
__asm__(
  ".globl func_801919B4\n"
  ".type func_801919B4, @function\n"
  "func_801919B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x38\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $zero, 0x3\n\tsw $fp, 0x30($sp)\n\taddiu $fp, $zero, 0x1\n\tsw $s2, 0x18($sp)\n\tandi $s2, $s3, 0xFF\n\tlui $v1, %hi(D_8019BCF4)\n\taddiu $v1, $v1, %lo(D_8019BCF4)\n\tsw $s4, 0x20($sp)\n\tlui $s4, %hi(D_8019B9EC)\n\tlw $s4, %lo(D_8019B9EC)($s4)\n\tsll $v0, $s2, 2\n\tsw $s5, 0x24($sp)\n\taddu $s5, $v0, $v1\n\tsw $s6, 0x28($sp)\n\taddu $s6, $zero, $zero\n\tsw $s7, 0x2C($sp)\n\taddiu $s7, $zero, -0x1\n\tsw $ra, 0x34($sp)\n\t.L80191A14:\n\tlui $at, %hi(D_8019B9EC)\n\tbeq $s2, $fp, .L80191A48\n\tsw $zero, %lo(D_8019B9EC)($at)\n\tlui $v0, %hi(D_8019B9F8)\n\tlbu $v0, %lo(D_8019B9F8)($v0)\n\tnop\n\tandi $v0, $v0, 0x10\n\tbeqz $v0, .L80191A48\n\taddiu $a0, $zero, 0x1\n\taddu $a1, $zero, $zero\n\taddu $a2, $zero, $zero\n\tjal func_80190B44\n\taddu $a3, $zero, $zero\n\t.L80191A48:\n\tbeqz $s1, .L80191A78\n\tnop\n\tlw $v0, 0x0($s5)\n\tnop\n\tbeqz $v0, .L80191A78\n\taddiu $a0, $zero, 0x2\n\taddu $a1, $s1, $zero\n\taddu $a2, $zero, $zero\n\tjal func_80190B44\n\taddu $a3, $zero, $zero\n\tbnez $v0, .L80191A9C\n\tnop\n\t.L80191A78:\n\tlui $at, %hi(D_8019B9EC)\n\tsw $s4, %lo(D_8019B9EC)($at)\n\tandi $a0, $s3, 0xFF\n\taddu $a1, $s1, $zero\n\taddu $a2, $zero, $zero\n\tjal func_80190B44\n\taddiu $a3, $zero, 0x1\n\tbeqz $v0, .L80191AB8\n\taddiu $v0, $s6, 0x1\n\t.L80191A9C:\n\taddiu $s0, $s0, -0x1\n\tbne $s0, $s7, .L80191A14\n\tnop\n\tlui $at, %hi(D_8019B9EC)\n\tsw $s4, %lo(D_8019B9EC)($at)\n\taddiu $s6, $zero, -0x1\n\taddiu $v0, $s6, 0x1\n\t.L80191AB8:\n\tlw $ra, 0x34($sp)\n\tlw $fp, 0x30($sp)\n\tlw $s7, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x38\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801919B4, .-func_801919B4\n"
);
