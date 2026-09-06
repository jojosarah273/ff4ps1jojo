#include "common.h"
__asm__(
  ".globl func_8014D4D4\n"
  ".type func_8014D4D4, @function\n"
  "func_8014D4D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, 0xD\n\tsw $ra, 0x10($sp)\n\tjal func_800F6C68\n\tori $a0, $a0, 0xFFDD\n\tjal func_8014D500\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D4D4, .-func_8014D4D4\n"
);
