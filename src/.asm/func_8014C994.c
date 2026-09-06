#include "common.h"
__asm__(
  ".globl func_8014C994\n"
  ".type func_8014C994, @function\n"
  "func_8014C994:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8014C96C\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF2A0\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_8014B93C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014C994, .-func_8014C994\n"
);
