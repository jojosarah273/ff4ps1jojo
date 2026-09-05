#include "common.h"
__asm__(
  ".globl func_8013B118\n"
  ".type func_8013B118, @function\n"
  "func_8013B118:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013B148\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA0\n\tj .L8013B150\n\tnop\n\t.L8013B148:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x68\n\t.L8013B150:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013B118, .-func_8013B118\n"
);
