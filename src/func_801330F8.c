#include "common.h"
__asm__(
  ".globl func_801330F8\n"
  ".type func_801330F8, @function\n"
  "func_801330F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F926C\n\tsw $s0, 0x10($sp)\n\tjal func_800F9298\n\taddiu $s1, $zero, 0x4600\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1B\n\tjal func_800F9200\n\tlui $s2, %hi(D_801CFD68)\n\tjal func_800F9448\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x15\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x145\n\t.L80133168:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L80133170:\n\tjal func_800F6D70\n\taddu $a0, $zero, $zero\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $s0, 0x0($v0)\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x1\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlbu $v0, 0x0($v1)\n\taddiu $v1, $s2, %lo(D_801CFD68)\n\tsll $v0, $v0, 8\n\tor $s0, $s0, $v0\n\tsll $v0, $s1, 1\n\taddu $v0, $v0, $v1\n\taddiu $v1, $s1, 0x1\n\tsh $s0, 0x0($v0)\n\tlhu $v0, 0x0($a0)\n\tandi $s1, $v1, 0xFFFF\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5E48\n\tsh $v0, 0x0($a0)\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80133170\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L801331EC:\n\tjal func_800F6D70\n\taddu $a0, $zero, $zero\n\tsll $v1, $s1, 1\n\taddiu $v0, $s1, 0x1\n\tandi $s1, $v0, 0xFFFF\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddiu $v0, $s2, %lo(D_801CFD68)\n\tlbu $s0, 0x0($a0)\n\taddu $v1, $v1, $v0\n\tjal func_800F63BC\n\tsh $s0, 0x0($v1)\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801331EC\n\tnop\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x145\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80133168\n\tnop\n\tjal func_80139AFC\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801330F8, .-func_801330F8\n"
);
