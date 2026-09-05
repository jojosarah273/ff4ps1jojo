#include "common.h"
__asm__(
  ".globl func_8019675C\n"
  ".type func_8019675C, @function\n"
  "func_8019675C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tbnez $a0, .L80196810\n\tsw $s0, 0x10($sp)\n\tjal func_80196898\n\tnop\n\tj .L80196794\n\tnop\n\t.L8019677C:\n\tjal func_801963C0\n\tnop\n\tjal func_801968CC\n\tnop\n\tbnez $v0, .L80196888\n\taddiu $v0, $zero, -0x1\n\t.L80196794:\n\tlui $v1, %hi(D_8019DC7C)\n\tlw $v1, %lo(D_8019DC7C)($v1)\n\tlui $v0, %hi(D_8019DC80)\n\tlw $v0, %lo(D_8019DC80)($v0)\n\tnop\n\tbeq $v1, $v0, .L801967C8\n\tnop\n\tj .L8019677C\n\tnop\n\t.L801967B8:\n\tjal func_801968CC\n\tnop\n\tbnez $v0, .L80196888\n\taddiu $v0, $zero, -0x1\n\t.L801967C8:\n\tlui $v0, %hi(D_8019DC68)\n\tlw $v0, %lo(D_8019DC68)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x1000000 >> 16)\n\tand $v0, $v0, $v1\n\tbnez $v0, .L801967B8\n\tnop\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x4000000 >> 16)\n\tand $v0, $v0, $v1\n\tbeqz $v0, .L801967B8\n\taddu $v0, $zero, $zero\n\tj .L80196888\n\tnop\n\t.L80196810:\n\tlui $v0, %hi(D_8019DC7C)\n\tlw $v0, %lo(D_8019DC7C)($v0)\n\tlui $v1, %hi(D_8019DC80)\n\tlw $v1, %lo(D_8019DC80)($v1)\n\tnop\n\tsubu $v0, $v0, $v1\n\tandi $s0, $v0, 0x3F\n\tbeqz $s0, .L8019683C\n\tnop\n\tjal func_801963C0\n\tnop\n\t.L8019683C:\n\tlui $v0, %hi(D_8019DC68)\n\tlw $v0, %lo(D_8019DC68)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x1000000 >> 16)\n\tand $v0, $v0, $v1\n\tbnez $v0, .L8019687C\n\tnop\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x4000000 >> 16)\n\tand $v0, $v0, $v1\n\tbnez $v0, .L80196888\n\taddu $v0, $s0, $zero\n\t.L8019687C:\n\tbnez $s0, .L80196888\n\taddu $v0, $s0, $zero\n\taddiu $v0, $zero, 0x1\n\t.L80196888:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019675C, .-func_8019675C\n"
);
