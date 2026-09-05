#include "common.h"
__asm__(
  ".globl func_80160A4C\n"
  ".type func_80160A4C, @function\n"
  "func_80160A4C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x11\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80160A9C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x268B\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x200B\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x268C\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x200C\n\t.L80160A9C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80160A4C, .-func_80160A4C\n"
);
