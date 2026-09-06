#include "common.h"
__asm__(
  ".globl func_8016B470\n"
  ".type func_8016B470, @function\n"
  "func_8016B470:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x8\n\tjal func_8016B530\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2\n\tjal func_800F7500\n\taddiu $a0, $zero, 0xC\n\tjal func_8016B530\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x10\n\tjal func_8016B530\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x6\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x14\n\tjal func_8016B530\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x18\n\tjal func_8016B530\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8016B520\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xA\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1C\n\tjal func_8016B530\n\tnop\n\t.L8016B520:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016B470, .-func_8016B470\n"
);
