#include "common.h"
__asm__(
  ".globl func_8014B964\n"
  ".type func_8014B964, @function\n"
  "func_8014B964:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF285\n\tjal func_8014B98C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B964, .-func_8014B964\n"
);
