#include "common.h"
__asm__(
  ".globl func_8016C0A8\n"
  ".type func_8016C0A8, @function\n"
  "func_8016C0A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8016C118\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4B\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x72\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x51\n\tjal func_80176F60\n\tnop\n\t.L8016C118:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016C0A8, .-func_8016C0A8\n"
);
