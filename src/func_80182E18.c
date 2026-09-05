#include "common.h"
__asm__(
  ".globl func_80182E18\n"
  ".type func_80182E18, @function\n"
  "func_80182E18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsll $a0, $a1, 16\n\tsw $ra, 0x14($sp)\n\tjal func_80197EE8\n\tsra $a0, $a0, 16\n\tmult $s0, $v0\n\tlw $ra, 0x14($sp)\n\tmflo $s0\n\tsll $s0, $s0, 4\n\tsra $v0, $s0, 16\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80182E18, .-func_80182E18\n"
);
