#include "common.h"
__asm__(
  ".globl func_80145278\n"
  ".type func_80145278, @function\n"
  "func_80145278:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L80145288:\n\tjal func_80140558\n\tnop\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF321\n\tjal func_800F5D24\n\tori $a0, $zero, 0xF321\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80145288\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80145278, .-func_80145278\n"
);
