#include "common.h"
__asm__(
  ".globl func_80195120\n"
  ".type func_80195120, @function\n"
  "func_80195120:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\taddiu $v0, $zero, 0x2\n\tsw $ra, 0x18($sp)\n\tsb $v0, 0x3($s1)\n\tlh $a0, 0x0($s0)\n\tlh $a1, 0x2($s0)\n\tjal func_80195668\n\tnop\n\tsw $v0, 0x4($s1)\n\tlhu $a0, 0x0($s0)\n\tlhu $v0, 0x4($s0)\n\tlhu $a1, 0x2($s0)\n\taddu $a0, $a0, $v0\n\taddiu $a0, $a0, -0x1\n\tsll $a0, $a0, 16\n\tlhu $v0, 0x6($s0)\n\tsra $a0, $a0, 16\n\taddu $a1, $a1, $v0\n\taddiu $a1, $a1, -0x1\n\tsll $a1, $a1, 16\n\tjal func_80195700\n\tsra $a1, $a1, 16\n\tsw $v0, 0x8($s1)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80195120, .-func_80195120\n"
);
