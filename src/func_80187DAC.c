#include "common.h"
__asm__(
  ".globl func_80187DAC\n"
  ".type func_80187DAC, @function\n"
  "func_80187DAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $a0, (0x800D1000 >> 16)\n\tori $a0, $a0, (0x800D1000 & 0xFFFF)\n\taddiu $a2, $zero, 0x7FF\n\t.L80187DC0:\n\tsb $zero, 0x0($a0)\n\taddiu $a2, $a2, -0x1\n\tbgez $a2, .L80187DC0\n\taddiu $a0, $a0, 0x1\n\tjal func_800FF0AC\n\tnop\n\tlui $a1, (0x800D2200 >> 16)\n\tori $a1, $a1, (0x800D2200 & 0xFFFF)\n\tlui $a0, (0x800D1000 >> 16)\n\tori $a0, $a0, (0x800D1000 & 0xFFFF)\n\taddiu $a2, $zero, 0x7FF\n\t.L80187DEC:\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsb $v0, 0x0($a1)\n\tlbu $v1, 0x0($a0)\n\tnop\n\tsb $v1, 0x800($a1)\n\tlbu $v0, 0x0($a0)\n\taddiu $a2, $a2, -0x1\n\tsb $v0, 0x1000($a1)\n\tlbu $v1, 0x0($a0)\n\taddiu $a0, $a0, 0x1\n\tsb $v1, 0x1800($a1)\n\tbgez $a2, .L80187DEC\n\taddiu $a1, $a1, 0x1\n\tlui $a1, (0x800D2200 >> 16)\n\tori $a1, $a1, (0x800D2200 & 0xFFFF)\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x20\n\tsb $zero, 0x6AA($a1)\n\tsb $v0, 0x6AB($a1)\n\tsb $zero, 0xEAA($a1)\n\tsb $v0, 0xEAB($a1)\n\tsb $zero, 0x16AA($a1)\n\tsb $v0, 0x16AB($a1)\n\tsb $zero, 0x1EAA($a1)\n\tsb $v0, 0x1EAB($a1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187DAC, .-func_80187DAC\n"
);
