#include "common.h"
__asm__(
  ".globl func_8016C734\n"
  ".type func_8016C734, @function\n"
  "func_8016C734:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x28\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8016C76C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x28\n\t.L8016C76C:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_8016C78C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016C734, .-func_8016C734\n"
);
