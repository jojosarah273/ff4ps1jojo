#include "common.h"
__asm__(
  ".globl func_8017835C\n"
  ".type func_8017835C, @function\n"
  "func_8017835C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s3, 0x24($sp)\n\taddiu $s3, $a0, 0x64\n\tsw $s2, 0x20($sp)\n\tlui $s2, %hi(D_801A0A10)\n\tsw $s0, 0x18($sp)\n\taddiu $s0, $s2, %lo(D_801A0A10)\n\tsw $s1, 0x1C($sp)\n\taddiu $s1, $zero, 0x3\n\tsw $ra, 0x28($sp)\n\t.L80178384:\n\taddiu $a0, $zero, 0x2\n\taddu $a1, $zero, $zero\n\taddiu $a2, $zero, 0x200\n\tjal func_801971A8\n\taddu $a3, $zero, $zero\n\tsh $v0, 0x0($s0)\n\tsh $v0, 0x18($s0)\n\tsh $v0, 0x10($s0)\n\tsh $v0, 0x8($s0)\n\taddiu $s1, $s1, -0x1\n\tbgez $s1, .L80178384\n\taddiu $s0, $s0, 0x2\n\taddu $a0, $zero, $zero\n\taddu $a1, $zero, $zero\n\taddiu $a2, $zero, 0x300\n\tjal func_801971A8\n\taddu $a3, $zero, $zero\n\taddu $a0, $s3, $zero\n\taddu $a1, $zero, $zero\n\tlhu $a3, %lo(D_801A0A10)($s2)\n\taddu $a2, $zero, $zero\n\tsh $v0, %gp_rel(D_8019EE10)($gp)\n\tjal func_801973B8\n\tsw $zero, 0x10($sp)\n\taddiu $a0, $s3, 0xC\n\taddu $a1, $zero, $zero\n\taddiu $v0, $s2, %lo(D_801A0A10)\n\tlhu $a3, 0x8($v0)\n\taddu $a2, $zero, $zero\n\tjal func_801973B8\n\tsw $zero, 0x10($sp)\n\tlw $ra, 0x28($sp)\n\tlw $s3, 0x24($sp)\n\tlw $s2, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017835C, .-func_8017835C\n"
);
