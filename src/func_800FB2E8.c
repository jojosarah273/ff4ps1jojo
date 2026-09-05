#include "common.h"
__asm__(
  ".globl func_800FB2E8\n"
  ".type func_800FB2E8, @function\n"
  "func_800FB2E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800FB3A0\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD1\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x85\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FB328\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1705\n\t.L800FB328:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x85\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2105\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x11\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x2130\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x2131\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FB380\n\tnop\n\tjal func_800FD718\n\tnop\n\t.L800FB380:\n\tjal func_801709E4\n\tnop\n\tjal func_801757A4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FB2E8, .-func_800FB2E8\n"
);
