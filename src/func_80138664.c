#include "common.h"
__asm__(
  ".globl func_80138664\n"
  ".type func_80138664, @function\n"
  "func_80138664:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $v1, $zero, $zero\n\tlui $v0, %hi(D_801CFD68)\n\taddiu $a2, $v0, %lo(D_801CFD68)\n\taddu $a0, $zero, $zero\n\t.L80138674:\n\taddiu $a1, $v1, 0x1\n\tsll $v0, $v1, 5\n\taddiu $v0, $v0, 0x7834\n\tsll $v0, $v0, 1\n\taddu $v1, $v0, $a2\n\t.L80138688:\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $a0, 0x1\n\tandi $v0, $v0, 0xE3FF\n\tsll $v0, $v0, 16\n\tsra $v0, $v0, 16\n\tori $v0, $v0, 0x400\n\tsh $v0, 0x0($v1)\n\tslti $v0, $a0, 0xA\n\tbnez $v0, .L80138688\n\taddiu $v1, $v1, 0x2\n\taddu $v1, $a1, $zero\n\tslti $v0, $v1, 0x8\n\tbnez $v0, .L80138674\n\taddu $a0, $zero, $zero\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80138664, .-func_80138664\n"
);
