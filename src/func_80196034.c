#include "common.h"
__asm__(
  ".globl func_80196034\n"
  ".type func_80196034, @function\n"
  "func_80196034:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $a2, $a1, -0x1\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\tlui $v0, (0x4000000 >> 16)\n\tbeqz $a1, .L8019606C\n\tsw $v0, 0x0($v1)\n\taddiu $a1, $zero, -0x1\n\t.L80196050:\n\tlw $v1, 0x0($a0)\n\taddiu $a0, $a0, 0x4\n\tlui $v0, %hi(D_8019DC58)\n\tlw $v0, %lo(D_8019DC58)($v0)\n\taddiu $a2, $a2, -0x1\n\tbne $a2, $a1, .L80196050\n\tsw $v1, 0x0($v0)\n\t.L8019606C:\n\tjr $ra\n\taddu $v0, $zero, $zero\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196034, .-func_80196034\n"
);
