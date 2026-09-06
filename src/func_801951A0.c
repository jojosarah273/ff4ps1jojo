#include "common.h"
__asm__(
  ".globl func_801951A0\n"
  ".type func_801951A0, @function\n"
  "func_801951A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\taddiu $v0, $zero, 0x2\n\tsw $ra, 0x14($sp)\n\tsb $v0, 0x3($s0)\n\tlh $a0, 0x0($a1)\n\tlh $a1, 0x2($a1)\n\tjal func_80195798\n\tnop\n\tsw $v0, 0x4($s0)\n\tsw $zero, 0x8($s0)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801951A0, .-func_801951A0\n"
);
