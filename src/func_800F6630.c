#include "common.h"
__asm__(
  ".globl func_800F6630\n"
  ".type func_800F6630, @function\n"
  "func_800F6630:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\tandi $a0, $a0, 0xFFFF\n\tlbu $v1, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\tlui $at, 0x1F80\n\tsb $v1, 0x3C8($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6630, .-func_800F6630\n"
);
