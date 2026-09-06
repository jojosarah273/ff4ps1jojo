#include "common.h"
__asm__(
  ".globl func_800F81E8\n"
  ".type func_800F81E8, @function\n"
  "func_800F81E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tlui $v1, 0x1F80\n\tlbu $v1, 0x3C8($v1)\n\tlw $ra, 0x10($sp)\n\tsb $v1, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F81E8, .-func_800F81E8\n"
);
