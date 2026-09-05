#include "common.h"
__asm__(
  ".globl func_8015CEA0\n"
  ".type func_8015CEA0, @function\n"
  "func_8015CEA0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015CEE8\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x80\n\t.L8015CEE8:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3939\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_80150C38\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015CEA0, .-func_8015CEA0\n"
);
