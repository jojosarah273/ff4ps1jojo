#include "common.h"
__asm__(
  ".globl func_8014A888\n"
  ".type func_8014A888, @function\n"
  "func_8014A888:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F8188\n\tori $a0, $zero, 0xF2D0\n\tjal func_80167664\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014A888, .-func_8014A888\n"
);
