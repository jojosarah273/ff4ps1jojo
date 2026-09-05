#include "common.h"
__asm__(
  ".globl func_80197708\n"
  ".type func_80197708, @function\n"
  "func_80197708:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $v0, $sp, $zero\n\tjr $ra\n\taddu $sp, $a0, $zero\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197708, .-func_80197708\n"
);
