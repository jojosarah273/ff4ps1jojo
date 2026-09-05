#include "common.h"
__asm__(
  ".globl func_80197964\n"
  ".type func_80197964, @function\n"
  "func_80197964:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a0, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $a1, $zero\n\tsw $ra, 0x28($sp)\n\tsw $s5, 0x24($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s1, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tlw $v0, 0x0($s2)\n\tnop\n\tbnez $v0, .L801979A4\n\taddu $s5, $a2, $zero\n\taddiu $v0, $zero, 0x1\n\tsw $v0, 0x0($s2)\n\t.L801979A4:\n\tlw $v1, 0x154($zero)\n\tlui $v0, (0xCCCCCCCD >> 16)\n\tori $v0, $v0, (0xCCCCCCCD & 0xFFFF)\n\tmultu $v1, $v0\n\tlw $s0, 0x150($zero)\n\tlui $s3, %hi(D_801FEBB8)\n\tlw $s3, %lo(D_801FEBB8)($s3)\n\tmfhi $a3\n\tsrl $v1, $a3, 6\n\tsll $v0, $v1, 2\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 4\n\taddu $v1, $s0, $v0\n\tsltu $v0,$s0,$v1\n\tbeqz $v0, .L80197A28\n\taddu $a0, $s2, $zero\n\taddu $s1, $v1, $zero\n\t.L801979E8:\n\tlw $a0, 0x0($s0)\n\tnop\n\tbeqz $a0, .L80197A14\n\tnop\n\tlui $a1, %hi(D_801FEBC0)\n\tjal func_8018F078\n\taddiu $a1, $a1, %lo(D_801FEBC0)\n\tbnez $v0, .L80197A14\n\tnop\n\tj .L80197A24\n\tsw $s3, 0x34($s0)\n\t.L80197A14:\n\taddiu $s0, $s0, 0x50\n\tsltu $v0,$s0,$s1\n\tbnez $v0, .L801979E8\n\tnop\n\t.L80197A24:\n\taddu $a0, $s2, $zero\n\t.L80197A28:\n\taddu $a1, $s4, $zero\n\tlui $v0, %hi(D_801FEBB8)\n\tlw $v0, %lo(D_801FEBB8)($v0)\n\tnop\n\tjalr $v0\n\taddu $a2, $s5, $zero\n\tlw $ra, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197964, .-func_80197964\n"
);
