#include "common.h"
__asm__(
  ".globl func_80124C64\n"
  ".type func_80124C64, @function\n"
  "func_80124C64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\taddiu $a3, $zero, 0x18\n\taddu $a2, $zero, $zero\n\taddu $a1, $v0, $zero\n\tlbu $v1, 0x74($a1)\n\tlbu $a0, 0x73($a1)\n\tlbu $v0, 0x75($a1)\n\tsll $v1, $v1, 8\n\tor $a0, $a0, $v1\n\tsll $v0, $v0, 16\n\tor $a0, $a0, $v0\n\tsll $a0, $a0, 1\n\tsrl $v1, $a0, 24\n\t.L80124CA4:\n\tsll $v0, $a2, 1\n\taddu $v0, $v1, $v0\n\tandi $a2, $v0, 0xFF\n\tsltiu $v1, $a2, 0xA\n\tbnez $v1, .L80124CCC\n\taddiu $v0, $a2, -0xA\n\tandi $a2, $v0, 0xFF\n\tsll $v1, $a0, 1\n\tj .L80124CD0\n\taddiu $a0, $v1, 0x1\n\t.L80124CCC:\n\tsll $a0, $a0, 1\n\t.L80124CD0:\n\tsrl $v0, $a0, 24\n\tandi $v1, $v0, 0x1\n\taddiu $v0, $a3, -0x1\n\tandi $a3, $v0, 0xFFFF\n\tbnez $a3, .L80124CA4\n\tsb $a2, 0x1D($a1)\n\tsra $v0, $a0, 8\n\tlw $ra, 0x10($sp)\n\tsra $v1, $a0, 16\n\tsb $a0, 0x73($a1)\n\tsb $v0, 0x74($a1)\n\tsb $v1, 0x75($a1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124C64, .-func_80124C64\n"
);
