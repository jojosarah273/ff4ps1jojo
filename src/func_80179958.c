#include "common.h"
__asm__(
  ".globl func_80179958\n"
  ".type func_80179958, @function\n"
  "func_80179958:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, D_8019EEB0\n\tlh $v0, D_8019EEB0($v0)\n\tnop\n\tbnez $v0, .L801799E8\n\tlui $v1, (0x800D16A3 >> 16)\n\tori $v1, $v1, (0x800D16A3 & 0xFFFF)\n\tlbu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsb $v0, 0x0($v1)\n\tandi $v0, $v0, 0xFF\n\tsltiu $v0, $v0, 0x3C\n\tbnez $v0, .L801799E8\n\tlui $v1, (0x800D16A4 >> 16)\n\tori $v1, $v1, (0x800D16A4 & 0xFFFF)\n\tlbu $v0, 0x0($v1)\n\tlui $at, D_800D16A3\n\tsb $0, D_800D16A3($at)\n\taddiu $v0, $v0, 0x1\n\tsb $v0, 0x0($v1)\n\tandi $v0, $v0, 0xFF\n\tbnez $v0, .L801799E8\n\tlui $v1, (0x800D16A5 >> 16)\n\tori $v1, $v1, (0x800D16A5 & 0xFFFF)\n\tlbu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsb $v0, 0x0($v1)\n\tandi $v0, $v0, 0xFF\n\tbnez $v0, .L801799E8\n\tlui $v1, (0x800D16A6 >> 16)\n\tori $v1, $v1, (0x800D16A6 & 0xFFFF)\n\tlbu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsb $v0, 0x0($v1)\n\t.L801799E8:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80179958, .-func_80179958\n"
);
