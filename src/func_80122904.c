#include "common.h"
__asm__(
  ".globl func_80122904\n"
  ".type func_80122904, @function\n"
  "func_80122904:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE8\n\tjal func_800F71DC\n\tori $a0, $zero, 0x88B5\n\tjal func_80120070\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80122904, .-func_80122904\n"
);
