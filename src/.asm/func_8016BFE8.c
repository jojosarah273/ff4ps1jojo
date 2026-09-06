#include "common.h"
__asm__(
  ".globl func_8016BFE8\n"
  ".type func_8016BFE8, @function\n"
  "func_8016BFE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8016C040\n\tnop\n\tjal func_8016BF64\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4C\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x51\n\tjal func_80176F60\n\tnop\n\tj .L8016C098\n\tnop\n\t.L8016C040:\n\tjal func_8016BF64\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x52\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x51\n\tjal func_80176F60\n\tnop\n\tjal func_8016BF64\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x51\n\tjal func_80176F60\n\tnop\n\t.L8016C098:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BFE8, .-func_8016BFE8\n"
);
