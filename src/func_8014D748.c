#include "common.h"
__asm__(
  ".globl func_8014D748\n"
  ".type func_8014D748, @function\n"
  "func_8014D748:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF457\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xF\n\tjal func_800760D0\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF451\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D748, .-func_8014D748\n"
);
