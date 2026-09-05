#include "common.h"
__asm__(
  ".globl func_8019584C\n"
  ".type func_8019584C, @function\n"
  "func_8019584C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\tlui $a1, %hi(D_8019DC78)\n\tlw $a1, %lo(D_8019DC78)($a1)\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tlw $v0, 0x0($a1)\n\tlui $v1, (0x8000000 >> 16)\n\tor $v0, $v0, $v1\n\tsw $v0, 0x0($a1)\n\tlui $v0, %hi(D_8019DC74)\n\tlw $v0, %lo(D_8019DC74)($v0)\n\tnop\n\tsw $zero, 0x0($v0)\n\tsll $v0, $s0, 2\n\taddiu $v0, $v0, -0x4\n\tlui $v1, %hi(D_8019DC6C)\n\tlw $v1, %lo(D_8019DC6C)($v1)\n\taddu $a0, $a0, $v0\n\tsw $a0, 0x0($v1)\n\tlui $v0, %hi(D_8019DC70)\n\tlw $v0, %lo(D_8019DC70)($v0)\n\tlui $v1, (0x11000002 >> 16)\n\tsw $s0, 0x0($v0)\n\tlui $v0, %hi(D_8019DC74)\n\tlw $v0, %lo(D_8019DC74)($v0)\n\tori $v1, $v1, (0x11000002 & 0xFFFF)\n\tjal func_80196898\n\tsw $v1, 0x0($v0)\n\tlui $v0, %hi(D_8019DC74)\n\tlw $v0, %lo(D_8019DC74)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x1000000 >> 16)\n\tand $v0, $v0, $v1\n\tbeqz $v0, .L80195918\n\taddu $v0, $s0, $zero\n\tlui $s1, (0x1000000 >> 16)\n\t.L801958E8:\n\tjal func_801968CC\n\tnop\n\tbnez $v0, .L80195918\n\taddiu $v0, $zero, -0x1\n\tlui $v0, %hi(D_8019DC74)\n\tlw $v0, %lo(D_8019DC74)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tnop\n\tand $v0, $v0, $s1\n\tbnez $v0, .L801958E8\n\taddu $v0, $s0, $zero\n\t.L80195918:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019584C, .-func_8019584C\n"
);
