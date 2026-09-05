#include "common.h"
__asm__(
  ".globl func_800FC0DC\n"
  ".type func_800FC0DC, @function\n"
  "func_800FC0DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x4\n\tsh $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED58)($gp)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tnop\n\taddiu $v0, $v0, 0x4\n\tjr $ra\n\tsh $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FC0DC, .-func_800FC0DC\n"
);
