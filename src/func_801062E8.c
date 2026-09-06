#include "common.h"
__asm__(
  ".globl func_801062E8\n"
  ".type func_801062E8, @function\n"
  "func_801062E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800FCC84\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F71DC\n\tori $a0, $zero, 0xF6C6\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x14\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4304\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801062E8, .-func_801062E8\n"
);
