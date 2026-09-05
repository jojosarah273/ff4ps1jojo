#include "common.h"
__asm__(
  ".globl func_80169228\n"
  ".type func_80169228, @function\n"
  "func_80169228:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x9A\n\t.L80169238:\n\tjal func_8016BB44\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x9A\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x9A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80169238\n\tnop\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x3303\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80169238\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80169228, .-func_80169228\n"
);
