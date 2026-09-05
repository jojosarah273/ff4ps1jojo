#include "common.h"
__asm__(
  ".globl func_800FDA9C\n"
  ".type func_800FDA9C, @function\n"
  "func_800FDA9C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a2, $a0, 0xFFFF\n\tlui $v0, %hi(D_801CFD68)\n\taddiu $t0, $v0, %lo(D_801CFD68)\n\tlui $v1, (0x800E7C00 >> 16)\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tori $v1, $v1, (0x800E7C00 & 0xFFFF)\n\tlhu $a0, 0x0($v0)\n\taddiu $a3, $zero, 0x7\n\taddu $a1, $a0, $v1\n\t.L800FDAC0:\n\taddiu $a3, $a3, -0x1\n\tsll $a0, $a2, 1\n\taddu $a0, $a0, $t0\n\taddiu $v0, $a2, 0x1\n\tlbu $v1, 0x0($a0)\n\tandi $a2, $v0, 0xFFFF\n\tsh $v1, 0x0($a0)\n\tlbu $v0, 0x0($a1)\n\taddiu $a1, $a1, 0x1\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tbgez $a3, .L800FDAC0\n\tsh $v1, 0x0($a0)\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FDA9C, .-func_800FDA9C\n"
);
