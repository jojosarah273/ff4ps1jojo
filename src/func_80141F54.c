#include "common.h"
__asm__(
  ".globl func_80141F54\n"
  ".type func_80141F54, @function\n"
  "func_80141F54:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8188\n\tori $a0, $zero, 0xF0C2\n\tjal func_8014E75C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141F54, .-func_80141F54\n"
);
