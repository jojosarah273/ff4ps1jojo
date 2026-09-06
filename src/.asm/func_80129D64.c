#include "common.h"
__asm__(
  ".globl func_80129D64\n"
  ".type func_80129D64, @function\n"
  "func_80129D64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\t.L80129D74:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x9C\n\tjal func_801266C8\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80129D74\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x9C\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x90\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\t.L80129DC4:\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x90\n\tjal func_801266C8\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80129DC4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129D64, .-func_80129D64\n"
);
