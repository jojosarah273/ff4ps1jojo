#include "common.h"
__asm__(
  ".globl func_80196F18\n"
  ".type func_80196F18, @function\n"
  "func_80196F18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DCA4)\n\tlw $v0, %lo(D_8019DCA4)($v0)\n\tlui $at, %hi(D_8019DCA4)\n\tjr $ra\n\tsw $a0, %lo(D_8019DCA4)($at)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196F18, .-func_80196F18\n"
);
