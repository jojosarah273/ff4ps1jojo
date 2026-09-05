#include "common.h"
__asm__(
  ".globl func_801971A8\n"
  ".type func_801971A8, @function\n"
  "func_801971A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $v0, $a0, 0x3\n\tsll $v0, $v0, 7\n\tandi $a1, $a1, 0x3\n\tsll $a1, $a1, 5\n\tor $v0, $v0, $a1\n\tandi $v1, $a3, 0x100\n\tsra $v1, $v1, 4\n\tor $v0, $v0, $v1\n\tandi $a2, $a2, 0x3FF\n\tsra $a2, $a2, 6\n\tor $v0, $v0, $a2\n\tandi $a3, $a3, 0x200\n\tsll $a3, $a3, 2\n\tjr $ra\n\tor $v0, $v0, $a3\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801971A8, .-func_801971A8\n"
);
