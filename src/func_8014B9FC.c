#include "common.h"
__asm__(
  ".globl func_8014B9FC\n"
  ".type func_8014B9FC, @function\n"
  "func_8014B9FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3522\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6564\n\tori $a0, $zero, 0xF397\n\tjal func_8014DA2C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B9FC, .-func_8014B9FC\n"
);
