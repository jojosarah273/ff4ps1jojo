#include "common.h"
__asm__(
  ".globl func_8018F168\n"
  ".type func_8018F168, @function\n"
  "func_8018F168:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tjal func_80197798\n\tsw $s1, 0x14($sp)\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\tjal func_801976E8\n\tnop\n\tjal func_80197A84\n\taddu $s1, $v0, $zero\n\tbnez $v0, .L8018F1A8\n\tnop\n\taddu $s0, $zero, $zero\n\t.L8018F1A8:\n\tjal func_8018F268\n\taddu $a0, $s0, $zero\n\tjal func_8018F478\n\tnop\n\tjal func_8018F374\n\tnop\n\tjal func_8018F408\n\tnop\n\tjal func_8018F298\n\tnop\n\taddiu $v0, $zero, 0x1\n\tbne $s1, $v0, .L8018F1E4\n\tnop\n\tjal func_801976F8\n\tnop\n\t.L8018F1E4:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F168, .-func_8018F168\n"
);
