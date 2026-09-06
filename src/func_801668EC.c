#include "common.h"
__asm__(
  ".globl func_801668EC\n"
  ".type func_801668EC, @function\n"
  "func_801668EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x2000\n\tsw $ra, 0x14($sp)\n\tjal func_800F3B04\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddu $a3, $v0, $zero\n\taddu $v0, $zero, $zero\n\taddiu $t0, $zero, 0x8\n\t.L80166918:\n\taddu $a1, $v0, $a3\n\taddu $a2, $v0, $s0\n\taddiu $v0, $v0, 0x1\n\tlbu $v1, 0x9B5($a2)\n\tlbu $a0, 0x712B($a1)\n\tandi $v0, $v0, 0xFFFF\n\tsb $v1, 0x7123($a1)\n\tbne $v0, $t0, .L80166918\n\tsb $a0, 0x9B5($a2)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801668EC, .-func_801668EC\n"
);
