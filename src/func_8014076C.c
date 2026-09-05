#include "common.h"
__asm__(
  ".globl func_8014076C\n"
  ".type func_8014076C, @function\n"
  "func_8014076C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x54\n\tjal func_8014D528\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x40\n\t.L8014078C:\n\tjal func_800F9330\n\tnop\n\tjal func_80140558\n\tnop\n\tjal func_8014D43C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8014078C\n\tnop\n\tjal func_8014D414\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_8014D528\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014076C, .-func_8014076C\n"
);
