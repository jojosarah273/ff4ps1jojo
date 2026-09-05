#include "common.h"
__asm__(
  ".globl func_80189A4C\n"
  ".type func_80189A4C, @function\n"
  "func_80189A4C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tsll $a1, $a1, 16\n\tsra $a1, $a1, 16\n\tlui $v1, %hi(D_801F66E8)\n\taddiu $a3, $v1, %lo(D_801F66E8)\n\tsll $v0, $a1, 2\n\taddu $v0, $v0, $a1\n\tsll $a2, $v0, 2\n\taddu $v1, $a2, $a3\n\tlw $v0, 0x0($v1)\n\tnop\n\tbeqz $v0, .L80189A88\n\taddu $v0, $a3, $a2\n\tsw $a0, 0x4($v0)\n\tjr $ra\n\taddu $v0, $a1, $zero\n\t.L80189A88:\n\tjr $ra\n\taddiu $v0, $zero, -0x1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189A4C, .-func_80189A4C\n"
);
