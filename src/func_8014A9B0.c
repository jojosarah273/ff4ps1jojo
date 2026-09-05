#include "common.h"
__asm__(
  ".globl func_8014A9B0\n"
  ".type func_8014A9B0, @function\n"
  "func_8014A9B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80148E08\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_80148E80\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\t.L8014A9D8:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_80148D58\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014A9D8\n\tnop\n\tjal func_8014C96C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8188\n\tori $a0, $zero, 0xF2A0\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014A9B0, .-func_8014A9B0\n"
);
