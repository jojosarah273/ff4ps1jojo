#include "common.h"
__asm__(
  ".globl func_8015A524\n"
  ".type func_8015A524, @function\n"
  "func_8015A524:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8015ABEC\n\tnop\n\tjal func_800F7594\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F7494\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015A554\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAB\n\t.L8015A554:\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A524, .-func_8015A524\n"
);
