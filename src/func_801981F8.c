#include "common.h"
__asm__(
  ".globl func_801981F8\n"
  ".type func_801981F8, @function\n"
  "func_801981F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a1, $a0, $0\n\t.word 0x0000410D\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801981F8, .-func_801981F8\n"
);
