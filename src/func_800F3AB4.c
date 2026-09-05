#include "common.h"
__asm__(
  ".globl func_800F3AB4\n"
  ".type func_800F3AB4, @function\n"
  "func_800F3AB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a1, (0x7FFC8000 >> 16)\n\tlw $v0, %gp_rel(D_8019ED48)($gp)\n\tandi $a0, $a0, 0xFFFF\n\tlhu $a2, 0x0($v0)\n\taddiu $v0, $zero, 0x7FFF\n\taddu $v1, $a2, $a0\n\tslt $v0, $v0, $v1\n\tbnez $v0, .L800F3ADC\n\tori $a1, $a1, (0x7FFC8000 & 0xFFFF)\n\tlui $a1, (0x800D0000 >> 16)\n\t.L800F3ADC:\n\taddu $v1, $a1, $a2\n\taddu $v1, $v1, $a0\n\tlbu $a0, 0x1($v1)\n\tlbu $a1, 0x0($v1)\n\tlbu $v0, 0x2($v1)\n\tsll $a0, $a0, 8\n\tor $a1, $a1, $a0\n\tsll $v0, $v0, 16\n\tjr $ra\n\tor $v0, $a1, $v0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3AB4, .-func_800F3AB4\n"
);
