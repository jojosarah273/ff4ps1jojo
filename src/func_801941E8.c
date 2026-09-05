#include "common.h"
__asm__(
  ".globl func_801941E8\n"
  ".type func_801941E8, @function\n"
  "func_801941E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\tsw $s1, 0x14($sp)\n\tlui $s1, %hi(D_8019DB55)\n\taddiu $s1, $s1, %lo(D_8019DB55)\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tlbu $v0, 0x1($s1)\n\tlbu $s2, 0x0($s1)\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L80194234\n\taddu $s0, $a0, $zero\n\tlui $a0, %hi(D_800F38B8)\n\taddiu $a0, $a0, %lo(D_800F38B8)\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s0, $zero\n\t.L80194234:\n\tlbu $v0, 0x0($s1)\n\tnop\n\tbeq $s0, $v0, .L80194274\n\taddu $v0, $s2, $zero\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\tnop\n\tlw $v0, 0x34($v0)\n\tnop\n\tjalr $v0\n\taddiu $a0, $zero, 0x1\n\taddiu $a0, $zero, 0x2\n\taddu $a1, $zero, $zero\n\tjal func_80192B58\n\tsb $s0, 0x0($s1)\n\taddu $v0, $s2, $zero\n\t.L80194274:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801941E8, .-func_801941E8\n"
);
