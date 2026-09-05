#include "common.h"
__asm__(
  ".globl func_80191AE8\n"
  ".type func_80191AE8, @function\n"
  "func_80191AE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x38\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a2, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $zero, 0x3\n\tsw $fp, 0x30($sp)\n\taddiu $fp, $zero, 0x1\n\tsw $s3, 0x1C($sp)\n\tandi $s3, $s4, 0xFF\n\tlui $v1, %hi(D_8019BCF4)\n\taddiu $v1, $v1, %lo(D_8019BCF4)\n\tsw $s5, 0x24($sp)\n\tlui $s5, %hi(D_8019B9EC)\n\tlw $s5, %lo(D_8019B9EC)($s5)\n\tsll $v0, $s3, 2\n\tsw $s6, 0x28($sp)\n\taddu $s6, $v0, $v1\n\tsw $s7, 0x2C($sp)\n\taddiu $s7, $zero, -0x1\n\tsw $ra, 0x34($sp)\n\t.L80191B48:\n\tlui $at, %hi(D_8019B9EC)\n\tbeq $s3, $fp, .L80191B7C\n\tsw $zero, %lo(D_8019B9EC)($at)\n\tlui $v0, %hi(D_8019B9F8)\n\tlbu $v0, %lo(D_8019B9F8)($v0)\n\tnop\n\tandi $v0, $v0, 0x10\n\tbeqz $v0, .L80191B7C\n\taddiu $a0, $zero, 0x1\n\taddu $a1, $zero, $zero\n\taddu $a2, $zero, $zero\n\tjal func_80190B44\n\taddu $a3, $zero, $zero\n\t.L80191B7C:\n\tbeqz $s1, .L80191BAC\n\tnop\n\tlw $v0, 0x0($s6)\n\tnop\n\tbeqz $v0, .L80191BAC\n\taddiu $a0, $zero, 0x2\n\taddu $a1, $s1, $zero\n\taddu $a2, $s2, $zero\n\tjal func_80190B44\n\taddu $a3, $zero, $zero\n\tbnez $v0, .L80191BD0\n\tnop\n\t.L80191BAC:\n\tlui $at, %hi(D_8019B9EC)\n\tsw $s5, %lo(D_8019B9EC)($at)\n\tandi $a0, $s4, 0xFF\n\taddu $a1, $s1, $zero\n\taddu $a2, $s2, $zero\n\tjal func_80190B44\n\taddu $a3, $zero, $zero\n\tbeqz $v0, .L80191BE4\n\taddu $v0, $zero, $zero\n\t.L80191BD0:\n\taddiu $s0, $s0, -0x1\n\tbne $s0, $s7, .L80191B48\n\taddiu $v0, $zero, -0x1\n\tlui $at, %hi(D_8019B9EC)\n\tsw $s5, %lo(D_8019B9EC)($at)\n\t.L80191BE4:\n\tbnez $v0, .L80191C00\n\taddu $a0, $zero, $zero\n\tjal func_801905FC\n\taddu $a1, $s2, $zero\n\txori $v0, $v0, 0x2\n\tj .L80191C04\n\tsltiu $v0, $v0, 0x1\n\t.L80191C00:\n\taddu $v0, $zero, $zero\n\t.L80191C04:\n\tlw $ra, 0x34($sp)\n\tlw $fp, 0x30($sp)\n\tlw $s7, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x38\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191AE8, .-func_80191AE8\n"
);
