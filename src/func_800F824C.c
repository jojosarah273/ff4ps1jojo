#include "common.h"
__asm__(
  ".globl func_800F824C\n"
  ".type func_800F824C, @function\n"
  "func_800F824C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\tandi $a0, $a0, 0xFFFF\n\tlui $v1, 0x1F80\n\tlbu $v1, 0x3C8($v1)\n\tlw $ra, 0x10($sp)\n\tsb $v1, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F824C, .-func_800F824C\n"
);
