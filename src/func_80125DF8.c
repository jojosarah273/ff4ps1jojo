#include "common.h"
__asm__(
  ".globl func_80125DF8\n"
  ".type func_80125DF8, @function\n"
  "func_80125DF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddiu $a0, $zero, 0x145\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F8188\n\tsw $s0, 0x10($sp)\n\tlui $s2, %hi(D_801CFD68)\n\tlui $s1, %hi(D_800D2116)\n\tlh $s1, %lo(D_800D2116)($s1)\n\t.L80125E20:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L80125E28:\n\tjal func_800F6D70\n\taddu $a0, $zero, $zero\n\taddiu $a0, $zero, 0x1\n\taddiu $a1, $s2, %lo(D_801CFD68)\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tsll $s0, $s1, 1\n\tlbu $v1, 0x0($v0)\n\taddu $s0, $s0, $a1\n\tjal func_800F6D70\n\tsh $v1, 0x0($s0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlhu $v1, 0x0($s0)\n\tlbu $v0, 0x0($a0)\n\taddiu $a0, $s1, 0x1\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tsh $v1, 0x0($s0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tsll $a0, $a0, 16\n\tlhu $v0, 0x0($v1)\n\tsra $s1, $a0, 16\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5E48\n\tsh $v0, 0x0($v1)\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80125E28\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L80125EAC:\n\tjal func_800F6D70\n\taddu $a0, $zero, $zero\n\tsll $v1, $s1, 1\n\taddiu $v0, $s1, 0x1\n\tsll $s0, $v0, 16\n\tsra $s1, $s0, 16\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\taddiu $a0, $s2, %lo(D_801CFD68)\n\tlbu $a1, 0x0($v0)\n\taddu $v1, $v1, $a0\n\tjal func_800F63BC\n\tsh $a1, 0x0($v1)\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80125EAC\n\tnop\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x145\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80125E20\n\tsra $v0, $s0, 24\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlui $at, %hi(D_800D2116)\n\tsb $s1, %lo(D_800D2116)($at)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tlui $at, %hi(D_800D2117)\n\tsb $v0, %lo(D_800D2117)($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80125DF8, .-func_80125DF8\n"
);
