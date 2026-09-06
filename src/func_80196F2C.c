#include "common.h"
__asm__(
  ".globl func_80196F2C\n"
  ".type func_80196F2C, @function\n"
  "func_80196F2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DCA4)\n\tlw $v0, %lo(D_8019DCA4)($v0)\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196F2C, .-func_80196F2C\n"
);
