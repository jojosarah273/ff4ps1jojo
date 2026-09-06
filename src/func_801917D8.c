#include "common.h"
__asm__(
  ".globl func_801917D8\n"
  ".type func_801917D8, @function\n"
  "func_801917D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B9F4)\n\tlw $v0, %lo(D_8019B9F4)($v0)\n\tlui $at, %hi(D_8019B9F4)\n\tjr $ra\n\tsw $a0, %lo(D_8019B9F4)($at)\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801917D8, .-func_801917D8\n"
);
