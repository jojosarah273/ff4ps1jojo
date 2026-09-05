#include "common.h"
__asm__(
  ".globl func_80194AB8\n"
  ".type func_80194AB8, @function\n"
  "func_80194AB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a0, $zero\n\tsw $s3, 0x1C($sp)\n\tlui $s3, %hi(D_8019DB56)\n\taddiu $s3, $s3, %lo(D_8019DB56)\n\tsw $ra, 0x20($sp)\n\tsw $s1, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tlbu $v0, 0x0($s3)\n\tnop\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L80194B10\n\taddu $s1, $a1, $zero\n\tlui $a0, %hi(D_800F39CC)\n\taddiu $a0, $a0, %lo(D_800F39CC)\n\taddu $a1, $s2, $zero\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a2, $s1, $zero\n\t.L80194B10:\n\taddiu $s0, $s1, 0x1C\n\taddu $a0, $s0, $zero\n\tjal func_801953D8\n\taddu $a1, $s1, $zero\n\tlui $a0, (0xFFFFFF >> 16)\n\tori $a0, $a0, (0xFFFFFF & 0xFFFF)\n\taddu $a1, $s0, $zero\n\taddiu $a2, $zero, 0x40\n\tlui $v1, (0xFF000000 >> 16)\n\tlw $v0, 0x1C($s1)\n\tand $a0, $s2, $a0\n\tand $v0, $v0, $v1\n\tlui $v1, %hi(D_8019DB4C)\n\tlw $v1, %lo(D_8019DB4C)($v1)\n\tor $v0, $v0, $a0\n\tsw $v0, 0x1C($s1)\n\tlw $a0, 0x18($v1)\n\tlw $v0, 0x8($v1)\n\tnop\n\tjalr $v0\n\taddu $a3, $zero, $zero\n\taddiu $a0, $s3, 0xE\n\taddu $a1, $s1, $zero\n\tjal func_80190088\n\taddiu $a2, $zero, 0x5C\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80194AB8, .-func_80194AB8\n"
);
