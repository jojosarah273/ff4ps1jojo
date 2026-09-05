#include "common.h"
__asm__(
  ".globl func_80138408\n"
  ".type func_80138408, @function\n"
  "func_80138408:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a0, $zero, $zero\n\tlui $v0, %hi(D_801CFD68)\n\taddiu $a3, $v0, %lo(D_801CFD68)\n\taddiu $a2, $zero, 0x30FF\n\taddiu $a1, $a0, 0x1\n\t.L8013841C:\n\taddiu $v1, $zero, 0xF\n\tsll $v0, $a0, 5\n\taddiu $v0, $v0, 0x6821\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a3\n\t.L80138430:\n\tsh $a2, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L80138430\n\taddiu $v0, $v0, 0x2\n\taddu $a0, $a1, $zero\n\tslti $v0, $a0, 0x2\n\tbnez $v0, .L8013841C\n\taddiu $a1, $a0, 0x1\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80138408, .-func_80138408\n"
);
