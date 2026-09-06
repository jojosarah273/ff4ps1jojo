#include "common.h"
__asm__(
  ".globl func_801107A0\n"
  ".type func_801107A0, @function\n"
  "func_801107A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80110F2C\n\tnop\n\t.L801107B0:\n\tjal func_80110FA4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801107B0\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x24\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x30\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801107B0\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801107A0, .-func_801107A0\n"
);
