#include "common.h"
__asm__(
  ".globl func_801694A4\n"
  ".type func_801694A4, @function\n"
  "func_801694A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddiu $a0, $zero, 0x64\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F6630\n\tsw $s0, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801695FC\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1B\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2107\n\tjal func_800F926C\n\tlui $s2, %hi(D_801CFD68)\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3000\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $s1, 0x0($v0)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\tlui $a0, (0x13F016 >> 16)\n\t.L80169548:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x13F016 & 0xFFFF)\n\tjal func_800F9200\n\taddiu $s0, $s2, %lo(D_801CFD68)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tsll $a0, $s1, 1\n\taddiu $v0, $s1, 0x1\n\tandi $s1, $v0, 0xFFFF\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $a0, $a0, $s0\n\tlbu $v0, 0x0($a1)\n\tlbu $v1, 0x0($a0)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tjal func_800F93DC\n\tsh $v1, 0x0($a0)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF0\n\tsll $a1, $s1, 1\n\tlui $a2, %hi(D_8019ED40)\n\tlw $a2, %lo(D_8019ED40)($a2)\n\taddiu $v1, $s1, 0x1\n\tlbu $v0, 0x0($a2)\n\tandi $s1, $v1, 0xFFFF\n\tsrl $v0, $v0, 4\n\tsb $v0, 0x0($a2)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $a1, $a1, $s0\n\tlbu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tjal func_800F6364\n\tsh $v1, 0x0($a1)\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x320\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80169548\n\tlui $a0, (0x13F016 >> 16)\n\tjal func_800F9448\n\tnop\n\t.L801695FC:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801694A4, .-func_801694A4\n"
);
