#include "common.h"
__asm__(
  ".globl func_80189698\n"
  ".type func_80189698, @function\n"
  "func_80189698:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $a0, $zero, -0x1\n\tlw $v0, %gp_rel(D_8019ED28)($gp)\n\taddiu $v1, $zero, 0x3F\n\taddiu $v0, $v0, 0x3F0\n\t.L801896A8:\n\tsh $a0, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L801896A8\n\taddiu $v0, $v0, -0x10\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189698, .-func_80189698\n"
);
