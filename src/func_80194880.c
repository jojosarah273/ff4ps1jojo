#include "common.h"
__asm__(
  ".globl func_80194880\n"
  ".type func_80194880, @function\n"
  "func_80194880:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DB56)\n\tlbu $v0, %lo(D_8019DB56)($v0)\n\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L801948C8\n\tsw $ra, 0x18($sp)\n\tlui $a0, %hi(D_800F3988)\n\taddiu $a0, $a0, %lo(D_800F3988)\n\taddu $a1, $s0, $zero\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a2, $s1, $zero\n\t.L801948C8:\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\taddu $a0, $s0, $zero\n\tlw $v0, 0x2C($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s1, $zero\n\tlui $a2, (0xFFFFFF >> 16)\n\tori $a2, $a2, (0xFFFFFF & 0xFFFF)\n\taddu $v0, $s0, $zero\n\tlui $a1, %hi(D_8019DC14)\n\taddiu $a1, $a1, %lo(D_8019DC14)\n\tlui $v1, %hi(D_8019DC00)\n\taddiu $v1, $v1, %lo(D_8019DC00)\n\tand $v1, $v1, $a2\n\tlui $a0, (0x4000000 >> 16)\n\tor $v1, $v1, $a0\n\tsw $v1, 0x0($a1)\n\tand $a1, $a1, $a2\n\tsw $a1, 0x0($v0)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80194880, .-func_80194880\n"
);
