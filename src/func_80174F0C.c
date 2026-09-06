#include "common.h"
__asm__(
  ".globl func_80174F0C\n"
  ".type func_80174F0C, @function\n"
  "func_80174F0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tlbu $v1, 0x19($v0)\n\tlbu $a1, 0x18($v0)\n\tlbu $a0, 0x1B($v0)\n\tsll $v1, $v1, 8\n\tor $a1, $a1, $v1\n\tlbu $v1, 0x1A($v0)\n\tsll $a0, $a0, 8\n\tor $v1, $v1, $a0\n\tmult $a1, $v1\n\tlw $ra, 0x10($sp)\n\tmflo $a1\n\tsrl $v1, $a1, 8\n\tsb $a1, 0x30($v0)\n\tsrl $a1, $a1, 16\n\tsb $v1, 0x31($v0)\n\tsb $a1, 0x32($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80174F0C, .-func_80174F0C\n"
);
