#include "common.h"
__asm__(
  ".globl func_801530E0\n"
  ".type func_801530E0, @function\n"
  "func_801530E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, 0x13\n\tsw $ra, 0x10($sp)\n\tjal func_800F4A7C\n\tori $a0, $a0, 0xFEFE\n\tjal func_800F40E8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801530E0, .-func_801530E0\n"
);
