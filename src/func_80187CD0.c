#include "common.h"
__asm__(
  ".globl func_80187CD0\n"
  ".type func_80187CD0, @function\n"
  "func_80187CD0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tsh $a0, %gp_rel(D_8019EDAA)($gp)\n\tbnez $a0, .L80187CEC\n\tlui $v0, %hi(D_801CF568)\n\tlui $v1, (0x800D2200 >> 16)\n\tori $v1, $v1, (0x800D2200 & 0xFFFF)\n\tj .L80187CF8\n\taddiu $a0, $v0, %lo(D_801CF568)\n\t.L80187CEC:\n\taddiu $v1, $v0, %lo(D_801CF568)\n\tlui $a0, (0x800D2200 >> 16)\n\tori $a0, $a0, (0x800D2200 & 0xFFFF)\n\t.L80187CF8:\n\taddiu $a1, $zero, 0x7FF\n\t.L80187CFC:\n\tlbu $v0, 0x0($v1)\n\taddiu $v1, $v1, 0x1\n\taddiu $a1, $a1, -0x1\n\tsb $v0, 0x0($a0)\n\tbgez $a1, .L80187CFC\n\taddiu $a0, $a0, 0x1\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187CD0, .-func_80187CD0\n"
);
