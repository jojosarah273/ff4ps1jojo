#include "common.h"
__asm__(
  ".globl func_8015A56C\n"
  ".type func_8015A56C, @function\n"
  "func_8015A56C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\taddu $a1, $v0, $zero\n\tlbu $v0, 0xAC($a1)\n\tlbu $a0, 0xAB($a1)\n\tsll $v0, $v0, 8\n\tor $a0, $a0, $v0\n\tandi $v1, $a0, 0x8000\n\tbeqz $v1, .L8015A5A0\n\tnop\n\taddu $a0, $zero, $zero\n\t.L8015A5A0:\n\tlw $ra, 0x10($sp)\n\tsrl $v0, $a0, 8\n\tsb $a0, 0xD4($a1)\n\tsb $v0, 0xD5($a1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A56C, .-func_8015A56C\n"
);
