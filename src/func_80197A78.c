#include "common.h"
__asm__(
  ".globl func_80197A78\n"
  ".type func_80197A78, @function\n"
  "func_80197A78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_8019DCB4)\n\tjr $ra\n\tsw $a0, %lo(D_8019DCB4)($at)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197A78, .-func_80197A78\n"
);
