#include "common.h"
__asm__(
  ".globl func_801220A4\n"
  ".type func_801220A4, @function\n"
  "func_801220A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L801220AC:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tjal func_801222C4\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801220AC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801220A4, .-func_801220A4\n"
);
