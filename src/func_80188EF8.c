#include "common.h"
__asm__(
  ".globl func_80188EF8\n"
  ".type func_80188EF8, @function\n"
  "func_80188EF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsb $a0, 0x10($sp)\n\taddiu $a0, $sp, 0x10\n\tsw $ra, 0x18($sp)\n\tsb $a1, 0x11($sp)\n\tsb $a2, 0x12($sp)\n\tjal func_80191C38\n\tsb $a3, 0x13($sp)\n\tlw $ra, 0x18($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188EF8, .-func_80188EF8\n"
);
