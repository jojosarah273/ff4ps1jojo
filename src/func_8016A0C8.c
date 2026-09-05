#include "common.h"
__asm__(
  ".globl func_8016A0C8\n"
  ".type func_8016A0C8, @function\n"
  "func_8016A0C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F926C\n\tsw $s0, 0x10($sp)\n\tjal func_800F9200\n\tlui $s1, %hi(D_801CFD68)\n\tjal func_800F9448\n\tnop\n\tlui $v0, %hi(D_8019ED58)\n\tlw $v0, %lo(D_8019ED58)($v0)\n\tnop\n\tlhu $s0, 0x0($v0)\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L8016A10C:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F922C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L8016A124:\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x2\n\tsll $v1, $s0, 1\n\taddiu $v0, $s0, 0x1\n\tandi $s0, $v0, 0xFFFF\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\taddiu $v0, $s1, %lo(D_801CFD68)\n\tlhu $a1, 0x0($a0)\n\taddu $v1, $v1, $v0\n\tjal func_800F63BC\n\tsh $a1, 0x0($v1)\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016A124\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\tjal func_800F9410\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8016A18C:\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x2\n\tsll $v1, $s0, 1\n\taddiu $v0, $s0, 0x1\n\tandi $s0, $v0, 0xFFFF\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddiu $v0, $s1, %lo(D_801CFD68)\n\tlbu $a1, 0x0($a0)\n\taddu $v1, $v1, $v0\n\tjal func_800F63BC\n\tsh $a1, 0x0($v1)\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016A18C\n\tnop\n\tjal func_800F5DA0\n\taddu $a0, $zero, $zero\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016A10C\n\tnop\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016A0C8, .-func_8016A0C8\n"
);
