#include "common.h"
__asm__(
  ".globl func_8016BF64\n"
  ".type func_8016BF64, @function\n"
  "func_8016BF64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tlbu $a0, 0x6D($v0)\n\tlbu $v1, 0x6C($v0)\n\tlbu $a1, 0x7D($v0)\n\tlw $ra, 0x10($sp)\n\tsll $a0, $a0, 8\n\tor $v1, $v1, $a0\n\tlbu $a0, 0x7C($v0)\n\tsll $a1, $a1, 8\n\tor $a0, $a0, $a1\n\taddu $v1, $v1, $a0\n\tlbu $a0, 0x6F($v0)\n\tandi $v1, $v1, 0xFFFF\n\tsb $v1, 0x4B($v0)\n\tsrl $v1, $v1, 8\n\tsb $v1, 0x4C($v0)\n\tlbu $v1, 0x6E($v0)\n\tlbu $a1, 0x7F($v0)\n\tsll $a0, $a0, 8\n\tor $v1, $v1, $a0\n\tlbu $a0, 0x7E($v0)\n\tsll $a1, $a1, 8\n\tor $a0, $a0, $a1\n\taddu $v1, $v1, $a0\n\tandi $v1, $v1, 0xFFFF\n\tsb $v1, 0x4D($v0)\n\tsrl $v1, $v1, 8\n\tsb $v1, 0x4E($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BF64, .-func_8016BF64\n"
);
