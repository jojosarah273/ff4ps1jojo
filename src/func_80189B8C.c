#include "common.h"
__asm__(
  ".globl func_80189B8C\n"
  ".type func_80189B8C, @function\n"
  "func_80189B8C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x40\n\taddiu $v0, $zero, 0x3C0\n\tsll $a1, $a1, 7\n\tsll $a2, $a2, 7\n\tsw $a0, 0x28($sp)\n\taddiu $a0, $sp, 0x10\n\tsw $ra, 0x38($sp)\n\tsw $v0, 0x10($sp)\n\tsh $a1, 0x20($sp)\n\tsh $a2, 0x22($sp)\n\tjal func_8018ECE8\n\tsw $a3, 0x24($sp)\n\tlw $ra, 0x38($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x40\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189B8C, .-func_80189B8C\n"
);
