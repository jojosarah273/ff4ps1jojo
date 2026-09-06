#include "common.h"
__asm__(
  ".globl func_80146028\n"
  ".type func_80146028, @function\n"
  "func_80146028:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddiu $a0, $zero, 0xF6\n\tlbu $v1, 0x47($s0)\n\taddiu $a1, $zero, 0x7D\n\taddiu $v1, $v1, 0x9\n\tandi $v1, $v1, 0xFF\n\tsll $v1, $v1, 5\n\taddu $v1, $v1, $v0\n\tsb $a0, 0x6D56($v1)\n\taddiu $a0, $zero, 0x30\n\tsb $a1, 0x6D57($v1)\n\tsb $a0, 0x6D58($v1)\n\tsb $a1, 0x6D59($v1)\n\tlui $a0, %hi(D_8019ED48)\n\tlw $a0, %lo(D_8019ED48)($a0)\n\tlw $ra, 0x14($sp)\n\tlhu $v1, 0x0($a0)\n\tlw $s0, 0x10($sp)\n\taddu $v0, $v1, $v0\n\tsb $v1, 0x6D60($v0)\n\tsrl $v1, $v1, 8\n\tsb $v1, 0x6D61($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80146028, .-func_80146028\n"
);
