#include "common.h"
__asm__(
  ".globl func_801949F8\n"
  ".type func_801949F8, @function\n"
  "func_801949F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s2, 0x18($sp)\n\tlui $s2, %hi(D_8019DB56)\n\taddiu $s2, $s2, %lo(D_8019DB56)\n\tsw $ra, 0x1C($sp)\n\tsw $s1, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tlbu $v0, 0x0($s2)\n\tnop\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L80194A44\n\taddu $s1, $a0, $zero\n\tlui $a0, %hi(D_800F39B4)\n\taddiu $a0, $a0, %lo(D_800F39B4)\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s1, $zero\n\t.L80194A44:\n\taddiu $s0, $s1, 0x1C\n\taddu $a0, $s0, $zero\n\tjal func_801953D8\n\taddu $a1, $s1, $zero\n\tlui $a0, (0xFFFFFF >> 16)\n\tori $a0, $a0, (0xFFFFFF & 0xFFFF)\n\taddu $a1, $s0, $zero\n\taddiu $a2, $zero, 0x40\n\tlw $v0, 0x1C($s1)\n\tlui $v1, %hi(D_8019DB4C)\n\tlw $v1, %lo(D_8019DB4C)($v1)\n\tor $v0, $v0, $a0\n\tsw $v0, 0x1C($s1)\n\tlw $a0, 0x18($v1)\n\tlw $v0, 0x8($v1)\n\tnop\n\tjalr $v0\n\taddu $a3, $zero, $zero\n\taddiu $a0, $s2, 0xE\n\taddu $a1, $s1, $zero\n\tjal func_80190088\n\taddiu $a2, $zero, 0x5C\n\taddu $v0, $s1, $zero\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801949F8, .-func_801949F8\n"
);
