#include "common.h"
__asm__(
  ".globl func_80195648\n"
  ".type func_80195648, @function\n"
  "func_80195648:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a1, .L80195654\n\tlui $v1, (0xE1000200 >> 16)\n\tori $v1, $v1, (0xE1000200 & 0xFFFF)\n\t.L80195654:\n\tbeqz $a0, .L80195660\n\tandi $v0, $a2, 0x9FF\n\tori $v0, $v0, 0x400\n\t.L80195660:\n\tjr $ra\n\tor $v0, $v1, $v0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80195648, .-func_80195648\n"
);
