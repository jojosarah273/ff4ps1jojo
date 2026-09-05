#include "common.h"
__asm__(
  ".globl func_801974CC\n"
  ".type func_801974CC, @function\n"
  "func_801974CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tlw $v1, 0x0($s0)\n\taddiu $v0, $zero, 0x10\n\tbeq $v1, $v0, .L80197500\n\taddiu $s0, $s0, 0x4\n\tj .L801975CC\n\taddiu $v0, $zero, -0x1\n\t.L80197500:\n\tlw $v0, 0x0($s0)\n\taddiu $s0, $s0, 0x4\n\tjal func_8019428C\n\tsw $v0, 0x0($s1)\n\taddiu $s2, $zero, 0x2\n\tbne $v0, $s2, .L8019752C\n\tnop\n\tlui $a0, %hi(D_800F3A40)\n\taddiu $a0, $a0, %lo(D_800F3A40)\n\tjal func_8018F0C8\n\taddiu $a1, $zero, 0x10\n\t.L8019752C:\n\tjal func_8019428C\n\tnop\n\tbne $v0, $s2, .L8019754C\n\tnop\n\tlw $a1, 0x0($s1)\n\tlui $a0, %hi(D_800F3A4C)\n\tjal func_8018F0C8\n\taddiu $a0, $a0, %lo(D_800F3A4C)\n\t.L8019754C:\n\tjal func_8019428C\n\tnop\n\tbne $v0, $s2, .L8019756C\n\tnop\n\tlui $a0, %hi(D_800F3A58)\n\taddiu $a0, $a0, %lo(D_800F3A58)\n\tjal func_8018F0C8\n\taddu $a1, $s0, $zero\n\t.L8019756C:\n\tlw $v0, 0x0($s1)\n\tnop\n\tandi $v0, $v0, 0x8\n\tbeqz $v0, .L801975A0\n\taddiu $v0, $s0, 0x4\n\tlw $v1, 0x0($s0)\n\tsw $v0, 0x4($s1)\n\taddiu $v0, $s0, 0xC\n\tsw $v0, 0x8($s1)\n\tsrl $a0, $v1, 2\n\tsll $v0, $a0, 2\n\tj .L801975AC\n\taddu $s0, $s0, $v0\n\t.L801975A0:\n\taddu $a0, $zero, $zero\n\tsw $zero, 0x4($s1)\n\tsw $zero, 0x8($s1)\n\t.L801975AC:\n\tlw $v0, 0x0($s0)\n\taddiu $v1, $s0, 0x4\n\tsw $v1, 0xC($s1)\n\taddiu $v1, $s0, 0xC\n\tsw $v1, 0x10($s1)\n\tsrl $v0, $v0, 2\n\taddiu $v0, $v0, 0x2\n\taddu $v0, $a0, $v0\n\t.L801975CC:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801974CC, .-func_801974CC\n"
);
