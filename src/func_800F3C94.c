#include "common.h"
__asm__(
  ".globl func_800F3C94\n"
  ".type func_800F3C94, @function\n"
  "func_800F3C94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a1, (0x7FFC8000 >> 16)\n\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\tnop\n\tlhu $v1, 0x0($v0)\n\taddiu $v0, $zero, 0x7FFF\n\taddu $v1, $v1, $a0\n\tslt $v0, $v0, $v1\n\tbnez $v0, .L800F3CBC\n\tori $a1, $a1, (0x7FFC8000 & 0xFFFF)\n\tlui $a1, (0x800D0000 >> 16)\n\t.L800F3CBC:\n\tjr $ra\n\taddu $v0, $a1, $zero\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3C94, .-func_800F3C94\n"
);
