#include "common.h"
__asm__(
  ".globl func_80131B80\n"
  ".type func_80131B80, @function\n"
  "func_80131B80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1B8B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80131BE0\n\tnop\n\tjal func_801321B4\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x7C80\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x3\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80131BE0:\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80131B80, .-func_80131B80\n"
);
