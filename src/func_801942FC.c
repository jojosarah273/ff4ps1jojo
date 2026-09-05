#include "common.h"
__asm__(
  ".globl func_801942FC\n"
  ".type func_801942FC, @function\n"
  "func_801942FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\tlui $s1, %hi(D_8019DB56)\n\taddiu $s1, $s1, %lo(D_8019DB56)\n\tsw $ra, 0x18($sp)\n\tsw $s0, 0x10($sp)\n\tlbu $v0, 0x0($s1)\n\tnop\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L80194344\n\taddu $s0, $a0, $zero\n\tlui $a0, %hi(D_800F38E8)\n\taddiu $a0, $a0, %lo(D_800F38E8)\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s0, $zero\n\t.L80194344:\n\tbnez $s0, .L80194358\n\taddiu $a0, $s1, 0x6A\n\taddiu $a1, $zero, -0x1\n\tjal func_80196EF0\n\taddiu $a2, $zero, 0x14\n\t.L80194358:\n\tlui $a0, (0x3000001 >> 16)\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\tbeqz $s0, .L80194370\n\tori $a0, $a0, (0x3000001 & 0xFFFF)\n\tlui $a0, (0x3000000 >> 16)\n\t.L80194370:\n\tlw $v0, 0x10($v0)\n\tnop\n\tjalr $v0\n\tnop\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801942FC, .-func_801942FC\n"
);
