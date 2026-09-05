#include "common.h"
__asm__(
  ".globl func_801976F8\n"
  ".type func_801976F8, @function\n"
  "func_801976F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $a0, $zero, 0x2\n\tsyscall 0 /* handwritten instruction */\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801976F8, .-func_801976F8\n"
);
