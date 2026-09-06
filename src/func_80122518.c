#include "common.h"
__asm__(
  ".globl func_80122518\n"
  ".type func_80122518, @function\n"
  "func_80122518:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x4\n\tjr $ra\n\tsh $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80122518, .-func_80122518\n"
);
