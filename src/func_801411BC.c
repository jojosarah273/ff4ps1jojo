#include "common.h"
__asm__(
  ".globl func_801411BC\n"
  ".type func_801411BC, @function\n"
  "func_801411BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\taddu $s1, $v0, $zero\n\tlbu $s0, 0x0($v1)\n\taddiu $v0, $zero, 0x40\n\tsb $v0, 0x28($s1)\n\tandi $v1, $s0, 0xF\n\tjal func_80072720\n\tsb $v1, 0x26($s1)\n\tjal func_800F5410\n\tsrl $s0, $s0, 4\n\taddiu $s0, $s0, 0x6\n\tsll $s0, $s0, 1\n\tlbu $v0, 0x2B($s1)\n\tlbu $v1, 0x2A($s1)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\taddu $s0, $s0, $v1\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\taddiu $s0, $s0, 0x6CFD\n\tsh $s0, 0x0($v0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801411BC, .-func_801411BC\n"
);
