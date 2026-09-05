#include "common.h"
__asm__(
  ".globl func_80195798\n"
  ".type func_80195798, @function\n"
  "func_80195798:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a1, $a1, 0x7FF\n\tsll $a1, $a1, 11\n\tandi $v0, $a0, 0x7FF\n\tlui $v1, (0xE5000000 >> 16)\n\tor $v0, $v0, $v1\n\tjr $ra\n\tor $v0, $a1, $v0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80195798, .-func_80195798\n"
);
