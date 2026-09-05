#include "common.h"
__asm__(
  ".globl func_80189AE8\n"
  ".type func_80189AE8, @function\n"
  "func_80189AE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x40\n\taddiu $v0, $zero, 0xF\n\tsll $a0, $a0, 7\n\tsll $a1, $a1, 7\n\tsh $a0, 0x14($sp)\n\taddiu $a0, $sp, 0x10\n\tsw $ra, 0x38($sp)\n\tsw $v0, 0x10($sp)\n\tsh $a1, 0x16($sp)\n\tsh $zero, 0x18($sp)\n\tjal func_8018ECE8\n\tsh $zero, 0x1A($sp)\n\tlw $ra, 0x38($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x40\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189AE8, .-func_80189AE8\n"
);
