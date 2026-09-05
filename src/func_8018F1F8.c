#include "common.h"
__asm__(
  ".globl func_8018F1F8\n"
  ".type func_8018F1F8, @function\n"
  "func_8018F1F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_801976E8\n\tsw $s0, 0x10($sp)\n\tjal func_8018F278\n\taddu $s0, $v0, $zero\n\tjal func_80197798\n\taddu $a0, $zero, $zero\n\taddiu $v0, $zero, 0x1\n\tbne $s0, $v0, .L8018F230\n\taddu $v0, $zero, $zero\n\tjal func_801976F8\n\tnop\n\taddu $v0, $zero, $zero\n\t.L8018F230:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F1F8, .-func_8018F1F8\n"
);
