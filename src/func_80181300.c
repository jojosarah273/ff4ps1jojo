#include "common.h"
__asm__(
  ".globl func_80181300\n"
  ".type func_80181300, @function\n"
  "func_80181300:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $v0, %hi(D_800D2101)\n\tlbu $v0, %lo(D_800D2101)($v0)\n\tlui $v1, %hi(D_8019EE08)\n\tlhu $v1, %lo(D_8019EE08)($v1)\n\tandi $v0, $v0, 0x7\n\tsll $a2, $v0, 13\n\tori $v0, $zero, 0xFFFF\n\tbeq $v1, $v0, .L801813B0\n\tandi $v1, $v1, 0xFE00\n\tlui $v0, %hi(D_8019EE0A)\n\tlhu $v0, %lo(D_8019EE0A)($v0)\n\tlui $at, %hi(D_8019EE08)\n\tsh $v1, %lo(D_8019EE08)($at)\n\tsubu $v0, $v0, $v1\n\taddiu $v0, $v0, -0x1\n\tsll $v0, $v0, 16\n\tsra $v0, $v0, 16\n\tbgez $v0, .L80181358\n\taddu $v1, $v0, $zero\n\taddiu $v1, $v0, 0xFF\n\t.L80181358:\n\tsra $a3, $v1, 8\n\tbnez $a3, .L80181368\n\tsll $a3, $a3, 1\n\taddiu $a3, $zero, 0x2\n\t.L80181368:\n\tlui $v1, %hi(D_8019EE08)\n\tlhu $v1, %lo(D_8019EE08)($v1)\n\tlui $v0, %hi(D_801CFD68)\n\taddiu $v0, $v0, %lo(D_801CFD68)\n\tsubu $a2, $v1, $a2\n\tsll $v1, $v1, 1\n\tbgez $a2, .L8018138C\n\taddu $a0, $v1, $v0\n\taddiu $a2, $a2, 0xFF\n\t.L8018138C:\n\tsra $a2, $a2, 5\n\taddiu $a1, $zero, 0x300\n\tjal func_801813C0\n\tandi $a2, $a2, 0xFFF8\n\tori $v0, $zero, 0xFFFF\n\tlui $at, %hi(D_8019EE0A)\n\tsh $v0, %lo(D_8019EE0A)($at)\n\tlui $at, %hi(D_8019EE08)\n\tsh $v0, %lo(D_8019EE08)($at)\n\t.L801813B0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80181300, .-func_80181300\n"
);
