#include "common.h"
__asm__(
  ".globl func_801968CC\n"
  ".type func_801968CC, @function\n"
  "func_801968CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $ra, 0x18($sp)\n\tjal func_801928E8\n\taddiu $a0, $zero, -0x1\n\tlui $v1, %hi(D_8019DC90)\n\tlw $v1, %lo(D_8019DC90)($v1)\n\tnop\n\tslt $v1, $v1, $v0\n\tbnez $v1, .L80196920\n\tnop\n\tlui $v1, %hi(D_8019DC94)\n\taddiu $v1, $v1, %lo(D_8019DC94)\n\tlw $v0, 0x0($v1)\n\tnop\n\taddu $a0, $v0, $zero\n\taddiu $v0, $v0, 0x1\n\tsw $v0, 0x0($v1)\n\tlui $v0, (0xF0000 >> 16)\n\tslt $v0, $v0, $a0\n\tbeqz $v0, .L801969FC\n\tnop\n\t.L80196920:\n\tlui $a2, %hi(D_8019DC5C)\n\tlw $a2, %lo(D_8019DC5C)($a2)\n\tlui $a0, %hi(D_800F3A00)\n\taddiu $a0, $a0, %lo(D_800F3A00)\n\tlw $v0, 0x0($a2)\n\tlui $a1, %hi(D_8019DC7C)\n\tlw $a1, %lo(D_8019DC7C)($a1)\n\tlui $v0, %hi(D_8019DC60)\n\tlw $v0, %lo(D_8019DC60)($v0)\n\tlui $v1, %hi(D_8019DC80)\n\tlw $v1, %lo(D_8019DC80)($v1)\n\tlw $v0, 0x0($v0)\n\tsubu $a1, $a1, $v1\n\tsw $v0, 0x10($sp)\n\tlui $v0, %hi(D_8019DC68)\n\tlw $v0, %lo(D_8019DC68)($v0)\n\tlw $a2, 0x0($a2)\n\tlw $a3, 0x0($v0)\n\tjal func_8018F0C8\n\tandi $a1, $a1, 0x3F\n\tjal func_80192C74\n\taddu $a0, $zero, $zero\n\tlui $at, %hi(D_8019DC80)\n\tsw $zero, %lo(D_8019DC80)($at)\n\tlui $v1, %hi(D_8019DC80)\n\tlw $v1, %lo(D_8019DC80)($v1)\n\tlui $at, %hi(D_8019DC8C)\n\tsw $v0, %lo(D_8019DC8C)($at)\n\tlui $at, %hi(D_8019DC7C)\n\tsw $v1, %lo(D_8019DC7C)($at)\n\tlui $v1, %hi(D_8019DC68)\n\tlw $v1, %lo(D_8019DC68)($v1)\n\taddiu $v0, $zero, 0x401\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC78)\n\tlw $v1, %lo(D_8019DC78)($v1)\n\tnop\n\tlw $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x800\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\tlui $v0, (0x2000000 >> 16)\n\tsw $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\tlui $v0, (0x1000000 >> 16)\n\tsw $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019DC8C)\n\tlw $a0, %lo(D_8019DC8C)($a0)\n\tjal func_80192C74\n\tnop\n\tj .L80196A00\n\taddiu $v0, $zero, -0x1\n\t.L801969FC:\n\taddu $v0, $zero, $zero\n\t.L80196A00:\n\tlw $ra, 0x18($sp)\n\taddiu $sp, $sp, 0x20\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801968CC, .-func_801968CC\n"
);
