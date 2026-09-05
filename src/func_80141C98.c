#include "common.h"
__asm__(
  ".globl func_80141C98\n"
  ".type func_80141C98, @function\n"
  "func_80141C98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x4\n\tjal func_800F3A70\n\taddu $s2, $v0, $zero\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\taddu $s3, $v0, $zero\n\tlui $v0, %hi(D_8019ED58)\n\tlw $v0, %lo(D_8019ED58)($v0)\n\taddiu $s4, $zero, 0x3\n\tlhu $s0, 0x0($v0)\n\t.L80141CE4:\n\tjal func_800F6EA8\n\taddu $a0, $zero, $zero\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $s1, 0x0($v0)\n\taddiu $v1, $zero, 0xFF\n\tbne $s1, $v1, .L80141D1C\n\taddu $v0, $s3, $s0\n\tsb $zero, 0x0($v0)\n\taddiu $v1, $s0, 0x1\n\tandi $s0, $v1, 0xFFFF\n\tj .L80141D40\n\taddiu $s1, $zero, 0x22\n\t.L80141D1C:\n\tjal func_800F5410\n\tnop\n\taddu $a0, $s3, $s0\n\taddiu $v1, $s0, 0x1\n\tlbu $v0, 0x6($s2)\n\tandi $s0, $v1, 0xFFFF\n\taddu $v0, $s1, $v0\n\tsb $v0, 0x0($a0)\n\tlbu $s1, 0x7($s2)\n\t.L80141D40:\n\taddu $a0, $s3, $s0\n\taddiu $v0, $s0, 0x1\n\tandi $s0, $v0, 0xFFFF\n\taddiu $v1, $s4, -0x1\n\tandi $s4, $v1, 0xFFFF\n\tsb $s1, 0x0($a0)\n\tlbu $v1, 0x1($s2)\n\tlbu $v0, 0x0($s2)\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddiu $v0, $v0, 0x1\n\tandi $v0, $v0, 0xFFFF\n\tsb $v0, 0x0($s2)\n\tsrl $v0, $v0, 8\n\tbnez $s4, .L80141CE4\n\tsb $v0, 0x1($s2)\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141C98, .-func_80141C98\n"
);
