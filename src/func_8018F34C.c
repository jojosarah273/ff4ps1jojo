#include "common.h"
__asm__(
  ".globl func_8018F34C\n"
  ".type func_8018F34C, @function\n"
  "func_8018F34C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_A000DFAC)\n\taddiu $v0, $v0, %lo(D_A000DFAC)\n\tjr $v0\n\tnop\n\tnop\n\tlui $t0, %hi(D_A000DF80)\n\taddiu $t0, $t0, %lo(D_A000DF80)\n\tjalr $t0\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F34C, .-func_8018F34C\n"
);
