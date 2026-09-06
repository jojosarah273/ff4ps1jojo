#include "common.h"
__asm__(
  ".globl func_8014B334\n"
  ".type func_8014B334, @function\n"
  "func_8014B334:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\tori $a0, $zero, 0xE380\n\tjal func_8014B294\n\tnop\n\tjal func_80141F84\n\tnop\n\tjal func_800953F4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B334, .-func_8014B334\n"
);
