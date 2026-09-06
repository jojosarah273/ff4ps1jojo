#include "common.h"
__asm__(
  ".globl func_800FD9FC\n"
  ".type func_800FD9FC, @function\n"
  "func_800FD9FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L800FDA04:\n\tjal func_80177DAC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FDA04\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FDA04\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FD9FC, .-func_800FD9FC\n"
);
