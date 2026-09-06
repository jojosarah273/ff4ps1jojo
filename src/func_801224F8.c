#include "common.h"
__asm__(
  ".globl func_801224F8\n"
  ".type func_801224F8, @function\n"
  "func_801224F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x8\n\tjr $ra\n\tsh $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801224F8, .-func_801224F8\n"
);
