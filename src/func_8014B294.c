#include "common.h"
__asm__(
  ".globl func_8014B294\n"
  ".type func_8014B294, @function\n"
  "func_8014B294:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F71DC\n\tori $a0, $zero, 0xDBE6\n\tjal func_8007411C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F71DC\n\tori $a0, $zero, 0xDBE6\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x600\n\tjal func_800723F0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F71DC\n\tori $a0, $zero, 0xDC26\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x700\n\tjal func_800723F0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B294, .-func_8014B294\n"
);
