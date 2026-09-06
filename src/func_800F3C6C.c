#include "common.h"
__asm__(
  ".globl func_800F3C6C\n"
  ".type func_800F3C6C, @function\n"
  "func_800F3C6C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, 0x7FFC\n\taddiu $v0, $zero, 0x7FFF\n\tslt $v0, $v0, $a0\n\tbnez $v0, .L800F3C84\n\tori $v1, $v1, 0x8000\n\tlui $v1, 0x800D\n\t.L800F3C84:\n\taddu $v1, $v1, $a0\n\tlw $v0, 0x0($v1)\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3C6C, .-func_800F3C6C\n"
);
