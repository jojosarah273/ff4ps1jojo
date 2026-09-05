#include "common.h"
__asm__(
  ".globl func_80117E9C\n"
  ".type func_80117E9C, @function\n"
  "func_80117E9C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019ED30)\n\tlbu $v0, %lo(D_8019ED30)($v0)\n\taddiu $sp, $sp, -0x18\n\tbeqz $v0, .L80117EC0\n\tsw $ra, 0x10($sp)\n\tlui $at, %hi(D_8019ED30)\n\tsb $zero, %lo(D_8019ED30)($at)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAC\n\t.L80117EC0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAC\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80117EF0\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAC\n\tjal func_8011EA5C\n\tnop\n\tj .L80117F00\n\tnop\n\t.L80117EF0:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAC\n\tjal func_8011EA5C\n\tnop\n\t.L80117F00:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80117E9C, .-func_80117E9C\n"
);
