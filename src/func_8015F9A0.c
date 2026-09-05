#include "common.h"
__asm__(
  ".globl func_8015F9A0\n"
  ".type func_8015F9A0, @function\n"
  "func_8015F9A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38E6\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2683\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2703\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x280\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x8\n\t.L8015F9E0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2003\n\tjal func_8015330C\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015F9E0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015F9A0, .-func_8015F9A0\n"
);
