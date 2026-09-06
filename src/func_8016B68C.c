#include "common.h"
__asm__(
  ".globl func_8016B68C\n"
  ".type func_8016B68C, @function\n"
  "func_8016B68C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x300\n\taddu $a0, $v0, $zero\n\taddu $v1, $zero, $zero\n\taddiu $a2, $zero, 0xF0\n\taddiu $a1, $zero, 0x118\n\t.L8016B6AC:\n\taddu $v0, $a0, $v1\n\taddiu $v1, $v1, 0x1\n\tandi $v1, $v1, 0xFFFF\n\tbne $v1, $a1, .L8016B6AC\n\tsb $a2, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016B68C, .-func_8016B68C\n"
);
