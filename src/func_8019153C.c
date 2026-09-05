#include "common.h"
__asm__(
  ".globl func_8019153C\n"
  ".type func_8019153C, @function\n"
  "func_8019153C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019BCB0)\n\tlw $v0, %lo(D_8019BCB0)($v0)\n\taddiu $sp, $sp, -0x28\n\tsw $s1, 0x14($sp)\n\tlui $s1, %hi(D_8019BCC9)\n\taddiu $s1, $s1, %lo(D_8019BCC9)\n\tsw $ra, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s0, 0x10($sp)\n\tlbu $v0, 0x0($v0)\n\taddiu $s3, $s1, -0x1\n\tandi $s2, $v0, 0x3\n\t.L80191570:\n\tjal func_80190098\n\tnop\n\taddu $s0, $v0, $zero\n\tbeqz $s0, .L801915E8\n\tandi $v0, $s0, 0x4\n\tbeqz $v0, .L801915B4\n\tandi $v0, $s0, 0x2\n\tlui $v0, %hi(D_8019B9F0)\n\tlw $v0, %lo(D_8019B9F0)($v0)\n\tnop\n\tbeqz $v0, .L801915B0\n\tnop\n\tlbu $a0, 0x0($s1)\n\tlui $a1, %hi(D_801F8F18)\n\tjalr $v0\n\taddiu $a1, $a1, %lo(D_801F8F18)\n\t.L801915B0:\n\tandi $v0, $s0, 0x2\n\t.L801915B4:\n\tbeqz $v0, .L80191570\n\tnop\n\tlui $v0, %hi(D_8019B9EC)\n\tlw $v0, %lo(D_8019B9EC)($v0)\n\tnop\n\tbeqz $v0, .L80191570\n\tnop\n\tlbu $a0, 0x0($s3)\n\tlui $a1, %hi(D_801F8F10)\n\tjalr $v0\n\taddiu $a1, $a1, %lo(D_801F8F10)\n\tj .L80191570\n\tnop\n\t.L801915E8:\n\tlui $v0, %hi(D_8019BCB0)\n\tlw $v0, %lo(D_8019BCB0)($v0)\n\tnop\n\tsb $s2, 0x0($v0)\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019153C, .-func_8019153C\n"
);
