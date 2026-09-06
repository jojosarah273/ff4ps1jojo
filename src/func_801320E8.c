#include "common.h"
__asm__(
  ".globl func_801320E8\n"
  ".type func_801320E8, @function\n"
  "func_801320E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x257\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x300\n\tjal func_800F7500\n\tori $a0, $zero, 0xA200\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x7E7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801320E8, .-func_801320E8\n"
);
