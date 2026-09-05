#include "common.h"
__asm__(
  ".globl func_8012468C\n"
  ".type func_8012468C, @function\n"
  "func_8012468C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\t.L801246A4:\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x100\n\tjal func_800F89D4\n\taddu $a0, $zero, $zero\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x2\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x4\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x6\n\tjal func_80122334\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801246A4\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012468C, .-func_8012468C\n"
);
