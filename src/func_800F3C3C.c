#include "common.h"
__asm__(
  ".globl func_800F3C3C\n"
  ".type func_800F3C3C, @function\n"
  "func_800F3C3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a1, 0x7FFC\n\tlui $v1, 0x1F80\n\tlhu $v1, 0x3D0($v1)\n\tandi $a0, $a0, 0xFFFF\n\taddiu $v0, $zero, 0x7FFF\n\taddu $v1, $v1, $a0\n\tslt $v0, $v0, $v1\n\tbnez $v0, .L800F3C64\n\tori $a1, $a1, 0x8000\n\tlui $a1, 0x800D\n\t.L800F3C64:\n\tjr $ra\n\taddu $v0, $a1, $v1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3C3C, .-func_800F3C3C\n"
);
