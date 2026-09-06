#include "common.h"
__asm__(
  ".globl func_8014B3FC\n"
  ".type func_8014B3FC, @function\n"
  "func_8014B3FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF285\n\tjal func_80143628\n\tnop\n\tjal func_800953F4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B3FC, .-func_8014B3FC\n"
);
